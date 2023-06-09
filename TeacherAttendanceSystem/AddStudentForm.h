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
	/// Summary for AddStudentForm
	/// </summary>
	public ref class AddStudentForm : public System::Windows::Forms::Form
	{
	private:
		Teacher^ t;
	public:
		AddStudentForm(Teacher^ teacher)
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
		~AddStudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ lbcourseID;

	private: System::Windows::Forms::Label^ lbname;
	private: System::Windows::Forms::Label^ lbrollnum;
	private: System::Windows::Forms::Label^ lbemail;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbRollNo;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnCancel;


		   /*private: System::Windows::Forms::ComboBox^ comboBox1;*/

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ listBoxCourseID;



		   /*private: System::Windows::Forms::Panel^ panel1;*/
		   /*private: System::Windows::Forms::Panel^ panel2;*/
		   /*private: System::Windows::Forms::ListBox^ listBoxCourseID;
		   private: System::Windows::Forms::PictureBox^ pictureBox1;
		   private: System::Windows::Forms::Label^ lbUserName;
		   private: System::Windows::Forms::Label^ lbUserEmail;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBoxCourseID;
		   private: System::Windows::Forms::PictureBox^ pictureBox1;
		   private: System::Windows::Forms::Label^ lbUserName;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBoxCourseID;
		   private: System::Windows::Forms::PictureBox^ pictureBox1;
		   private: System::Windows::Forms::Label^ label2;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBoxCourseID;
		   private: System::Windows::Forms::PictureBox^ pictureBox1;
		   private: System::Windows::Forms::Label^ label2;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBoxCourseID;
		   private: System::Windows::Forms::PictureBox^ pictureBox1;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBoxCourseID;
		   private: System::Windows::Forms::PictureBox^ pictureBox1;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBoxCourseID;
		   private: System::Windows::Forms::PictureBox^ pictureBox1;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBoxCourseID;
		   private: System::Windows::Forms::ListBox^ listBox1;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBox1;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBox1;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBox1;
		   private: System::Windows::Forms::Panel^ panel1;
		   private: System::Windows::Forms::Panel^ panel2;
		   private: System::Windows::Forms::ListBox^ listBox1;
		   private: System::Windows::Forms::Panel^ panel1;*/

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbcourseID = (gcnew System::Windows::Forms::Label());
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->lbrollnum = (gcnew System::Windows::Forms::Label());
			this->lbemail = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbRollNo = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->listBoxCourseID = (gcnew System::Windows::Forms::ListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(644, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Information";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbcourseID
			// 
			this->lbcourseID->AutoSize = true;
			this->lbcourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbcourseID->Location = System::Drawing::Point(51, 129);
			this->lbcourseID->Name = L"lbcourseID";
			this->lbcourseID->Size = System::Drawing::Size(138, 38);
			this->lbcourseID->TabIndex = 1;
			this->lbcourseID->Text = L"Course ID";
			// 
			// lbname
			// 
			this->lbname->AutoSize = true;
			this->lbname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(51, 256);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(91, 38);
			this->lbname->TabIndex = 3;
			this->lbname->Text = L"Name";
			this->lbname->Click += gcnew System::EventHandler(this, &AddStudentForm::label2_Click);
			// 
			// lbrollnum
			// 
			this->lbrollnum->AutoSize = true;
			this->lbrollnum->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbrollnum->Location = System::Drawing::Point(51, 195);
			this->lbrollnum->Name = L"lbrollnum";
			this->lbrollnum->Size = System::Drawing::Size(173, 38);
			this->lbrollnum->TabIndex = 4;
			this->lbrollnum->Text = L"Roll Number";
			// 
			// lbemail
			// 
			this->lbemail->AutoSize = true;
			this->lbemail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbemail->Location = System::Drawing::Point(51, 319);
			this->lbemail->Name = L"lbemail";
			this->lbemail->Size = System::Drawing::Size(83, 38);
			this->lbemail->TabIndex = 5;
			this->lbemail->Text = L"Email";
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(275, 253);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(406, 43);
			this->tbName->TabIndex = 6;
			// 
			// tbRollNo
			// 
			this->tbRollNo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbRollNo->Location = System::Drawing::Point(275, 190);
			this->tbRollNo->Name = L"tbRollNo";
			this->tbRollNo->Size = System::Drawing::Size(406, 43);
			this->tbRollNo->TabIndex = 7;
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(275, 316);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(406, 43);
			this->tbEmail->TabIndex = 8;
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(367, 387);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(128, 45);
			this->btnSave->TabIndex = 9;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &AddStudentForm::btnSave_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(548, 387);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(133, 45);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddStudentForm::btnCancel_Click);
			// 
			// listBoxCourseID
			// 
			this->listBoxCourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBoxCourseID->FormattingEnabled = true;
			this->listBoxCourseID->ItemHeight = 37;
			this->listBoxCourseID->Location = System::Drawing::Point(275, 129);
			this->listBoxCourseID->Name = L"listBoxCourseID";
			this->listBoxCourseID->Size = System::Drawing::Size(406, 41);
			this->listBoxCourseID->TabIndex = 11;
			this->listBoxCourseID->SelectedIndexChanged += gcnew System::EventHandler(this, &AddStudentForm::listBoxCourseID_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Enabled = false;
			this->panel2->Location = System::Drawing::Point(23, 21);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(693, 64);
			this->panel2->TabIndex = 13;
			// 
			// AddStudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(743, 578);
			this->Controls->Add(this->listBoxCourseID);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbRollNo);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbemail);
			this->Controls->Add(this->lbrollnum);
			this->Controls->Add(this->lbname);
			this->Controls->Add(this->lbcourseID);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AddStudentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Add Student";
			this->Load += gcnew System::EventHandler(this, &AddStudentForm::AddStudentForm_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: Student^ student = gcnew Student;
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBoxCourseID->SelectedIndex == -1) {
			MessageBox::Show("Please select all details. Make sure to check an option.",
				"Empty Cells Error", MessageBoxButtons::OK);
			return;
		}

		String^ course = this->listBoxCourseID->SelectedItem->ToString();
		String^ name = this->tbName->Text;
		String^ rollNo = this->tbRollNo->Text;
		String^ email = this->tbEmail->Text;
		if (course->Length == 0 || name->Length == 0 || rollNo->Length == 0 || email->Length == 0) {
			MessageBox::Show("Please enter all details.",
				"Empty Cells Error", MessageBoxButtons::OK);
			return;
		}
		/* Format :: 22L-7864 */
		if (rollNo->Length == 8) {

			bool firstTwoDigits = Char::IsDigit(rollNo[0]) && Char::IsDigit(rollNo[1]);
			bool nextTwoLetter_Punc = Char::IsLetter(rollNo[2]) && Char::IsPunctuation(rollNo[3]);
			bool nextFourDigits = Char::IsDigit(rollNo[4]) && Char::IsDigit(rollNo[5]) &&
				Char::IsDigit(rollNo[6]) && Char::IsDigit(rollNo[7]);

			if (firstTwoDigits && nextTwoLetter_Punc && nextFourDigits) {
				/* correct sequence */
				/********************************
				*
				* can not make an AddStudent() function in any classes
				* so the code has to run from here :[
				*
				*********************************/
				/*try*/ {

					SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
					sqlConn->Open();

					String^ querySelect = "SELECT * FROM students WHERE TeacherID=@tID AND CourseID=@cID AND RollNumber=@rn;";
					SqlCommand^ command = gcnew SqlCommand(querySelect, sqlConn);
					command->Parameters->AddWithValue("@tID", this->t->getTeacherID());
					command->Parameters->AddWithValue("@cID", course);
					command->Parameters->AddWithValue("@rn", rollNo);
					SqlDataReader^ reader = command->ExecuteReader();
					if (reader->Read()) {
						MessageBox::Show(name + " already exists in " + course + ". ", "Duplication Error", MessageBoxButtons::OK);
						return;
					}
					reader->Close();

					student->setTeacherID(this->t->getTeacherID());
					student->setCourseID(course);
					student->setName(this->tbName->Text);
					student->setEmail(this->tbEmail->Text);
					student->setRollNo(this->tbRollNo->Text);

					String^ queryInsert = "INSERT INTO students(TeacherID,CourseID,Name,Email,RollNumber,Warning) VALUES (@tid,@cid,@name,@email,@rn,0);";
					command = gcnew SqlCommand(queryInsert, sqlConn);
					command->Parameters->AddWithValue("@tid", student->getTeacherID());
					command->Parameters->AddWithValue("@cid", student->getCourseID());
					command->Parameters->AddWithValue("@name", student->getName());
					command->Parameters->AddWithValue("@email", student->getEmail());
					command->Parameters->AddWithValue("@rn", student->getRollNo());

					command->ExecuteNonQuery();
					MessageBox::Show(student->getName() + " was added to the database.",
						"Student Added Successfully", MessageBoxButtons::OK);
					return;
					sqlConn->Close();

				}
				/*catch (Exception^ e) {
					MessageBox::Show("Failed to connect to database",
						"Database Connection Error", MessageBoxButtons::OK);
					return;
				}*/
			}
			else {
				MessageBox::Show("Please follow correct roll number format. For example: 22L-7864.",
					"Format Error", MessageBoxButtons::OK);
				return;
			}
		}
		else {
			MessageBox::Show("Please enter seven characters only. For example: 22L-7864.",
				"Format Error", MessageBoxButtons::OK);
			return;
		}

	}
	private: System::Void AddStudentForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void listBoxCourseID_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
