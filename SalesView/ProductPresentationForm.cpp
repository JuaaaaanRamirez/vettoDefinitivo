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
	txtPriceMin->Text = "S/. " + p->PriceMin;
	txtPriceMaj->Text = "S/. " + p->PriceMaj;
	txtId->Text = "" + p->Id;
	txtProductName->Text = "" + p->Name;
	txtStock->Text = "" + p->Stock;
	txtDescription->Text = "" + p->Description;
	txtQueries->Text = "" + p->Searches;
	txtSales->Text = "" + p->Sales;
	p->Searches++;  // Plus search

	Controller::UpdateProduct(p);

	// Put Image
	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbxProductImagen->Image = Image::FromStream(ms);
	}

	// Request WishList
	/*
	if (userId != 0) {
		Person^ thisPerson = (Customer^)Controller::QueryUserById(userId);
		if (thisPerson->Profile == 'S' || thisPerson->Profile == 'C') {
			
			safe_cast<Customer^>(user)->WishList
			
			for (int i = 0; i < ((Customer^)thisPerson)->WishList->Count; i++)
							if (((Customer^)thisPerson)->WishList[i]->Id == p->Id) { Wishbtn->Visible = false; break; }
							
			for (int i = 0; i < safe_cast<Customer^>(thisPerson)->WishList->Count; i++)
				if (safe_cast<Customer^>(thisPerson)->WishList[i]->Id == p->Id) { Wishbtn->Visible = false; break; }

		}
			
	}*/
	
}

void SalesView::ProductPresentationForm::ShowProductToThread()
{
	Product^ p = Controller::QueryProductById(SalesMainForm::product->Id);
	// Put on Data
	txtId->Text = "" + p->Id;
	txtProductName->Text = "" + p->Name;
	txtStock->Text = "" + p->Stock;  //lo importante
	txtDescription->Text = "" + p->Description;
	txtQueries->Text = "" + p->Searches;
	txtSales->Text = "" + p->Sales;  //lo importante
}

System::Void SalesView::ProductPresentationForm::Wishbtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	//return System::Void();
	//int selectedRowIndex = ((ProductListForm^)refForm)->ProductListForm::dgvProductList->SelectedCells[0]->RowIndex;
	//int productId = Convert::ToInt32(((ProductListForm^)refForm)->ProductListForm::dgvProductList->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	//Product^ p = Controller::QueryProductById(productId);

	if(userId!=0){
		Person^ user = Controller::QueryUserById(SalesMainForm::person->Id);
		//leer la lista de deseos segun el id de user
		List<Product^>^ mywishList =Controller::QueryAllWishListByIdUser(user->Id);
		//List<Product^>^ mywishList = safe_cast<Customer^>(user)->WishList;
		Product^ p = Controller::QueryProductById(SalesMainForm::product->Id);

		//verificar que no se repita el producto

		if (mywishList ==nullptr) {
			//Agregar a la LISTA DE DESEOS

			//safe_cast<Customer^>(user)->WishList->Add(p);
			//Controller::UpdateUser(user);
			Controller::AddWishList(p->Id, user->Id);
			MessageBox::Show("Agregado a la lista de deseos :3");
			MessageBox::Show("A ocurrido un error, comuniquese con admiVetto@vetto.com  ");
		}
		else {

	
			for (int i = 0; i < mywishList->Count; i++)
				if (mywishList[i]->Id == p->Id) {

					MessageBox::Show("Este producto ya ha sido añadido a la lista de deseo");
					return;
				}
	
				//Agregar a la LISTA DE DESEOS

					//safe_cast<Customer^>(user)->WishList->Add(p);
					//Controller::UpdateUser(user);
					Controller::AddWishList(p->Id, user->Id);

					MessageBox::Show("Agregado a la lista de deseos :3");
			
		}

	}
	else {
		MessageBox::Show("Primero tiene que registrarse");
	}
	
	/*
	MyWishList^ myWishList = gcnew MyWishList(this);
	myWishList->ShowDialog();*/

}
