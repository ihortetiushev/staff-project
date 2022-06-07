#include "Employee.h"


void Employee::setFirstName(std::string firstName) {
	this->firstName = firstName;
}
void Employee::setLastName(std::string lastName) {
	this->lastName = lastName;
}
void Employee::setIdCode(std::string idCode) {
	this->idCode = idCode;
}
void Employee::setBirthDate(std::string birthDate) {
	this->birthDate = birthDate;
}
std::string Employee::getFirstName() {
	return firstName;
}
std::string Employee::getLastName() {
	return lastName;
}
std::string Employee::getIdCode() {
	return idCode;
}
std::string Employee::getBirthDate() {
	return birthDate;
}


