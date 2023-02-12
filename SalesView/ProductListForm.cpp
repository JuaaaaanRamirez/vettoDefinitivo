#include "pch.h"
#include "ProductListForm.h"
#include "SalesMainForm.h"

System::Void SalesView::ProductListForm::dgvProductList_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	// Verification
	int selectedRowIndex = dgvProductList->SelectedCells[0]->RowIndex;
	List<Product^>^ myProductList = Controller::QueryProductsByNameOrDescription(txtSearchBox->Text);
	if (selectedRowIndex >= (myProductList->Count)) return;

	int myUserId = Convert::ToInt32(((SalesMainForm^)refForm)->SalesMainForm::Idlb->Text);
	ProductPresentationForm^ ProductPresentation = gcnew ProductPresentationForm(this,myUserId);
	ProductPresentation->ShowDialog();
}

System::Void SalesView::ProductListForm::ProductListForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	txtSearchBox->Text = ((SalesMainForm^)refForm)->SalesMainForm::SearchBox->Text;
	ShowProducts();
}
