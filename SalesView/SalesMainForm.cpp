#include "pch.h"
#include "SalesMainForm.h"
#include "ProductPresentationForm.h"

System::Void SalesView::SalesMainForm::btnShopping_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (SaleDetailForm::mySaleDetail->paid) { MessageBox::Show("Aún no se ha realizado alguna compra"); return; }

	SaleDetailForm^ saleDetailForm = gcnew SaleDetailForm(ProductPresentationForm::saleId);
	saleDetailForm->ShowDialog();
}

System::Void SalesView::SalesMainForm::SalesMainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	Sale^ mySale = Controller::QuerySaleById(ProductPresentationForm::saleId);
	if (mySale->SaleDetails->Count == 0 || mySale->Total == 0) Controller::DeleteSale(mySale->Id);
	if (!SaleDetailForm::paid) Controller::DeleteSale(mySale->Id);
}
