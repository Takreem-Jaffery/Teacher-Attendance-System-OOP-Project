#pragma once
//#include "User.h"
#include "Student.h"

namespace TeacherAttendanceSystem {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for SignupForm
	/// </summary>
	public ref class SignupForm : public System::Windows::Forms::Form
	{
	public:
		SignupForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbTeacherID;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btEnter;

	private: System::Windows::Forms::Button^ btCancel;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

	private: System::Windows::Forms::LinkLabel^ llLogin;
	private: System::Windows::Forms::Label^ label8;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbTeacherID = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btEnter = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->BackColor = System::Drawing::Color::SkyBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(744, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign-Up";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 32);
			this->label2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->Location = System::Drawing::Point(8, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(256, 191);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Teacher ID";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->Location = System::Drawing::Point(8, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(256, 191);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Name";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->Location = System::Drawing::Point(8, 208);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(256, 191);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Email";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->Location = System::Drawing::Point(8, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(256, 99);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Password";
			// 
			// tbTeacherID
			// 
			this->tbTeacherID->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbTeacherID->Location = System::Drawing::Point(190, 98);
			this->tbTeacherID->Name = L"tbTeacherID";
			this->tbTeacherID->Size = System::Drawing::Size(469, 38);
			this->tbTeacherID->TabIndex = 6;
			// 
			// tbName
			// 
			this->tbName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbName->Location = System::Drawing::Point(190, 150);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(469, 38);
			this->tbName->TabIndex = 7;
			// 
			// tbEmail
			// 
			this->tbEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbEmail->Location = System::Drawing::Point(190, 205);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(469, 38);
			this->tbEmail->TabIndex = 8;
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPassword->Location = System::Drawing::Point(190, 255);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(469, 38);
			this->tbPassword->TabIndex = 9;
			// 
			// btEnter
			// 
			this->btEnter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btEnter->BackColor = System::Drawing::Color::SkyBlue;
			this->btEnter->Location = System::Drawing::Point(179, 383);
			this->btEnter->Name = L"btEnter";
			this->btEnter->Size = System::Drawing::Size(179, 47);
			this->btEnter->TabIndex = 10;
			this->btEnter->Text = L"Enter";
			this->btEnter->UseVisualStyleBackColor = false;
			this->btEnter->Click += gcnew System::EventHandler(this, &SignupForm::btEnter_Click);
			// 
			// btCancel
			// 
			this->btCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btCancel->BackColor = System::Drawing::Color::SkyBlue;
			this->btCancel->Location = System::Drawing::Point(407, 383);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(179, 47);
			this->btCancel->TabIndex = 11;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = false;
			this->btCancel->Click += gcnew System::EventHandler(this, &SignupForm::btCancel_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->Location = System::Drawing::Point(8, 308);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(182, 72);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Confirm Password";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbConfirmPassword->Location = System::Drawing::Point(190, 309);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(469, 38);
			this->tbConfirmPassword->TabIndex = 13;
			// 
			// llLogin
			// 
			this->llLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(610, 442);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(94, 32);
			this->llLogin->TabIndex = 14;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Log-in";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SignupForm::linkLabel1_LinkClicked);
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Location = System::Drawing::Point(328, 448);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(258, 26);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Already have an account\?";
			this->label8->Click += gcnew System::EventHandler(this, &SignupForm::label8_Click);
			// 
			// SignupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(761, 483);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->btEnter);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->tbTeacherID);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"SignupForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignupForm";
			this->Load += gcnew System::EventHandler(this, &SignupForm::SignupForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SignupForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: Teacher^ user = nullptr;
	private: System::Void btEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ teacherID = tbTeacherID->Text;
		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;

		//checking if any field is empty
		if (teacherID->Length == 0 || name->Length == 0 || email->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
			MessageBox::Show("Please enter in all the required data.", "One or more empty slots left.", MessageBoxButtons::OK);
			return;
		}

		//NEW EDITS HERE
		// 
		
		
		/*Format :: 1CS-123 */
		
		if (teacherID->Length == 7) {
			bool firstDigit = Char::IsDigit(teacherID[0]);
			bool firstTwoLetters = Char::IsLetter(teacherID[1]) && Char::IsLetter(teacherID[2]);
			bool dash;
			if (teacherID[3] == '-')
				dash = true;
			else
				dash = false;
			bool nextThreeDigits = Char::IsDigit(teacherID[4]) && Char::IsDigit(teacherID[5]) &&
				Char::IsDigit(teacherID[6]);

			if (firstDigit && firstTwoLetters && dash && nextThreeDigits) {
				/* correct sequence */
				// YAY

			}
			else
			{
				MessageBox::Show("Please follow correct ID format. For example: 1CS-102.",
					"Format Error", MessageBoxButtons::OK);
				return;
			}
		}
		else {
			MessageBox::Show("Please enter seven characters only. For example: 1CS-102.",
				"Format Error", MessageBoxButtons::OK);
			return;
		}

	
		//
		//TILL HERE

		

		//checking if Teacher ID is being repeated
		String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM teachers WHERE TeacherID=@teacherID";
		SqlCommand  command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@teacherID", teacherID);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			MessageBox::Show("Teacher ID already exists.", "Error autheticating Teacher ID", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Your password does not match. Try again.", "Incorrect Password Confirmation", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO teachers " + "(TeacherID, Name,Email,Password) VALUES (@teacherID,@name,@email,@password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@teacherID", teacherID);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();

			user = gcnew Teacher;
			user->setTeacherID(teacherID);
			user->setName(name);
			user->setEmail(email);
			user->setPassword(password);

			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user.", "Registration Failure", MessageBoxButtons::OK);

		}
	}
	public: bool switchToLogin = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
