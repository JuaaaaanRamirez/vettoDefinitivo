#include "pch.h"
#include "MySaleHistory.h"
#include "SalesMainForm.h"

System::Void SalesView::MySaleHistory::MySaleHistory_Load(System::Object^ sender, System::EventArgs^ e)
{
	lbTitle->Text = "Historial de compras de " + SalesMainForm::person->Name;
	List<Sale^>^ mySells = Controller::QueryAllSales();

	dgvMyShopping->Rows->Clear();
	for (int i = 0; i < mySells->Count; i++) {
		if(SalesMainForm::person->Name== mySells[i]->Customer->Name){
			dgvMyShopping->Rows->Add(gcnew array<String^>{
			
				"" + mySells[i]->Id,
					mySells[i]->SaleDate,
					mySells[i]->StoreManager->Name,
					"" + mySells[i]->Total,
					mySells[i]->PaidMode
			});
		}
	}
	dgvMyShopping->ReadOnly=true;
    //return System::Void();
}
