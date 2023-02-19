#include "pch.h"
#include "MyWishList.h"
#include "SalesMainForm.h"


System::Void SalesView::MyWishList::MyWishList_Load(System::Object^ sender, System::EventArgs^ e)
{
	Person^ customer = gcnew Customer;

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
