#include "UIState.h"

Void UIState::setLastModifiedId(Int32 lastModifiedId) {
	this->lastModifiedId = lastModifiedId;
}
Int32 UIState::getLastModifiedId() {
	return lastModifiedId;
}
Void UIState::setLastOperation(Operation operation) {
	this->lastOperation = operation;
}
Operation UIState::getLastOperation() {
	return this->lastOperation;
}