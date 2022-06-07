#pragma once
#include "Employee.h"
#include "Utils.h"
#include "Repository.h"
#include "UIState.h"


namespace coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateEmployee
	/// </summary>
	public ref class ManageEmployee : public System::Windows::Forms::Form
	{
	public:
		ManageEmployee(Repository* repo, Employee* toEdit, UIState^ uiState)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterParent;
			this->repo = repo;
			this->toEdit = toEdit;
			this->uiState = uiState;
			populateEditingData();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManageEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		Repository* repo;
		Employee* toEdit;
		bool unsavedChanges = true;
		UIState^ uiState;
	private: System::Windows::Forms::Label^ firstNameLabel;
	private: System::Windows::Forms::TextBox^ firstNameInput;
	protected:

	private: System::Windows::Forms::Label^ lastNameLabel;
	private: System::Windows::Forms::TextBox^ lastNameInput;
	private: System::Windows::Forms::Button^ okButton;

	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Label^ idCodeLabel;
	private: System::Windows::Forms::TextBox^ idCodeInput;
	internal: System::Windows::Forms::DateTimePicker^ birthDatePicker;
	private:


	private: System::Windows::Forms::Label^ birthDateLabel;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->firstNameLabel = (gcnew System::Windows::Forms::Label());
			this->firstNameInput = (gcnew System::Windows::Forms::TextBox());
			this->lastNameLabel = (gcnew System::Windows::Forms::Label());
			this->lastNameInput = (gcnew System::Windows::Forms::TextBox());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->idCodeLabel = (gcnew System::Windows::Forms::Label());
			this->idCodeInput = (gcnew System::Windows::Forms::TextBox());
			this->birthDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->birthDateLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// firstNameLabel
			// 
			this->firstNameLabel->AutoSize = true;
			this->firstNameLabel->Location = System::Drawing::Point(42, 28);
			this->firstNameLabel->Name = L"firstNameLabel";
			this->firstNameLabel->Size = System::Drawing::Size(72, 16);
			this->firstNameLabel->TabIndex = 0;
			this->firstNameLabel->Text = L"First Name";
			// 
			// firstNameInput
			// 
			this->firstNameInput->Location = System::Drawing::Point(141, 25);
			this->firstNameInput->Name = L"firstNameInput";
			this->firstNameInput->Size = System::Drawing::Size(290, 22);
			this->firstNameInput->TabIndex = 1;
			// 
			// lastNameLabel
			// 
			this->lastNameLabel->AutoSize = true;
			this->lastNameLabel->Location = System::Drawing::Point(41, 61);
			this->lastNameLabel->Name = L"lastNameLabel";
			this->lastNameLabel->Size = System::Drawing::Size(72, 16);
			this->lastNameLabel->TabIndex = 2;
			this->lastNameLabel->Text = L"Last Name";
			// 
			// lastNameInput
			// 
			this->lastNameInput->Location = System::Drawing::Point(141, 58);
			this->lastNameInput->Name = L"lastNameInput";
			this->lastNameInput->Size = System::Drawing::Size(290, 22);
			this->lastNameInput->TabIndex = 3;
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(45, 365);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(150, 35);
			this->okButton->TabIndex = 8;
			this->okButton->Text = L"Ok";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &ManageEmployee::okButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Location = System::Drawing::Point(281, 365);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(150, 35);
			this->cancelButton->TabIndex = 9;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &ManageEmployee::cancelButton_Click);
			// 
			// idCodeLabel
			// 
			this->idCodeLabel->AutoSize = true;
			this->idCodeLabel->Location = System::Drawing::Point(41, 95);
			this->idCodeLabel->Name = L"idCodeLabel";
			this->idCodeLabel->Size = System::Drawing::Size(54, 16);
			this->idCodeLabel->TabIndex = 4;
			this->idCodeLabel->Text = L"Id Code";
			// 
			// idCodeInput
			// 
			this->idCodeInput->Location = System::Drawing::Point(141, 92);
			this->idCodeInput->Name = L"idCodeInput";
			this->idCodeInput->Size = System::Drawing::Size(290, 22);
			this->idCodeInput->TabIndex = 5;
			// 
			// birthDatePicker
			// 
			this->birthDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->birthDatePicker->Location = System::Drawing::Point(141, 127);
			this->birthDatePicker->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->birthDatePicker->Name = L"birthDatePicker";
			this->birthDatePicker->Size = System::Drawing::Size(117, 22);
			this->birthDatePicker->TabIndex = 6;
			// 
			// birthDateLabel
			// 
			this->birthDateLabel->AutoSize = true;
			this->birthDateLabel->Location = System::Drawing::Point(41, 132);
			this->birthDateLabel->Name = L"birthDateLabel";
			this->birthDateLabel->Size = System::Drawing::Size(65, 16);
			this->birthDateLabel->TabIndex = 7;
			this->birthDateLabel->Text = L"Birth Date";
			// 
			// CreateEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 453);
			this->Controls->Add(this->birthDateLabel);
			this->Controls->Add(this->birthDatePicker);
			this->Controls->Add(this->idCodeInput);
			this->Controls->Add(this->idCodeLabel);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->lastNameInput);
			this->Controls->Add(this->lastNameLabel);
			this->Controls->Add(this->firstNameInput);
			this->Controls->Add(this->firstNameLabel);
			this->MaximumSize = System::Drawing::Size(500, 500);
			this->MinimumSize = System::Drawing::Size(500, 500);
			this->Name = L"CreateEmployee";
			this->Text = L"Create New Employee";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ManageEmployee::CreateEmployee_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ManageEmployee::Close();
	}
    private: void saveEmployee() {
		Employee employee = toModel();
		try {
			if (this->toEdit == nullptr) {
				//create mode
				repo->createEmployee(employee);
				uiState->setLastOperation(Operation::CREATE);
			} else {
				//edit mode
				repo->updateEmployee(employee);
				uiState->setLastOperation(Operation::UPDATE);
			}
			unsavedChanges = false;
			uiState->setLastModifiedId(employee.getId());
			ManageEmployee::Close();
		}
		catch (std::invalid_argument& error) {
			MessageBox::Show(Utils::toSystemString(error.what()), L"Error saving data", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show(L"Error saving data " + e->Message);
		}
	}
	private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
		saveEmployee();		
	}
	private: Employee toModel() {
		Employee employee;
		if (this->toEdit != nullptr) {
			employee = *toEdit;
		}
		else {
			employee.setId(0);
			employee.setDeleted(false);
		}
		employee.setFirstName(Utils::toStandardString(this->firstNameInput->Text));
		employee.setLastName(Utils::toStandardString(this->lastNameInput->Text));
		employee.setIdCode(Utils::toStandardString(this->idCodeInput->Text));
		employee.setBirthDate(Utils::toStandardString(this->birthDatePicker->Text));
		
		return employee;
	}
	private: System::Void CreateEmployee_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (unsavedChanges && !Utils::isConfirmed(L"Quit without saving?")) {
			e->Cancel = true;
			uiState->setLastOperation(Operation::CANCEL);
		}
	}
	private: void populateEditingData() {
		if (this->toEdit != nullptr) {
			this->Text = L"Edit Employee";
			this->firstNameInput->Text = Utils::toSystemString(toEdit->getFirstName());
			this->lastNameInput->Text = Utils::toSystemString(toEdit->getLastName());
			this->idCodeInput->Text = Utils::toSystemString(toEdit->getIdCode());
			this->birthDatePicker->Text = Utils::toSystemString(toEdit->getBirthDate());
		}
	}
};

}
