#include "pch.h"
#include "ProductSearchForm.h"
#include "SaleDetailForm.h"
#include "SalesMainForm.h"

System::Void SalesView::ProductSearchForm::dgvProducts_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ productId = dgvProducts->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		SalesMainForm::product= Controller::QueryProductById(Int32::Parse(productId));
		Product^ p = Controller::QueryProductById(Int32::Parse(productId));
		if (refForm->GetType() == SaleDetailForm::typeid) {
			
			Sale^ mysale = Controller::QueryLastSale();
			int saleId = mysale->Id;
			
			// New SaleDeatil?
			List<Sale^>^ mysaleList = Controller::QueryAllSales();

			//Is the product repeated?
			for (int i = 0; i < mysaleList[saleId]->SaleDetails->Count; i++)
			if (mysaleList[saleId]->SaleDetails[i]->Product->Id == p->Id) { MessageBox::Show("Este producto ya ha sido añadido al carrito"); return; }

			// Put On Data
			SaleDetail^ newSaleDetail = gcnew SaleDetail();
			newSaleDetail->Id = p->Id;
			newSaleDetail->Quantity=1;
			newSaleDetail->UnitPrice=p->PriceMin;
			newSaleDetail->SubTotal = p->PriceMin * newSaleDetail->Quantity;
			newSaleDetail->Product=p;

			mysaleList[saleId]->SaleDetails->Add(newSaleDetail); Controller::UpdateSale(mysaleList[saleId]); //SaleDetail
		}
			
	}
	this->Close();
}
