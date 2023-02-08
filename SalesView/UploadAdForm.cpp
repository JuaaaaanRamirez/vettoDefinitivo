#include "pch.h"
#include "UploadAdForm.h"
#include "SalesMainForm.h"

System::Void SalesView::UploadAdForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (refForm->GetType() == SalesMainForm::typeid) {
		
		if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Announcer^ anoun = gcnew Announcer();
			anoun = (Announcer^)(SalesMainForm::person);
			
			if (anoun->AdInSistem == true) {
				switch (anoun->NumberPictureBox)
				{
					//guardar su imagen en person anouncer
				case 1: ((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image = gcnew Bitmap(opnfd->FileName);

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();				
					((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();
					
					SalesMainForm::person = anoun;
					this->Close();
					break;
				case 2: ((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image = gcnew Bitmap(opnfd->FileName);

					((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					SalesMainForm::person = anoun;
					this->Close();
					break;
				case 3: ((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image = gcnew Bitmap(opnfd->FileName);

					((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					SalesMainForm::person = anoun;
					this->Close();
					break;
				case 4: ((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image = gcnew Bitmap(opnfd->FileName);

					((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					SalesMainForm::person = anoun;
					this->Close();
					break;
				default:
					break;
				}
				
			}
			else {
				if (((SalesMainForm^)refForm)->SalesMainForm::Ad1 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image == nullptr) {
					((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image = gcnew Bitmap(opnfd->FileName);

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					anoun->NumberPictureBox = 1;
					anoun->AdInSistem = true;
					SalesMainForm::person = anoun;
					this->Close();
				}
				else if (((SalesMainForm^)refForm)->SalesMainForm::Ad2 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image == nullptr) {
					((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image = gcnew Bitmap(opnfd->FileName);

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					anoun->NumberPictureBox = 2;
					anoun->AdInSistem = true;
					SalesMainForm::person = anoun;
					this->Close();
				}
				else if (((SalesMainForm^)refForm)->SalesMainForm::Ad3 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image == nullptr) {
					((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image = gcnew Bitmap(opnfd->FileName);

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					anoun->NumberPictureBox = 3;
					anoun->AdInSistem = true;
					SalesMainForm::person = anoun;
					this->Close();
				}
				else if (((SalesMainForm^)refForm)->SalesMainForm::Ad4 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image == nullptr) {
					((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image = gcnew Bitmap(opnfd->FileName);

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					anoun->Ad = ms->ToArray();

					anoun->NumberPictureBox = 4;
					anoun->AdInSistem = true;
					SalesMainForm::person = anoun;
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
