#include "pch.h"
#include "LoginForm.h"
#include "SalesMainForm.h"


System::Void SalesView::LoginForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Person^ emp = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (emp != nullptr) {
		MessageBox::Show("Bienvenido " + emp->Name);
		SalesMainForm::person = emp;
		/*
		if (emp->GetType() == Salesman::typeid) {
			SalesMainForm::employee = (Salesman^)emp;
		}
		else if (emp->GetType() == Supervisor::typeid) {
			SalesMainForm::employee = (Supervisor^)emp;
		}
		else if (emp->GetType() == StoreManager::typeid) {
			SalesMainForm::employee = (StoreManager^)emp;
		}
		*/
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseņa incorrectos.");
	}

}
