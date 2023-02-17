#pragma once

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
	/// Resumen de ProductStatusForm
	/// </summary>
	public ref class ProductStatusForm : public System::Windows::Forms::Form
	{
	public:
		int saleId;
		ProductStatusForm(int saleId)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->saleId = saleId;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductStatusForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::TextBox^ txtIGV;
	private: System::Windows::Forms::TextBox^ txtSubTotal;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dgvSaleDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubTotal;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnClaim;

	private: System::Windows::Forms::Label^ lbPaidMode;
	private: System::Windows::Forms::Label^ lbSaleID;
	private: System::Windows::Forms::TextBox^ txtSaleId;
	private: System::Windows::Forms::TextBox^ txtDate;
	private: System::Windows::Forms::Label^ lbReference;
	private: System::Windows::Forms::Label^ lbSalePerson;

	private: System::Windows::Forms::Label^ lbUser;
	private: System::Windows::Forms::TextBox^ txtReference;
	private: System::Windows::Forms::TextBox^ txtSalePerson;

	private: System::Windows::Forms::TextBox^ txtUserName;
	private: System::Windows::Forms::Label^ lbDate;
	private: System::Windows::Forms::Label^ lbAddress;
	private: System::Windows::Forms::TextBox^ txtAddress;


	private: System::Windows::Forms::Label^ lbStatus;
	private: System::Windows::Forms::TextBox^ txtStatus;
	private: System::Windows::Forms::TextBox^ txtClaim;
	private: System::Windows::Forms::TextBox^ txtPaidMode;




	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtIGV = (gcnew System::Windows::Forms::TextBox());
			this->txtSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dgvSaleDetail = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnClaim = (gcnew System::Windows::Forms::Button());
			this->lbPaidMode = (gcnew System::Windows::Forms::Label());
			this->lbSaleID = (gcnew System::Windows::Forms::Label());
			this->txtSaleId = (gcnew System::Windows::Forms::TextBox());
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->lbReference = (gcnew System::Windows::Forms::Label());
			this->lbSalePerson = (gcnew System::Windows::Forms::Label());
			this->lbUser = (gcnew System::Windows::Forms::Label());
			this->txtReference = (gcnew System::Windows::Forms::TextBox());
			this->txtSalePerson = (gcnew System::Windows::Forms::TextBox());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->lbAddress = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->lbStatus = (gcnew System::Windows::Forms::Label());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->txtClaim = (gcnew System::Windows::Forms::TextBox());
			this->txtPaidMode = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSaleDetail))->BeginInit();
			this->SuspendLayout();
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(5, 10);
			this->lbTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(176, 25);
			this->lbTitle->TabIndex = 4;
			this->lbTitle->Text = L"Datos del Pedido";
			this->lbTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(845, 445);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(100, 22);
			this->txtTotal->TabIndex = 26;
			// 
			// txtIGV
			// 
			this->txtIGV->Location = System::Drawing::Point(845, 415);
			this->txtIGV->Name = L"txtIGV";
			this->txtIGV->ReadOnly = true;
			this->txtIGV->Size = System::Drawing::Size(100, 22);
			this->txtIGV->TabIndex = 25;
			// 
			// txtSubTotal
			// 
			this->txtSubTotal->Location = System::Drawing::Point(845, 385);
			this->txtSubTotal->Name = L"txtSubTotal";
			this->txtSubTotal->ReadOnly = true;
			this->txtSubTotal->Size = System::Drawing::Size(100, 22);
			this->txtSubTotal->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(750, 385);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 16);
			this->label4->TabIndex = 23;
			this->label4->Text = L"SubTotal (S/.):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(750, 445);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 16);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Total (S/.):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(750, 415);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 21;
			this->label5->Text = L"I.G.V (18%).";
			// 
			// dgvSaleDetail
			// 
			this->dgvSaleDetail->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSaleDetail->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Nombre,
					this->Precio, this->Cantidad, this->SubTotal
			});
			this->dgvSaleDetail->Location = System::Drawing::Point(10, 220);
			this->dgvSaleDetail->Name = L"dgvSaleDetail";
			this->dgvSaleDetail->RowHeadersWidth = 51;
			this->dgvSaleDetail->RowTemplate->Height = 24;
			this->dgvSaleDetail->Size = System::Drawing::Size(939, 150);
			this->dgvSaleDetail->TabIndex = 19;
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
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(290, 430);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(200, 35);
			this->btnCancel->TabIndex = 27;
			this->btnCancel->Text = L"Cancelar Pedido";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnClaim
			// 
			this->btnClaim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->btnClaim->Location = System::Drawing::Point(150, 430);
			this->btnClaim->Name = L"btnClaim";
			this->btnClaim->Size = System::Drawing::Size(120, 35);
			this->btnClaim->TabIndex = 28;
			this->btnClaim->Text = L"Reclamar";
			this->btnClaim->UseVisualStyleBackColor = true;
			// 
			// lbPaidMode
			// 
			this->lbPaidMode->AutoSize = true;
			this->lbPaidMode->Location = System::Drawing::Point(10, 174);
			this->lbPaidMode->Name = L"lbPaidMode";
			this->lbPaidMode->Size = System::Drawing::Size(110, 16);
			this->lbPaidMode->TabIndex = 39;
			this->lbPaidMode->Text = L"Método de pago:";
			// 
			// lbSaleID
			// 
			this->lbSaleID->AutoSize = true;
			this->lbSaleID->Location = System::Drawing::Point(10, 54);
			this->lbSaleID->Name = L"lbSaleID";
			this->lbSaleID->Size = System::Drawing::Size(78, 16);
			this->lbSaleID->TabIndex = 38;
			this->lbSaleID->Text = L"ID de venta:";
			// 
			// txtSaleId
			// 
			this->txtSaleId->BackColor = System::Drawing::SystemColors::Control;
			this->txtSaleId->Location = System::Drawing::Point(100, 54);
			this->txtSaleId->Name = L"txtSaleId";
			this->txtSaleId->ReadOnly = true;
			this->txtSaleId->Size = System::Drawing::Size(350, 22);
			this->txtSaleId->TabIndex = 37;
			// 
			// txtDate
			// 
			this->txtDate->BackColor = System::Drawing::SystemColors::Control;
			this->txtDate->Location = System::Drawing::Point(100, 84);
			this->txtDate->Name = L"txtDate";
			this->txtDate->ReadOnly = true;
			this->txtDate->Size = System::Drawing::Size(351, 22);
			this->txtDate->TabIndex = 36;
			// 
			// lbReference
			// 
			this->lbReference->AutoSize = true;
			this->lbReference->Location = System::Drawing::Point(470, 84);
			this->lbReference->Name = L"lbReference";
			this->lbReference->Size = System::Drawing::Size(76, 16);
			this->lbReference->TabIndex = 35;
			this->lbReference->Text = L"Referencia:";
			// 
			// lbSalePerson
			// 
			this->lbSalePerson->AutoSize = true;
			this->lbSalePerson->Location = System::Drawing::Point(10, 144);
			this->lbSalePerson->Name = L"lbSalePerson";
			this->lbSalePerson->Size = System::Drawing::Size(70, 16);
			this->lbSalePerson->TabIndex = 34;
			this->lbSalePerson->Text = L"Vendedor:";
			// 
			// lbUser
			// 
			this->lbUser->AutoSize = true;
			this->lbUser->Location = System::Drawing::Point(10, 114);
			this->lbUser->Name = L"lbUser";
			this->lbUser->Size = System::Drawing::Size(51, 16);
			this->lbUser->TabIndex = 33;
			this->lbUser->Text = L"Cliente:";
			// 
			// txtReference
			// 
			this->txtReference->BackColor = System::Drawing::SystemColors::Control;
			this->txtReference->Location = System::Drawing::Point(570, 84);
			this->txtReference->Name = L"txtReference";
			this->txtReference->ReadOnly = true;
			this->txtReference->Size = System::Drawing::Size(350, 22);
			this->txtReference->TabIndex = 32;
			// 
			// txtSalePerson
			// 
			this->txtSalePerson->BackColor = System::Drawing::SystemColors::Control;
			this->txtSalePerson->Location = System::Drawing::Point(100, 144);
			this->txtSalePerson->Name = L"txtSalePerson";
			this->txtSalePerson->ReadOnly = true;
			this->txtSalePerson->Size = System::Drawing::Size(350, 22);
			this->txtSalePerson->TabIndex = 31;
			// 
			// txtUserName
			// 
			this->txtUserName->BackColor = System::Drawing::SystemColors::Control;
			this->txtUserName->Location = System::Drawing::Point(100, 114);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->ReadOnly = true;
			this->txtUserName->Size = System::Drawing::Size(351, 22);
			this->txtUserName->TabIndex = 30;
			// 
			// lbDate
			// 
			this->lbDate->AutoSize = true;
			this->lbDate->Location = System::Drawing::Point(10, 84);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(82, 16);
			this->lbDate->TabIndex = 29;
			this->lbDate->Text = L"Fecha/Hora:";
			// 
			// lbAddress
			// 
			this->lbAddress->AutoSize = true;
			this->lbAddress->Location = System::Drawing::Point(470, 54);
			this->lbAddress->Name = L"lbAddress";
			this->lbAddress->Size = System::Drawing::Size(67, 16);
			this->lbAddress->TabIndex = 42;
			this->lbAddress->Text = L"Dirección:";
			// 
			// txtAddress
			// 
			this->txtAddress->BackColor = System::Drawing::SystemColors::Control;
			this->txtAddress->Location = System::Drawing::Point(570, 54);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->ReadOnly = true;
			this->txtAddress->Size = System::Drawing::Size(350, 22);
			this->txtAddress->TabIndex = 41;
			// 
			// lbStatus
			// 
			this->lbStatus->AutoSize = true;
			this->lbStatus->Location = System::Drawing::Point(470, 114);
			this->lbStatus->Name = L"lbStatus";
			this->lbStatus->Size = System::Drawing::Size(53, 16);
			this->lbStatus->TabIndex = 44;
			this->lbStatus->Text = L"Estado:";
			// 
			// txtStatus
			// 
			this->txtStatus->BackColor = System::Drawing::SystemColors::Control;
			this->txtStatus->Location = System::Drawing::Point(570, 114);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->ReadOnly = true;
			this->txtStatus->Size = System::Drawing::Size(350, 22);
			this->txtStatus->TabIndex = 43;
			// 
			// txtClaim
			// 
			this->txtClaim->Location = System::Drawing::Point(570, 144);
			this->txtClaim->Multiline = true;
			this->txtClaim->Name = L"txtClaim";
			this->txtClaim->ReadOnly = true;
			this->txtClaim->Size = System::Drawing::Size(350, 55);
			this->txtClaim->TabIndex = 45;
			// 
			// txtPaidMode
			// 
			this->txtPaidMode->BackColor = System::Drawing::SystemColors::Control;
			this->txtPaidMode->Location = System::Drawing::Point(126, 174);
			this->txtPaidMode->Name = L"txtPaidMode";
			this->txtPaidMode->ReadOnly = true;
			this->txtPaidMode->Size = System::Drawing::Size(324, 22);
			this->txtPaidMode->TabIndex = 46;
			// 
			// ProductStatusForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 503);
			this->Controls->Add(this->txtPaidMode);
			this->Controls->Add(this->txtClaim);
			this->Controls->Add(this->lbStatus);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->lbAddress);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->lbPaidMode);
			this->Controls->Add(this->lbSaleID);
			this->Controls->Add(this->txtSaleId);
			this->Controls->Add(this->txtDate);
			this->Controls->Add(this->lbReference);
			this->Controls->Add(this->lbSalePerson);
			this->Controls->Add(this->lbUser);
			this->Controls->Add(this->txtReference);
			this->Controls->Add(this->txtSalePerson);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->lbDate);
			this->Controls->Add(this->btnClaim);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->txtIGV);
			this->Controls->Add(this->txtSubTotal);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgvSaleDetail);
			this->Controls->Add(this->lbTitle);
			this->Name = L"ProductStatusForm";
			this->Text = L"ProductStatusForm";
			this->Load += gcnew System::EventHandler(this, &ProductStatusForm::ProductStatusForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSaleDetail))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ShowData() {

			// Sale
			Sale^ mySale = Controller::QuerySaleById(saleId);
			txtSaleId->Text = "" + mySale->Id;
			txtDate->Text = "" + mySale->SaleDate; // Today
			txtUserName->Text = "" + mySale->Customer->Username;
			txtSalePerson->Text = "" + mySale->StoreManager->Name;
			txtReference->Text = "" + mySale->Reference;
			txtAddress->Text = "" + mySale->Customer->Address;
			txtPaidMode->Text = "" + mySale->PaidMode;
			txtStatus->Text = "" + mySale->Status;
		}
		void ShowShoppingCart() {
			// Dgv SaleDetails
			List<Sale^>^ mysaleList = Controller::QueryAllSales();		// Make List
			dgvSaleDetail->Rows->Clear();							    // Clear Dgv
			double SubTotal = 0;

			for (int i = 0; i < mysaleList->Count; i++)		   // Look for!
				if (i == saleId) {
					for (int j = 0; j < mysaleList[i]->SaleDetails->Count; j++) {
						dgvSaleDetail->Rows->Add(gcnew array<String^>{
							"" + mysaleList[i]->SaleDetails[j]->Id,
								"" + mysaleList[i]->SaleDetails[j]->Product->Name,
								"" + mysaleList[i]->SaleDetails[j]->UnitPrice,
								"" + mysaleList[i]->SaleDetails[j]->Quantity,
								"" + mysaleList[i]->SaleDetails[j]->SubTotal
						});
					}
					txtSubTotal->Text = "" + mysaleList[i]->Total * (0.82);
					txtIGV->Text = "" + mysaleList[i]->Total * (0.18);
					txtTotal->Text = "" + mysaleList[i]->Total;
				}

		}
	private: System::Void ProductStatusForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowData();
		ShowShoppingCart();
	}
};
}
