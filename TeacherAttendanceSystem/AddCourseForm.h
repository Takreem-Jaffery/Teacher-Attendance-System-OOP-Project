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
	/// Summary for AddCourseForm
	/// </summary>
	public ref class AddCourseForm : public System::Windows::Forms::Form
	{
	private:
		Teacher^ t;
	public:
		AddCourseForm(Teacher^ teacher)
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
		~AddCourseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbCourseID;
	private: System::Windows::Forms::TextBox^ tbCourseID;
	private: System::Windows::Forms::Label^ lbCourseName;
	private: System::Windows::Forms::Label^ lbCourseInfo;
	private: System::Windows::Forms::TextBox^ tbCourseName;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::ComponentModel::IContainer^ components;
	protected:



	protected:

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
			this->lbCourseID = (gcnew System::Windows::Forms::Label());
			this->tbCourseID = (gcnew System::Windows::Forms::TextBox());
			this->lbCourseName = (gcnew System::Windows::Forms::Label());
			this->lbCourseInfo = (gcnew System::Windows::Forms::Label());
			this->tbCourseName = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbCourseID
			// 
			this->lbCourseID->AutoSize = true;
			this->lbCourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCourseID->Location = System::Drawing::Point(50, 156);
			this->lbCourseID->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCourseID->Name = L"lbCourseID";
			this->lbCourseID->Size = System::Drawing::Size(138, 38);
			this->lbCourseID->TabIndex = 0;
			this->lbCourseID->Text = L"Course ID";
			this->lbCourseID->Click += gcnew System::EventHandler(this, &AddCourseForm::label1_Click);
			// 
			// tbCourseID
			// 
			this->tbCourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCourseID->Location = System::Drawing::Point(296, 156);
			this->tbCourseID->Margin = System::Windows::Forms::Padding(4);
			this->tbCourseID->Name = L"tbCourseID";
			this->tbCourseID->Size = System::Drawing::Size(409, 43);
			this->tbCourseID->TabIndex = 1;
			// 
			// lbCourseName
			// 
			this->lbCourseName->AutoSize = true;
			this->lbCourseName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCourseName->Location = System::Drawing::Point(50, 223);
			this->lbCourseName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCourseName->Name = L"lbCourseName";
			this->lbCourseName->Size = System::Drawing::Size(185, 38);
			this->lbCourseName->TabIndex = 2;
			this->lbCourseName->Text = L"Course Name";
			// 
			// lbCourseInfo
			// 
			this->lbCourseInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbCourseInfo->Location = System::Drawing::Point(4, 15);
			this->lbCourseInfo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCourseInfo->Name = L"lbCourseInfo";
			this->lbCourseInfo->Size = System::Drawing::Size(706, 42);
			this->lbCourseInfo->TabIndex = 3;
			this->lbCourseInfo->Text = L"Course Information";
			this->lbCourseInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbCourseName
			// 
			this->tbCourseName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCourseName->Location = System::Drawing::Point(296, 223);
			this->tbCourseName->Margin = System::Windows::Forms::Padding(4);
			this->tbCourseName->Name = L"tbCourseName";
			this->tbCourseName->Size = System::Drawing::Size(409, 43);
			this->tbCourseName->TabIndex = 4;
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(382, 303);
			this->btnSave->Margin = System::Windows::Forms::Padding(4);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(145, 48);
			this->btnSave->TabIndex = 5;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &AddCourseForm::btnSave_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(561, 303);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(145, 48);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddCourseForm::btnCancel_Click);
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
			// AddCourseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(743, 510);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->tbCourseName);
			this->Controls->Add(this->lbCourseName);
			this->Controls->Add(this->tbCourseID);
			this->Controls->Add(this->lbCourseID);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AddCourseForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Add Course";
			this->Load += gcnew System::EventHandler(this, &AddCourseForm::AddCourseForm_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ courseID = this->tbCourseID->Text;
		String^ courseName = this->tbCourseName->Text;
		/*Format :: AA1234 */
		if (courseID->Length == 0 || courseName->Length == 0) {
			MessageBox::Show("Please enter course ID and course name.",
				"Empty Cells Error", MessageBoxButtons::OK);
			return;
		}
		if (courseID->Length == 6) {

			bool firstTwoLetters = Char::IsLetter(courseID[0]) && Char::IsLetter(courseID[1]);
			bool nextFourDigits = Char::IsDigit(courseID[2]) && Char::IsDigit(courseID[3]) &&
				Char::IsDigit(courseID[4]) && Char::IsDigit(courseID[5]);

			if (firstTwoLetters && nextFourDigits) {
				/* correct sequence */

				/********************************
				*
				* pass teacher object here
				* call AddCourse(String^ courseID, String^ courseName) from teacher obj
				* AddCourse() does the following:
				*	- connects to database
				*	- uses parameters to insert a course in courseArr
				*
				*********************************/
				String^ course = tbCourseID->Text;
				SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
				sqlConn->Open();

				String^ querySelect = "SELECT * FROM courses WHERE TeacherID=@tID AND CourseID=@cID;";
				SqlCommand^ command = gcnew SqlCommand(querySelect, sqlConn);
				command->Parameters->AddWithValue("@tID", this->t->getTeacherID());
				command->Parameters->AddWithValue("@cID", course);

				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read()) {
					MessageBox::Show(course + " already exists in database.", "Duplication Error", MessageBoxButtons::OK);
					return;
				}
				reader->Close();

				this->t->AddCourse(courseID, courseName);
				this->Close();
			}
			else {
				MessageBox::Show("Please follow correct ID format. For example: SS1029.",
					"Format Error", MessageBoxButtons::OK);
				return;
			}

		}
		else {
			MessageBox::Show("Please enter six characters only. For example: SS1029.",
				"Format Error", MessageBoxButtons::OK);
			return;
		}

	}
	private: System::Void AddCourseForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbUserName_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
