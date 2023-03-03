#include "pch.h"
#include "ProductStatusForm.h"
#include "SalesMainForm.h"

System::Void SalesView::ProductStatusForm::ProductStatusForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	{
		if (SalesMainForm::person->Profile == 'M') { btnClaim->Visible = false; btnCancel->Text = "ELIMINAR PEDIDO"; txtStatus->ReadOnly = false; }
		ShowData();
		//ShowShoppingCart();
	}
}

System::Void SalesView::ProductStatusForm::btnClaim_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (SalesMainForm::person->Profile == 'S') {
		Sale^ newSale = Controller::QuerySaleById(saleId);
		newSale->Status = 'D'; Controller::UpdateSale(newSale);
		MessageBox::Show("Nuestro equipo se pondrá en contacto con usted para atender el reclamo");
		ShowData();
		//ShowShoppingCart();
	}
}

System::Void SalesView::ProductStatusForm::btnCancel_Click(System::Object^ sender, System::EventArgs^ e)
{
	Sale^ newSale = Controller::QuerySaleById(saleId);
	if (SalesMainForm::person->Profile == 'S') {
		newSale->Status = 'G'; Controller::UpdateSale(newSale);
		MessageBox::Show("Lamentamos los problemas que haya tenido");
		ShowData();
		//ShowShoppingCart();
	}
	else {
		Controller::DeleteSale(newSale->Id);
		MessageBox::Show("La venta ha sido eliminada");
		this->Close();
	}
}
