#include "Repository.h"
#include <string>
#include <stdexcept>


Employee Repository::createEmployee(Employee toCreate) {

	validateEmployeeToCreate(toCreate);

	auto found = this->empolyees.find(toCreate.getIdCode());
	if (found != empolyees.end()) {
		throw std::invalid_argument("Employee with this id code already exists");
	}
	empolyees.insert({ toCreate.getIdCode() ,toCreate });
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