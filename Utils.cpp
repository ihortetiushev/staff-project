#include "Utils.h"

using namespace System;
using namespace System::Windows::Forms;


std::string Utils::toStandardString(System::String^ string)
{
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);

	return returnString;
}

System::String^ Utils::toSystemString(std::string string)
{
	return gcnew String(string.c_str());
}
bool Utils::isConfirmed(System::String^ question) {
	return MessageBox::Show(question, L"Confirm",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes;
}
	
