#pragma once
#include "ProductSearchForm.h"
namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace SalesController;		// Controller
	using namespace SalesModel;				// Classes and Instances
	using namespace System::Collections::Generic;	 // List^

	/// <summary>
	/// Resumen de SaleDetailForm
	/// </summary>
	public ref class SaleDetailForm : public System::Windows::Forms::Form
	{
	public:	static int saleId;

	public:

		// Instances
		static bool paid=true;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubTotal;
	private: System::Windows::Forms::Label^ lbPaidMode;
	private: System::Windows::Forms::ComboBox^ cbPaidMode;
	private: System::Windows::Forms::Button^ btnLookForCustomer;


	public:
		   static SaleDetailForm^ mySaleDetail;

		SaleDetailForm(int saleId)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->saleId = saleId;
			mySaleDetail = this;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SaleDetailForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbDate;
	protected:


	private: System::Windows::Forms::TextBox^ txtUserName;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtReference;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnDelete;






	private: System::Windows::Forms::Label^ lbUser;
	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::Label^ lbReference;
	private: System::Windows::Forms::DataGridView^ dgvSaleDetail;









	private: System::Windows::Forms::Button^ btnPaid;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtSubTotal;
	private: System::Windows::Forms::TextBox^ txtIGV;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::TextBox^ txtDate;
	private: System::Windows::Forms::TextBox^ txtSaleId;


	private: System::Windows::Forms::Label^ lbSaleID;



















	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtReference = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->lbUser = (gcnew System::Windows::Forms::Label());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->lbReference = (gcnew System::Windows::Forms::Label());
			this->dgvSaleDetail = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnPaid = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtIGV = (gcnew System::Windows::Forms::TextBox());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->txtSaleId = (gcnew System::Windows::Forms::TextBox());
			this->lbSaleID = (gcnew System::Windows::Forms::Label());
			this->lbPaidMode = (gcnew System::Windows::Forms::Label());
			this->cbPaidMode = (gcnew System::Windows::Forms::ComboBox());
			this->btnLookForCustomer = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSaleDetail))->BeginInit();
			this->SuspendLayout();
			// 
			// lbDate
			// 
			this->lbDate->AutoSize = true;
			this->lbDate->Location = System::Drawing::Point(5, 50);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(82, 16);
			this->lbDate->TabIndex = 0;
			this->lbDate->Text = L"Fecha/Hora:";
			// 
			// txtUserName
			// 
			this->txtUserName->BackColor = System::Drawing::SystemColors::Window;
			this->txtUserName->Location = System::Drawing::Point(105, 80);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->ReadOnly = true;
			this->txtUserName->Size = System::Drawing::Size(599, 22);
			this->txtUserName->TabIndex = 2;
			this->txtUserName->TextChanged += gcnew System::EventHandler(this, &SaleDetailForm::txtUserName_TextChanged);
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(105, 110);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(599, 22);
			this->txtAddress->TabIndex = 3;
			this->txtAddress->TextChanged += gcnew System::EventHandler(this, &SaleDetailForm::txtAddress_TextChanged);
			// 
			// txtReference
			// 
			this->txtReference->Location = System::Drawing::Point(105, 140);
			this->txtReference->Name = L"txtReference";
			this->txtReference->Size = System::Drawing::Size(599, 22);
			this->txtReference->TabIndex = 4;
			this->txtReference->TextChanged += gcnew System::EventHandler(this, &SaleDetailForm::txtReference_TextChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(150, 210);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(180, 30);
			this->btnAdd->TabIndex = 5;
			this->btnAdd->Text = L"Agregar producto";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &SaleDetailForm::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(400, 210);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(180, 30);
			this->btnDelete->TabIndex = 6;
			this->btnDelete->Text = L"Eliminar producto";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &SaleDetailForm::btnDelete_Click);
			// 
			// lbUser
			// 
			this->lbUser->AutoSize = true;
			this->lbUser->Location = System::Drawing::Point(5, 80);
			this->lbUser->Name = L"lbUser";
			this->lbUser->Size = System::Drawing::Size(51, 16);
			this->lbUser->TabIndex = 7;
			this->lbUser->Text = L"Cliente:";
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Location = System::Drawing::Point(5, 110);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(67, 16);
			this->lbAddress->TabIndex = 8;
			this->lbAddress->Text = L"Dirección:";
			// 
			// lbReference
			// 
			this->lbReference->AutoSize = true;
			this->lbReference->Location = System::Drawing::Point(5, 140);
			this->lbReference->Name = L"lbReference";
			this->lbReference->Size = System::Drawing::Size(76, 16);
			this->lbReference->TabIndex = 9;
			this->lbReference->Text = L"Referencia:";
			// 
			// dgvSaleDetail
			// 
			this->dgvSaleDetail->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvSaleDetail->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSaleDetail->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Nombre,
					this->Precio, this->Cantidad, this->SubTotal
			});
			this->dgvSaleDetail->Location = System::Drawing::Point(5, 260);
			this->dgvSaleDetail->Name = L"dgvSaleDetail";
			this->dgvSaleDetail->RowHeadersWidth = 51;
			this->dgvSaleDetail->RowTemplate->Height = 24;
			this->dgvSaleDetail->Size = System::Drawing::Size(699, 150);
			this->dgvSaleDetail->TabIndex = 10;
			this->dgvSaleDetail->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleDetailForm::dgvSaleDetail_CellValueChanged);
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 125;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			this->Nombre->Width = 125;
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->MinimumWidth = 6;
			this->Precio->Name = L"Precio";
			this->Precio->ReadOnly = true;
			this->Precio->Width = 125;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->MinimumWidth = 6;
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Width = 125;
			// 
			// SubTotal
			// 
			this->SubTotal->HeaderText = L"SubTotal";
			this->SubTotal->MinimumWidth = 6;
			this->SubTotal->Name = L"SubTotal";
			this->SubTotal->ReadOnly = true;
			this->SubTotal->Width = 125;
			// 
			// btnPaid
			// 
			this->btnPaid->Location = System::Drawing::Point(300, 500);
			this->btnPaid->Name = L"btnPaid";
			this->btnPaid->Size = System::Drawing::Size(120, 30);
			this->btnPaid->TabIndex = 11;
			this->btnPaid->Text = L"Pagar";
			this->btnPaid->UseVisualStyleBackColor = true;
			this->btnPaid->Click += gcnew System::EventHandler(this, &SaleDetailForm::btnPaid_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(505, 450);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"I.G.V (18%).";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(505, 475);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Total (S/.):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(505, 425);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"SubTotal (S/.):";
			// 
			// txtSubTotal
			// 
			this->txtSubTotal->Location = System::Drawing::Point(605, 420);
			this->txtSubTotal->Name = L"txtSubTotal";
			this->txtSubTotal->ReadOnly = true;
			this->txtSubTotal->Size = System::Drawing::Size(100, 22);
			this->txtSubTotal->TabIndex = 16;
			// 
			// txtIGV
			// 
			this->txtIGV->Location = System::Drawing::Point(605, 445);
			this->txtIGV->Name = L"txtIGV";
			this->txtIGV->ReadOnly = true;
			this->txtIGV->Size = System::Drawing::Size(100, 22);
			this->txtIGV->TabIndex = 17;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(605, 470);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(100, 22);
			this->txtTotal->TabIndex = 18;
			// 
			// txtDate
			// 
			this->txtDate->BackColor = System::Drawing::SystemColors::Window;
			this->txtDate->Location = System::Drawing::Point(105, 50);
			this->txtDate->Name = L"txtDate";
			this->txtDate->ReadOnly = true;
			this->txtDate->Size = System::Drawing::Size(599, 22);
			this->txtDate->TabIndex = 19;
			// 
			// txtSaleId
			// 
			this->txtSaleId->BackColor = System::Drawing::SystemColors::Window;
			this->txtSaleId->Location = System::Drawing::Point(105, 20);
			this->txtSaleId->Name = L"txtSaleId";
			this->txtSaleId->ReadOnly = true;
			this->txtSaleId->Size = System::Drawing::Size(599, 22);
			this->txtSaleId->TabIndex = 20;
			// 
			// lbSaleID
			// 
			this->lbSaleID->AutoSize = true;
			this->lbSaleID->Location = System::Drawing::Point(5, 20);
			this->lbSaleID->Name = L"lbSaleID";
			this->lbSaleID->Size = System::Drawing::Size(78, 16);
			this->lbSaleID->TabIndex = 21;
			this->lbSaleID->Text = L"ID de venta:";
			// 
			// lbPaidMode
			// 
			this->lbPaidMode->AutoSize = true;
			this->lbPaidMode->Location = System::Drawing::Point(5, 170);
			this->lbPaidMode->Name = L"lbPaidMode";
			this->lbPaidMode->Size = System::Drawing::Size(75, 32);
			this->lbPaidMode->TabIndex = 22;
			this->lbPaidMode->Text = L"Método de \r\npago:";
			// 
			// cbPaidMode
			// 
			this->cbPaidMode->FormattingEnabled = true;
			this->cbPaidMode->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Efectivo", L"Paypal", L"PagoEfectivo", L"Tarjeta de débito/crédito" });
			this->cbPaidMode->Location = System::Drawing::Point(105, 170);
			this->cbPaidMode->Name = L"cbPaidMode";
			this->cbPaidMode->Size = System::Drawing::Size(599, 24);
			this->cbPaidMode->TabIndex = 23;
			this->cbPaidMode->SelectedValueChanged += gcnew System::EventHandler(this, &SaleDetailForm::cbPaidMode_SelectedValueChanged);
			// 
			// btnLookForCustomer
			// 
			this->btnLookForCustomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnLookForCustomer->Location = System::Drawing::Point(665, 80);
			this->btnLookForCustomer->Name = L"btnLookForCustomer";
			this->btnLookForCustomer->Size = System::Drawing::Size(40, 25);
			this->btnLookForCustomer->TabIndex = 24;
			this->btnLookForCustomer->Text = L"...";
			this->btnLookForCustomer->UseVisualStyleBackColor = true;
			this->btnLookForCustomer->Click += gcnew System::EventHandler(this, &SaleDetailForm::btnLookForCustomer_Click);
			// 
			// SaleDetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->ClientSize = System::Drawing::Size(716, 533);
			this->Controls->Add(this->btnLookForCustomer);
			this->Controls->Add(this->cbPaidMode);
			this->Controls->Add(this->lbPaidMode);
			this->Controls->Add(this->lbSaleID);
			this->Controls->Add(this->txtSaleId);
			this->Controls->Add(this->txtDate);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->txtIGV);
			this->Controls->Add(this->txtSubTotal);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnPaid);
			this->Controls->Add(this->dgvSaleDetail);
			this->Controls->Add(this->lbReference);
			this->Controls->Add(this->lbAddress);
			this->Controls->Add(this->lbUser);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtReference);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->lbDate);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SaleDetailForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Detalle de la venta";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SaleDetailForm::SaleDetailForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &SaleDetailForm::SaleDetailForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSaleDetail))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowData() {

			// Sale
			Sale^ mySale = Controller::QuerySaleById(saleId);
			if (mySale->StoreManager->Id==0) btnLookForCustomer->Visible = false;
			txtSaleId->Text = "" + mySale->Id;
			txtDate->Text = "" + mySale->SaleDate; // Today
			if (mySale->Customer != nullptr) txtUserName->Text = "" + mySale->Customer->Username;
			txtAddress->Text = "" + mySale->Address;
			cbPaidMode->Text = "" + mySale->PaidMode;
			
			

			//	Reference empty
		}
		void ShowShoppingCart() {
			// Dgv SaleDetails
			List<Sale^>^ mysaleList = Controller::QueryAllSales();		// Make List
			dgvSaleDetail->Rows->Clear();							    // Clear Dgv
			double SubTotal = 0;

			for (int i = 0; i < mysaleList->Count; i++)		   // Look for!
				if (i == saleId){
					mysaleList[i]->Total = 0;
					for (int j = 0; j < mysaleList[i]->SaleDetails->Count; j++) {
						dgvSaleDetail->Rows->Add(gcnew array<String^>{
							"" + mysaleList[i]->SaleDetails[j]->Id,
								"" + mysaleList[i]->SaleDetails[j]->Product->Name,
								"" + mysaleList[i]->SaleDetails[j]->UnitPrice,
								"" + mysaleList[i]->SaleDetails[j]->Quantity,
								"" + mysaleList[i]->SaleDetails[j]->SubTotal
						});
						mysaleList[i]->Total += mysaleList[i]->SaleDetails[j]->SubTotal;
						txtSubTotal->Text = "" + mysaleList[i]->Total * (0.82);
						txtIGV->Text = "" + mysaleList[i]->Total * (0.18);
						txtTotal->Text = "" + mysaleList[i]->Total;
						Controller::UpdateSale(mysaleList[i]);
					}
				}
					
		}
	private: System::Void btnPaid_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verification
		if (txtUserName->Text->Trim() == "") { MessageBox::Show("El nombre del cliente no puede estar vacío"); return; }
		if (txtAddress->Text->Trim() == "") { MessageBox::Show("La dirección del cliente no puede estar vacía"); return; }
		if (!(cbPaidMode->Text->Equals("Efectivo") ||
			cbPaidMode->Text->Equals("Paypal") ||
			cbPaidMode->Text->Equals("PagoEfectivo") ||
			cbPaidMode->Text->Equals("Tarjeta de débito/crédito"))) { MessageBox::Show("Seleccione un método de pago correcto"); return;}
		Sale^ mySale = Controller::QuerySaleById(saleId);
		if (mySale->SaleDetails->Count==0){ MessageBox::Show("La lista no puede estar vacía"); return; }
		paid = true;
		
		// Update Products and Cutomer Points
		for (int i = 0; i < mySale->SaleDetails->Count; i++) {

			// Update Products
			Product^ myProduct = Controller::QueryProductById(mySale->SaleDetails[i]->Id);
			myProduct->Stock= myProduct->Stock - mySale->SaleDetails[i]->Quantity;
			myProduct->Sales = myProduct->Sales + mySale->SaleDetails[i]->Quantity;
			Controller::UpdateProduct(myProduct);

			// Cp
			Person^ myPerson = (Customer^)Controller::QueryUserById(mySale->Customer->Id);
			((Customer^)myPerson)->CustomerPoints = ((Customer^)myPerson)->CustomerPoints + mySale->SaleDetails[i]->Quantity;
			Controller::UpdateUser(myPerson);
		}

		// Great!
		MessageBox::Show("¡Venta Exitosa!");
		this->Close();
	}
	private: System::Void SaleDetailForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowData();
		ShowShoppingCart();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Sale^ thisSale = Controller::QuerySaleById(saleId);
		if (thisSale->StoreManager->Id==0) Close();
		else {
			ProductSearchForm^ mySearch = gcnew ProductSearchForm(this);
			mySearch->ShowDialog();
			ShowData(); ShowShoppingCart();
		}
	}
private: System::Void SaleDetailForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	/*Sale^ mySale = Controller::QuerySaleById(saleId);
	if (txtUserName->Text == ""|| mySale->SaleDetails->Count == 0) Controller::DeleteSale(saleId);*/
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvSaleDetail->SelectedCells->Count == 1) {
		if (dgvSaleDetail->SelectedCells[0]->Value->ToString()->Trim() != "") {
			int selectedRowIndex = dgvSaleDetail->SelectedCells[0]->RowIndex;
			int saleDetailId = Convert::ToInt32(dgvSaleDetail->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
			Controller::DeleteSaleDetail(saleId, saleDetailId);
			ShowData(); ShowShoppingCart();
		}
		else
			MessageBox::Show("No se puede eliminar una fila vacía.");
	}
	else
		MessageBox::Show("Para eliminar debe seleccionar solo un producto.");
	ShowData();
	ShowShoppingCart();
}
private: System::Void dgvSaleDetail_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvSaleDetail->Columns[e->ColumnIndex]->Name == "Cantidad") {
		// Sale
		Sale^ currentSale = Controller::QuerySaleById(saleId);
		if (Int32::Parse(dgvSaleDetail->CurrentCell->Value->ToString()) > currentSale->SaleDetails[e->RowIndex]->Product->Stock) MessageBox::Show("Stock superado");
		else {
			if (Int32::Parse(dgvSaleDetail->CurrentCell->Value->ToString()) >= 6) {
				currentSale->SaleDetails[e->RowIndex]->UnitPrice = currentSale->SaleDetails[e->RowIndex]->Product->PriceMaj;
			}
			else currentSale->SaleDetails[e->RowIndex]->UnitPrice = currentSale->SaleDetails[e->RowIndex]->Product->PriceMin;
			dgvSaleDetail->Rows[e->RowIndex]->Cells[4]->Value =
				Int32::Parse(dgvSaleDetail->CurrentCell->Value->ToString()) *
				currentSale->SaleDetails[e->RowIndex]->UnitPrice;
			// Update Sale
			currentSale->SaleDetails[e->RowIndex]->Quantity = Int32::Parse(dgvSaleDetail->CurrentCell->Value->ToString());
			currentSale->SaleDetails[e->RowIndex]->SubTotal = Int32::Parse(dgvSaleDetail->CurrentCell->Value->ToString()) *currentSale->SaleDetails[e->RowIndex]->UnitPrice;;
			Controller::UpdateSaleDetail(currentSale->SaleDetails[e->RowIndex], currentSale->Id);
		}
		ShowData();
		ShowShoppingCart();
	}
}
private: System::Void txtUserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtUserName->Text->Trim() != "") {
		Sale^ mySale = Controller::QuerySaleById(saleId);
		mySale->Customer->Username = txtUserName->Text;
		Controller::UpdateSale(mySale);
	}
}
private: System::Void txtAddress_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtAddress->Text->Trim() != "") {
		Sale^ mySale = Controller::QuerySaleById(saleId);
		mySale->Address = txtAddress->Text;
		//mySale->Customer->Address = txtAddress->Text;
		Controller::UpdateSale(mySale);
	}
}
private: System::Void txtReference_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtReference->Text->Trim() != "") {
		Sale^ mySale = Controller::QuerySaleById(saleId);
		mySale->Reference = txtReference->Text;
		Controller::UpdateSale(mySale);
	}
}
private: System::Void cbPaidMode_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		Sale^ mySale = Controller::QuerySaleById(saleId);
		mySale->PaidMode = cbPaidMode->Text;
		Controller::UpdateSale(mySale);
}
private: System::Void btnLookForCustomer_Click(System::Object^ sender, System::EventArgs^ e);
};
}