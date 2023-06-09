#pragma once
#include "Student.h"

namespace TeacherAttendanceSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for DeleteStudentForm
	/// </summary>
	public ref class DeleteStudentForm : public System::Windows::Forms::Form
	{
	private:
		Teacher^ t;
	public:
		DeleteStudentForm(Teacher^ teacher)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->t = teacher;

			cListBoxDelete->SelectionMode = SelectionMode::One;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeleteStudentForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::CheckedListBox^ cListBoxDelete;
	private: System::Windows::Forms::Label^ lbcourseID;
	private: System::Windows::Forms::ListBox^ listBoxCourseID;
	private: System::Windows::Forms::ComboBox^ cbRollNumber;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ lbEmail;

	private: System::Windows::Forms::TextBox^ tbEmail;




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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->cListBoxDelete = (gcnew System::Windows::Forms::CheckedListBox());
			this->lbcourseID = (gcnew System::Windows::Forms::Label());
			this->listBoxCourseID = (gcnew System::Windows::Forms::ListBox());
			this->cbRollNumber = (gcnew System::Windows::Forms::ComboBox());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(16, 30);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(714, 70);
			this->panel2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 15);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(710, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Student Information";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 208);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 32);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Student Roll Number";
			this->label2->Click += gcnew System::EventHandler(this, &DeleteStudentForm::label2_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(383, 388);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(149, 38);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &DeleteStudentForm::btnDelete_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(551, 388);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(149, 38);
			this->btnCancel->TabIndex = 16;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &DeleteStudentForm::btnCancel_Click);
			// 
			// cListBoxDelete
			// 
			this->cListBoxDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->cListBoxDelete->CheckOnClick = true;
			this->cListBoxDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cListBoxDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cListBoxDelete->FormattingEnabled = true;
			this->cListBoxDelete->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Delete from Course", L"Delete from All Courses" });
			this->cListBoxDelete->Location = System::Drawing::Point(27, 374);
			this->cListBoxDelete->Margin = System::Windows::Forms::Padding(4);
			this->cListBoxDelete->Name = L"cListBoxDelete";
			this->cListBoxDelete->Size = System::Drawing::Size(257, 76);
			this->cListBoxDelete->TabIndex = 17;
			this->cListBoxDelete->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &DeleteStudentForm::cListBoxDelete_ItemCheck);
			this->cListBoxDelete->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteStudentForm::cListBoxDelete_SelectedIndexChanged);
			// 
			// lbcourseID
			// 
			this->lbcourseID->AutoSize = true;
			this->lbcourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbcourseID->Location = System::Drawing::Point(21, 158);
			this->lbcourseID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbcourseID->Name = L"lbcourseID";
			this->lbcourseID->Size = System::Drawing::Size(118, 32);
			this->lbcourseID->TabIndex = 18;
			this->lbcourseID->Text = L"Course ID";
			// 
			// listBoxCourseID
			// 
			this->listBoxCourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBoxCourseID->FormattingEnabled = true;
			this->listBoxCourseID->ItemHeight = 21;
			this->listBoxCourseID->Location = System::Drawing::Point(313, 136);
			this->listBoxCourseID->Margin = System::Windows::Forms::Padding(4);
			this->listBoxCourseID->Name = L"listBoxCourseID";
			this->listBoxCourseID->Size = System::Drawing::Size(387, 67);
			this->listBoxCourseID->TabIndex = 19;
			this->listBoxCourseID->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteStudentForm::listBoxCourseID_SelectedIndexChanged);
			// 
			// cbRollNumber
			// 
			this->cbRollNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbRollNumber->FormattingEnabled = true;
			this->cbRollNumber->Location = System::Drawing::Point(313, 216);
			this->cbRollNumber->Margin = System::Windows::Forms::Padding(4);
			this->cbRollNumber->Name = L"cbRollNumber";
			this->cbRollNumber->Size = System::Drawing::Size(387, 29);
			this->cbRollNumber->TabIndex = 20;
			this->cbRollNumber->Text = L"-Select-";
			this->cbRollNumber->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteStudentForm::cbRollNumber_SelectedIndexChanged);
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->Location = System::Drawing::Point(21, 260);
			this->lbName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(168, 32);
			this->lbName->TabIndex = 21;
			this->lbName->Text = L"Student Name";
			// 
			// tbName
			// 
			this->tbName->Enabled = false;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(313, 271);
			this->tbName->Margin = System::Windows::Forms::Padding(4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(387, 29);
			this->tbName->TabIndex = 22;
			this->tbName->TextChanged += gcnew System::EventHandler(this, &DeleteStudentForm::textBox1_TextChanged);
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmail->Location = System::Drawing::Point(21, 313);
			this->lbEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(161, 32);
			this->lbEmail->TabIndex = 23;
			this->lbEmail->Text = L"Student Email";
			// 
			// tbEmail
			// 
			this->tbEmail->BackColor = System::Drawing::SystemColors::Window;
			this->tbEmail->Enabled = false;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(313, 324);
			this->tbEmail->Margin = System::Windows::Forms::Padding(4);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(387, 29);
			this->tbEmail->TabIndex = 24;
			// 
			// DeleteStudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(743, 532);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->cbRollNumber);
			this->Controls->Add(this->listBoxCourseID);
			this->Controls->Add(this->lbcourseID);
			this->Controls->Add(this->cListBoxDelete);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DeleteStudentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"DeleteStudentForm";
			this->Load += gcnew System::EventHandler(this, &DeleteStudentForm::DeleteStudentForm_Load_1);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBoxCourseID_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		String^ selectedCourse = listBoxCourseID->SelectedItem->ToString();
		cbRollNumber->Items->Clear();

		SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
		sqlConn->Open();
		SqlCommand^ cmd = gcnew SqlCommand("SELECT RollNumber FROM students WHERE TeacherID=@tID AND CourseID=@cID;", sqlConn);
		cmd->Parameters->AddWithValue("@tID", this->t->getTeacherID());
		cmd->Parameters->AddWithValue("@cID", selectedCourse);
		SqlDataReader^ read = cmd->ExecuteReader();
		while (read->Read()) {
			String^ s_ID = read->GetString(0);
			cbRollNumber->Items->Add(s_ID);
		}
		read->Close();
		sqlConn->Close();
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void cListBoxDelete_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

		bool isChecked = false;
		for (int i = 0; i < cListBoxDelete->CheckedIndices->Count; i++) {
			isChecked = true;
		}
		if (listBoxCourseID->SelectedIndex == -1 || cbRollNumber->SelectedIndex == -1 || isChecked == false) {
			MessageBox::Show("Please select all details. Make sure to check an option.",
				"Empty Cells Error", MessageBoxButtons::OK);
			return;
		}

		String^ course = listBoxCourseID->SelectedItem->ToString();
		String^ rn = cbRollNumber->SelectedItem->ToString();
		int index = cListBoxDelete->CheckedIndices[0];
		if (index == 0) {
			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"Are you sure you want to delete " + rn + " from database?",
				"Delete Confirmation", MessageBoxButtons::OKCancel);

			if (result == System::Windows::Forms::DialogResult::OK) {
				try {
					SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
					sqlConn->Open();
					//DELETE FROM Customers WHERE CustomerName = 'Alfreds Futterkiste'
					String^ queryDelete = "DELETE FROM students WHERE RollNumber=@rn AND CourseID=@cID AND TeacherID=@tID;";
					SqlCommand^ command = gcnew SqlCommand(queryDelete, sqlConn);
					command->Parameters->AddWithValue("@rn", rn);
					command->Parameters->AddWithValue("@cID", course);
					command->Parameters->AddWithValue("@tID", this->t->getTeacherID());
					command->ExecuteNonQuery();
					MessageBox::Show(rn + " was deleted from the database.",
						"Student Deleted Successfully", MessageBoxButtons::OK);
					sqlConn->Close();
					this->Close();
				}
				catch (Exception^ e) {
					MessageBox::Show("Failed to connect to database",
						"Database Connection Error", MessageBoxButtons::OK);
					return;
				}
			}
			else {
				this->Close();
			}
		}
		else if (index == 1) {
			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"Are you sure you want to delete " + rn + " from the entire database?",
				"Delete Confirmation", MessageBoxButtons::OKCancel);

			if (result == System::Windows::Forms::DialogResult::OK) {
				SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
				sqlConn->Open();
				//DELETE FROM Customers WHERE CustomerName = 'Alfreds Futterkiste'
				String^ queryDelete = "DELETE FROM students WHERE RollNumber=@rn AND TeacherID=@tID;";
				SqlCommand^ command = gcnew SqlCommand(queryDelete, sqlConn);
				command->Parameters->AddWithValue("@rn", rn);
				command->Parameters->AddWithValue("@tID", this->t->getTeacherID());
				command->ExecuteNonQuery();
				MessageBox::Show(rn + " was deleted from the entire database.",
					"Student Deleted Successfully", MessageBoxButtons::OK);
				sqlConn->Close();
				this->Close();
			}
			else {
				this->Close();
			}
		}
	}
	private: System::Void cbRollNumber_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		String^ selectedRN = cbRollNumber->SelectedItem->ToString();
		SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
		sqlConn->Open();
		SqlCommand^ cmd = gcnew SqlCommand("SELECT Name,Email FROM students WHERE RollNumber=@rn;", sqlConn);
		cmd->Parameters->AddWithValue("@rn", selectedRN);
		SqlDataReader^ reader = cmd->ExecuteReader();
		if (reader->Read()) {
			String^ name = reader->GetString(0);
			String^ email = reader->GetString(1);
			tbName->Text = name;
			tbEmail->Text = email;
		}
		reader->Close();
	}
	private: System::Void DeleteStudentForm_Load_1(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
		sqlConn->Open();

		SqlCommand^ cmd = gcnew SqlCommand("SELECT CourseID FROM courses WHERE TeacherID=@tID;", sqlConn);
		cmd->Parameters->AddWithValue("@tID", this->t->getTeacherID());
		SqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			String^ c_ID = reader->GetString(0);
			listBoxCourseID->Items->Add(c_ID);
		}
		reader->Close();
		sqlConn->Close();

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cListBoxDelete_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
		// makes sure not more than one item is checked
		if (e->NewValue == CheckState::Checked) {
			for (int i = 0; i < cListBoxDelete->Items->Count; i++) {
				if (i != e->Index) {
					cListBoxDelete->SetItemChecked(i, false);
				}
			}
		}
		if (cListBoxDelete->CheckedItems->Count > 0 && cListBoxDelete->GetItemCheckState(e->Index) == CheckState::Checked) {
			e->NewValue = CheckState::Unchecked;
			MessageBox::Show("Please select only one option.", "Selection Error", MessageBoxButtons::OK);
		}
	}
	};
}
