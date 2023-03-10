#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;
	using namespace SalesModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ProductSearchForm
	/// </summary>
	public ref class ProductSearchForm : public System::Windows::Forms::Form
	{
		Form^ refForm; //Variable de instancia
	public:
		ProductSearchForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~ProductSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtNameDescription;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::DataGridView^ dgvProducts;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;














	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductSearchForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtNameDescription = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(43, 65);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre o\r\ndescripci?n:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(152, 32);
			this->txtId->Margin = System::Windows::Forms::Padding(4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(132, 22);
			this->txtId->TabIndex = 2;
			// 
			// txtNameDescription
			// 
			this->txtNameDescription->Location = System::Drawing::Point(152, 73);
			this->txtNameDescription->Margin = System::Windows::Forms::Padding(4);
			this->txtNameDescription->Name = L"txtNameDescription";
			this->txtNameDescription->Size = System::Drawing::Size(340, 22);
			this->txtNameDescription->TabIndex = 3;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(105, 116);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(129, 28);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ProductSearchForm::btnSearch_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(324, 116);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(128, 28);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// dgvProducts
			// 
			this->dgvProducts->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Id, this->ProductName,
					this->Price, this->Stock
			});
			this->dgvProducts->Location = System::Drawing::Point(35, 182);
			this->dgvProducts->Margin = System::Windows::Forms::Padding(4);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->RowHeadersWidth = 51;
			this->dgvProducts->Size = System::Drawing::Size(497, 185);
			this->dgvProducts->TabIndex = 6;
			this->dgvProducts->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearchForm::dgvProducts_CellDoubleClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 30;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"Nombre";
			this->ProductName->MinimumWidth = 6;
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 200;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Precio";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 40;
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->MinimumWidth = 6;
			this->Stock->Name = L"Stock";
			this->Stock->Width = 40;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Buscar por:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"o";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Resultados:";
			// 
			// ProductSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->ClientSize = System::Drawing::Size(544, 389);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtNameDescription);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ProductSearchForm";
			this->Text = L"B?squeda de Productos";
			this->Load += gcnew System::EventHandler(this, &ProductSearchForm::ProductSearchForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowProducts() {
			List<Product^>^ myProductList = Controller::QueryAllProducts();
			dgvProducts->Rows->Clear();
			for (int i = 0; i < myProductList->Count; i++) {

				/*String^ careersString;
				for (int j = 0; j < myProductList[i]->Career->Count; j++) {
					careersString = careersString + "/" + myProductList[i]->Career[j];
				}*/

				dgvProducts->Rows->Add(gcnew array<String^>{

					"" + myProductList[i]->Id,
						myProductList[i]->Name,
						"" + myProductList[i]->PriceMin,
						"" + myProductList[i]->Stock
				});
			}
		}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() != "") {
			//B?squeda de producto por el c?digo ingresado por el usuario
			Product^ p = Controller::QueryProductById(Convert::ToInt32(txtId->Text->Trim()));
			//Se borran los datos del grid.
			dgvProducts->Rows->Clear();
			dgvProducts->Rows->Add(gcnew array<String^> {
				"" + p->Id,
					p->Name,
					Convert::ToString(p->PriceMin),
					Convert::ToString(p->Stock)
			});
		}
		else {
			//B?squeda de productos por el nombre o descripci?n ingresado por el usuario
			List<Product^>^ productList = Controller::QueryProductsByNameOrDescription(txtNameDescription->Text->Trim());
			//Se borran los datos del grid.
			dgvProducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvProducts->Rows->Add(gcnew array<String^> {
					"" + productList[i]->Id,
						productList[i]->Name,
						Convert::ToString(productList[i]->PriceMin),
						Convert::ToString(productList[i]->Stock)
				});
			}
		}

	}
	//private: System::Void dgvProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void ProductSearchForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//ShowProducts();
	}
	private: System::Void dgvProducts_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}