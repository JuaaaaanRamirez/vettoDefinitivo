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
	/// Resumen de CustomerSearchForm
	/// </summary>
	public ref class CustomerSearchForm : public System::Windows::Forms::Form
	{
	public:
		CustomerSearchForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CustomerSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region COMPONENTS
	private: System::Windows::Forms::DataGridView^ dgvCustomers;
	protected:
	protected:
	protected:
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ lbName;

	private: System::Windows::Forms::Label^ lbId;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ User;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Points;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PhoneNumber;
	private: System::Windows::Forms::PictureBox^ pbCustomer;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerSearchForm::typeid));
			this->dgvCustomers = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->User = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Points = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbId = (gcnew System::Windows::Forms::Label());
			this->pbCustomer = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvCustomers
			// 
			this->dgvCustomers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCustomers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Id, this->User,
					this->Points, this->PhoneNumber
			});
			this->dgvCustomers->Location = System::Drawing::Point(12, 98);
			this->dgvCustomers->Name = L"dgvCustomers";
			this->dgvCustomers->ReadOnly = true;
			this->dgvCustomers->RowHeadersWidth = 51;
			this->dgvCustomers->Size = System::Drawing::Size(423, 220);
			this->dgvCustomers->TabIndex = 13;
			this->dgvCustomers->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerSearchForm::dgvCustomers_CellDoubleClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 30;
			// 
			// User
			// 
			this->User->HeaderText = L"Usuario";
			this->User->MinimumWidth = 6;
			this->User->Name = L"User";
			this->User->ReadOnly = true;
			this->User->Width = 200;
			// 
			// Points
			// 
			this->Points->HeaderText = L"Puntos";
			this->Points->MinimumWidth = 6;
			this->Points->Name = L"Points";
			this->Points->ReadOnly = true;
			this->Points->Width = 40;
			// 
			// PhoneNumber
			// 
			this->PhoneNumber->HeaderText = L"Teléfono";
			this->PhoneNumber->MinimumWidth = 6;
			this->PhoneNumber->Name = L"PhoneNumber";
			this->PhoneNumber->ReadOnly = true;
			this->PhoneNumber->Width = 40;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(225, 65);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(96, 25);
			this->btnCancel->TabIndex = 12;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &CustomerSearchForm::btnCancel_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(60, 65);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(97, 25);
			this->btnSearch->TabIndex = 11;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &CustomerSearchForm::btnSearch_Click);
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(124, 31);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(198, 22);
			this->txtName->TabIndex = 10;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(124, 6);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(198, 22);
			this->txtId->TabIndex = 9;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(9, 31);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(56, 16);
			this->lbName->TabIndex = 8;
			this->lbName->Text = L"Nombre";
			// 
			// lbId
			// 
			this->lbId->AutoSize = true;
			this->lbId->Location = System::Drawing::Point(9, 6);
			this->lbId->Name = L"lbId";
			this->lbId->Size = System::Drawing::Size(21, 16);
			this->lbId->TabIndex = 7;
			this->lbId->Text = L"Id:";
			// 
			// pbCustomer
			// 
			this->pbCustomer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCustomer.BackgroundImage")));
			this->pbCustomer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbCustomer->Location = System::Drawing::Point(343, 4);
			this->pbCustomer->Name = L"pbCustomer";
			this->pbCustomer->Size = System::Drawing::Size(76, 78);
			this->pbCustomer->TabIndex = 16;
			this->pbCustomer->TabStop = false;
			// 
			// CustomerSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->ClientSize = System::Drawing::Size(442, 330);
			this->Controls->Add(this->pbCustomer);
			this->Controls->Add(this->dgvCustomers);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->lbId);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CustomerSearchForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Busqueda de cliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
		// Buttons
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Customer^>^ myList = gcnew List<Customer^>();
		if (txtId->Text->Trim() != "") {
			//Búsqueda de producto por el código ingresado por el usuario
			//Customer^ p = (Customer^)Controller::QueryUserById(Convert::ToInt32(txtId->Text->Trim())); 
			Customer^ p = Controller::QueryCustomerById(Convert::ToInt32(txtId->Text->Trim()));
			if (p==nullptr) { MessageBox::Show("No existe cliente con ese Id."); return; }
			myList->Add(p);
		}
		 else if(txtName->Text->Trim() != "") {
			myList = Controller::QueryCustomerByNameOrByLastName(txtName->Text->Trim());
			
			/*
			//Búsqueda de productos por el nombre o descripción ingresado por el usuario
			myList = Controller::Query(txtNameDescription->Text->Trim());
			//Se borran los datos del grid.
			dgvProducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvProducts->Rows->Add(gcnew array<String^> {
					"" + productList[i]->Id,
						productList[i]->Name,
						Convert::ToString(productList[i]->PriceMin),
						Convert::ToString(productList[i]->Stock)
				});
			}*/
		}
		 else {
			myList = Controller::QueryAllCustomer();
		}
		
		PutData(myList);
}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	
		// Dgv
	private: System::Void dgvCustomers_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		if (dgvCustomers->Rows[e->RowIndex]->Cells[0]->Value==nullptr) return;
		Sale^ mySale = Controller::QueryLastSale();
		String^ customerId = dgvCustomers->Rows[e->RowIndex]->Cells[0]->Value->ToString(); Customer^ p = (Customer^)Controller::QueryUserById(Int32::Parse(customerId));
		mySale->Customer = p;
		mySale->Address = p->Address;
		Controller::UpdateSale(mySale);
	}
	this->Close();
}


		// Others
	void PutData(List<Customer^>^ myList) {
			   dgvCustomers->Rows->Clear();
			   for (int i = 0; i < myList->Count; i++) {
				   dgvCustomers->Rows->Add(gcnew array<String^> {
					   "" + myList[i]->Id,
						   myList[i]->Username,
						   Convert::ToString(myList[i]->CustomerPoints),
						   Convert::ToString(myList[i]->PhoneNumber)
				   });
			   }
	}
};
}
