#pragma once
#include <cstddef>
using namespace System;

public enum Operation : int { CANCEL, CREATE, UPDATE, DELETE };

public ref class UIState
{
private:
	Int32 lastModifiedId = NULL;
	Operation lastOperation;
public:
	Void setLastModifiedId(Int32 setLastModifiedId);
	Int32 getLastModifiedId();
	Void setLastOperation(Operation lastOperation);
	Operation getLastOperation();
};

