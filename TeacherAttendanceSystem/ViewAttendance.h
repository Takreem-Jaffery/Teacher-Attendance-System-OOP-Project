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
	/// Summary for ViewAttendance
	/// </summary>
	public ref class ViewAttendance : public System::Windows::Forms::Form
	{
	public:
		Teacher^ teacher = nullptr;
	private: System::Windows::Forms::Button^ btnDone;
	private: System::Windows::Forms::ComboBox^ cmbCourse;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	public:
		Student^ student = nullptr;
		ViewAttendance(Teacher^ teacher, Student^ student)
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
		~ViewAttendance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cmbOption;

	private: System::Windows::Forms::DataGridView^ dgvView;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbOption = (gcnew System::Windows::Forms::ComboBox());
			this->dgvView = (gcnew System::Windows::Forms::DataGridView());
			this->btnDone = (gcnew System::Windows::Forms::Button());
			this->cmbCourse = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvView))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(582, 138);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Select";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ViewAttendance::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Options";
			this->label1->Click += gcnew System::EventHandler(this, &ViewAttendance::label1_Click);
			// 
			// cmbOption
			// 
			this->cmbOption->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbOption->FormattingEnabled = true;
			this->cmbOption->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Today", L"Previous Week", L"Previous Month" });
			this->cmbOption->Location = System::Drawing::Point(34, 150);
			this->cmbOption->Name = L"cmbOption";
			this->cmbOption->Size = System::Drawing::Size(194, 45);
			this->cmbOption->TabIndex = 2;
			// 
			// dgvView
			// 
			this->dgvView->AllowUserToAddRows = false;
			this->dgvView->AllowUserToDeleteRows = false;
			this->dgvView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvView->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvView->Location = System::Drawing::Point(32, 214);
			this->dgvView->Name = L"dgvView";
			this->dgvView->ReadOnly = true;
			this->dgvView->RowHeadersWidth = 51;
			this->dgvView->RowTemplate->Height = 24;
			this->dgvView->Size = System::Drawing::Size(684, 265);
			this->dgvView->TabIndex = 3;
			this->dgvView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewAttendance::dgvView_CellContentClick);
			// 
			// btnDone
			// 
			this->btnDone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnDone->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDone->Location = System::Drawing::Point(580, 494);
			this->btnDone->Name = L"btnDone";
			this->btnDone->Size = System::Drawing::Size(134, 49);
			this->btnDone->TabIndex = 4;
			this->btnDone->Text = L"Done";
			this->btnDone->UseVisualStyleBackColor = false;
			this->btnDone->Click += gcnew System::EventHandler(this, &ViewAttendance::btnDone_Click);
			// 
			// cmbCourse
			// 
			this->cmbCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbCourse->FormattingEnabled = true;
			this->cmbCourse->Location = System::Drawing::Point(320, 150);
			this->cmbCourse->Name = L"cmbCourse";
			this->cmbCourse->Size = System::Drawing::Size(189, 45);
			this->cmbCourse->TabIndex = 5;
			this->cmbCourse->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewAttendance::cmbCourse_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(313, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 38);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Course";
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(30, 494);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(134, 49);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ViewAttendance::btnCancel_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(32, 22);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(690, 70);
			this->panel2->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-5, 12);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(717, 36);
			this->label3->TabIndex = 1;
			this->label3->Text = L"View Attendance";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ViewAttendance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(743, 561);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbCourse);
			this->Controls->Add(this->btnDone);
			this->Controls->Add(this->dgvView);
			this->Controls->Add(this->cmbOption);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"ViewAttendance";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"ViewAttendance";
			this->Load += gcnew System::EventHandler(this, &ViewAttendance::ViewAttendance_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvView))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: String^ Selection() {
		return cmbOption->Text;
	}
	private: void calcWeekStart(int& days, int& months, int& years) {
		if (days < 7) {
			//need to go to previous month
			if (months == 1) {
				//need to go to the previous year
				years--;
				months = 12;

			}
			else
				months--;
			if (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12)
				days = 32 + (days - 7);
			else if (months == 2) {
				if (years % 4 == 0 && years % 100 == 1 || years % 4 == 0 && years % 400 == 0) {
					//leap year so feb has 29 days
					days = 30 + (days - 7);
				}
				else
					days = 29 + (days - 7);
			}
			else
				days = 31 + (days - 7);
		}
	}
	private: void dayAdd(int& days, int& months, int& years) {
		if (days < 31 && (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12)) {
			days++;
		}
		else if (days < 28 && months == 2 && !(years % 4 == 0 && years % 100 == 1 || years % 4 == 0 && years % 400 == 0))
		{
			days++;
		}
		else if (days < 29 && months == 2 && (years % 4 == 0 && years % 100 == 1 || years % 4 == 0 && years % 400 == 0)) {
			days++;
		}
		else if (days < 30 && (months == 4 || months == 6 || months == 9 || months == 11)) {
			days++;
		}
		else {
			days = 1;
			if (months < 12)
				months++;
			else
			{
				months = 1;
				years++;
			}
		}

	}
	private: int countDigit(int n)
	{
		if (n == 0)
			return 1;
		int count = 0;
		while (n != 0) {
			n = n / 10;
			++count;
		}
		return count;
	}
	private: void calcMonthStart(int& days, int& months, int& years) {
		if (months > 1) {
			months--;
		}
		else {
			months = 12;
			years--;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Selection() == nullptr || String::IsNullOrWhiteSpace(Selection()) || cmbCourse->Text == nullptr || String::IsNullOrWhiteSpace(cmbCourse->Text)) {
			MessageBox::Show("Please select a value to proceed", "No Value Selected", MessageBoxButtons::OK);
			return;
		}

		if (Selection() == "Today") {
			String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
			SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter();
			String^ sqlQuery = "SELECT students.Name,attendance.[RollNumber], [" + teacher->getDate()->ToString() + "] FROM students INNER JOIN attendance ON students.[RollNumber]=attendance.[RollNumber] AND attendance.[TeacherID] = students.[TeacherID] AND attendance.[CourseID] = students.[CourseID] WHERE attendance.[TeacherID] = @teacherID AND attendance.[CourseID] = @course";
			sqlDa->SelectCommand = gcnew SqlCommand(sqlQuery, gcnew SqlConnection(connectionString));
			sqlDa->SelectCommand->Parameters->AddWithValue("@teacherID", teacher->getTeacherID()->ToString());
			sqlDa->SelectCommand->Parameters->AddWithValue("@course", cmbCourse->Text);

			DataTable^ dtblDay = gcnew DataTable();
			sqlDa->Fill(dtblDay);
			dgvView->Columns->Clear();
			dgvView->DataSource = dtblDay;
			return;

		}
		else if (Selection() == "Previous Week") {
			String^ dateEntered = teacher->getDate();
			String^ date = nullptr;
			int days = 0; int dnum = 10, mnum = 10, ynum = 1000, count = 0;
			int months = 0; int years = 0;
			//need to take into consideration the beggining and end of months and even years....

			//dont ask why but an entire date converter and calculator 
			for (int i = 0; i < dateEntered->Length; i++) {
				if (dateEntered[i] != '/') {
					if (count == 0) { //days
						days += Convert::ToInt32(dateEntered[i].ToString()) * dnum;
						dnum /= 10; // I know its oly a 2 digit number 
					}
					else if (count == 1) { //months
						months += Convert::ToInt32(dateEntered[i].ToString()) * mnum;
						mnum /= 10;
					}
					else {
						years += Convert::ToInt32(dateEntered[i].ToString()) * ynum;
						ynum /= 10;
					}
				}
				else
				{
					count++;
				}
			}

			calcWeekStart(days, months, years);

			//add the other cols first then the att col in a loop
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
			SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter();
			String^ sqlQuery1 = "SELECT students.Name,attendance.[RollNumber]";// FROM students INNER JOIN attendance ON students.[Roll Number] = attendance.[Roll Number] AND attendance.[Teacher ID] = students.[Teacher ID] AND attendance.[Course ID] = students.[Course ID] WHERE attendance.[Teacher ID] = @teacherID AND attendance.[Course ID] = @course";
			//sqlDa->SelectCommand = gcnew SqlCommand(sqlQuery1, gcnew SqlConnection(connString));
			String^ sqlQueryFinal = sqlQuery1;


			DataTable^ dtblWeek = gcnew DataTable();
			//sqlDa->Fill(dtbl);
			//dgvView->DataSource = dtbl; include thhis line in the end when Ive added everything to the Data Table

			for (int i = 0; i < 7; i++) {
				date = "";
				if (countDigit(days) == 2)
					date += days.ToString();
				else
					date += "0" + days.ToString();
				date += "/";
				if (countDigit(months) == 2)
					date += months.ToString();
				else
					date += "0" + months.ToString();
				date += "/" + years.ToString();

				try {
					SqlConnection sqlConn(connString);
					sqlConn.Open();

					String^ sqlQuery = "SELECT [" + date + "] FROM attendance";
					SqlCommand  command(sqlQuery, % sqlConn);
					SqlDataReader^ reader = command.ExecuteReader();

					if (reader->Read()) {
						String^ sqlQuery2 = ",[" + date + "]";
						sqlQueryFinal += sqlQuery2;

						dayAdd(days, months, years);

					}
					sqlConn.Close();
				}
				catch (Exception^ e)
				{
					//sqlConn.Close();
					dayAdd(days, months, years);
				}
			}
			sqlQueryFinal += " FROM students INNER JOIN attendance ON students.[RollNumber] = attendance.[RollNumber] AND attendance.[TeacherID] = students.[TeacherID] AND attendance.[CourseID] = students.[CourseID] WHERE attendance.[TeacherID] = @teacherID AND attendance.[CourseID] = @course";
			sqlDa->SelectCommand = gcnew SqlCommand(sqlQueryFinal, gcnew SqlConnection(connString));
			sqlDa->SelectCommand->Parameters->AddWithValue("@teacherID", teacher->getTeacherID()->ToString());
			sqlDa->SelectCommand->Parameters->AddWithValue("@course", cmbCourse->Text);

			sqlDa->Fill(dtblWeek);
			dgvView->Columns->Clear();
			dgvView->DataSource = dtblWeek;
			return;
		}
		else
		{
			String^ dateEntered = teacher->getDate();
			String^ date = nullptr;
			int days = 0, dnum = 10, mnum = 10, ynum = 1000, count = 0;
			int months = 0, years = 0;
			//need to take into consideration the beggining and end of months and even years....

			//dont ask why but an entire date converter and calculator 
			for (int i = 0; i < dateEntered->Length; i++) {
				if (dateEntered[i] != '/') {
					if (count == 0) { //days
						days += Convert::ToInt32(dateEntered[i].ToString()) * dnum;
						dnum /= 10; // I know its only a 2 digit number 
					}
					else if (count == 1) { //months
						months += Convert::ToInt32(dateEntered[i].ToString()) * mnum;
						mnum /= 10;
					}
					else {
						years += Convert::ToInt32(dateEntered[i].ToString()) * ynum;
						ynum /= 10;
					}
				}
				else
				{
					count++;
				}
			}

			calcMonthStart(days, months, years);


			//add the other cols first then the att col in a loop
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
			SqlDataAdapter^ sqlDa = gcnew SqlDataAdapter();
			String^ sqlQuery1 = "SELECT students.Name,attendance.[RollNumber]";// FROM students INNER JOIN attendance ON students.[Roll Number] = attendance.[Roll Number] AND attendance.[Teacher ID] = students.[Teacher ID] AND attendance.[Course ID] = students.[Course ID] WHERE attendance.[Teacher ID] = @teacherID AND attendance.[Course ID] = @course";
			//sqlDa->SelectCommand = gcnew SqlCommand(sqlQuery1, gcnew SqlConnection(connString));
			String^ sqlQueryFinal = sqlQuery1;


			DataTable^ dtblMonth = gcnew DataTable();
			//sqlDa->Fill(dtbl);
			//dgvView->DataSource = dtbl; include thhis line in the end when Ive added everything to the Data Table

			for (int i = 0; date != dateEntered; i++) {
				date = "";
				if (countDigit(days) == 2)
					date += days.ToString();
				else
					date += "0" + days.ToString();
				date += "/";
				if (countDigit(months) == 2)
					date += months.ToString();
				else
					date += "0" + months.ToString();
				date += "/" + years.ToString();

				try {
					SqlConnection sqlConn(connString);
					sqlConn.Open();

					String^ sqlQuery = "SELECT [" + date + "] FROM attendance";
					SqlCommand  command(sqlQuery, % sqlConn);
					SqlDataReader^ reader = command.ExecuteReader();

					if (reader->Read()) {
						String^ sqlQuery2 = ",[" + date + "]";
						sqlQueryFinal += sqlQuery2;

						dayAdd(days, months, years);

					}
					sqlConn.Close();
				}
				catch (Exception^ e)
				{
					//sqlConn.Close();
					dayAdd(days, months, years);
				}
			}
			sqlQueryFinal += " FROM students INNER JOIN attendance ON students.[RollNumber] = attendance.[RollNumber] AND attendance.[TeacherID] = students.[TeacherID] AND attendance.[CourseID] = students.[CourseID] WHERE attendance.[TeacherID] = @teacherID AND attendance.[CourseID] = @course";
			sqlDa->SelectCommand = gcnew SqlCommand(sqlQueryFinal, gcnew SqlConnection(connString));
			sqlDa->SelectCommand->Parameters->AddWithValue("@teacherID", teacher->getTeacherID()->ToString());
			sqlDa->SelectCommand->Parameters->AddWithValue("@course", cmbCourse->Text);

			sqlDa->Fill(dtblMonth);
			dgvView->Columns->Clear();
			dgvView->DataSource = dtblMonth;
			return;
		}
	}
	private: System::Void ViewAttendance_Load(System::Object^ sender, System::EventArgs^ e) {

		//String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=teacher attendance;Integrated Security=True";
		SqlConnection^ sqlConn = gcnew SqlConnection();
		sqlConn->ConnectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
		sqlConn->Open();
		SqlCommand^ cmd = sqlConn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "SELECT [CourseID] FROM courses WHERE [TeacherID]=@teacherID";
		cmd->Parameters->AddWithValue("@teacherID", teacher->getTeacherID());
		/*	SqlConnection^ conn = gcnew SqlConnection(connString);
			conn->Open();*/
		SqlDataReader^ DR = cmd->ExecuteReader();

		while (DR->Read())
		{
			cmbCourse->Items->Add(DR[0]);

		}
	}
	private: System::Void dgvView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btnDone_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cmbCourse_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
