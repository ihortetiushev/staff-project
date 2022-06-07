#pragma once
#include "ManageEmployeeForm.h"
#include "Repository.h"
#include "Utils.h"
#include "UIState.h"

namespace coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const Int32 ID_INDEX = 0;
	const Int32 FIRST_NAME_INDEX = 1;
	const Int32 LAST_NAME_INDEX = 2;
	const Int32 ID_CODE_INDEX = 3;
	const Int32 BIRTH_DATE_INDEX = 4;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(Repository* repo)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			this->repo = repo;
			this->uiState = gcnew UIState();

			this->birthDatePicker->ShowCheckBox = true;
			this->birthDatePicker->Checked = false;
			this->birthDatePicker->Format = DateTimePickerFormat::Custom;
			this->birthDatePicker->CustomFormat = " ";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		Repository* repo;
		DataTable^ tableActive;
		DataTable^ tableDeleted;
		UIState^ uiState;
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::Button^ clearButton;
	protected:





	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ systemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ staffToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newEmployeeToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ editEmployeeToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridActive;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::TabControl^ tabControl;
	private: System::Windows::Forms::TabPage^ tabPageActive;
	private: System::Windows::Forms::TabPage^ tabPageDeleted;
	private: System::Windows::Forms::DataGridView^ dataGridDeleted;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteEmployeeToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ firstNameInput;
	private: System::Windows::Forms::Label^ firstNameLabel;
	private: System::Windows::Forms::TextBox^ idCodeInput;
	private: System::Windows::Forms::Label^ idCodeLabel;
	private: System::Windows::Forms::Label^ lastNameLabel;
	private: System::Windows::Forms::TextBox^ lastNameInput;
	private: System::Windows::Forms::Label^ searchLabel;
	private: System::Windows::Forms::DateTimePicker^ birthDatePicker;
	private: System::Windows::Forms::Label^ labelBirthDate;
	private: System::Windows::Forms::StatusStrip^ statusStrip;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;





	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->systemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->staffToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newEmployeeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editEmployeeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteEmployeeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->dataGridActive = (gcnew System::Windows::Forms::DataGridView());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->birthDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelBirthDate = (gcnew System::Windows::Forms::Label());
			this->searchLabel = (gcnew System::Windows::Forms::Label());
			this->idCodeInput = (gcnew System::Windows::Forms::TextBox());
			this->idCodeLabel = (gcnew System::Windows::Forms::Label());
			this->lastNameLabel = (gcnew System::Windows::Forms::Label());
			this->lastNameInput = (gcnew System::Windows::Forms::TextBox());
			this->firstNameInput = (gcnew System::Windows::Forms::TextBox());
			this->firstNameLabel = (gcnew System::Windows::Forms::Label());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPageActive = (gcnew System::Windows::Forms::TabPage());
			this->tabPageDeleted = (gcnew System::Windows::Forms::TabPage());
			this->dataGridDeleted = (gcnew System::Windows::Forms::DataGridView());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridActive))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl->SuspendLayout();
			this->tabPageActive->SuspendLayout();
			this->tabPageDeleted->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDeleted))->BeginInit();
			this->statusStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// searchButton
			// 
			this->searchButton->Location = System::Drawing::Point(529, 152);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(95, 32);
			this->searchButton->TabIndex = 1;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &MainForm::searchButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Location = System::Drawing::Point(677, 152);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(95, 32);
			this->clearButton->TabIndex = 2;
			this->clearButton->Text = L"Clear";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MainForm::clearButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->editToolStripMenuItem, this->deleteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 28);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(827, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ShowItemToolTips = true;
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem1.Image")));
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(34, 24);
			this->toolStripMenuItem1->ToolTipText = L"Create New Employee";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem1_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editToolStripMenuItem.Image")));
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(34, 24);
			this->editToolStripMenuItem->ToolTipText = L"View/Edit Employee";
			this->editToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::editToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deleteToolStripMenuItem.Image")));
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(34, 24);
			this->deleteToolStripMenuItem->ToolTipText = L"Delete Employee";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::deleteToolStripMenuItem_Click);
			// 
			// systemToolStripMenuItem
			// 
			this->systemToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->systemToolStripMenuItem->Name = L"systemToolStripMenuItem";
			this->systemToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->systemToolStripMenuItem->Text = L"System";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(116, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// staffToolStripMenuItem
			// 
			this->staffToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newEmployeeToolStripMenuItem,
					this->editEmployeeToolStripMenuItem, this->deleteEmployeeToolStripMenuItem
			});
			this->staffToolStripMenuItem->Name = L"staffToolStripMenuItem";
			this->staffToolStripMenuItem->Size = System::Drawing::Size(54, 24);
			this->staffToolStripMenuItem->Text = L"Staff";
			// 
			// newEmployeeToolStripMenuItem
			// 
			this->newEmployeeToolStripMenuItem->Name = L"newEmployeeToolStripMenuItem";
			this->newEmployeeToolStripMenuItem->Size = System::Drawing::Size(206, 26);
			this->newEmployeeToolStripMenuItem->Text = L"New Employee";
			this->newEmployeeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::newEmployeeToolStripMenuItem_Click);
			// 
			// editEmployeeToolStripMenuItem
			// 
			this->editEmployeeToolStripMenuItem->Name = L"editEmployeeToolStripMenuItem";
			this->editEmployeeToolStripMenuItem->Size = System::Drawing::Size(206, 26);
			this->editEmployeeToolStripMenuItem->Text = L"Edit Employee";
			this->editEmployeeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::editEmployeeToolStripMenuItem_Click);
			// 
			// deleteEmployeeToolStripMenuItem
			// 
			this->deleteEmployeeToolStripMenuItem->Name = L"deleteEmployeeToolStripMenuItem";
			this->deleteEmployeeToolStripMenuItem->Size = System::Drawing::Size(206, 26);
			this->deleteEmployeeToolStripMenuItem->Text = L"Delete Employee";
			this->deleteEmployeeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::deleteEmployeeToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->systemToolStripMenuItem,
					this->staffToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(827, 28);
			this->menuStrip2->TabIndex = 4;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// dataGridActive
			// 
			this->dataGridActive->AllowUserToAddRows = false;
			this->dataGridActive->AllowUserToDeleteRows = false;
			this->dataGridActive->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridActive->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridActive->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridActive->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridActive->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridActive->Location = System::Drawing::Point(3, 3);
			this->dataGridActive->MinimumSize = System::Drawing::Size(300, 70);
			this->dataGridActive->MultiSelect = false;
			this->dataGridActive->Name = L"dataGridActive";
			this->dataGridActive->ReadOnly = true;
			this->dataGridActive->RowHeadersWidth = 51;
			this->dataGridActive->RowTemplate->Height = 24;
			this->dataGridActive->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridActive->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridActive->Size = System::Drawing::Size(809, 294);
			this->dataGridActive->TabIndex = 0;
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 56);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->birthDatePicker);
			this->splitContainer1->Panel1->Controls->Add(this->labelBirthDate);
			this->splitContainer1->Panel1->Controls->Add(this->searchLabel);
			this->splitContainer1->Panel1->Controls->Add(this->idCodeInput);
			this->splitContainer1->Panel1->Controls->Add(this->idCodeLabel);
			this->splitContainer1->Panel1->Controls->Add(this->lastNameLabel);
			this->splitContainer1->Panel1->Controls->Add(this->lastNameInput);
			this->splitContainer1->Panel1->Controls->Add(this->firstNameInput);
			this->splitContainer1->Panel1->Controls->Add(this->firstNameLabel);
			this->splitContainer1->Panel1->Controls->Add(this->searchButton);
			this->splitContainer1->Panel1->Controls->Add(this->clearButton);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl);
			this->splitContainer1->Size = System::Drawing::Size(827, 540);
			this->splitContainer1->SplitterDistance = 203;
			this->splitContainer1->TabIndex = 5;
			// 
			// birthDatePicker
			// 
			this->birthDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->birthDatePicker->Location = System::Drawing::Point(530, 102);
			this->birthDatePicker->Name = L"birthDatePicker";
			this->birthDatePicker->Size = System::Drawing::Size(132, 22);
			this->birthDatePicker->TabIndex = 11;
			this->birthDatePicker->ValueChanged += gcnew System::EventHandler(this, &MainForm::birthDatePicker_ValueChanged);
			// 
			// labelBirthDate
			// 
			this->labelBirthDate->AutoSize = true;
			this->labelBirthDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelBirthDate->Location = System::Drawing::Point(422, 107);
			this->labelBirthDate->Name = L"labelBirthDate";
			this->labelBirthDate->Size = System::Drawing::Size(65, 16);
			this->labelBirthDate->TabIndex = 10;
			this->labelBirthDate->Text = L"Birth Date";
			// 
			// searchLabel
			// 
			this->searchLabel->AutoSize = true;
			this->searchLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchLabel->Location = System::Drawing::Point(32, 24);
			this->searchLabel->Name = L"searchLabel";
			this->searchLabel->Size = System::Drawing::Size(90, 16);
			this->searchLabel->TabIndex = 9;
			this->searchLabel->Text = L"Search Fields";
			// 
			// idCodeInput
			// 
			this->idCodeInput->Location = System::Drawing::Point(132, 104);
			this->idCodeInput->Name = L"idCodeInput";
			this->idCodeInput->Size = System::Drawing::Size(240, 22);
			this->idCodeInput->TabIndex = 8;
			// 
			// idCodeLabel
			// 
			this->idCodeLabel->AutoSize = true;
			this->idCodeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->idCodeLabel->Location = System::Drawing::Point(32, 107);
			this->idCodeLabel->Name = L"idCodeLabel";
			this->idCodeLabel->Size = System::Drawing::Size(54, 16);
			this->idCodeLabel->TabIndex = 7;
			this->idCodeLabel->Text = L"Id Code";
			// 
			// lastNameLabel
			// 
			this->lastNameLabel->AutoSize = true;
			this->lastNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lastNameLabel->Location = System::Drawing::Point(422, 63);
			this->lastNameLabel->Name = L"lastNameLabel";
			this->lastNameLabel->Size = System::Drawing::Size(72, 16);
			this->lastNameLabel->TabIndex = 6;
			this->lastNameLabel->Text = L"Last Name";
			// 
			// lastNameInput
			// 
			this->lastNameInput->Location = System::Drawing::Point(530, 57);
			this->lastNameInput->Name = L"lastNameInput";
			this->lastNameInput->Size = System::Drawing::Size(240, 22);
			this->lastNameInput->TabIndex = 5;
			// 
			// firstNameInput
			// 
			this->firstNameInput->Location = System::Drawing::Point(132, 57);
			this->firstNameInput->Name = L"firstNameInput";
			this->firstNameInput->Size = System::Drawing::Size(240, 22);
			this->firstNameInput->TabIndex = 4;
			// 
			// firstNameLabel
			// 
			this->firstNameLabel->AutoSize = true;
			this->firstNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->firstNameLabel->Location = System::Drawing::Point(32, 63);
			this->firstNameLabel->Name = L"firstNameLabel";
			this->firstNameLabel->Size = System::Drawing::Size(72, 16);
			this->firstNameLabel->TabIndex = 3;
			this->firstNameLabel->Text = L"First Name";
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabPageActive);
			this->tabControl->Controls->Add(this->tabPageDeleted);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->Location = System::Drawing::Point(0, 0);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(823, 329);
			this->tabControl->TabIndex = 0;
			// 
			// tabPageActive
			// 
			this->tabPageActive->Controls->Add(this->dataGridActive);
			this->tabPageActive->Location = System::Drawing::Point(4, 25);
			this->tabPageActive->Name = L"tabPageActive";
			this->tabPageActive->Padding = System::Windows::Forms::Padding(3);
			this->tabPageActive->Size = System::Drawing::Size(815, 300);
			this->tabPageActive->TabIndex = 0;
			this->tabPageActive->Text = L"Active";
			this->tabPageActive->UseVisualStyleBackColor = true;
			// 
			// tabPageDeleted
			// 
			this->tabPageDeleted->Controls->Add(this->dataGridDeleted);
			this->tabPageDeleted->Location = System::Drawing::Point(4, 25);
			this->tabPageDeleted->Name = L"tabPageDeleted";
			this->tabPageDeleted->Padding = System::Windows::Forms::Padding(3);
			this->tabPageDeleted->Size = System::Drawing::Size(815, 297);
			this->tabPageDeleted->TabIndex = 1;
			this->tabPageDeleted->Text = L"Deleted";
			this->tabPageDeleted->UseVisualStyleBackColor = true;
			// 
			// dataGridDeleted
			// 
			this->dataGridDeleted->AllowUserToAddRows = false;
			this->dataGridDeleted->AllowUserToDeleteRows = false;
			this->dataGridDeleted->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridDeleted->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridDeleted->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridDeleted->Location = System::Drawing::Point(3, 3);
			this->dataGridDeleted->MultiSelect = false;
			this->dataGridDeleted->Name = L"dataGridDeleted";
			this->dataGridDeleted->ReadOnly = true;
			this->dataGridDeleted->RowHeadersWidth = 51;
			this->dataGridDeleted->RowTemplate->Height = 24;
			this->dataGridDeleted->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridDeleted->Size = System::Drawing::Size(809, 291);
			this->dataGridDeleted->TabIndex = 0;
			// 
			// statusStrip
			// 
			this->statusStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip->Location = System::Drawing::Point(0, 596);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(827, 22);
			this->statusStrip->TabIndex = 6;
			this->statusStrip->Text = L"statusStrip";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 16);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 618);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->statusStrip);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Staff";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridActive))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl->ResumeLayout(false);
			this->tabPageActive->ResumeLayout(false);
			this->tabPageDeleted->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridDeleted))->EndInit();
			this->statusStrip->ResumeLayout(false);
			this->statusStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		tableActive = createTable(dataGridActive);
		tableDeleted = createTable(dataGridDeleted);
		Employee mask;
		mask.setFirstName(Utils::toStandardString(this->firstNameInput->Text));
		mask.setLastName(Utils::toStandardString(this->lastNameInput->Text));
		mask.setIdCode(Utils::toStandardString(this->idCodeInput->Text));
		if (this->birthDatePicker->Checked) {
			mask.setBirthDate(Utils::toStandardString(this->birthDatePicker->Text));
		}
		std::vector<Employee> allRecords = this->repo->findEmployees(mask);
		int activeCount = 0;
		int deletedCount = 0;
		for (auto& emp : allRecords) {
			array<System::Object^>^ rowData = toRow(emp);
			if (emp.isDeleted()) {
				tableDeleted->LoadDataRow(rowData, true);
				deletedCount++;
			}
			else {
				tableActive->LoadDataRow(rowData, true);
				activeCount++;
			}
		}
		dataGridActive->Columns[ID_INDEX]->Visible = false;
		dataGridDeleted->Columns[ID_INDEX]->Visible = false;
		setStatusText(allRecords.size(), activeCount, deletedCount);
	}
	private:  void setStatusText(int totalCount, int activeCount, int deletedCount)
	{
		String^ totalText = "Total records: " + totalCount;
		String^ activeText = " Active: " + activeCount;
		String^ deletedText = " Deleted: " + deletedCount;
		Color color;
		if (totalCount == 0) {
			color = Color::DarkRed;
		}
		else {
			color = Color::DarkBlue;
		}
		statusStrip->ForeColor = color;
		statusStrip->Items[0]->Text = totalText + activeText + deletedText;
	}
	private: array<System::Object^>^ toRow(Employee emp) {
		array<System::Object^>^ values = gcnew array< System::Object^ >(5);
		values[ID_INDEX] = emp.getId();
		values[FIRST_NAME_INDEX] = Utils::toSystemString(emp.getFirstName());
		values[LAST_NAME_INDEX] = Utils::toSystemString(emp.getLastName());
		values[ID_CODE_INDEX] = Utils::toSystemString(emp.getIdCode());
		values[BIRTH_DATE_INDEX] = Utils::toSystemString(emp.getBirthDate());
		return values;
	}
	private: DataTable^ createTable(System::Windows::Forms::DataGridView^ dataGrid) {
		DataTable^ table = gcnew DataTable();
		table->Columns->Add(gcnew DataColumn("Id", Type::GetType("System.Int32")));
		table->Columns->Add(gcnew DataColumn("First Name", Type::GetType("System.String")));
		table->Columns->Add(gcnew DataColumn("Last Name", Type::GetType("System.String")));
		table->Columns->Add(gcnew DataColumn("Id Code", Type::GetType("System.String")));
		table->Columns->Add(gcnew DataColumn("Birth Date", Type::GetType("System.String")));

		dataGrid->DataSource = table;
		dataGrid->Columns[ID_INDEX]->Visible = false;//first column - id invisible
		dataGrid->Columns[FIRST_NAME_INDEX]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		dataGrid->Columns[LAST_NAME_INDEX]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		dataGrid->Columns[ID_CODE_INDEX]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		dataGrid->Columns[BIRTH_DATE_INDEX]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		return table;
	}
	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->firstNameInput->Text = "";
		this->lastNameInput->Text = "";
		this->idCodeInput->Text = "";
		this->birthDatePicker->Text = "";
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void newEmployeeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		createEmployee();
	}
	private: void createEmployee() {
		UIState^ state = gcnew UIState();
		ManageEmployee manageEmployeeDlg(this->repo, nullptr, state);
		manageEmployeeDlg.ShowDialog();
		refreshGridData(state);
	}
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (!Utils::isConfirmed(L"Exit application?")) {
			e->Cancel = true;
		}
	}
	private: System::Void editEmployeeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		viewEditEmployee();
	}
	private: void viewEditEmployee() {
		DataGridView^ activeGrid = getActiveGrid();
		auto selected = activeGrid->SelectedRows;
		if (selected->Count == 0) {
			MessageBox::Show(L"No data selected for editing", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		Object^ objId = activeGrid->CurrentRow->Cells[ID_INDEX]->Value;
		Employee toEdit = this->repo->getById(safe_cast<int>(objId));
		UIState^ state = gcnew UIState();
		ManageEmployee mangeEmployeeDlg(this->repo, &toEdit, state);
		mangeEmployeeDlg.ShowDialog();
		refreshGridData(state);
	}
	private:  DataGridView^ getActiveGrid() {
		DataGridView^ activeGrid;
		if (tabControl->SelectedIndex == 0) {
			activeGrid = this->dataGridActive;
		}
		else {
			activeGrid = this->dataGridDeleted;
		}
		return activeGrid;
	}
	private: void refreshGridData(UIState^ state) {
		if (state->getLastOperation() == Operation::CANCEL) {
			return;
		}
		Int32 id = state->getLastModifiedId();
		DataGridView^ activeGrid = getActiveGrid();
		if (activeGrid->RowCount > 0) {
			for (int i = 0; i < activeGrid->RowCount; i++) {
				auto idObj = activeGrid->Rows[i]->Cells[ID_INDEX]->Value;
				if (id.Equals(idObj)) {
					Employee employee = this->repo->getById(id);
					if (state->getLastOperation() == Operation::UPDATE) {
						activeGrid->Rows[i]->Cells[FIRST_NAME_INDEX]->Value = Utils::toSystemString(employee.getFirstName());
						activeGrid->Rows[i]->Cells[LAST_NAME_INDEX]->Value = Utils::toSystemString(employee.getLastName());
						activeGrid->Rows[i]->Cells[ID_CODE_INDEX]->Value = Utils::toSystemString(employee.getIdCode());
						activeGrid->Rows[i]->Cells[BIRTH_DATE_INDEX]->Value = Utils::toSystemString(employee.getBirthDate());
					}
					else if (state->getLastOperation() == Operation::DELETE) {
						activeGrid->Rows->RemoveAt(activeGrid->Rows[i]->Index);
					}
					break;
				}
			}
		}
	}
	private: System::Void deleteEmployeeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteEmployee();
	}
	private: void deleteEmployee() {
		DataGridView^ activeGrid = getActiveGrid();
		auto selected = activeGrid->SelectedRows;
		if (selected->Count == 0) {
			MessageBox::Show(L"No data selected for deleting", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		Object^ objId = activeGrid->CurrentRow->Cells[ID_INDEX]->Value;
		Employee toDelete = this->repo->getById(safe_cast<int>(objId));
		std::string name = toDelete.getLastName() + " " + toDelete.getFirstName();
		String^ question = L"Are you sure you want to delete " + Utils::toSystemString(name) + "?";
		if (!Utils::isConfirmed(question)) {
			return;
		}
		UIState^ uiState = gcnew UIState();
		try {
			Employee deleted = repo->deleteEmployee(toDelete.getId());
			uiState->setLastOperation(Operation::DELETE);
			uiState->setLastModifiedId(deleted.getId());
		}
		catch (std::invalid_argument& error) {
			MessageBox::Show(Utils::toSystemString(error.what()), L"Error saving data", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show(L"Error saving data " + e->Message);
		}
		refreshGridData(uiState);
	}
	private: System::Void birthDatePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!birthDatePicker->Checked) {
			// hide date value since it's not set
			this->birthDatePicker->Format = DateTimePickerFormat::Custom;
			this->birthDatePicker->CustomFormat = " ";
		}
		else {
			this->birthDatePicker->CustomFormat = "";
			birthDatePicker->Format = DateTimePickerFormat::Short; // set the date format you want.
		}
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		createEmployee();
	}
	private: System::Void editToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		viewEditEmployee();
	}
	private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteEmployee();
	}
};
}
