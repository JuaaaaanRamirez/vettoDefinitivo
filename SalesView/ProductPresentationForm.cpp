#include "pch.h"
#include "ProductPresentationForm.h"
#include "ProductListForm.h"
#include "SalesMainForm.h"

void SalesView::ProductPresentationForm::ShowProduct()
{
	// Get RowIndex
	//int selectedRowIndex = ((ProductListForm^)refForm)->ProductListForm::dgvProductList->SelectedCells[0]->RowIndex;
	// Get ID
	//int productId;
	//productId = Convert::ToInt32(((ProductListForm^)refForm)->ProductListForm::dgvProductList->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	// Get Product
	//Product^ p = Controller::QueryProductById(productId);
	Product^ p = Controller::QueryProductById(SalesMainForm::product->Id);
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

System::Void SalesView::ProductPresentationForm::Wishbtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	//return System::Void();
	//int selectedRowIndex = ((ProductListForm^)refForm)->ProductListForm::dgvProductList->SelectedCells[0]->RowIndex;
	//int productId = Convert::ToInt32(((ProductListForm^)refForm)->ProductListForm::dgvProductList->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	//Product^ p = Controller::QueryProductById(productId);

	
	 
	Person^ user = Controller::QueryUserById(SalesMainForm::person->Id);
	List<Product^>^ mywishList = safe_cast<Customer^>(user)->WishList;
	Product^ p = Controller::QueryProductById(SalesMainForm::product->Id);

	//verificar que no se repita el producto
	
		for (int i = 0; i < mywishList->Count; i++)
			if (mywishList[i]->Id == p->Id) {

				MessageBox::Show("Este producto ya ha sido añadido a la lista de deseo");
				return;
			}
			
			//Agregar a la LISTA DE DESEOS

				safe_cast<Customer^>(user)->WishList->Add(p);
				Controller::UpdateUser(user);

				MessageBox::Show("Agregado a la lista de deseos :3");
			
	


	
	/*
	MyWishList^ myWishList = gcnew MyWishList(this);
	myWishList->ShowDialog();*/

}
