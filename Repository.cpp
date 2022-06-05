#include "Repository.h"
#include <string>
#include <stdexcept>
#include <ostream>
#include <fstream>
#include <vector>

Employee Repository::createEmployee(Employee toCreate) {

	validateEmployeeToCreate(toCreate);

	auto found = this->empolyees.find(toCreate.getIdCode());
	if (found != empolyees.end()) {
		throw std::invalid_argument("Employee with this id code already exists");
	}
	empolyees.insert({ toCreate.getIdCode() ,toCreate });
	saveEmpolyeesToFile(EMPLOYEES_DATA);
	return toCreate;
}

void Repository::validateEmployeeToCreate(Employee toCreate) {
	std::string code = toCreate.getIdCode();
	validateMandatoryField("Id Code", toCreate.getIdCode(), ID_CODE_MIN_LENGTH, ID_CODE_MAX_LENGTH);
	validateMandatoryField("First Name", toCreate.getFirstName(), ID_CODE_NAME_MIN_LENGTH, ID_CODE_NAME_MAX_LENGTH);
	validateMandatoryField("Last Name", toCreate.getLastName(), ID_CODE_NAME_MIN_LENGTH, ID_CODE_NAME_MAX_LENGTH);
}

void Repository::validateMandatoryField(std::string fieldName, std::string fieldValue, int minLength, int maxLength) {
	if (fieldValue.empty()) {
		throw std::invalid_argument(fieldName + " must not be empty");
	}
	if (fieldValue.length() < minLength) {
		throw std::invalid_argument(fieldName + " length must be at least " + std::to_string(minLength));
	}
	if (fieldValue.length() > maxLength) {
		throw std::invalid_argument(fieldName + " length must not be longer than " + std::to_string(maxLength));
	}
}

void writeIntToFile(int num, std::ofstream & file) {
	file.write(reinterpret_cast<const char*>(&num), sizeof(num));
}
int readIntFromFile(std::ifstream& file) {
	int num = 0;
	file.read(reinterpret_cast<char*>(&num), sizeof(num));
	return num;
}
std::string readStringFromFile(std::ifstream& file, int length) {
	char* buf = new char[length];
	file.read(buf, length);
	std::string tmpStr = "";
	tmpStr.append(buf, length);
	delete[] buf;
	return tmpStr;
}
void writeStringToFile(std::string str, std::ofstream& file) {
	int lenght = str.size();
	writeIntToFile(lenght, file);
	file.write(str.c_str(), lenght);
}

void Repository::saveEmpolyeesToFile(std::string fileName) {
	std::ofstream ofs(fileName, std::ios::out | std::ofstream::binary);
	int dataSize = empolyees.size();
	writeIntToFile(dataSize, ofs);
	for (auto &it : this->empolyees) {
		writeStringToFile(it.second.getIdCode(), ofs);
		writeStringToFile(it.second.getFirstName(), ofs);
		writeStringToFile(it.second.getLastName(), ofs);
		writeStringToFile(it.second.getBirthDate(), ofs);
	}
	ofs.close();
}


void Repository::readEmpolyeesFromFile() {
	try {
		std::streampos fileSize;
		std::ifstream file(EMPLOYEES_DATA, std::ios::binary);
		//first size of the data
		int dataSize = readIntFromFile(file);
		this->empolyees.clear();
		for (int i = 0; i < dataSize; i++) {
			//now length of idCode
			Employee next;
			int strLength = readIntFromFile(file);
			std::string idCode = readStringFromFile(file, strLength);
			next.setIdCode(idCode);
			strLength = readIntFromFile(file);
			std::string firstName = readStringFromFile(file, strLength);
			next.setFirstName(firstName);
			strLength = readIntFromFile(file);
			std::string lastName = readStringFromFile(file, strLength);
			next.setLastName(lastName);
			strLength = readIntFromFile(file);
			std::string birthDate = readStringFromFile(file, strLength);
			next.setBirthDate(birthDate);
			empolyees.insert({ next.getIdCode(), next });
		}
		file.close();
	}
	catch (...) {
		//was not able to read file. Either missing or corrupted
	}
}
std::vector<Employee> Repository::findAll() {
	std::vector<Employee> all;
	for (auto it : this->empolyees) {
		all.push_back(it.second);
	}
	return all;
}
