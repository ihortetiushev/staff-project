#pragma once
#include <string>

class Entity
{
protected:
	int id;//'primary key'
	std::string createdAt;
	std::string updatedAt;
	bool deleted;
public:
	void setId(int id);
	void setDeleted(bool deleted);
	void setCreatedAt(std::string createdAt);
	void setUpdatedAt(std::string updatedAt);
	int getId();
	bool isDeleted();
	std::string getCreatedAt();
	std::string getUpdatedAt();
};

