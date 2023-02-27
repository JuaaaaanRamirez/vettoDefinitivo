#include "pch.h"
#include "SaleDetailForm.h"
#include "CustomerSearchForm.h"
System::Void SalesView::SaleDetailForm::btnLookForCustomer_Click(System::Object^ sender, System::EventArgs^ e)
{
    CustomerSearchForm^ mySearch = gcnew CustomerSearchForm(); mySearch->ShowDialog();
    ShowData(); ShowShoppingCart();
}
