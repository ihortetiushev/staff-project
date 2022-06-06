#pragma once
#include "CreateEmployeeForm.h"
#include "Repository.h"
#include "Utils.h"

namespace coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(Repository* repo)
		{
			InitializeComponent();
			this->StartPosition = FormStartPosition::CenterScreen;
			this->repo = repo;
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

	private: Repository* repo;
	protected:








	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: DataTable^ table;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ systemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ staffToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newEmployeeToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ editEmployeeToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;














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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->systemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->staffToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newEmployeeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editEmployeeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(226, 15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 28);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(926, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
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
			this->staffToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newEmployeeToolStripMenuItem,
					this->editEmployeeToolStripMenuItem
			});
			this->staffToolStripMenuItem->Name = L"staffToolStripMenuItem";
			this->staffToolStripMenuItem->Size = System::Drawing::Size(54, 24);
			this->staffToolStripMenuItem->Text = L"Staff";
			// 
			// newEmployeeToolStripMenuItem
			// 
			this->newEmployeeToolStripMenuItem->Name = L"newEmployeeToolStripMenuItem";
			this->newEmployeeToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->newEmployeeToolStripMenuItem->Text = L"New Employee";
			this->newEmployeeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::newEmployeeToolStripMenuItem_Click);
			// 
			// editEmployeeToolStripMenuItem
			// 
			this->editEmployeeToolStripMenuItem->Name = L"editEmployeeToolStripMenuItem";
			this->editEmployeeToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->editEmployeeToolStripMenuItem->Text = L"Edit Employee";
			this->editEmployeeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::editEmployeeToolStripMenuItem_Click);
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
			this->menuStrip2->Size = System::Drawing::Size(926, 28);
			this->menuStrip2->TabIndex = 4;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->MinimumSize = System::Drawing::Size(300, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(908, 324);
			this->dataGridView1->TabIndex = 0;
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 52);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(926, 566);
			this->splitContainer1->SplitterDistance = 199;
			this->splitContainer1->TabIndex = 5;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(922, 359);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(914, 330);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Active";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(916, 332);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Deleted";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(926, 618);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Staff";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		table = gcnew DataTable();
		table->Columns->Add(gcnew DataColumn("First Name", Type::GetType("System.String")));
		table->Columns->Add(gcnew DataColumn("Second Name", Type::GetType("System.String")));
		table->Columns->Add(gcnew DataColumn("Id Code", Type::GetType("System.String")));
		table->Columns->Add(gcnew DataColumn("Birth Date", Type::GetType("System.String")));


		/*Связать таблицу с dataGridView*/
		dataGridView1->DataSource = table; // Сама связь
		dataGridView1->Columns[0]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill; // Это украшение(авто размер)
		dataGridView1->Columns[1]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill; // Это украшение(авто размер)
		std::vector<Employee> allRecords = this -> repo->findAll();
		for (auto emp : allRecords) {
			array<System::Object^>^ values = gcnew array< System::Object^ >(4);
			values[0] = Utils::toSystemString(emp.getFirstName());
			values[1] = Utils::toSystemString(emp.getLastName());
			values[2] = Utils::toSystemString(emp.getIdCode());
			values[3] = Utils::toSystemString(emp.getBirthDate());
			table->LoadDataRow(values, true);
		}

		/*array<System::Object^>^ values = gcnew array< System::Object^ >(2);
		values[0] = "John";
		values[1] = "Doe";
		table->LoadDataRow(values, true);
		values[0] = "John";
		values[1] = "Smith";
		table->LoadDataRow(values, true);*/
		/*Сохраняем в xml*/
		/*DataSet^ DS = gcnew DataSet();
		DS->Tables->Add(MyTable);
		DS->WriteXml("C:\\temp\\1.xml");*/

		/*Загружаем из файла*/


		/*DataSet^ DS = gcnew DataSet();
		try
		{
			DS->Tables->Clear();
			DS->ReadXml("C:\\temp\\1.xml");
			dataGridView1->DataSource = DS->Tables[0];
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show("Ошибка чтение xml");
		}*/


		/*Запись в файл*/
		/*DS->Tables->Clear();
		MyTable = (DataTable^)dataGridView1->DataSource;
		DS->Tables->Add(MyTable);
		DS->WriteXml("C:\\patch_list.xml");*/

		/*Чтение из файла*/
		/*try
		{
			DS->Tables->Clear();
			DS->ReadXml("C:\\patch_list.xml");
			dataGridView1->DataSource = DS->Tables[0];
			//dataGridView1->Refresh();
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show("XML data read error");
		}*/
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		/*DataSet^ DS = gcnew DataSet();
		DS->Tables->Clear();
		DataTable^ table = (DataTable^)dataGridView1->DataSource;
		DS->Tables->Add(table);
		DS->WriteXml("C:\\temp\\1.xml");*/
		this->repo->readEmpolyeesFromFile();

	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void newEmployeeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateEmployee createEmployeeDlg(this->repo);
		createEmployeeDlg.ShowDialog();
	}
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (!Utils::isConfirmed(L"Exit application?")) {
			e->Cancel = true;
		}
	}
	private: System::Void editEmployeeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
