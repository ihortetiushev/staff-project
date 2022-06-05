#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^> ^ args)

{
    Repository repo;
	repo.readEmpolyeesFromFile();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	coursework::MainForm form(&repo);
	Application::Run(% form);
}