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
	/// Summary for DeleteACourseForm
	/// </summary>
	public ref class DeleteACourseForm : public System::Windows::Forms::Form
	{
	private:
		Teacher^ t;
	public:
		DeleteACourseForm(Teacher^ teacher)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->t = teacher;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeleteACourseForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbCourseInfo;
	private: System::Windows::Forms::Label^ lbCourseID;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::ComboBox^ cbCourseID;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnDelete;
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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbCourseInfo = (gcnew System::Windows::Forms::Label());
			this->lbCourseID = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->cbCourseID = (gcnew System::Windows::Forms::ComboBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->lbCourseInfo);
			this->panel2->Location = System::Drawing::Point(16, 32);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(714, 70);
			this->panel2->TabIndex = 8;
			// 
			// lbCourseInfo
			// 
			this->lbCourseInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCourseInfo->Location = System::Drawing::Point(0, 17);
			this->lbCourseInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCourseInfo->Name = L"lbCourseInfo";
			this->lbCourseInfo->Size = System::Drawing::Size(710, 36);
			this->lbCourseInfo->TabIndex = 1;
			this->lbCourseInfo->Text = L"Course Information";
			this->lbCourseInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbCourseID
			// 
			this->lbCourseID->AutoSize = true;
			this->lbCourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCourseID->Location = System::Drawing::Point(46, 161);
			this->lbCourseID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCourseID->Name = L"lbCourseID";
			this->lbCourseID->Size = System::Drawing::Size(138, 38);
			this->lbCourseID->TabIndex = 11;
			this->lbCourseID->Text = L"Course ID";
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->Location = System::Drawing::Point(46, 228);
			this->lbName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(185, 38);
			this->lbName->TabIndex = 23;
			this->lbName->Text = L"Course Name";
			// 
			// cbCourseID
			// 
			this->cbCourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCourseID->FormattingEnabled = true;
			this->cbCourseID->Location = System::Drawing::Point(292, 161);
			this->cbCourseID->Margin = System::Windows::Forms::Padding(4);
			this->cbCourseID->Name = L"cbCourseID";
			this->cbCourseID->Size = System::Drawing::Size(409, 45);
			this->cbCourseID->TabIndex = 24;
			this->cbCourseID->Text = L"-Select-";
			this->cbCourseID->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteACourseForm::cbCourseID_SelectedIndexChanged);
			// 
			// tbName
			// 
			this->tbName->Enabled = false;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(292, 228);
			this->tbName->Margin = System::Windows::Forms::Padding(4);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(409, 43);
			this->tbName->TabIndex = 25;
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(552, 320);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(149, 45);
			this->btnCancel->TabIndex = 26;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &DeleteACourseForm::btnCancel_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(344, 320);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(149, 45);
			this->btnDelete->TabIndex = 27;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &DeleteACourseForm::btnDelete_Click);
			// 
			// DeleteACourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(743, 532);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->cbCourseID);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->lbCourseID);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DeleteACourseForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"DeleteACourseForm";
			this->Load += gcnew System::EventHandler(this, &DeleteACourseForm::DeleteACourseForm_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DeleteACourseForm_Load(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
		sqlConn->Open();
		SqlCommand^ cmd = gcnew SqlCommand("SELECT CourseID FROM courses WHERE TeacherID=@tID;", sqlConn);
		cmd->Parameters->AddWithValue("@tID", this->t->getTeacherID());
		SqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			String^ c_ID = reader->GetString(0);
			cbCourseID->Items->Add(c_ID);
		}
		reader->Close();
		sqlConn->Close();
	}

	private: System::Void cbCourseID_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ selectedCourse = cbCourseID->SelectedItem->ToString();

		SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
		sqlConn->Open();
		SqlCommand^ cmd = gcnew SqlCommand("SELECT CourseName FROM courses WHERE CourseID=@cID;", sqlConn);
		cmd->Parameters->AddWithValue("@cID", selectedCourse);
		SqlDataReader^ reader = cmd->ExecuteReader();
		if (reader->Read()) {
			String^ name = reader->GetString(0);
			tbName->Text = name;
		}
		reader->Close();
		sqlConn->Close();
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cbCourseID->SelectedIndex == -1) {
			MessageBox::Show("Please select a course.",
				"Empty Cells Error", MessageBoxButtons::OK);
			return;
		}
		String^ c_ID = cbCourseID->SelectedItem->ToString();
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Are you sure you want to delete " + c_ID +
			" from database? This action will delete all corresponding students as well.",
			"Delete Confirmation", MessageBoxButtons::OKCancel);

		if (result == System::Windows::Forms::DialogResult::OK) {
			try {
				SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
				sqlConn->Open();

				String^ queryDelete = "DELETE FROM courses WHERE CourseID=@cID AND TeacherID=@tID;";
				SqlCommand^ command = gcnew SqlCommand(queryDelete, sqlConn);
				command->Parameters->AddWithValue("@cID", c_ID);
				command->Parameters->AddWithValue("@tID", this->t->getTeacherID());
				command->ExecuteNonQuery();

				queryDelete = "DELETE FROM students WHERE CourseID=@cID AND TeacherID=@tID;";
				command = gcnew SqlCommand(queryDelete, sqlConn);
				command->Parameters->AddWithValue("@cID", c_ID);
				command->Parameters->AddWithValue("@tID", this->t->getTeacherID());
				command->ExecuteNonQuery();
				MessageBox::Show(c_ID + " was deleted from the database.",
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
	};
}
