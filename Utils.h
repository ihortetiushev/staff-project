#pragma once
#include <iostream>
using System::Runtime::InteropServices::Marshal;


class Utils
{
public:
	static std::string toStandardString(System::String^ string);
	static System::String^ toSystemString(std::string string);
	static bool isConfirmed(System::String^ question);
};