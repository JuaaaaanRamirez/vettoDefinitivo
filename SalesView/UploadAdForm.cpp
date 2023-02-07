#include "pch.h"
#include "UploadAdForm.h"
#include "SalesMainForm.h"

System::Void SalesView::UploadAdForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if (refForm->GetType() == SalesMainForm::typeid) {
			if (((SalesMainForm^)refForm)->SalesMainForm::Ad1== nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image== nullptr) {
				((SalesMainForm^)refForm)->SalesMainForm::Ad1->Image = gcnew Bitmap(opnfd->FileName);
				this->Close();
			}
			else if (((SalesMainForm^)refForm)->SalesMainForm::Ad2 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image == nullptr) {
				((SalesMainForm^)refForm)->SalesMainForm::Ad2->Image = gcnew Bitmap(opnfd->FileName);
				this->Close();
			}
			else if (((SalesMainForm^)refForm)->SalesMainForm::Ad3 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image == nullptr) {
				((SalesMainForm^)refForm)->SalesMainForm::Ad3->Image = gcnew Bitmap(opnfd->FileName);
				this->Close();
			}
			else if (((SalesMainForm^)refForm)->SalesMainForm::Ad4 == nullptr || ((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image == nullptr) {
				((SalesMainForm^)refForm)->SalesMainForm::Ad4->Image = gcnew Bitmap(opnfd->FileName);
				this->Close();
			}
			else {
				MessageBox::Show("Los anuncios estan llenos por el momento");
				return;
			}

		}
		//pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}
