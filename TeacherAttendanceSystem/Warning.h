#pragma once
#include "Student.h";
#include "EmailForm.h"

namespace TeacherAttendanceSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Warning : public System::Windows::Forms::Form
	{
	public:
		Teacher^ teacher;
		Warning(Teacher^ teacher)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->teacher = teacher;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Warning()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbStudent;
	private: System::Windows::Forms::Button^ btnIssueWarning;



	private: System::Windows::Forms::Button^ btnCancel;

	private: System::Windows::Forms::ComboBox^ cmbCourse;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbStudent = (gcnew System::Windows::Forms::ComboBox());
			this->btnIssueWarning = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->cmbCourse = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 196);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Course ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 38);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Student Name:";
			// 
			// cmbStudent
			// 
			this->cmbStudent->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cmbStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbStudent->FormattingEnabled = true;
			this->cmbStudent->Location = System::Drawing::Point(368, 265);
			this->cmbStudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbStudent->Name = L"cmbStudent";
			this->cmbStudent->Size = System::Drawing::Size(345, 45);
			this->cmbStudent->TabIndex = 4;
			// 
			// btnIssueWarning
			// 
			this->btnIssueWarning->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnIssueWarning->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnIssueWarning->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIssueWarning->Location = System::Drawing::Point(30, 361);
			this->btnIssueWarning->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnIssueWarning->Name = L"btnIssueWarning";
			this->btnIssueWarning->Size = System::Drawing::Size(227, 51);
			this->btnIssueWarning->TabIndex = 5;
			this->btnIssueWarning->Text = L"Issue Warning";
			this->btnIssueWarning->UseVisualStyleBackColor = false;
			this->btnIssueWarning->Click += gcnew System::EventHandler(this, &Warning::btnIssueWarning_Click_1);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(569, 361);
			this->btnCancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(144, 51);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Warning::btnCancel_Click_1);
			// 
			// cmbCourse
			// 
			this->cmbCourse->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->cmbCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbCourse->FormattingEnabled = true;
			this->cmbCourse->Location = System::Drawing::Point(368, 196);
			this->cmbCourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbCourse->Name = L"cmbCourse";
			this->cmbCourse->Size = System::Drawing::Size(345, 45);
			this->cmbCourse->TabIndex = 7;
			this->cmbCourse->SelectedIndexChanged += gcnew System::EventHandler(this, &Warning::cmbCourse_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(23, 13);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(690, 70);
			this->panel2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(717, 70);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Warning❗ ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(482, 38);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Enter the students information below:";
			// 
			// Warning
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(743, 455);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->cmbCourse);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnIssueWarning);
			this->Controls->Add(this->cmbStudent);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Warning";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Warning";
			this->Load += gcnew System::EventHandler(this, &Warning::Warning_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: 
	private: System::Void btnIssueWarning_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void Warning_Load(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
		sqlConn->Open();

		SqlCommand^ cmd = gcnew SqlCommand("SELECT CourseID FROM courses WHERE TeacherID=@teacherID;", sqlConn);
		cmd->Parameters->AddWithValue("@teacherID", teacher->getTeacherID());
		SqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			String^ c_ID = reader->GetString(0);
			cmbCourse->Items->Add(c_ID);
		}
		reader->Close();
		

	}
	private: System::Void cmbCourse_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
		sqlConn->Open();

		String^ selectedCourse = cmbCourse->SelectedItem->ToString();
		SqlCommand^ cmd = gcnew SqlCommand("SELECT Name FROM students WHERE TeacherID=@teacherID AND CourseID=@courseID;", sqlConn);
		cmd->Parameters->AddWithValue("@teacherID", teacher->getTeacherID());
		cmd->Parameters->AddWithValue("@courseID", selectedCourse);
		SqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			String^ c_ID = reader->GetString(0);
			cmbStudent->Items->Add(c_ID);
		}
		reader->Close();
		sqlConn->Close();
	}
	public:
		   Student^ student=nullptr;
		   Fine^ fine=nullptr;
private: System::Void btnIssueWarning_Click_1(System::Object^ sender, System::EventArgs^ e) {

	String^ Course = this->cmbCourse->Text;
	String^ Name = this->cmbStudent->Text;

	if (Name->Length == 0 || Course->Length == 0) {
		MessageBox::Show("Please select the course and student to issue a warning", "Data Not Selected", MessageBoxButtons::OK);
		return;
	}
	try {
		String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM students WHERE Name=@name AND CourseID=@courseID AND TeacherID=@teacherID";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@courseID", Course);
		command.Parameters->AddWithValue("@name", Name);
		command.Parameters->AddWithValue("@teacherID", teacher->getTeacherID());

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			
			// read the warning they have and increment it by 1
			student = gcnew Student;
			student->setRollNo(reader->GetString(0)->ToString());
			student->setCourseID(reader->GetString(3)->ToString());
			student->setEmail(reader->GetString(4)->ToString());
			student->setName(reader->GetString(2)->ToString());
			student->setTeacherID(reader->GetString(1)->ToString());
			student->setWarning(reader->GetInt32(5));
			student->setWarning(student++);   // OPERATOR OVERLOADING YASSSSSS YAYAYAYAYAYAYAYAYYA HURRAHHHH AYYYYYYY
			reader->Close();
			String^ sqlQuery1 = "UPDATE students SET Warning= @warning WHERE [RollNumber]=@roll AND TeacherID=@teacherID";

			SqlCommand command1(sqlQuery1, % sqlConn);
			command1.Parameters->AddWithValue("@warning", student->getWarning());
			command1.Parameters->AddWithValue("@roll", student->getRollNo());
			command1.Parameters->AddWithValue("@teacherID", student->getTeacherID());

			command1.ExecuteNonQuery();

			//also check if warning >=3 then issue a fine as well

			if (student >= 3) {         // OPERATOR OVERLOADING AGAIN???? DAMMNNNNNNNNNNNN
				fine = gcnew Fine;
				fine->setFine(student->getWarning() - 2);  // Warning =3 so fine alloc 1 and so on
				student->fine = fine;    // ANOTHER ONE????

				String^ finealloc = student->fine->getFine().ToString();

				try {
					//read from fine table according to the fine alloc and extract the fine amount value and send that value over to the email windows form
					String^ sqlQuery2 = "SELECT FineAmount FROM fines WHERE [FineAllocation]=@finealloc";
					SqlCommand command2(sqlQuery2, % sqlConn);
					command2.Parameters->AddWithValue("@finealloc", finealloc);

					SqlDataReader^ reader2 = command2.ExecuteReader();
					if (reader2->Read()) {

						fine->setFineAmount(reader2->GetString(0));
						this->Close();
					}
					else
					{
						MessageBox::Show("Sql Fine Alloc query error", "Sql Query failed", MessageBoxButtons::OK);
					}
				}
				catch (Exception^ e) {
					MessageBox::Show("Failed to Connect to Database", "Connection Error", MessageBoxButtons::OK);
				}

				EmailForm email(teacher, student);
				email.ShowDialog();

			}

			//if fine is issued then call the email windows form

			
			MessageBox::Show("Warning set successfully", "Warning Issued", MessageBoxButtons::OK);


			this->Close();
		}
		else
		{
			MessageBox::Show("Student data is not being read", "Student data not read", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to Connect to Database", "Connection Error", MessageBoxButtons::OK);
	}
}
private: System::Void btnCancel_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
