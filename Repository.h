#pragma once
#include <map>
#include "Employee.h"
#include <vector>

const int ID_CODE_MIN_LENGTH = 9;
const int ID_CODE_MAX_LENGTH = 14;
const int ID_CODE_NAME_MIN_LENGTH = 2;
const int ID_CODE_NAME_MAX_LENGTH = 25;
const std::string EMPLOYEES_DATA = "empoyees.dat";

class Repository {
private:
	std::map<int, Employee> empolyees;
	void validateEmployee(Employee employee);
	void validateMandatoryField(std::string fieldName, std::string fieldValue, std::size_t minLength, std::size_t maxLength);
	void saveEmpolyeesToFile(std::string fileName);
public:
	Employee createEmployee(Employee toCreate);
	Employee updateEmployee(Employee toUpdate);
	void readEmpolyeesFromFile();
	std::vector<Employee> findAll();
	Employee getById(int id);
};