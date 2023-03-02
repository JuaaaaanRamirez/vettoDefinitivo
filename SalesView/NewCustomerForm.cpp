#include "pch.h"
#include "NewCustomerForm.h"
#include "SalesMainForm.h"


System::Void SalesView::NewCustomerForm::NewCustomerForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	SalesMainForm::MenuVisibility = false;
	pbCustomer->Image = nullptr;
	if (SalesMainForm::person==nullptr) {
		((SalesMainForm^)refForm)->SalesMainForm::gbMenuLogin->Visible = false;
		
		label12->Text = L"Registro de nuevo ususario";
		txtFirstName->ReadOnly = false;
		txtLastName->ReadOnly = false;
		txtDocNumber->ReadOnly = false;
		rbtnFem->Enabled = true;
		rbtnMasc-> Enabled = true;
		dtpBirthday->Enabled = true;
		txtUsername->ReadOnly = false;
		btnRegister->Text = "Registrar";
		btnPhoto->Text = "Seleccionar imagen";
	}
	else {
		((SalesMainForm^)refForm)->SalesMainForm::gbMenuCustomer->Visible = false;
		label12->Text = L"Actualidar datos de usuarios";
		//btnPhoto->Text = "Modificar imagen";
		
		Person^ person = Controller::QueryUserById(SalesMainForm::person->Id);

		//Llenado de datos
		txtFirstName->Text = "" + person->Name;
		txtLastName->Text = "" + person->LastName;
		txtEmail->Text = "" + person->Email;
		//txtAddress->Text = "" + dynamic_cast<Customer^>(person)->Address;
		txtPhoneNumber->Text = "" + person->PhoneNumber;
		//dtpBirthday->Value =  DateTime::Parse(dynamic_cast<Person^>(person)->Birthday);
		txtDocNumber->Text = "" + person->DocNumber;
		//rbtnMasc->Checked = dynamic_cast<Person^>(person)->Gender == 'M';
		//rbtnFem->Checked = dynamic_cast<Person^>(person)->Gender == 'F';
		txtUsername->Text = "" + person->Username;
		txtPassword->Text = "" + person->Password;
		txtPasswordAgain-> Text = "" + person->Password;
		txtCustomerPoints->Text = "" + safe_cast<Customer^>(person)->CustomerPoints;
		txtAddress->Text = "" + safe_cast<Customer^>(person)->Address;

		if ((person->Gender) == 'M') rbtnMasc->Checked = true;
		else rbtnFem->Checked = true;


		// Date
		dtpBirthday->Value = Convert::ToDateTime(person->Birthday);
		// Put Image
		if (person->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(person->Photo);
			pbCustomer->Image = Image::FromStream(ms);
		}

		//Desabilitas alguna txt
		txtFirstName->ReadOnly = true;
		txtLastName->ReadOnly = true;
		txtDocNumber->ReadOnly = true;
		rbtnFem->Enabled = false;
		rbtnMasc->Enabled = false;
		dtpBirthday->Enabled = false;
		txtUsername->ReadOnly = true;
		btnRegister->Text = "Modificar";

	}
	
	//return System::Void();
}

System::Void SalesView::NewCustomerForm::btnRegister_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (SalesMainForm::person == nullptr) {
		RegisterCustomer();

	}
	else {
		//Actualizar datos
		//Person^ p = gcnew Customer();
		Person^ p = Controller ::QueryUserById(SalesMainForm::person->Id);
		try {

			
			if (txtEmail->Text->Trim() == "") {
				MessageBox::Show("Ingrese su email.");
				return;
			}
			
			if (txtUsername->Text->Trim() == "") {
				MessageBox::Show("Ingrese su nombre de usuario.");
				return;
			}
			if (txtPassword->Text->Trim() == "") {
				MessageBox::Show("Ingrese su contraseña.");
				return;
			}
			if (txtPasswordAgain->Text->Trim() == "") {
				MessageBox::Show("Repita su contraseña.");
				return;
			}
			if (txtPasswordAgain->Text->Trim() != txtPassword->Text->Trim()) {
				MessageBox::Show("Las contraseña no son iguales");
				return;
			}
			
			

			//p->Profile = 'S';
			//p->Id = Convert::ToInt32(SalesMainForm::person->Id);
			//p->Name = txtFirstName->Text;
			//p->LastName = txtLastName->Text;
			p->Email = txtEmail->Text;
			//p->Address = txtAddress->Text;
			p->PhoneNumber = txtPhoneNumber->Text-> Trim();
			//p->DocNumber = txtDocNumber->Text;
			//p->Gender = SalesMainForm::person->Gender;
			//p->Username = txtUsername->Text;
			p->Password = txtPassword->Text;

			//String^ birthday = Convert::ToString(dtpBirthday->Value);
			//p->Birthday = birthday;

			//p->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
			//p->Gender = SalesMainForm::person->Gender;

			//dynamic_cast<Company^>(customer)->Name;
			//p->CustomerPoints = ; "" + customer->CustomerPoints; ,<Company^>(customer)
			//safe_cast<Customer^>(p)->CustomerPoints = Int32::Parse(txtCustomerPoints->Text);
			safe_cast<Customer^>(p)->Address = txtAddress->Text;

			
			 System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			 
			pbCustomer->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			p->Photo = ms->ToArray();
			((SalesMainForm^)refForm)->SalesMainForm::btnLogin->BackgroundImage = Image::FromStream(ms);

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Comparta el error al área de TI.");
			return;
		}
		Controller::UpdateUser(p);
		MessageBox::Show("Sus datos se han modificado con exito");
		this->Close();
	}
}

System::Void SalesView::NewCustomerForm::btnBack_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	SalesMainForm::MenuVisibility = false;
	((SalesMainForm^)refForm)->SalesMainForm::gbMenuLogin->Visible = false;
	((SalesMainForm^)refForm)->SalesMainForm::gbMenuCustomer->Visible = false;
}

System::Void SalesView::NewCustomerForm::btnPhoto_Click(System::Object^ sender, System::EventArgs^ e)
{
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) pbCustomer->Image = gcnew Bitmap(opnfd->FileName);

	//System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(SalesMainForm::person->Photo);
	//
	//SalesMainForm::instance->gbMenuLogin->BackgroundImage = Image::FromStream(ms);
}
