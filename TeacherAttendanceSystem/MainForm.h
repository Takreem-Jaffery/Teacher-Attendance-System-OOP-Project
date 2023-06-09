#pragma once

//INCLUDE YOUR WINDOWS FORM HEADERFILE HERE
#include "Student.h"
#include "MarkingAttendance.h"
#include "ViewAttendance.h"
#include "GetDate.h"
#include "AddReminder.h"
#include "DisplayReminder.h"
#include "DeleteReminder.h"
#include "AddStudentForm.h"
#include "AddCourseForm.h"
#include "DeleteStudentForm.h"
#include "DeleteACourseForm.h"
#include "EditAccount.h"
#include "Warning.h"

namespace TeacherAttendanceSystem {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		// ****************
		//	TJ NOTE:
		//	if you want to use any variables of our ACTUAL classes do them here so that they become global variables 
		//	to be used consistently throughout all functions
		//
		//	ALSO the teacher obj here is being copied from main as the teacher logs in or signs up. 
		//	The date variable is filled upon loading home page (See line 697 to 701 for reference)
		//	|-->also I did make a seperate windows form just to take in the date shut up its nun of your business
		//
		//	***************

		Student^ student = nullptr; // if you want to make this a student array... go ahead but explain how to apply that logic to me

		Teacher^ teacher = nullptr;
		//declaring here but it will probably be chnaged or added to through the add student functions stuff;
		

		//array<Person^>^ people = gcnew array<Person^>(2);
		//people[0] = dynamic_cast<Person^>(teacher);
		//people[1] = dynamic_cast<Person^>(student);

	public:
		MainForm(Teacher^ teacher) //passed from program.cpp where I'm running log in and sign up
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
			this->teacher = teacher;
			lbUserName->Text = teacher->getName();
			lbUserEmail->Text = teacher->getEmail();
		}

	protected:

		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ btnHam;

	private: System::Windows::Forms::FlowLayoutPanel^ sidebarContainer;
	private: System::Windows::Forms::Button^ btnMarkAtt;

	private: System::Windows::Forms::Button^ btnStudentDetails;
	private: System::Windows::Forms::Button^ btnViewAtt;
	private: System::Windows::Forms::Button^ btnSetReminder;
	private: System::Windows::Forms::Button^ btnLogOut;

	private: System::Windows::Forms::FlowLayoutPanel^ studentContainer;
	private: System::Windows::Forms::Button^ btnAddStudent;
	private: System::Windows::Forms::Button^ btnDeleteStudent;

	private: System::Windows::Forms::Button^ btnDeleteReminder;
	private: System::Windows::Forms::Button^ btnDeleteCourse;

	private: System::Windows::Forms::Timer^ studentTransition;
	private: System::Windows::Forms::FlowLayoutPanel^ editAccountContainer;

	private: System::Windows::Forms::FlowLayoutPanel^ logOutContainer;

	private: System::Windows::Forms::FlowLayoutPanel^ reminderContainer;
	private: System::Windows::Forms::Button^ btnReminder;


	private: System::Windows::Forms::Timer^ reminderTransition;
	private: System::Windows::Forms::Button^ btnAddCourse;

	private: System::Windows::Forms::Button^ btnCourseDetails;
	private: System::Windows::Forms::FlowLayoutPanel^ courseContainer;

	private: System::Windows::Forms::Timer^ courseTransition;
	private: System::Windows::Forms::Timer^ sidebarTransition;
	private: System::Windows::Forms::FlowLayoutPanel^ attendanceContainer;
	private: System::Windows::Forms::Button^ btnAttendance;

	private: System::Windows::Forms::Timer^ attendanceTransition;
	private: System::Windows::Forms::Button^ btnEditAccount;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnWarning;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbUserName;
	private: System::Windows::Forms::Label^ lbUserEmail;
	private: System::Windows::Forms::Label^ label2;




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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnHam = (gcnew System::Windows::Forms::PictureBox());
			this->sidebarContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->attendanceContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnAttendance = (gcnew System::Windows::Forms::Button());
			this->btnMarkAtt = (gcnew System::Windows::Forms::Button());
			this->btnViewAtt = (gcnew System::Windows::Forms::Button());
			this->courseContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnCourseDetails = (gcnew System::Windows::Forms::Button());
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->btnDeleteCourse = (gcnew System::Windows::Forms::Button());
			this->studentContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnStudentDetails = (gcnew System::Windows::Forms::Button());
			this->btnAddStudent = (gcnew System::Windows::Forms::Button());
			this->btnDeleteStudent = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnWarning = (gcnew System::Windows::Forms::Button());
			this->reminderContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnReminder = (gcnew System::Windows::Forms::Button());
			this->btnSetReminder = (gcnew System::Windows::Forms::Button());
			this->btnDeleteReminder = (gcnew System::Windows::Forms::Button());
			this->editAccountContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnEditAccount = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->logOutContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->studentTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->reminderTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->courseTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->sidebarTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->attendanceTransition = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbUserName = (gcnew System::Windows::Forms::Label());
			this->lbUserEmail = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHam))->BeginInit();
			this->sidebarContainer->SuspendLayout();
			this->attendanceContainer->SuspendLayout();
			this->courseContainer->SuspendLayout();
			this->studentContainer->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->reminderContainer->SuspendLayout();
			this->editAccountContainer->SuspendLayout();
			this->logOutContainer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btnHam);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(901, 38);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Teacher Attendance System";
			// 
			// btnHam
			// 
			this->btnHam->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHam.Image")));
			this->btnHam->Location = System::Drawing::Point(12, 10);
			this->btnHam->Name = L"btnHam";
			this->btnHam->Size = System::Drawing::Size(23, 22);
			this->btnHam->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnHam->TabIndex = 1;
			this->btnHam->TabStop = false;
			this->btnHam->Click += gcnew System::EventHandler(this, &MainForm::btnHam_Click);
			// 
			// sidebarContainer
			// 
			this->sidebarContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->sidebarContainer->Controls->Add(this->attendanceContainer);
			this->sidebarContainer->Controls->Add(this->courseContainer);
			this->sidebarContainer->Controls->Add(this->studentContainer);
			this->sidebarContainer->Controls->Add(this->flowLayoutPanel1);
			this->sidebarContainer->Controls->Add(this->reminderContainer);
			this->sidebarContainer->Controls->Add(this->editAccountContainer);
			this->sidebarContainer->Controls->Add(this->logOutContainer);
			this->sidebarContainer->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebarContainer->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->sidebarContainer->Location = System::Drawing::Point(0, 38);
			this->sidebarContainer->Name = L"sidebarContainer";
			this->sidebarContainer->Size = System::Drawing::Size(42, 624);
			this->sidebarContainer->TabIndex = 1;
			this->sidebarContainer->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::flowLayoutPanel1_Paint);
			// 
			// attendanceContainer
			// 
			this->attendanceContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->attendanceContainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->attendanceContainer->Controls->Add(this->btnAttendance);
			this->attendanceContainer->Controls->Add(this->btnMarkAtt);
			this->attendanceContainer->Controls->Add(this->btnViewAtt);
			this->attendanceContainer->Location = System::Drawing::Point(0, 0);
			this->attendanceContainer->Margin = System::Windows::Forms::Padding(0);
			this->attendanceContainer->Name = L"attendanceContainer";
			this->attendanceContainer->Size = System::Drawing::Size(218, 54);
			this->attendanceContainer->TabIndex = 16;
			// 
			// btnAttendance
			// 
			this->btnAttendance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnAttendance->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAttendance->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAttendance->ForeColor = System::Drawing::Color::Black;
			this->btnAttendance->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAttendance.Image")));
			this->btnAttendance->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAttendance->Location = System::Drawing::Point(0, 0);
			this->btnAttendance->Margin = System::Windows::Forms::Padding(0);
			this->btnAttendance->Name = L"btnAttendance";
			this->btnAttendance->Size = System::Drawing::Size(218, 54);
			this->btnAttendance->TabIndex = 5;
			this->btnAttendance->Text = L"        Attendance";
			this->btnAttendance->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAttendance->UseVisualStyleBackColor = false;
			this->btnAttendance->Click += gcnew System::EventHandler(this, &MainForm::btnAttendance_Click);
			// 
			// btnMarkAtt
			// 
			this->btnMarkAtt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnMarkAtt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnMarkAtt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMarkAtt->ForeColor = System::Drawing::Color::Black;
			this->btnMarkAtt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMarkAtt.Image")));
			this->btnMarkAtt->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMarkAtt->Location = System::Drawing::Point(0, 54);
			this->btnMarkAtt->Margin = System::Windows::Forms::Padding(0);
			this->btnMarkAtt->Name = L"btnMarkAtt";
			this->btnMarkAtt->Size = System::Drawing::Size(218, 54);
			this->btnMarkAtt->TabIndex = 4;
			this->btnMarkAtt->Text = L"        Mark Attendance";
			this->btnMarkAtt->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMarkAtt->UseVisualStyleBackColor = false;
			this->btnMarkAtt->Click += gcnew System::EventHandler(this, &MainForm::btnMarkAtt_Click);
			// 
			// btnViewAtt
			// 
			this->btnViewAtt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnViewAtt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnViewAtt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnViewAtt->ForeColor = System::Drawing::Color::Black;
			this->btnViewAtt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnViewAtt.Image")));
			this->btnViewAtt->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnViewAtt->Location = System::Drawing::Point(0, 108);
			this->btnViewAtt->Margin = System::Windows::Forms::Padding(0);
			this->btnViewAtt->Name = L"btnViewAtt";
			this->btnViewAtt->Size = System::Drawing::Size(218, 58);
			this->btnViewAtt->TabIndex = 6;
			this->btnViewAtt->Text = L"        View Attendance";
			this->btnViewAtt->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnViewAtt->UseVisualStyleBackColor = false;
			this->btnViewAtt->Click += gcnew System::EventHandler(this, &MainForm::btnViewAtt_Click);
			// 
			// courseContainer
			// 
			this->courseContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->courseContainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->courseContainer->Controls->Add(this->btnCourseDetails);
			this->courseContainer->Controls->Add(this->btnAddCourse);
			this->courseContainer->Controls->Add(this->btnDeleteCourse);
			this->courseContainer->Location = System::Drawing::Point(0, 54);
			this->courseContainer->Margin = System::Windows::Forms::Padding(0);
			this->courseContainer->Name = L"courseContainer";
			this->courseContainer->Size = System::Drawing::Size(218, 54);
			this->courseContainer->TabIndex = 15;
			// 
			// btnCourseDetails
			// 
			this->btnCourseDetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnCourseDetails->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCourseDetails->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCourseDetails->ForeColor = System::Drawing::Color::Black;
			this->btnCourseDetails->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCourseDetails.Image")));
			this->btnCourseDetails->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCourseDetails->Location = System::Drawing::Point(0, 0);
			this->btnCourseDetails->Margin = System::Windows::Forms::Padding(0);
			this->btnCourseDetails->Name = L"btnCourseDetails";
			this->btnCourseDetails->Size = System::Drawing::Size(218, 54);
			this->btnCourseDetails->TabIndex = 14;
			this->btnCourseDetails->Text = L"        Course Details";
			this->btnCourseDetails->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCourseDetails->UseVisualStyleBackColor = false;
			this->btnCourseDetails->Click += gcnew System::EventHandler(this, &MainForm::btnCourseDetails_Click);
			// 
			// btnAddCourse
			// 
			this->btnAddCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnAddCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddCourse->ForeColor = System::Drawing::Color::Black;
			this->btnAddCourse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddCourse.Image")));
			this->btnAddCourse->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddCourse->Location = System::Drawing::Point(0, 54);
			this->btnAddCourse->Margin = System::Windows::Forms::Padding(0);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(218, 54);
			this->btnAddCourse->TabIndex = 10;
			this->btnAddCourse->Text = L"        Add Course";
			this->btnAddCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddCourse->UseVisualStyleBackColor = false;
			this->btnAddCourse->Click += gcnew System::EventHandler(this, &MainForm::btnAddCourse_Click_1);
			// 
			// btnDeleteCourse
			// 
			this->btnDeleteCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnDeleteCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteCourse->ForeColor = System::Drawing::Color::Black;
			this->btnDeleteCourse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteCourse.Image")));
			this->btnDeleteCourse->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDeleteCourse->Location = System::Drawing::Point(0, 108);
			this->btnDeleteCourse->Margin = System::Windows::Forms::Padding(0);
			this->btnDeleteCourse->Name = L"btnDeleteCourse";
			this->btnDeleteCourse->Size = System::Drawing::Size(218, 60);
			this->btnDeleteCourse->TabIndex = 11;
			this->btnDeleteCourse->Text = L"        Delete Course";
			this->btnDeleteCourse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDeleteCourse->UseVisualStyleBackColor = false;
			this->btnDeleteCourse->Click += gcnew System::EventHandler(this, &MainForm::btnDeleteCourse_Click_1);
			// 
			// studentContainer
			// 
			this->studentContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->studentContainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->studentContainer->Controls->Add(this->btnStudentDetails);
			this->studentContainer->Controls->Add(this->btnAddStudent);
			this->studentContainer->Controls->Add(this->btnDeleteStudent);
			this->studentContainer->Location = System::Drawing::Point(0, 108);
			this->studentContainer->Margin = System::Windows::Forms::Padding(0);
			this->studentContainer->Name = L"studentContainer";
			this->studentContainer->Size = System::Drawing::Size(218, 56);
			this->studentContainer->TabIndex = 5;
			// 
			// btnStudentDetails
			// 
			this->btnStudentDetails->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnStudentDetails->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnStudentDetails->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStudentDetails->ForeColor = System::Drawing::Color::Black;
			this->btnStudentDetails->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStudentDetails.Image")));
			this->btnStudentDetails->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStudentDetails->Location = System::Drawing::Point(0, 0);
			this->btnStudentDetails->Margin = System::Windows::Forms::Padding(0);
			this->btnStudentDetails->Name = L"btnStudentDetails";
			this->btnStudentDetails->Size = System::Drawing::Size(218, 55);
			this->btnStudentDetails->TabIndex = 5;
			this->btnStudentDetails->Text = L"        Student Details";
			this->btnStudentDetails->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnStudentDetails->UseVisualStyleBackColor = false;
			this->btnStudentDetails->Click += gcnew System::EventHandler(this, &MainForm::btnStudentDetails_Click);
			// 
			// btnAddStudent
			// 
			this->btnAddStudent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnAddStudent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAddStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddStudent->ForeColor = System::Drawing::Color::Black;
			this->btnAddStudent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddStudent.Image")));
			this->btnAddStudent->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddStudent->Location = System::Drawing::Point(0, 55);
			this->btnAddStudent->Margin = System::Windows::Forms::Padding(0);
			this->btnAddStudent->Name = L"btnAddStudent";
			this->btnAddStudent->Size = System::Drawing::Size(218, 54);
			this->btnAddStudent->TabIndex = 6;
			this->btnAddStudent->Text = L"        Add Student";
			this->btnAddStudent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddStudent->UseVisualStyleBackColor = false;
			this->btnAddStudent->Click += gcnew System::EventHandler(this, &MainForm::btnAddStudent_Click);
			// 
			// btnDeleteStudent
			// 
			this->btnDeleteStudent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnDeleteStudent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDeleteStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteStudent->ForeColor = System::Drawing::Color::Black;
			this->btnDeleteStudent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteStudent.Image")));
			this->btnDeleteStudent->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDeleteStudent->Location = System::Drawing::Point(0, 109);
			this->btnDeleteStudent->Margin = System::Windows::Forms::Padding(0);
			this->btnDeleteStudent->Name = L"btnDeleteStudent";
			this->btnDeleteStudent->Size = System::Drawing::Size(218, 54);
			this->btnDeleteStudent->TabIndex = 7;
			this->btnDeleteStudent->Text = L"        Delete Student";
			this->btnDeleteStudent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDeleteStudent->UseVisualStyleBackColor = false;
			this->btnDeleteStudent->Click += gcnew System::EventHandler(this, &MainForm::btnDeleteStudent_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->flowLayoutPanel1->Controls->Add(this->btnWarning);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 164);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(218, 56);
			this->flowLayoutPanel1->TabIndex = 14;
			// 
			// btnWarning
			// 
			this->btnWarning->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnWarning->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnWarning->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWarning->ForeColor = System::Drawing::Color::Black;
			this->btnWarning->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnWarning.Image")));
			this->btnWarning->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnWarning->Location = System::Drawing::Point(0, 0);
			this->btnWarning->Margin = System::Windows::Forms::Padding(0);
			this->btnWarning->Name = L"btnWarning";
			this->btnWarning->Size = System::Drawing::Size(218, 56);
			this->btnWarning->TabIndex = 11;
			this->btnWarning->Text = L"        Give Warning";
			this->btnWarning->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnWarning->UseVisualStyleBackColor = false;
			this->btnWarning->Click += gcnew System::EventHandler(this, &MainForm::btnWarning_Click);
			// 
			// reminderContainer
			// 
			this->reminderContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->reminderContainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->reminderContainer->Controls->Add(this->btnReminder);
			this->reminderContainer->Controls->Add(this->btnSetReminder);
			this->reminderContainer->Controls->Add(this->btnDeleteReminder);
			this->reminderContainer->Location = System::Drawing::Point(0, 220);
			this->reminderContainer->Margin = System::Windows::Forms::Padding(0);
			this->reminderContainer->Name = L"reminderContainer";
			this->reminderContainer->Size = System::Drawing::Size(218, 55);
			this->reminderContainer->TabIndex = 14;
			// 
			// btnReminder
			// 
			this->btnReminder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnReminder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReminder->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReminder->ForeColor = System::Drawing::Color::Black;
			this->btnReminder->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnReminder.Image")));
			this->btnReminder->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReminder->Location = System::Drawing::Point(0, 0);
			this->btnReminder->Margin = System::Windows::Forms::Padding(0);
			this->btnReminder->Name = L"btnReminder";
			this->btnReminder->Size = System::Drawing::Size(218, 54);
			this->btnReminder->TabIndex = 15;
			this->btnReminder->Text = L"        Reminders";
			this->btnReminder->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnReminder->UseVisualStyleBackColor = false;
			this->btnReminder->Click += gcnew System::EventHandler(this, &MainForm::btnReminder_Click_1);
			// 
			// btnSetReminder
			// 
			this->btnSetReminder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnSetReminder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSetReminder->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSetReminder->ForeColor = System::Drawing::Color::Black;
			this->btnSetReminder->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSetReminder.Image")));
			this->btnSetReminder->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSetReminder->Location = System::Drawing::Point(0, 54);
			this->btnSetReminder->Margin = System::Windows::Forms::Padding(0);
			this->btnSetReminder->Name = L"btnSetReminder";
			this->btnSetReminder->Size = System::Drawing::Size(218, 54);
			this->btnSetReminder->TabIndex = 7;
			this->btnSetReminder->Text = L"        Set Reminder";
			this->btnSetReminder->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSetReminder->UseVisualStyleBackColor = false;
			this->btnSetReminder->Click += gcnew System::EventHandler(this, &MainForm::btnSetReminder_Click);
			// 
			// btnDeleteReminder
			// 
			this->btnDeleteReminder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnDeleteReminder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteReminder->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteReminder->ForeColor = System::Drawing::Color::Black;
			this->btnDeleteReminder->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDeleteReminder.Image")));
			this->btnDeleteReminder->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDeleteReminder->Location = System::Drawing::Point(0, 108);
			this->btnDeleteReminder->Margin = System::Windows::Forms::Padding(0);
			this->btnDeleteReminder->Name = L"btnDeleteReminder";
			this->btnDeleteReminder->Size = System::Drawing::Size(218, 54);
			this->btnDeleteReminder->TabIndex = 9;
			this->btnDeleteReminder->Text = L"        Delete Reminder";
			this->btnDeleteReminder->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDeleteReminder->UseVisualStyleBackColor = false;
			this->btnDeleteReminder->Click += gcnew System::EventHandler(this, &MainForm::btnDeleteReminder_Click);
			// 
			// editAccountContainer
			// 
			this->editAccountContainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->editAccountContainer->Controls->Add(this->btnEditAccount);
			this->editAccountContainer->Controls->Add(this->button1);
			this->editAccountContainer->Location = System::Drawing::Point(0, 275);
			this->editAccountContainer->Margin = System::Windows::Forms::Padding(0);
			this->editAccountContainer->Name = L"editAccountContainer";
			this->editAccountContainer->Size = System::Drawing::Size(218, 54);
			this->editAccountContainer->TabIndex = 12;
			// 
			// btnEditAccount
			// 
			this->btnEditAccount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnEditAccount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditAccount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditAccount->ForeColor = System::Drawing::Color::Black;
			this->btnEditAccount->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEditAccount.Image")));
			this->btnEditAccount->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEditAccount->Location = System::Drawing::Point(0, 0);
			this->btnEditAccount->Margin = System::Windows::Forms::Padding(0);
			this->btnEditAccount->Name = L"btnEditAccount";
			this->btnEditAccount->Size = System::Drawing::Size(218, 56);
			this->btnEditAccount->TabIndex = 9;
			this->btnEditAccount->Text = L"        Edit Account";
			this->btnEditAccount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEditAccount->UseVisualStyleBackColor = false;
			this->btnEditAccount->Click += gcnew System::EventHandler(this, &MainForm::btnEditAccount_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 56);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 56);
			this->button1->TabIndex = 10;
			this->button1->Text = L"        Edit Account";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// logOutContainer
			// 
			this->logOutContainer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->logOutContainer->Controls->Add(this->btnLogOut);
			this->logOutContainer->Location = System::Drawing::Point(0, 329);
			this->logOutContainer->Margin = System::Windows::Forms::Padding(0);
			this->logOutContainer->Name = L"logOutContainer";
			this->logOutContainer->Size = System::Drawing::Size(218, 56);
			this->logOutContainer->TabIndex = 13;
			// 
			// btnLogOut
			// 
			this->btnLogOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnLogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogOut->ForeColor = System::Drawing::Color::Black;
			this->btnLogOut->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogOut.Image")));
			this->btnLogOut->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLogOut->Location = System::Drawing::Point(0, 0);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(0);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(218, 56);
			this->btnLogOut->TabIndex = 8;
			this->btnLogOut->Text = L"        Log Out";
			this->btnLogOut->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLogOut->UseVisualStyleBackColor = false;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &MainForm::btnLogOut_Click_1);
			// 
			// studentTransition
			// 
			this->studentTransition->Interval = 10;
			this->studentTransition->Tick += gcnew System::EventHandler(this, &MainForm::studentTransition_Tick);
			// 
			// reminderTransition
			// 
			this->reminderTransition->Interval = 10;
			this->reminderTransition->Tick += gcnew System::EventHandler(this, &MainForm::reminderTransition_Tick);
			// 
			// courseTransition
			// 
			this->courseTransition->Interval = 10;
			this->courseTransition->Tick += gcnew System::EventHandler(this, &MainForm::courseTransition_Tick);
			// 
			// sidebarTransition
			// 
			this->sidebarTransition->Interval = 10;
			this->sidebarTransition->Tick += gcnew System::EventHandler(this, &MainForm::sidebarTransition_Tick);
			// 
			// attendanceTransition
			// 
			this->attendanceTransition->Interval = 10;
			this->attendanceTransition->Tick += gcnew System::EventHandler(this, &MainForm::attendanceTransition_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(865, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(36, 29);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// lbUserName
			// 
			this->lbUserName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserName->Location = System::Drawing::Point(672, 38);
			this->lbUserName->Name = L"lbUserName";
			this->lbUserName->Size = System::Drawing::Size(187, 17);
			this->lbUserName->TabIndex = 16;
			this->lbUserName->Text = L"UserName";
			this->lbUserName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lbUserName->Click += gcnew System::EventHandler(this, &MainForm::lbUserName_Click);
			// 
			// lbUserEmail
			// 
			this->lbUserEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserEmail->Location = System::Drawing::Point(672, 55);
			this->lbUserEmail->Name = L"lbUserEmail";
			this->lbUserEmail->Size = System::Drawing::Size(190, 17);
			this->lbUserEmail->TabIndex = 17;
			this->lbUserEmail->Text = L"UserEmail";
			this->lbUserEmail->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightSlateGray;
			this->label2->Location = System::Drawing::Point(243, 630);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(646, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Aneeza Junaid 22L-7903    Areeba Mujahid 22L-7864    Takreem Jaffery 22L-7949\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(901, 662);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbUserEmail);
			this->Controls->Add(this->lbUserName);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->sidebarContainer);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MainForm";
			this->Text = L"Home Page";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnHam))->EndInit();
			this->sidebarContainer->ResumeLayout(false);
			this->attendanceContainer->ResumeLayout(false);
			this->courseContainer->ResumeLayout(false);
			this->studentContainer->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->reminderContainer->ResumeLayout(false);
			this->editAccountContainer->ResumeLayout(false);
			this->logOutContainer->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //================TRANSITION STUFF=======================
		   // ALL THESE are just transitions for the home page you can ignore
	private: bool studentExpand = false;
	private: System::Void studentTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (studentExpand == false) {
			studentContainer->Height += 10;
			if (studentContainer->Height >= 163) {
				studentTransition->Stop();
				studentExpand = true;
			}
		}
		else
		{
			studentContainer->Height -= 10;
			if (studentContainer->Height <= 55) {
				studentTransition->Stop();
				studentExpand = false;
			}
		}
	}
	private: bool reminderExpand = false;
	private: System::Void reminderTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (reminderExpand == false) {
			reminderContainer->Height += 10;
			if (reminderContainer->Height >= 163) {
				reminderTransition->Stop();
				reminderExpand = true;
			}
		}
		else
		{
			reminderContainer->Height -= 10;
			if (reminderContainer->Height <= 54) {
				reminderTransition->Stop();
				reminderExpand = false;
			}
		}
	}
	private: bool courseExpand = false;
	private: System::Void courseTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (courseExpand == false) {
			courseContainer->Height += 10;
			if (courseContainer->Height >= 165) {
				courseTransition->Stop();
				courseExpand = true;
			}
		}
		else
		{
			courseContainer->Height -= 10;
			if (courseContainer->Height <= 54) {
				courseTransition->Stop();
				courseExpand = false;
			}
		}
	}
	private: System::Void btnStudentDetails_Click(System::Object^ sender, System::EventArgs^ e) {
		studentTransition->Start();
	}
	private: System::Void btnReminder_Click_1(System::Object^ sender, System::EventArgs^ e) {
		reminderTransition->Start();
	}
	private: System::Void btnCourseDetails_Click(System::Object^ sender, System::EventArgs^ e) {
		courseTransition->Start();
	}
		   //====================================================
	public:GetDate getdate;
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		getdate.ShowDialog();

	}/*
		   protected:
			   virtual void OnLoad(EventArgs^ e) override {
				   DisplayReminder dispRem(teacher);
				   dispRem.ShowDialog();
			   }*/
			   //===============TRANSITION STUFF AGAIN=================
	private: bool sidebarExpand = false;
	private: System::Void sidebarTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (sidebarExpand == false) {
			sidebarContainer->Width += 10;
			if (sidebarContainer->Width >= 218) {
				sidebarTransition->Stop();
				sidebarExpand = true;

				attendanceContainer->Width = sidebarContainer->Width;
				studentContainer->Width = sidebarContainer->Width;
				courseContainer->Width = sidebarContainer->Width;
				reminderContainer->Width = sidebarContainer->Width;
				editAccountContainer->Width = sidebarContainer->Width;
				logOutContainer->Width = sidebarContainer->Width;
			}
		}
		else
		{
			sidebarContainer->Width -= 10;
			if (sidebarContainer->Width <= 44) {
				sidebarTransition->Stop();
				sidebarExpand = false;

				attendanceContainer->Width = sidebarContainer->Width;
				studentContainer->Width = sidebarContainer->Width;
				courseContainer->Width = sidebarContainer->Width;
				reminderContainer->Width = sidebarContainer->Width;
				editAccountContainer->Width = sidebarContainer->Width;
				logOutContainer->Width = sidebarContainer->Width;
			}
		}
	}
	private: bool attendanceExpand = false;
	private: System::Void attendanceTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (attendanceExpand == false) {
			attendanceContainer->Height += 10;
			if (attendanceContainer->Height >= 162) {
				attendanceTransition->Stop();
				attendanceExpand = true;
			}
		}
		else
		{
			attendanceContainer->Height -= 10;
			if (attendanceContainer->Height <= 54) {
				attendanceTransition->Stop();
				attendanceExpand = false;


			}
		}
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void btnHam_Click(System::Object^ sender, System::EventArgs^ e) { //Yum
		sidebarTransition->Start();
	}

	private: System::Void btnAttendance_Click(System::Object^ sender, System::EventArgs^ e) {
		attendanceTransition->Start();
	}
		   //======================================================================

	public: bool loggedout = false;
	private: System::Void btnLogOut_Click_1(System::Object^ sender, System::EventArgs^ e) {
		loggedout = true;
		Application::Exit();
		this->Close();

	}
		   // ====================TJ FUNCTIONS============================
	private: System::Void btnMarkAtt_Click(System::Object^ sender, System::EventArgs^ e) {
		teacher->setDate(getdate.date);
		MarkingAttendance markAtt(student, teacher); //= gcnew MarkingAttendance(student);
		markAtt.ShowDialog();
		teacher = markAtt.teacher; //those who are curious none of the teacher data is changing here. Just copied it back as a precaution

	}
	private: System::Void btnViewAtt_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewAttendance viewAtt(teacher, student);
		viewAtt.ShowDialog();
	}
	private: System::Void btnEditAccount_Click(System::Object^ sender, System::EventArgs^ e) {
		EditAccount editAcc(teacher);
		editAcc.ShowDialog();
	}
		   //=====================REE FUNCTIONS===========================
	private: System::Void btnAddStudent_Click(System::Object^ sender, System::EventArgs^ e) {
		TeacherAttendanceSystem::AddStudentForm addStd(teacher);
		addStd.ShowDialog();
	}
	private: System::Void btnDeleteStudent_Click(System::Object^ sender, System::EventArgs^ e) {
		TeacherAttendanceSystem::DeleteStudentForm deleteStd(this->teacher);
		deleteStd.ShowDialog();
	}
	private: System::Void btnAddCourse_Click_1(System::Object^ sender, System::EventArgs^ e) {
		TeacherAttendanceSystem::AddCourseForm addCourse(this->teacher);
		addCourse.ShowDialog();
	}
	private: System::Void btnDeleteCourse_Click_1(System::Object^ sender, System::EventArgs^ e) {
		TeacherAttendanceSystem::DeleteACourseForm deleteCourse(this->teacher);
		deleteCourse.ShowDialog();
	}
		   //=====================NEEZA FUNCTIONS==========================
	private: System::Void btnSetReminder_Click(System::Object^ sender, System::EventArgs^ e) {
		AddReminder addRem(teacher);
		addRem.ShowDialog();
	}
	private: System::Void btnDeleteReminder_Click(System::Object^ sender, System::EventArgs^ e) {
		DeleteReminder deleteRem(teacher);
		deleteRem.ShowDialog();
	}
		   // TJ HERE:
		   // the FINE functionality is supposed to be auto implemented if we have an automatic working warning thing in attendance
		   // |-->ALT: if we dont end up having time for warning functionality, we make another button that allows the teacher to
		   // |		set a warning for any student they have. We can argue that the reason we have a view attendance thing is so that the teacher can look
		   // |		at the students who are lacking attendance and then utilize the warning function/button to give them a warning. Make sense?
		   // |		We will still have to auto increment the number of warnings and set a condition to add fines for warnings 3 and above.
		   // |		Nothing is easy....
		   // the EMAIL feature is automated as well. As soon as the student has 3 warnings/1 fine (we will probably check this wherever we
		   // are incrementing warnings and fines), it will trigger the email and ask if the teacher
		   // wants to send one. If yes, we run the code Aneeza made and they press okay and an imaginary email is sent. Thats it. Fair enough?
		   //
		   // If someone figures out a way to pretty the format then let me know so I can do the same with my functions. Good luck :`)


	private: System::Void btnWarning_Click(System::Object^ sender, System::EventArgs^ e) {
		Warning warning(teacher);
		warning.ShowDialog();

	}
	private: System::Void lbUserName_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
