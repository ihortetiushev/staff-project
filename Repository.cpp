#include "Repository.h"
#include <string>
#include <stdexcept>
#include <ostream>
#include <fstream>
#include <vector>


Employee* findByByIdCode(std::map<int, Employee> & data, std::string idCode) {
	Employee* found = NULL;
	for (auto& it : data) {
		if (it.second.getIdCode() == idCode) {
			found = &((it).second);
			break;
		}
	}
	return found;
}

Employee Repository::createEmployee(Employee toCreate) {
	validateEmployee(toCreate);
	if (toCreate.getId() != 0) {
		throw std::invalid_argument("Id must not be passed (should be 0)");
	}
	Employee* existing = findByByIdCode(empolyees, toCreate.getIdCode());
	if (existing!=nullptr) {
		throw std::invalid_argument("Employee with this id code already exists");
	}
	toCreate.setId(empolyees.size() + 1);
	empolyees.insert({ toCreate.getId() ,toCreate });
	saveEmpolyeesToFile(EMPLOYEES_DATA);
	return toCreate;
}

Employee Repository::updateEmployee(Employee toUpdate) {
	if (empolyees.find(toUpdate.getId()) == empolyees.end()) {
		throw std::invalid_argument("No data found for update");
	}
	validateEmployee(toUpdate);
	Employee* existing = findByByIdCode(empolyees, toUpdate.getIdCode());
	if (existing != nullptr && existing->getId() != toUpdate.getId()) {
		throw std::invalid_argument("Another employee with this id code already exists");
	}
	empolyees[toUpdate.getId()] = toUpdate;
	saveEmpolyeesToFile(EMPLOYEES_DATA);
	return toUpdate;
}

Employee Repository::deleteEmployee(int id) {
	auto existing = empolyees.find(id);
	if (existing == empolyees.end()) {
		throw std::invalid_argument("No data found to delete");
	}
	if (existing->second.isDeleted()) {
		throw std::invalid_argument("Employee is deleted already");
	}
	existing->second.setDeleted(true);
	empolyees[id] = existing->second;
	saveEmpolyeesToFile(EMPLOYEES_DATA);
	return  existing->second;
}

void Repository::validateEmployee(Employee employee) {
	validateMandatoryField("Id Code", employee.getIdCode(), ID_CODE_MIN_LENGTH, ID_CODE_MAX_LENGTH);
	validateMandatoryField("First Name", employee.getFirstName(), ID_CODE_NAME_MIN_LENGTH, ID_CODE_NAME_MAX_LENGTH);
	validateMandatoryField("Last Name", employee.getLastName(), ID_CODE_NAME_MIN_LENGTH, ID_CODE_NAME_MAX_LENGTH);
}

void Repository::validateMandatoryField(std::string fieldName, std::string fieldValue, std::size_t minLength, std::size_t maxLength) {
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
		writeIntToFile(it.second.getId(), ofs);
		writeStringToFile(it.second.getIdCode(), ofs);
		writeStringToFile(it.second.getFirstName(), ofs);
		writeStringToFile(it.second.getLastName(), ofs);
		writeStringToFile(it.second.getBirthDate(), ofs);
		writeIntToFile(it.second.isDeleted(), ofs);
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
			//now length of string/ then actual string
			Employee next;
			int id = readIntFromFile(file);
			next.setId(id);
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
			bool isDeleted = readIntFromFile(file);
			next.setDeleted(isDeleted);
			empolyees.insert({ next.getId(), next });
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
Employee Repository::getById(int id) {
	auto found = this->empolyees.find(id);
	if (found == empolyees.end()) {
		throw std::runtime_error("no data found");
	}
	return found->second;
}
std::vector<Employee> Repository::findEmployees(Employee toFind) {
	std::vector<Employee> found;
	for (auto &it : this->empolyees) {
		//bool candidate = false;
		if (toFind.getFirstName().length() != 0 &&
			it.second.getFirstName() != toFind.getFirstName()) {
			continue;
		}
		if (toFind.getLastName().length() != 0 &&
			it.second.getLastName() != toFind.getLastName()) {
			continue;
		}
		found.push_back(it.second);

	}
	return found;
}