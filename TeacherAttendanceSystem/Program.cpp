#include "Log-in Form.h"
#include "Sign-up Form.h"
#include "MainForm.h"
#include "DisplayReminder.h"

using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
login:
	Teacher^ user = nullptr;
	while (true) {
		TeacherAttendanceSystem::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToSignup == 1) {
			TeacherAttendanceSystem::SignupForm  signupForm;
			signupForm.ShowDialog();

			if (signupForm.switchToLogin == 1) {
				continue;
			}
			else {
				user = signupForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		TeacherAttendanceSystem::MainForm mainForm(user);
		//mainForm.ShowDialog();
		TeacherAttendanceSystem::DisplayReminder dispRem(user);
		mainForm.Show();
		dispRem.Show();
		bool rem = dispRem.reminderIs;
		if (rem == false) {
			dispRem.Close();
			Application::Run(% mainForm);

		}
		else {
			dispRem.Show();
			Application::Run();
		}

		if (mainForm.loggedout == 1 && rem == true) {
			Application::Exit();
			goto login;
		}
		else if (mainForm.loggedout == 1) {
			goto login;
		}


	}
	else {
		MessageBox::Show("Authentication Cancelled", "Program.cpp", MessageBoxButtons::OK);
	}

}
