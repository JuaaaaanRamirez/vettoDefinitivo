#include "pch.h"
#include "ProductPresentationForm.h"
#include "ProductListForm.h"

void SalesView::ProductPresentationForm::ShowProduct()
{
	// Get RowIndex
	int selectedRowIndex = ((ProductListForm^)refForm)->ProductListForm::dgvProductList->SelectedCells[0]->RowIndex;
	// Get ID
	int productId;
	productId = Convert::ToInt32(((ProductListForm^)refForm)->ProductListForm::dgvProductList->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	// Get Product
	Product^ p = Controller::QueryProductById(productId);
	// Put on Data
	txtId->Text = "" + p->Id;
	txtProductName->Text = "" + p->Name;
	txtDescription->Text = "" + p->Description;
	lbHearts->Text = "" + p->Starts;
	lbSales->Text = "" + p->Sales;
	p->Searches++;  // Got a search

	Controller::UpdateProduct(p);

	// Put Image
	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbxProductImagen->Image = Image::FromStream(ms);
	}
}
