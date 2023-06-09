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
	/// Summary for EditAccount
	/// </summary>
	public ref class EditAccount : public System::Windows::Forms::Form
	{
	public:
		Teacher^ teacher;
		EditAccount(Teacher^ teacher)
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
		~EditAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cmbChange;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbChange;
	private: System::Windows::Forms::TextBox^ tbNewData;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSelect;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;

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
			this->cmbChange = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbChange = (gcnew System::Windows::Forms::Label());
			this->tbNewData = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSelect = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// cmbChange
			// 
			this->cmbChange->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbChange->FormattingEnabled = true;
			this->cmbChange->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Name", L"Email", L"Password" });
			this->cmbChange->Location = System::Drawing::Point(46, 179);
			this->cmbChange->Name = L"cmbChange";
			this->cmbChange->Size = System::Drawing::Size(487, 45);
			this->cmbChange->TabIndex = 0;
			this->cmbChange->SelectedIndexChanged += gcnew System::EventHandler(this, &EditAccount::cmbChange_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(407, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"What would you like to change:";
			// 
			// lbChange
			// 
			this->lbChange->AutoSize = true;
			this->lbChange->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbChange->Location = System::Drawing::Point(52, 239);
			this->lbChange->Name = L"lbChange";
			this->lbChange->Size = System::Drawing::Size(0, 38);
			this->lbChange->TabIndex = 2;
			// 
			// tbNewData
			// 
			this->tbNewData->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNewData->Location = System::Drawing::Point(46, 296);
			this->tbNewData->Name = L"tbNewData";
			this->tbNewData->Size = System::Drawing::Size(643, 43);
			this->tbNewData->TabIndex = 3;
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Location = System::Drawing::Point(46, 367);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(118, 51);
			this->btnSave->TabIndex = 4;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &EditAccount::btnSave_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(571, 367);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(118, 51);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &EditAccount::btnCancel_Click);
			// 
			// btnSelect
			// 
			this->btnSelect->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(193)), static_cast<System::Int32>(static_cast<System::Byte>(211)),
				static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->btnSelect->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSelect->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSelect->Location = System::Drawing::Point(571, 179);
			this->btnSelect->Name = L"btnSelect";
			this->btnSelect->Size = System::Drawing::Size(118, 51);
			this->btnSelect->TabIndex = 6;
			this->btnSelect->Text = L"Select";
			this->btnSelect->UseVisualStyleBackColor = false;
			this->btnSelect->Click += gcnew System::EventHandler(this, &EditAccount::btnSelect_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(29, 22);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(690, 70);
			this->panel2->TabIndex = 9;
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
			this->label4->Text = L"Edit Information";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EditAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(743, 455);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnSelect);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->tbNewData);
			this->Controls->Add(this->lbChange);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbChange);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Name = L"EditAccount";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"EditAccount";
			this->Load += gcnew System::EventHandler(this, &EditAccount::EditAccount_Load);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditAccount_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public:String^ dataChange;
	private: System::Void cmbChange_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//String^ dataChange = cmbChange->Text;

	}
	private: System::Void btnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cmbChange->Text == nullptr || String::IsNullOrWhiteSpace(cmbChange->Text->ToString()))
		{
			MessageBox::Show("You must pick one of the given options", "Invalid Option", MessageBoxButtons::OK);
			return;
		}
		dataChange = cmbChange->Text;
		lbChange->Text = "Enter new " + dataChange + ": ";


	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cmbChange->Text == nullptr || String::IsNullOrWhiteSpace(cmbChange->Text->ToString()))
		{
			MessageBox::Show("You must pick one of the given options", "Invalid Option", MessageBoxButtons::OK);
			return;
		}
		String^ dataChange = cmbChange->Text;
		String^ newData = tbNewData->Text;
		String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		try {
			if (dataChange == "Name") {
				String^ sqlQuery4 = "UPDATE teachers SET [Name] = @name WHERE [TeacherID]=@teacherID";
				SqlCommand command4(sqlQuery4, % sqlConn);
				command4.Parameters->AddWithValue("@name", tbNewData->Text);
				command4.Parameters->AddWithValue("@teacherID", teacher->getTeacherID());

				command4.ExecuteNonQuery();
			}
			else if (dataChange == "Email") {
				String^ sqlQuery4 = "UPDATE teachers SET [Email] = @email WHERE [TeacherID]=@teacherID";
				SqlCommand command4(sqlQuery4, % sqlConn);
				command4.Parameters->AddWithValue("@email", tbNewData->Text);
				command4.Parameters->AddWithValue("@teacherID", teacher->getTeacherID());

				command4.ExecuteNonQuery();

			}
			else if (dataChange == "Password") {
				String^ sqlQuery4 = "UPDATE teachers SET [Password] = @password WHERE [TeacherID]=@teacherID";
				SqlCommand command4(sqlQuery4, % sqlConn);
				command4.Parameters->AddWithValue("@password", tbNewData->Text);
				command4.Parameters->AddWithValue("@teacherID", teacher->getTeacherID());

				command4.ExecuteNonQuery();

			}
			else
			{
				MessageBox::Show("You must pick one of the given options", "Invalid Option", MessageBoxButtons::OK);
				return;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to update teacher info in table.", "Teacher Information Update Failure", MessageBoxButtons::OK);
			this->Close();
		}
		MessageBox::Show("Successfully changed information", "Information Changed", MessageBoxButtons::OK);
		this->Close();
	}

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
