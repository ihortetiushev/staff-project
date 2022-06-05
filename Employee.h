#pragma once

#include <iostream>

class Employee {
private:
	std::string firstName;
	std::string lastName;
	std::string idCode;//unique key
	std::string birthDate;
public:
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setIdCode(std::string idcode);
	void setBirthDate(std::string birthDate);
	std::string getFirstName();
	std::string getLastName();
	std::string getIdCode();
	std::string getBirthDate();

};