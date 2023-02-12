#include "pch.h"
#include "NewCustomerForm.h"
#include "SalesMainForm.h"

System::Void SalesView::NewCustomerForm::btnBack_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	SalesMainForm::MenuVisibility = false;
	((SalesMainForm^)refForm)->SalesMainForm::gbMenuLogin->Visible = false;
	((SalesMainForm^)refForm)->SalesMainForm::gbMenuCustomer->Visible = false;
}
