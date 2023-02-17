#include "pch.h"
#include "UploadAdForm.h"
#include "SalesMainForm.h"

using namespace System::Collections::Generic;
System::Void SalesView::UploadAdForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (refForm->GetType() == SalesMainForm::typeid) {
		
		if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Announcer^ anoun = gcnew Announcer();
			anoun = (Announcer^)(SalesMainForm::person);
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();

			if (anoun->AdInSistem == true) {

				switch (anoun->NumberPictureBox)
				{
					//guardar su imagen en person anouncer
				case 1: ((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image = gcnew Bitmap(opnfd->FileName);
					((SalesMainForm^)refForm)->SalesMainForm::company1->Text = anoun->CompanyName;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel1->Text = anoun->WebSiteLink;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel1->LinkVisited = false;

					((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();
					

					SalesMainForm::person = (Person^)anoun;

					Controller::UpdateUser((Person^)anoun);
					this->Close();
					break;
				case 2: ((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image = gcnew Bitmap(opnfd->FileName);
					((SalesMainForm^)refForm)->SalesMainForm::company2->Text = anoun->CompanyName;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel2->Text = anoun->WebSiteLink;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel2->LinkVisited = false;

					((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					SalesMainForm::person = (Person^)anoun;
					Controller::UpdateUser((Person^)anoun);
					this->Close();
					break;
				case 3: ((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image = gcnew Bitmap(opnfd->FileName);
					((SalesMainForm^)refForm)->SalesMainForm::company3->Text = anoun->CompanyName;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel3->Text = anoun->WebSiteLink;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel3->LinkVisited = false;

					((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					SalesMainForm::person = (Person^)anoun;
					Controller::UpdateUser((Person^)anoun);
					this->Close();
					break;
				case 4: ((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image = gcnew Bitmap(opnfd->FileName);
					((SalesMainForm^)refForm)->SalesMainForm::company4->Text = anoun->CompanyName;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel4->Text = anoun->WebSiteLink;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel4->LinkVisited = false;

					((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					SalesMainForm::person = (Person^)anoun;
					Controller::UpdateUser((Person^)anoun);
					this->Close();
					break;
				default:
					break;
				}
				
			}
			else {
				if (((SalesMainForm^)refForm)->SalesMainForm::Ad1 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image == nullptr) {
					((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image = gcnew Bitmap(opnfd->FileName);

					((SalesMainForm^)refForm)->SalesMainForm::company1->Text = anoun->CompanyName;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel1->Text = anoun->WebSiteLink;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel1->LinkVisited = false;

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					anoun->NumberPictureBox = 1;
					anoun->AdInSistem = true;
					SalesMainForm::person = (Person^)anoun;
					Controller::UpdateUser((Person^)anoun);
					this->Close();
				}
				else if (((SalesMainForm^)refForm)->SalesMainForm::Ad2 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image == nullptr) {
					((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image = gcnew Bitmap(opnfd->FileName);

					((SalesMainForm^)refForm)->SalesMainForm::company2->Text = anoun->CompanyName;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel2->Text = anoun->WebSiteLink;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel2->LinkVisited = false;

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					anoun->NumberPictureBox = 2;
					anoun->AdInSistem = true;
					SalesMainForm::person = (Person^)anoun;
					Controller::UpdateUser((Person^)anoun);
					this->Close();
				}
				else if (((SalesMainForm^)refForm)->SalesMainForm::Ad3 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image == nullptr) {
					((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image = gcnew Bitmap(opnfd->FileName);

					((SalesMainForm^)refForm)->SalesMainForm::company3->Text = anoun->CompanyName;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel3->Text = anoun->WebSiteLink;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel3->LinkVisited = false;

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					anoun->NumberPictureBox = 3;
					anoun->AdInSistem = true;
					SalesMainForm::person = (Person^)anoun;
					Controller::UpdateUser((Person^)anoun);
					this->Close();
				}
				else if (((SalesMainForm^)refForm)->SalesMainForm::Ad4 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image == nullptr) {
					((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image = gcnew Bitmap(opnfd->FileName);

					((SalesMainForm^)refForm)->SalesMainForm::company4->Text = anoun->CompanyName;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel4->Text = anoun->WebSiteLink;
					((SalesMainForm^)refForm)->SalesMainForm::linkLabel4->LinkVisited = false;

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					anoun->NumberPictureBox = 4;
					anoun->AdInSistem = true;
					SalesMainForm::person = (Person^)anoun;
					Controller::UpdateUser((Person^)anoun);
					this->Close();
				}
				else {
					MessageBox::Show("Los anuncios estan llenos por el momento");
					return;
				}
			}
	}
	}
}

System::Void SalesView::UploadAdForm::UploadAdForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	Announcer^ Announ_aux = gcnew Announcer();
	Announ_aux = (Announcer^)(SalesMainForm::person);

	if (Announ_aux->Ad != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(Announ_aux->Ad);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}
}

System::Void SalesView::UploadAdForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Announcer^ Announ_aux = gcnew Announcer();
	Announ_aux = (Announcer^)(SalesMainForm::person);
	int aux = 0;
	if (Announ_aux->AdInSistem) {
		switch (Announ_aux->NumberPictureBox) {
		case 1: ((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image = nullptr;
			((SalesMainForm^)refForm)->SalesMainForm::company1->Text = "";
			((SalesMainForm^)refForm)->SalesMainForm::linkLabel1->Text = "";
			((SalesMainForm^)refForm)->SalesMainForm::linkLabel1->LinkVisited = false;
			aux = 1;
			break;
		case 2: ((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image = nullptr;
			((SalesMainForm^)refForm)->SalesMainForm::company2->Text = "";
			((SalesMainForm^)refForm)->SalesMainForm::linkLabel2->Text = "";
			((SalesMainForm^)refForm)->SalesMainForm::linkLabel2->LinkVisited = false;
			aux = 1;
			break;
		case 3: ((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image = nullptr;
			((SalesMainForm^)refForm)->SalesMainForm::company3->Text = "";
			((SalesMainForm^)refForm)->SalesMainForm::linkLabel3->Text = "";
			((SalesMainForm^)refForm)->SalesMainForm::linkLabel3->LinkVisited = false;
			aux = 1;
			break;
		case 4: ((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image = nullptr;
			((SalesMainForm^)refForm)->SalesMainForm::company4->Text = "";
			((SalesMainForm^)refForm)->SalesMainForm::linkLabel4->Text = "";
			((SalesMainForm^)refForm)->SalesMainForm::linkLabel4->LinkVisited = false;
			aux = 1;
			break;
		default:
			break;
		}
		
	}
	if (aux == 1) {
		pbPhoto->Image = nullptr;
		Announ_aux->Ad = nullptr;
		Announ_aux->AdInSistem = false;
		Announ_aux->NumberPictureBox = 0;
		SalesMainForm::person = (Person^)Announ_aux;
		Controller::UpdateUser((Person^)Announ_aux);
	}
}
