#include "pch.h"
#include "ProductSearchForm.h"
#include "SaleDetailForm.h"

System::Void SalesView::ProductSearchForm::dgvProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
		/*if (e->RowIndex < 0) return;
		if (e->RowIndex >= 0) {
			String^ productId = dgvProducts->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			Product^ p = Controller::QueryProductById(Int32::Parse(productId));
			if (refForm->GetType() == SaleForm::typeid)
				((SaleForm^)refForm)->AddProductToSaleDetails(p);
		}
		this->Close();*/
}
