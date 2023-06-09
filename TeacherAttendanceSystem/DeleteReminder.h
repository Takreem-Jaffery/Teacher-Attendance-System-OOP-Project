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
	/// Summary for DeleteReminder
	/// </summary>
	public ref class DeleteReminder : public System::Windows::Forms::Form
	{
	public:
		Teacher^ teacher;
		DeleteReminder(Teacher^ teacher)
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
		~DeleteReminder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::RichTextBox^ tbReminder;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;


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
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->tbReminder = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your Reminder:";
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(28, 384);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(129, 46);
			this->btnDelete->TabIndex = 2;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &DeleteReminder::btnDelete_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(569, 384);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(127, 46);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &DeleteReminder::btnCancel_Click);
			// 
			// tbReminder
			// 
			this->tbReminder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->tbReminder->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbReminder->Location = System::Drawing::Point(28, 184);
			this->tbReminder->Name = L"tbReminder";
			this->tbReminder->ReadOnly = true;
			this->tbReminder->Size = System::Drawing::Size(668, 178);
			this->tbReminder->TabIndex = 4;
			this->tbReminder->Text = L"";
			this->tbReminder->TextChanged += gcnew System::EventHandler(this, &DeleteReminder::richTextBox1_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(28, 22);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(668, 70);
			this->panel2->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 14);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(717, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Delete Reminder";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DeleteReminder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(725, 463);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->tbReminder);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Name = L"DeleteReminder";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"DeleteReminder";
			this->Load += gcnew System::EventHandler(this, &DeleteReminder::DeleteReminder_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DeleteReminder_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ reminder;


		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM reminders WHERE [TeacherID]=@teacherID";
			SqlCommand  command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@teacherID", teacher->getTeacherID());

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				reminder = reader->GetString(1);
				tbReminder->Text = reminder;
			}
		}
		catch (Exception^ e) {
			this->Close();
		}
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ queryDelete = "DELETE FROM reminders WHERE [TeacherID]=@teacherID";
			SqlCommand command(queryDelete, % sqlConn);
			command.Parameters->AddWithValue("@teacherID", teacher->getTeacherID());

			command.ExecuteNonQuery();

			MessageBox::Show("Reminder successfully deleted", "Successfully Deleted.", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ e) {
			this->Close();
		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
