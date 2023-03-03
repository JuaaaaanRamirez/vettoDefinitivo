#include "pch.h"
#include "MySaleHistory.h"
#include "SalesMainForm.h"





void SalesView::MySaleHistory::ShowData()
{
	List<Sale^>^ mySells = Controller::QuerySaleByCustomerId(SalesMainForm::person->Id);
	dgvMyShopping->Rows->Clear();
	for (int i = 0; i < mySells->Count; i++) {
		if (mySells[i]->Total == 0) continue;
		dgvMyShopping->Rows->Add(gcnew array<String^>{
			"" + mySells[i]->Id,
				mySells[i]->SaleDate,
				mySells[i]->StoreManager->Name,
				"" + mySells[i]->Total,
				mySells[i]->PaidMode
		});
	}
	dgvMyShopping->ReadOnly = true;
	//return System::Void();
}

System::Void SalesView::MySaleHistory::MySaleHistory_Load(System::Object^ sender, System::EventArgs^ e)
{
	lbTitle->Text = "Historial de compras de " + SalesMainForm::person->Name;
	ShowData();
}

System::Void SalesView::MySaleHistory::dgvMyShopping_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	ProductStatusForm^ myStatus = gcnew ProductStatusForm(Int32::Parse(dgvMyShopping->Rows[e->RowIndex]->Cells[0]->Value->ToString()));
	//int bruh = Int32::Parse(dgvMyShopping->Rows[e->RowIndex]->Cells[0]->Value->ToString());
	myStatus->ShowDialog();
	ShowData();
}
