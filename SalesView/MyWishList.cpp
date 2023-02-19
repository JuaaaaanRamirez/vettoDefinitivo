#include "pch.h"
#include "MyWishList.h"
#include "SalesMainForm.h"
#include "ProductPresentationForm.h"


System::Void SalesView::MyWishList::MyWishList_Load(System::Object^ sender, System::EventArgs^ e)
{
	Person^ customer = gcnew Person;
	customer = Controller::QueryUserById(SalesMainForm::person->Id);		// Make List
	dgvWishList->Rows->Clear();
	//Clear Dgv
	//safe_cast<Customer^>(p)->CustomerPoints;
	
	if(safe_cast<Customer^>(customer)->WishList==nullptr){
		dgvWishList->Rows->Clear();
		
	}
	else {
		for (int j = 0; j < safe_cast<Customer^>(customer)->WishList->Count; j++) {
			dgvWishList->Rows->Add(gcnew array<String^>{
				"" + safe_cast<Customer^>(customer)->WishList[j]->Id,
					"" + safe_cast<Customer^>(customer)->WishList[j]->Name,
					"" + safe_cast<Customer^>(customer)->WishList[j]->PriceMin,
					"" + safe_cast<Customer^>(customer)->WishList[j]->Description
			});
		
		}
	}
}

System::Void SalesView::MyWishList::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	//return System::Void();
	if (dgvWishList->SelectedCells->Count == 1) {
		if (dgvWishList->SelectedCells[0]->Value->ToString()->Trim() != "") {
			int selectedRowIndex = dgvWishList->SelectedCells[0]->RowIndex;
			int productId = Convert::ToInt32(dgvWishList->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
			Person^ user = Controller::QueryUserById(SalesMainForm::person->Id);
			for (int i = 0; i < safe_cast<Customer^>(user)->WishList->Count; i++) {
				if (safe_cast<Customer^>(user)->WishList[i]->Id == productId) {
					safe_cast<Customer^>(user)->WishList->RemoveAt(i);
					Controller::UpdateUser(user); break;
				}
			}
			//ShowData(); ShowShoppingCart();
		}

		else
			MessageBox::Show("No se puede eliminar una fila vacía.");
	}
	else
		MessageBox::Show("Para eliminar debe seleccionar solo un producto.");
	
	//refrescar la pagina
	Person^ customer = gcnew Person;
	customer = Controller::QueryUserById(SalesMainForm::person->Id);		// Make List
	dgvWishList->Rows->Clear();
	//Clear Dgv
	//safe_cast<Customer^>(p)->CustomerPoints;

	if (safe_cast<Customer^>(customer)->WishList == nullptr) {
		dgvWishList->Rows->Clear();

	}
	else {
		for (int j = 0; j < safe_cast<Customer^>(customer)->WishList->Count; j++) {
			dgvWishList->Rows->Add(gcnew array<String^>{
				"" + safe_cast<Customer^>(customer)->WishList[j]->Id,
					"" + safe_cast<Customer^>(customer)->WishList[j]->Name,
					"" + safe_cast<Customer^>(customer)->WishList[j]->PriceMin,
					"" + safe_cast<Customer^>(customer)->WishList[j]->Description
			});

		}
	}
}

System::Void SalesView::MyWishList::dgvWishList_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	//return System::Void();
	if (e->RowIndex <= 0) return;
	if (e->RowIndex > 0) {
		String^ productId = dgvWishList->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		SalesMainForm::product = Controller::QueryProductById(Int32::Parse(productId));
		
		
		ProductPresentationForm^ ProductPresentation = gcnew ProductPresentationForm(this, SalesMainForm::person->Id);
				ProductPresentation->ShowDialog();
				
		// Verificar queno se repita el producto
		Person^ user = Controller::QueryUserById(SalesMainForm::person->Id);
		List<Product^>^ mywishList = safe_cast<Customer^>(user)->WishList;

		for (int i = 0; i < mywishList->Count; i++)
			if (mywishList[i]->Id == Int32::Parse(productId)) {
				
				//MessageBox::Show("Este producto ya ha sido añadido a la lista de deseo");
				return;
			}
		//Abrir el form de product detaills

		
	}
}
