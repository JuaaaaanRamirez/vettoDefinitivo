#include "pch.h"
#include "SalesMainForm.h"
#include "ProductPresentationForm.h"

System::Void SalesView::SalesMainForm::SalesMainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	Sale^ mySale = Controller::QuerySaleById(ProductPresentationForm::saleId);
	if (mySale->SaleDetails->Count == 0 || mySale->Total == 0) Controller::DeleteSale(mySale->Id);
}
