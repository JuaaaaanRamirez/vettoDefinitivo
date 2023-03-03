#include "pch.h"
#include "CarryOnShoppingForm.h"

System::Void SalesView::CarryOnShoppingForm::btnWatchaShopping_Click(System::Object^ sender, System::EventArgs^ e)
{
	btnPushed = true;
	SaleDetailForm^ saleDetail = gcnew SaleDetailForm(saleId);
	saleDetail->ShowDialog();
	this->Close();
}
System::Void SalesView::CarryOnShoppingForm::btnCarryOn_Click(System::Object^ sender, System::EventArgs^ e)
{
	btnPushed = true;
	SaleDetailForm::mySaleDetail->paid = false;
	Close();
}
System::Void SalesView::CarryOnShoppingForm::CarryOnShoppingForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	if (!btnPushed) {
		Sale^ mySale = Controller::QuerySaleById(saleId);
		/*mySale->SaleDetails->RemoveAt(mySale->SaleDetails->Count - 1);
		Controller::UpdateSale(mySale);¨*/
		Controller::DeleteSaleDetail(saleId, mySale->SaleDetails[mySale->SaleDetails->Count - 1]->Id);
	}
}
