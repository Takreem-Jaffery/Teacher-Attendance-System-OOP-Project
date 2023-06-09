#pragma once
// person, teacher, student inheritance
// teacher <-> course composition (array of objs)
// student <-> fine aggregation
// email <-> student, teacher compostion (one object each)
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;

public ref class Course {
private:
	String^ courseID;
	String^ courseName;
public:
	Course() {
		this->courseID = "XY1000";
		this->courseName = "XYZ";
	}
	Course(String^ cID, String^ cNM) {
		courseID = cID;
		courseName = cNM;
	}
	String^ getCourseID() {
		return courseID;
	}
	String^ getCourseName() {
		return courseName;
	}
	void setCourseID(String^ cID) {
		courseID = cID;
	}
	void setCourseName(String^ cNM) {
		courseName = cNM;
	}

};

public ref class Fine {
private:
	//int warning; // warning count
	int finealloc;
	String^ fineamount;//= "500";  // one-time fine    // this will hold the index of their fine like in Aneezas Table 
public:
	Fine() {
		//warning = 0;
		finealloc = 0;
	}
	Fine(int f) {
		//warning = w;
		finealloc = f;
	}
	Fine(const Fine^& obj) {
		this->finealloc = obj->finealloc;
	}
	/*int getWarning() {
		return warning;
	}*/
	int getFine() {
		return finealloc;
	}

	void setFineAmount(String^ f) {
		fineamount = f;
	}
	void setFine(int f) {
		finealloc = f;
	}
	//TJ EDITS AGAIN
	String^ getFineAmount() {
		return "$" + fineamount;
	}
	void operator = (const Fine^& obj) {
		this->finealloc = obj->finealloc;
	}



	//END


	/*void setWarning(int w) {
		warning = w;
	}*/

	/****************************************
	*
	* Add a function that implements
	* (warnings == 3, one-time fine generates email)
	*
	*****************************************/

};

public ref class Person {
protected:
	String^ name;
	String^ email;
	String^ teacherID;
public:
	Person() {
		this->name = "";
		this->email = "";
		this->teacherID = "";
	}
	Person(String^ nm, String^ em, String^ tID) {
		// what do i do with id??
		this->name = nm;
		this->email = em;
		this->teacherID = tID;
	}
	String^ getName() {
		return this->name;
	}
	String^ getEmail() {
		return this->email;
	}
	String^ getTeacherID() {
		return this->teacherID;
	}
	void setName(String^ nm) {
		this->name = nm;
	}
	void setEmail(String^ em) {
		this->email = em;
	}
	void setTeacherID(String^ tID) {
		this->teacherID = tID;;
	}
	virtual String^ printEmail() {  //POLYMORPHISM	
		return email;
	}
};

public ref class Student : public Person {
private:
	String^ rollno;
	String^ courseID; // course code (1 only)
	int warning;   
	
	array <char^>^ attendance;
public:
	Fine^ fine;	  // aggregation  //OR COMPOSITION?
	Student() {
		fine = gcnew Fine;
		Person();
		this->rollno = "";
		this->courseID = "";
		attendance = nullptr;
	}
	Student(String^ nm, String^ em, String^ tID, String^ rn, String^ cID, int w, array<char^>^ att, int fine) : Person(nm, em, tID) {
		this->fine = gcnew Fine(fine);
		this->rollno = rn;
		this->courseID = cID;
		attendance = gcnew array <char^>(30);
		for (int i = 0; i < 30; i++) {
			this->attendance[i] = att[i];
		}

	}
	~Student() {
		delete[] attendance;
	}
	//TJ EDITS HERE

	int getWarning() {
		return warning;
	}

	int operator ++() {
		int warn;
		warn = this->warning;
		warn++;
		return warn;
	}

	bool operator >= (int n) {
		bool flag = false;
		if (warning >= n) {
			flag = true;
		}
		else
			flag = false;
		return flag;
	}
	// TJ EDITS DONE
	 
	String^ getRollNo() {
		return this->rollno;
	}
	String^ getCourseID() {
		return this->courseID;
	}
	array <char^>^ getAttendance() {
		return this->attendance;
	}
	void setWarning(int w) {
		warning = w;
	}
	void setRollNo(String^ rn) {
		if (this->rollno->ToString() == nullptr) {
			this->rollno = "";
		}
		this->rollno = rn;
	}
	void setCourseID(String^ cID) {
		courseID = cID;
	}
	void setAttendance(array<char^>^ att) {
		attendance = gcnew array <char^>(30);
		for (int i = 0; i < 30; i++) {
			this->attendance[i] = att[i];
		}
	}
	String^ printEmail() override {
		return email;
	}
};

public ref class Teacher : public Person {
private:
	String^ password;
	String^ date;
	array< Course^ >^ course; //array of course objs?? trying to do association/comp
public:
	Teacher() {
		Person();
		password = "";
		date = "";
		course = gcnew array< Course^>(10);
	}
	Teacher(String^ nm, String^ em, String^ tID, String^ p, String^ d) : Person(nm, em, tID) {
		/* this constructor doesnt set course array bc idk why L */
		password = p;
		date = d;
		course = gcnew array< Course^>(10);
	}
	Teacher(String^ nm, String^ em, String^ tID, String^ p, String^ d, array< Course^ >^ c) : Person(nm, em, tID) {
		password = p;
		date = d;
		course = gcnew array< Course^>(10);
		for (int i = 0; i < 10; i++) {
			course[i]->setCourseID(c[i]->getCourseID());
			course[i]->setCourseName(c[i]->getCourseName());
		}
	}
	~Teacher() {
		delete[] course;
	}
	String^ getPassword() {
		return this->password;
	}
	String^ getDate() {
		return this->date;
	}
	array <Course^>^ getCourse() {
		return this->course;
	}
	void setPassword(String^ pas) {
		this->password = pas;
	}
	void setDate(String^ d) {
		this->date = d;
	}
	void setCourse(array <Course^>^ c) {
		course = gcnew array< Course^>(10);
		for (int i = 0; i < 10; i++) {
			course[i]->setCourseID(c[i]->getCourseID());
			course[i]->setCourseName(c[i]->getCourseName());
		}
	}
	void AddCourse(String^ cID, String^ cName) {

		/******************************
		*
		* keep in account how to resize.
		* i do not know.
		*
		*******************************/

		static int course_index = 0;
		try {
			SqlConnection^ sqlConn = gcnew SqlConnection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=TeacherAttendanceSystem;Integrated Security=True");
			sqlConn->Open();

			/* This part of code has to only run as soon as user logs in. Change accordingly */

			/*******************************************/
			static bool codeHasRun = false;
			if (!codeHasRun) {
				// check if table is empty
				SqlCommand^ cmd = gcnew SqlCommand("SELECT COUNT(*) FROM courses", sqlConn);
				int count = (int)cmd->ExecuteScalar();

				// if not, copy table into array
				if (count != 0) {
					cmd = gcnew SqlCommand("SELECT CourseID, CourseName FROM courses", sqlConn);
					SqlDataReader^ reader = cmd->ExecuteReader();

					while (reader->Read()) {
						Course^ obj = gcnew Course();
						obj->setCourseID(reader->GetString(0));
						obj->setCourseName(reader->GetString(1));
						course[course_index] = gcnew Course();
						course[course_index++] = obj;
					}
					reader->Close();
				}
				codeHasRun = true;
			}
			/******************************************/

			// copy course added at runtime into array
			course[course_index] = gcnew Course();
			course[course_index]->setCourseID(cID);
			course[course_index]->setCourseName(cName);
			// insert new course in table
			String^ queryInsert = "INSERT INTO courses(TeacherID,CourseID,CourseName) VALUES (@tid,@cid,@cname);";
			SqlCommand^ command = gcnew SqlCommand(queryInsert, sqlConn);
			command->Parameters->AddWithValue("@tid", teacherID);
			command->Parameters->AddWithValue("@cid", course[course_index]->getCourseID());
			command->Parameters->AddWithValue("@cname", course[course_index]->getCourseName());
			command->ExecuteNonQuery();
			MessageBox::Show(course[course_index]->getCourseName() + " was added to the database.",
				"Course Added Successfully", MessageBoxButtons::OK);
			sqlConn->Close();

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Database Connection Error", MessageBoxButtons::OK);
		}

		course_index++;
	}
	String^ printEmail() override {
		return email;
	}
};

public ref class Reminder {
public:
	String^ Reminder;
};

public ref class Email {
private:
	Student^ student;
	Teacher^ teacher;

public:
	Email() {

	}
	Email(Student^ s, Teacher^ t) {
		/*
		*  this constructor assumes
		*  that student and teacher obj already exist
		*  their info is parameterized to generate an email
		*/
		student = s;
		teacher = t;
	}

	/****************************************
	*
	* Add a function that generates a generic
	* email message box/ or form
	*
	*****************************************/
};