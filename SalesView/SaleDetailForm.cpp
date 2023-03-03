#include "pch.h"
#include "SaleDetailForm.h"
#include "CustomerSearchForm.h"
#include "SalesMainForm.h"

System::Void SalesView::SaleDetailForm::SaleDetailForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    if (SalesMainForm::person->Profile == 'M' && paid == false) Controller::DeleteSale(saleId);
}
System::Void SalesView::SaleDetailForm::btnLookForCustomer_Click(System::Object^ sender, System::EventArgs^ e)
{
    CustomerSearchForm^ mySearch = gcnew CustomerSearchForm(); mySearch->ShowDialog();
    ShowData(); //ShowShoppingCart();
}
