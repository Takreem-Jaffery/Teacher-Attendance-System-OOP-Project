#pragma once
#include "Student.h"
//#include "MainForm.h"

//using namespace LoginSignup;
namespace TeacherAttendanceSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MarkingAttendance
	/// </summary>
	/// 
	delegate void FormClosedEventHandler(System::Object^ sender, FormClosedEventArgs^ e);

	public ref class MarkingAttendance : public System::Windows::Forms::Form
	{
	public:
		Student^ student;
	private: System::Windows::Forms::ComboBox^ cmbCourses;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	public:
		Teacher^ teacher;
		//MainForm^ mainForm=nullptr;// = gcnew MainForm();
	public:
		MarkingAttendance(Student^ student, Teacher^ teacher)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			/*this->MdiParent = mainForm;*/
			this->student = student;
			this->teacher = teacher;
	
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MarkingAttendance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvAttendance;



	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColIndex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColRoll;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ ColStatus;
	private: System::Windows::Forms::Label^ lbCourseID;

	private: System::Windows::Forms::Button^ btnEnter;



	protected:




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
			this->dgvAttendance = (gcnew System::Windows::Forms::DataGridView());
			this->ColIndex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColRoll = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColStatus = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->lbCourseID = (gcnew System::Windows::Forms::Label());
			this->btnEnter = (gcnew System::Windows::Forms::Button());
			this->cmbCourses = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAttendance))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvAttendance
			// 
			this->dgvAttendance->AllowUserToAddRows = false;
			this->dgvAttendance->AllowUserToDeleteRows = false;
			this->dgvAttendance->AllowUserToResizeColumns = false;
			this->dgvAttendance->AllowUserToResizeRows = false;
			this->dgvAttendance->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->dgvAttendance->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAttendance->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ColIndex,
					this->ColName, this->ColRoll, this->ColStatus
			});
			this->dgvAttendance->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvAttendance->Location = System::Drawing::Point(28, 174);
			this->dgvAttendance->Name = L"dgvAttendance";
			this->dgvAttendance->RowHeadersWidth = 51;
			this->dgvAttendance->RowTemplate->Height = 30;
			this->dgvAttendance->Size = System::Drawing::Size(686, 312);
			this->dgvAttendance->TabIndex = 0;
			this->dgvAttendance->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MarkingAttendance::dataGridView1_CellContentClick);
			this->dgvAttendance->RowPostPaint += gcnew System::Windows::Forms::DataGridViewRowPostPaintEventHandler(this, &MarkingAttendance::dgvAttendance_RowPostPaint);
			// 
			// ColIndex
			// 
			this->ColIndex->HeaderText = L"No.";
			this->ColIndex->MinimumWidth = 6;
			this->ColIndex->Name = L"ColIndex";
			this->ColIndex->ReadOnly = true;
			this->ColIndex->Width = 70;
			// 
			// ColName
			// 
			this->ColName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ColName->DataPropertyName = L"Name";
			this->ColName->HeaderText = L"Name";
			this->ColName->MinimumWidth = 6;
			this->ColName->Name = L"ColName";
			this->ColName->ReadOnly = true;
			// 
			// ColRoll
			// 
			this->ColRoll->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->ColRoll->DataPropertyName = L"RollNumber";
			this->ColRoll->HeaderText = L"Roll Number";
			this->ColRoll->MinimumWidth = 6;
			this->ColRoll->Name = L"ColRoll";
			this->ColRoll->ReadOnly = true;
			this->ColRoll->Width = 200;
			// 
			// ColStatus
			// 
			this->ColStatus->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->ColStatus->DataPropertyName = L"Status";
			this->ColStatus->HeaderText = L"Status";
			this->ColStatus->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"-Select-", L"P", L"A", L"L", L"O" });
			this->ColStatus->MinimumWidth = 6;
			this->ColStatus->Name = L"ColStatus";
			this->ColStatus->Width = 101;
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Location = System::Drawing::Point(28, 507);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(145, 44);
			this->btnSave->TabIndex = 1;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &MarkingAttendance::btnSave_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Location = System::Drawing::Point(567, 507);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(146, 44);
			this->btnCancel->TabIndex = 2;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MarkingAttendance::btnCancel_Click);
			// 
			// lbCourseID
			// 
			this->lbCourseID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCourseID->Location = System::Drawing::Point(19, 111);
			this->lbCourseID->Name = L"lbCourseID";
			this->lbCourseID->Size = System::Drawing::Size(154, 38);
			this->lbCourseID->TabIndex = 4;
			this->lbCourseID->Text = L"Course ID";
			// 
			// btnEnter
			// 
			this->btnEnter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnEnter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->btnEnter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEnter->Location = System::Drawing::Point(567, 106);
			this->btnEnter->Name = L"btnEnter";
			this->btnEnter->Size = System::Drawing::Size(147, 43);
			this->btnEnter->TabIndex = 6;
			this->btnEnter->Text = L"Enter";
			this->btnEnter->UseVisualStyleBackColor = false;
			this->btnEnter->Click += gcnew System::EventHandler(this, &MarkingAttendance::btnEnter_Click);
			// 
			// cmbCourses
			// 
			this->cmbCourses->FormattingEnabled = true;
			this->cmbCourses->Location = System::Drawing::Point(172, 108);
			this->cmbCourses->Name = L"cmbCourses";
			this->cmbCourses->Size = System::Drawing::Size(365, 39);
			this->cmbCourses->TabIndex = 7;
			this->cmbCourses->SelectedIndexChanged += gcnew System::EventHandler(this, &MarkingAttendance::cmbCourses_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(28, 22);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(690, 70);
			this->panel2->TabIndex = 8;
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
			this->label1->Text = L"Mark Attendance";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MarkingAttendance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(743, 578);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->cmbCourses);
			this->Controls->Add(this->btnEnter);
			this->Controls->Add(this->lbCourseID);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->dgvAttendance);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(570, 250);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MarkingAttendance";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"MarkingAttendance";
			this->Load += gcnew System::EventHandler(this, &MarkingAttendance::MarkingAttendance_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAttendance))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		public:
			event System::Windows::Forms::FormClosedEventHandler^ FormClosed;
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: void populateDataGridView() {
		SqlConnection^ sqlConn = gcnew SqlConnection();
		sqlConn->ConnectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
		sqlConn->Open();

		////new code starts
		//String^ course = student->getCourseID();
		//String^ teacherID = student->getTeacherID();

		//SqlCommand^ cmd = sqlConn->CreateCommand();
		//cmd->CommandType = CommandType::Text;
		//cmd->CommandText = "SELECT [Name],[RollNumber] FROM students WHERE [CourseID]=@course AND [TeacherID]=@teacherID;";
		//cmd->Parameters->AddWithValue("@course", course);
		//cmd->Parameters->AddWithValue("@teacherID", teacher->getTeacherID());
		//cmd->ExecuteNonQuery();

		//DataTable^ dt = gcnew DataTable();
		//SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
		//da->Fill(dt);

		///*dgvAttendance->Columns->Add("Name", "Name");
		//dgvAttendance->Columns->Add("RollNumber", "Roll Number");*/

		//for each (DataRow ^ row in dt->Rows)
		//{
		//	dgvAttendance->Rows->Add(row["Name"], row["RollNumber"]);
		//}
		//// new code ends
		String^ course = student->getCourseID();
		String^ teacherID = student->getTeacherID();

		SqlCommand^ cmd = sqlConn->CreateCommand();
		cmd->CommandType = CommandType::Text;
		cmd->CommandText = "SELECT [Name],[RollNumber] FROM students WHERE [CourseID]=@course AND [TeacherID]=@teacherID";
		cmd->Parameters->AddWithValue("@course", course);
		cmd->Parameters->AddWithValue("@teacherID", teacherID);
		cmd->ExecuteNonQuery();
		DataTable^ dt = gcnew DataTable();
		SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
		da->Fill(dt);
		dgvAttendance->DataSource = dt;

		return;
	}
	public: bool buttonClicked = false;

	private: System::Void MarkingAttendance_Load(System::Object^ sender, System::EventArgs^ e) {

		//NEW EDITS 
		//ADDED THIS
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
			cmbCourses->Items->Add(DR[0]);

		}
		//TILL HERE


	}



		   //public: Teacher^ teacher = nullptr; //should be taken from log in
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		//hardcoding for now
		if (buttonClicked == false) {
			MessageBox::Show("Please enter the Course ID and mark attendance to save.", "Failed to save.", MessageBoxButtons::OK);
			return;
		}
		//teacher = gcnew Teacher("Ello Jello", "ej@gmail.com", "22L-7999", "123123", "03/05/2023");
		String^ status;


		for each (DataGridViewRow ^ rw in this->dgvAttendance->Rows)
		{
			for (int i = 0; i < rw->Cells->Count; i++)
			{
				if (rw->Cells[i]->Value == nullptr || rw->Cells[i]->Value == DBNull::Value || String::IsNullOrWhiteSpace(rw->Cells[i]->Value->ToString()) || rw->Cells[i]->Value->ToString() == "-Select-")
				{
					MessageBox::Show("You have to fill out all the attendance. Some values left unmarked.", "Unmarked Values", MessageBoxButtons::OK);
					return;
				}
			}
		}


		for each (DataGridViewRow ^ dgvRow in this->dgvAttendance->Rows)
		{

			if (dgvAttendance->CurrentRow->Cells["ColStatus"]->Value != nullptr) {
				status = dgvRow->Cells["ColStatus"]->Value->ToString();
				String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();



				String^ sqlQuery = "SELECT TABLE_NAME FROM INFORMATION_SCHEMA.COLUMNS WHERE COLUMN_NAME=@date";
				SqlCommand  command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@date", teacher->getDate());
				SqlDataReader^ reader = command.ExecuteReader();

				if (reader->Read()) {
					reader->Close();
					//DO NOTHING
				}
				else
				{//add a col for that date
					reader->Close();
					String^ sqlQuery0 = "ALTER TABLE attendance ADD [" + teacher->getDate()->ToString() + "] VARCHAR(1) NOT NULL DEFAULT '-'";
					SqlCommand  command0(sqlQuery0, % sqlConn);
					command0.ExecuteNonQuery();
				}


				//checking if the teacher has already taken this classes attendance then to continue on from there
				String^ sqlQuery2 = "SELECT * FROM attendance WHERE [TeacherID]=@teacherID AND [CourseID]=@course";
				SqlCommand  command2(sqlQuery2, % sqlConn);
				command2.Parameters->AddWithValue("@teacherID", teacher->getTeacherID()->ToString());
				command2.Parameters->AddWithValue("@course", student->getCourseID()->ToString());

				SqlDataReader^ reader2 = command2.ExecuteReader();
				if (reader2->Read()) {
					reader2->Close();
					String^ sqlQuery3 = "SELECT * FROM attendance WHERE [RollNumber]=@roll AND [TeacherID]=@teacherID AND [CourseID]=@course ";
					SqlCommand  command3(sqlQuery3, % sqlConn);
					command3.Parameters->AddWithValue("@roll", dgvRow->Cells["ColRoll"]->Value->ToString());
					command3.Parameters->AddWithValue("@teacherID", teacher->getTeacherID()->ToString());
					command3.Parameters->AddWithValue("@course", student->getCourseID()->ToString());
					SqlDataReader^ reader3 = command3.ExecuteReader();

					if (reader3->Read()) {
						reader3->Close();
						//the student exists so I can just update the already existing row with the value in the new row
						try {
							String^ sqlQuery4 = "UPDATE attendance SET [" + teacher->getDate()->ToString() + "] = @status WHERE [RollNumber]=@roll";

							SqlCommand command4(sqlQuery4, % sqlConn);
							command4.Parameters->AddWithValue("@status", status);
							command4.Parameters->AddWithValue("@roll", dgvRow->Cells["ColRoll"]->Value->ToString());

							command4.ExecuteNonQuery();

						}
						catch (Exception^ ex) {
							MessageBox::Show("Failed to update attendance in table.", "Attendance Update Failure", MessageBoxButtons::OK);
						}
					}
					else {
						reader3->Close();
						//add new row of student data along with section and teacher ID and all
						try {
							String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
							SqlConnection sqlConn(connString);
							sqlConn.Open();

							String^ sqlQuery5 = "INSERT INTO attendance " + "([TeacherID], [RollNumber],[CourseID],[" + teacher->getDate()->ToString() + "]) VALUES " + "(@teacherID, @roll, @courseID, @status); ";

							SqlCommand command5(sqlQuery5, % sqlConn);
							command5.Parameters->AddWithValue("@teacherID", teacher->getTeacherID()->ToString());
							command5.Parameters->AddWithValue("@roll", dgvRow->Cells["ColRoll"]->Value->ToString());
							command5.Parameters->AddWithValue("@courseID", student->getCourseID()->ToString());
							command5.Parameters->AddWithValue("@status", status);

							command5.ExecuteNonQuery();

						}
						catch (Exception^ ex) {
							MessageBox::Show("Failed to add new row in attendance table.", "Attendance Adding Failure", MessageBoxButtons::OK);

						}
					}

				}
				else
				{
					reader2->Close();
					try {

						String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
						SqlConnection sqlConn(connString);
						sqlConn.Open();

						String^ sqlQuery5 = "INSERT INTO attendance " + "([TeacherID], [RollNumber],[CourseID],[" + teacher->getDate()->ToString() + "]) VALUES " + "(@teacherID, @roll, @courseID, @status); ";

						SqlCommand command5(sqlQuery5, % sqlConn);
						command5.Parameters->AddWithValue("@teacherID", teacher->getTeacherID()->ToString());
						command5.Parameters->AddWithValue("@roll", dgvRow->Cells["ColRoll"]->Value->ToString());
						command5.Parameters->AddWithValue("@courseID", student->getCourseID()->ToString());
						command5.Parameters->AddWithValue("@status", status);

						command5.ExecuteNonQuery();


					}
					catch (Exception^ ex) {
						MessageBox::Show("Failed to add new row in attendance table.", "Attendance Adding Failure", MessageBoxButtons::OK);

					}
				}
			}
			else
			{
				MessageBox::Show("You have to fill out all the attendance. Some values left unmarked.", "Unmarked Values", MessageBoxButtons::OK);
				return;
			}

		}
		dgvAttendance->ReadOnly = true;
		MessageBox::Show("Successfully saved student attendance.", "Attendance Saved.", MessageBoxButtons::OK);
		this->Close();
	}


	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void dgvAttendance_RowPostPaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPostPaintEventArgs^ e) {
		this->dgvAttendance->Rows[e->RowIndex]->Cells["ColIndex"]->Value = (e->RowIndex + 1).ToString();

	}

	private: System::Void btnEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ courseID = cmbCourses->Text;
		String^ teacherID = teacher->getTeacherID();

		if (courseID->Length == 0) {
			MessageBox::Show("Course ID not entered.", "No data entered", MessageBoxButtons::OK);
			return;
		}
		/*try*/ {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM students WHERE [CourseID]=@course AND [TeacherID]=@teacherID";
			SqlCommand  command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@course", courseID);
			command.Parameters->AddWithValue("@teacherID", teacherID);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {

				student = gcnew Student;
				student->setRollNo(reader->GetString(0));
				student->setTeacherID(reader->GetString(1));
				student->setName(reader->GetString(2));
				student->setCourseID(reader->GetString(3));
				student->setEmail(reader->GetString(4));
				student->setWarning(reader->GetInt32(5));
				buttonClicked = true;

				if (buttonClicked == true) {
					populateDataGridView();
				}

				return;

			}
			else {
				MessageBox::Show("Course ID is incorrect", "Course ID Error", MessageBoxButtons::OK);
			}
		}
		/*catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database", "Database connection error", MessageBoxButtons::OK);
		}*/
	}
	private: System::Void cmbCourses_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};

}
