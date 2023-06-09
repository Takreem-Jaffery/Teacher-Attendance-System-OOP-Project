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
	/// Summary for email
	/// </summary>
	public ref class EmailForm : public System::Windows::Forms::Form
	{
	public:
		Teacher^ teacher;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		Student^ student;
		EmailForm(Teacher^ teacher, Student^ student)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->teacher = teacher;
			this->student = student;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmailForm()
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
	private: System::Windows::Forms::TextBox^ tbSender;
	private: System::Windows::Forms::TextBox^ tbReceiver;
	private: System::Windows::Forms::RichTextBox^ tbEmail;



	private: System::Windows::Forms::Button^ send;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EmailForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbSender = (gcnew System::Windows::Forms::TextBox());
			this->tbReceiver = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::RichTextBox());
			this->send = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(74, 25);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sender:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(74, 65);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Receiver:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 106);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email:";
			// 
			// tbSender
			// 
			this->tbSender->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSender->Location = System::Drawing::Point(158, 22);
			this->tbSender->Margin = System::Windows::Forms::Padding(2);
			this->tbSender->Name = L"tbSender";
			this->tbSender->Size = System::Drawing::Size(294, 29);
			this->tbSender->TabIndex = 3;
			// 
			// tbReceiver
			// 
			this->tbReceiver->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbReceiver->Location = System::Drawing::Point(158, 62);
			this->tbReceiver->Margin = System::Windows::Forms::Padding(2);
			this->tbReceiver->Name = L"tbReceiver";
			this->tbReceiver->Size = System::Drawing::Size(294, 29);
			this->tbReceiver->TabIndex = 4;
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(77, 105);
			this->tbEmail->Margin = System::Windows::Forms::Padding(2);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(374, 105);
			this->tbEmail->TabIndex = 6;
			this->tbEmail->Text = L"";
			// 
			// send
			// 
			this->send->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->send->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->send->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->send->Location = System::Drawing::Point(368, 224);
			this->send->Margin = System::Windows::Forms::Padding(2);
			this->send->Name = L"send";
			this->send->Size = System::Drawing::Size(82, 35);
			this->send->TabIndex = 7;
			this->send->Text = L"Send";
			this->send->UseVisualStyleBackColor = false;
			this->send->Click += gcnew System::EventHandler(this, &EmailForm::send_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(10, 224);
			this->btnCancel->Margin = System::Windows::Forms::Padding(2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(88, 35);
			this->btnCancel->TabIndex = 8;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &EmailForm::btnCancel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 22);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(66, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// EmailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->ClientSize = System::Drawing::Size(460, 268);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->send);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbReceiver);
			this->Controls->Add(this->tbSender);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Location = System::Drawing::Point(480, 150);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EmailForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"email";
			this->Load += gcnew System::EventHandler(this, &EmailForm::EmailForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//public: User2^ user = nullptr;
	private: System::Void send_Click(System::Object^ sender, System::EventArgs^ e) {

		//try {
		//	//String^ connString = "Data Source=localhost\\MSSQLSERVER01;Initial Catalog=Fine;Integrated Security=True";
		//	//SqlConnection sqlConn(connString);
		//	//sqlConn.Open();

		//	//String^ sqlQuery = "SELECT Email FROM teachers WHERE TeacherID=@teacherID"; // AND Receiver = @receiver AND Email = @email";
		//	//SqlCommand command(sqlQuery, % sqlConn);
		//	//command.Parameters->AddWithValue("@teacherID", teacher->getTeacherID);
		//	//I wouldnt need any of this if I just pass student and teacher from warning.h......

		//	//SqlDataReader^ reader = command.ExecuteReader();
		//	//if (reader->Read()) {
		//		
		//		/*user->Sender = reader->GetString(0);
		//		user->Receiver = reader->GetString(1);
		//		user->Email = reader->GetString(2);
		//		this->Close();*/

		///*	}
		//	else
		//	{
		//		MessageBox::Show("Incorrect reminder", "Enter Valid Reminder", MessageBoxButtons::OK);
		//	}*/
		//}
		//catch (Exception^ e) {
		//	MessageBox::Show("Failed to Connect to Database", "Connection Error", MessageBoxButtons::OK);
		//}

		MessageBox::Show("Email Sent successfully", "Email Sent", MessageBoxButtons::OK);
		this->Close();
	}
	private: System::Void EmailForm_Load(System::Object^ sender, System::EventArgs^ e) {
		tbSender->ReadOnly;
		tbReceiver->ReadOnly;

		String^ emailText = "Dear " + student->getName() + ",\nDue to your attendance falling behind, you have been issues " + student->getWarning() + " warnings and have accumulated a fine of " + student->fine->getFineAmount() +
			",\nPlease pay the fine and attend your remaining classes if you wish to not receive a DC and be failed in this course.\n\nYours Sincerely,\n" + teacher->getName();

		Email^ email = gcnew Email(student, teacher);

		tbSender->Text = teacher->getEmail();
		tbReceiver->Text = student->getEmail();

		tbEmail->Text = emailText;
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Email not sent", "Email Cancelled", MessageBoxButtons::OK);
		this->Close();
	}
	};
}
