#include "pch.h"
#include "LoginForm.h"
#include "SalesMainForm.h"


System::Void SalesView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (txtUsername->Text->Trim() == "") {
		MessageBox::Show("Ingrese su el nombre de usuario");
		return;
	}
	if (txtPassword->Text->Trim() == "") {
		MessageBox::Show("Ingrese la contraseña");
		return;
	}
	
	Person^ emp = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (emp != nullptr) {
		MessageBox::Show("Bienvenido " + emp->Name);

		// Change Label Text
		if (emp->Profile == 'S') {
			((SalesMainForm^)refForm)->SalesMainForm::lbJob->Text = "Estudiante " ;
			((SalesMainForm^)refForm)->SalesMainForm::Userlb->Text = emp->Name;
			((SalesMainForm^)refForm)->SalesMainForm::lbCompany->Text = " ";
		}
		else if (emp->Profile == 'M') {
			((SalesMainForm^)refForm)->SalesMainForm::lbJob->Text = "Jefe de Ventas ";
			((SalesMainForm^)refForm)->SalesMainForm::Userlb->Text =  emp->Name;
			((SalesMainForm^)refForm)->SalesMainForm::lbCompany->Text = " ";
			((SalesMainForm^)refForm)->SalesMainForm::menuStrip1->Visible = true;
		}
		else if (emp->Profile == 'A') {
			((SalesMainForm^)refForm)->SalesMainForm::lbJob->Text = "Anunciante ";
			((SalesMainForm^)refForm)->SalesMainForm::Userlb->Text =  emp->Name;
			((SalesMainForm^)refForm)->SalesMainForm::lbCompany->Text = "Compañia ";
		}
		SalesMainForm::MenuVisibility = false;
		((SalesMainForm^)refForm)->SalesMainForm::Idlb->Text = "" + emp->Id;
		
		// Put Imagen
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(emp->Photo);
		((SalesMainForm^)refForm)->SalesMainForm::btnLogin->BackgroundImage = Image::FromStream(ms);

		//SalesMainForm::person = emp;


		((SalesMainForm^)refForm)->SalesMainForm::subirAnuncioToolStripMenuItem->Visible = true;
		((SalesMainForm^)refForm)->SalesMainForm::gbMenuLogin->Visible = false;
		((SalesMainForm^)refForm)->SalesMainForm::gbMenuCustomer->Visible = false;

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
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}

}

System::Void SalesView::LoginForm::btnCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	SalesMainForm::MenuVisibility = false;
	((SalesMainForm^)refForm)->SalesMainForm::gbMenuLogin->Visible = false;
	((SalesMainForm^)refForm)->SalesMainForm::gbMenuCustomer->Visible = false;


}
