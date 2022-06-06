#pragma once

#include <iostream>

class Employee {
private:
	int id;//'primary key'
	std::string firstName;
	std::string lastName;
	std::string idCode;//should be unique key
	std::string birthDate;
	bool deleted;
public:
	void setId(int id);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setIdCode(std::string idcode);
	void setBirthDate(std::string birthDate);
	void setDeleted(bool deleted);
	int getId();
	std::string getFirstName();
	std::string getLastName();
	std::string getIdCode();
	std::string getBirthDate();
	bool isDeleted();

};