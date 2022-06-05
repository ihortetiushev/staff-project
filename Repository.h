#pragma once
#include <map>
#include "Employee.h"

const int ID_CODE_MIN_LENGTH = 9;
const int ID_CODE_MAX_LENGTH = 14;
const int ID_CODE_NAME_MIN_LENGTH = 2;
const int ID_CODE_NAME_MAX_LENGTH = 25;

class Repository {
private:
	std::map<std::string, Employee> empolyees;
	void validateEmployeeToCreate(Employee toCreate);
	void validateMandatoryField(std::string fieldName, std::string fieldValue, int minLength, int maxLength);
public:
	Employee createEmployee(Employee toCreate);
};