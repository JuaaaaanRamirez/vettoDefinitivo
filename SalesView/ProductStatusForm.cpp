#include "pch.h"
#include "ProductStatusForm.h"
#include "SalesMainForm.h"

System::Void SalesView::ProductStatusForm::ProductStatusForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	{
		if (SalesMainForm::person->Profile == 'M') { btnClaim->Text = "REVISAR RECLAMO"; btnCancel->Text = "ELIMINAR PEDIDO"; }
		ShowData();
		ShowShoppingCart();
	}
}
