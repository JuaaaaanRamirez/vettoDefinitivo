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
	/// Resumen de SaleDetailForm
	/// </summary>
	public ref class SaleDetailForm : public System::Windows::Forms::Form
	{
		int saleId;
	public:
		SaleDetailForm(int saleId)
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;














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
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->txtUserName->Size = System::Drawing::Size(351, 22);
			this->txtUserName->TabIndex = 2;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(105, 110);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(350, 22);
			this->txtAddress->TabIndex = 3;
			// 
			// txtReference
			// 
			this->txtReference->Location = System::Drawing::Point(105, 140);
			this->txtReference->Name = L"txtReference";
			this->txtReference->Size = System::Drawing::Size(350, 22);
			this->txtReference->TabIndex = 4;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(40, 180);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(180, 30);
			this->btnAdd->TabIndex = 5;
			this->btnAdd->Text = L"Agregar producto";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(250, 180);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(180, 30);
			this->btnDelete->TabIndex = 6;
			this->btnDelete->Text = L"Eliminar producto";
			this->btnDelete->UseVisualStyleBackColor = true;
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
			this->dgvSaleDetail->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSaleDetail->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dgvSaleDetail->Location = System::Drawing::Point(5, 230);
			this->dgvSaleDetail->Name = L"dgvSaleDetail";
			this->dgvSaleDetail->RowHeadersWidth = 51;
			this->dgvSaleDetail->RowTemplate->Height = 24;
			this->dgvSaleDetail->Size = System::Drawing::Size(451, 150);
			this->dgvSaleDetail->TabIndex = 10;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Cantidad";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"SubTotal";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// btnPaid
			// 
			this->btnPaid->Location = System::Drawing::Point(65, 470);
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
			this->label5->Location = System::Drawing::Point(285, 425);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"I.G.V.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(285, 450);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Total";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(285, 400);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"SubTotal:";
			// 
			// txtSubTotal
			// 
			this->txtSubTotal->Location = System::Drawing::Point(355, 400);
			this->txtSubTotal->Name = L"txtSubTotal";
			this->txtSubTotal->ReadOnly = true;
			this->txtSubTotal->Size = System::Drawing::Size(100, 22);
			this->txtSubTotal->TabIndex = 16;
			// 
			// txtIGV
			// 
			this->txtIGV->Location = System::Drawing::Point(355, 425);
			this->txtIGV->Name = L"txtIGV";
			this->txtIGV->ReadOnly = true;
			this->txtIGV->Size = System::Drawing::Size(100, 22);
			this->txtIGV->TabIndex = 17;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(355, 450);
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
			this->txtDate->Size = System::Drawing::Size(351, 22);
			this->txtDate->TabIndex = 19;
			// 
			// txtSaleId
			// 
			this->txtSaleId->BackColor = System::Drawing::SystemColors::Window;
			this->txtSaleId->Location = System::Drawing::Point(105, 20);
			this->txtSaleId->Name = L"txtSaleId";
			this->txtSaleId->ReadOnly = true;
			this->txtSaleId->Size = System::Drawing::Size(350, 22);
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
			// SaleDetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 503);
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
			this->Name = L"SaleDetailForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Detalle de la venta";
			this->Load += gcnew System::EventHandler(this, &SaleDetailForm::SaleDetailForm_Load);
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
			txtAddress->Text = "" + mySale->Customer->Address;
			//	Reference empty
		}
		void ShowShoppingCart() {
			// Dgv SaleDetails
			List<Sale^>^ mysaleList = Controller::QueryAllSales();		// Make List
			dgvSaleDetail->Rows->Clear();							    // Clear Dgv
			double SubTotal = 0;

			for (int i = 0; i < mysaleList->Count; i++)		   // Look for!
				if (i == saleId)
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
					}
			

		}
	private: System::Void btnPaid_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("¡Venta Exitosa!");

	}
	private: System::Void SaleDetailForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowData();
		ShowShoppingCart();
	}
	};
}