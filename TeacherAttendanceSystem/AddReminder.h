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
	/// Summary for MyForm
	/// </summary>
	public ref class AddReminder : public System::Windows::Forms::Form
	{
	public:
		Teacher^ teacher;
		AddReminder(Teacher^ teacher)
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
		~AddReminder()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ btnContinue;
	private: System::Windows::Forms::Button^ btnCancel;


	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::RichTextBox^ tbreminder;
	private: System::Windows::Forms::Panel^ panel2;
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
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->tbreminder = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Your Reminder Text:";
			// 
			// btnContinue
			// 
			this->btnContinue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->btnContinue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnContinue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContinue->Location = System::Drawing::Point(32, 406);
			this->btnContinue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(129, 42);
			this->btnContinue->TabIndex = 4;
			this->btnContinue->Text = L"Set";
			this->btnContinue->UseVisualStyleBackColor = false;
			this->btnContinue->Click += gcnew System::EventHandler(this, &AddReminder::btnContinue_Click_1);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(567, 406);
			this->btnCancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(146, 42);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddReminder::btnCancel_Click);
			// 
			// tbreminder
			// 
			this->tbreminder->AcceptsTab = true;
			this->tbreminder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbreminder->Location = System::Drawing::Point(32, 157);
			this->tbreminder->Name = L"tbreminder";
			this->tbreminder->Size = System::Drawing::Size(681, 226);
			this->tbreminder->TabIndex = 6;
			this->tbreminder->Text = L"";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(32, 13);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(681, 70);
			this->panel2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(717, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Set a Reminder";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddReminder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(743, 510);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->tbreminder);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AddReminder";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Create Reminder";
			this->Load += gcnew System::EventHandler(this, &AddReminder::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: Reminder^ users = nullptr;
	private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	public: bool reminderSet = false;
		  bool reminderCancel = false;
	private: System::Void btnContinue_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ ReminderText = this->tbreminder->Text;

		if (ReminderText->Length == 0) {
			MessageBox::Show("Please enter a valid reminder", "Empty Reminder", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM reminders WHERE [TeacherID]=@teacherID";
			SqlCommand  command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@teacherID", teacher->getTeacherID());

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				String^ temp = reader->GetString(1);
				if (MessageBox::Show("You already have a reminder set:'" + temp + "'\nBy setting a new reminder you will be deleting the old one.", "Reminder alredy exists", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::Cancel) {
					MessageBox::Show("Did not set a new reminder", "Did not set reminder", MessageBoxButtons::OK);
					reminderCancel = true;
					this->Close();
				}
				else
				{
					reader->Close();
					String^ sqlQuery0 = "UPDATE reminders SET Reminder=@reminder WHERE [TeacherID]=@teacherID";
					SqlCommand command0(sqlQuery0, % sqlConn);
					command0.Parameters->AddWithValue("@teacherID", teacher->getTeacherID());
					command0.Parameters->AddWithValue("@reminder", ReminderText);

					reader = command0.ExecuteReader();

					MessageBox::Show("Reminder set successfully.", "Reminder Added", MessageBoxButtons::OK);
					reminderSet = true;
				}

			}
			
			if (reminderSet == false&& reminderCancel==false) {
				reader->Close();
				String^ sqlQuery1 = "INSERT INTO reminders" + " ([TeacherID], Reminder) VALUES " + "(@teacherID, @reminder); ";
				SqlCommand command1(sqlQuery1, % sqlConn);
				command1.Parameters->AddWithValue("@teacherID", teacher->getTeacherID());
				command1.Parameters->AddWithValue("@reminder", ReminderText);

				reader = command1.ExecuteReader();

				MessageBox::Show("Reminder set successfully.", "Reminder Added", MessageBoxButtons::OK);

			}
			this->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Connect to Database", "Connection Error", MessageBoxButtons::OK);
			this->Close();
		}
	}
	};
}
