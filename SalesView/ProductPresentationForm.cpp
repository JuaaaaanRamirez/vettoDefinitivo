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
	txtStock->Text = "" + p->Stock;
	txtDescription->Text = "" + p->Description;
	txtStarts->Text = "" + p->Starts;
	txtSales->Text = "" + p->Sales;
	p->Searches++;  // Plus search

	Controller::UpdateProduct(p);

	// Put Image
	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbxProductImagen->Image = Image::FromStream(ms);
	}

	// Request WishList
	if (userId != 0) {
		Person^ thisPerson = (Customer^)Controller::QueryUserById(userId);
		if (thisPerson->Profile == 'S' || thisPerson->Profile =='C')
			for (int i = 0; i < ((Customer^)thisPerson)->WishList->Count; i++)
				if (((Customer^)thisPerson)->WishList[i]->Id == p->Id) { Wishbtn->Visible = false; break; }
	}
	
}
