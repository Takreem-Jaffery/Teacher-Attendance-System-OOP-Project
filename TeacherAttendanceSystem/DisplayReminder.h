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
	/// Summary for DisplayReminder
	/// </summary>
	public ref class DisplayReminder : public System::Windows::Forms::Form
	{
	public:
		Teacher^ teacher;
		DisplayReminder(Teacher^ teacher)
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
		~DisplayReminder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbReminder;
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
			this->lbReminder = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbReminder
			// 
			this->lbReminder->AutoSize = true;
			this->lbReminder->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbReminder->Location = System::Drawing::Point(12, 9);
			this->lbReminder->Margin = System::Windows::Forms::Padding(3);
			this->lbReminder->Name = L"lbReminder";
			this->lbReminder->Size = System::Drawing::Size(18, 20);
			this->lbReminder->TabIndex = 1;
			this->lbReminder->Text = L" ";
			// 
			// DisplayReminder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(283, 242);
			this->Controls->Add(this->lbReminder);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"DisplayReminder";
			this->Text = L"DisplayReminder";
			this->Load += gcnew System::EventHandler(this, &DisplayReminder::DisplayReminder_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool reminderIs = false;
	private: System::Void DisplayReminder_Load(System::Object^ sender, System::EventArgs^ e) {
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
				lbReminder->Text = reminder;

			}
			if (lbReminder->Text->Length == 0 || lbReminder->Text == " ") {
				reminderIs = false;
			}
			else {
				reminderIs = true;
			}
		}
		catch (Exception^ e) {
			reminderIs = false;
			this->Close();
		}
	}
	};
}
