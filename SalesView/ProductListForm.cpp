#include "pch.h"
#include "ProductListForm.h"
#include "SalesMainForm.h"

System::Void SalesView::ProductListForm::ProductListForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	txtSearchBox->Text = ((SalesMainForm^)refForm)->SalesMainForm::SearchBox->Text;
	ShowProducts();
}
