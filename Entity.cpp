#include "Entity.h"

void Entity::setId(int id) {
	this->id = id;
}
void Entity::setDeleted(bool deleted) {
	this->deleted = deleted;
}
void Entity::setCreatedAt(std::string createdAt) {
	this->createdAt = createdAt;
}
void Entity::setUpdatedAt(std::string updatedAt) {
	this->updatedAt = updatedAt;
}
int Entity::getId() {
	return id;
}
bool Entity::isDeleted() {
	return deleted;
}
std::string Entity::getCreatedAt() {
	return createdAt;
}
std::string Entity::getUpdatedAt() {
	return updatedAt;
}