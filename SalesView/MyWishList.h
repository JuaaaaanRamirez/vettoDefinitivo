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
	/// Resumen de MyWishList
	/// </summary>
	public ref class MyWishList : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		MyWishList(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyWishList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbwishList;
	protected:
	private: System::Windows::Forms::Label^ lbwishList;
	private: System::Windows::Forms::DataGridView^ dgvWishList;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnExit;








	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Searches;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sells;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyWishList::typeid));
			this->pbwishList = (gcnew System::Windows::Forms::PictureBox());
			this->lbwishList = (gcnew System::Windows::Forms::Label());
			this->dgvWishList = (gcnew System::Windows::Forms::DataGridView());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->IdProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Searches = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sells = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbwishList))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWishList))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pbwishList
			// 
			this->pbwishList->BackColor = System::Drawing::Color::Transparent;
			this->pbwishList->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbwishList.Image")));
			this->pbwishList->InitialImage = nullptr;
			this->pbwishList->Location = System::Drawing::Point(73, 32);
			this->pbwishList->Margin = System::Windows::Forms::Padding(4);
			this->pbwishList->Name = L"pbwishList";
			this->pbwishList->Size = System::Drawing::Size(79, 62);
			this->pbwishList->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbwishList->TabIndex = 0;
			this->pbwishList->TabStop = false;
			// 
			// lbwishList
			// 
			this->lbwishList->AutoSize = true;
			this->lbwishList->BackColor = System::Drawing::Color::Transparent;
			this->lbwishList->Font = (gcnew System::Drawing::Font(L"MV Boli", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbwishList->ForeColor = System::Drawing::Color::Orange;
			this->lbwishList->Location = System::Drawing::Point(160, 32);
			this->lbwishList->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbwishList->Name = L"lbwishList";
			this->lbwishList->Size = System::Drawing::Size(371, 49);
			this->lbwishList->TabIndex = 1;
			this->lbwishList->Text = L"Mi lista de deseos ";
			// 
			// dgvWishList
			// 
			this->dgvWishList->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvWishList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvWishList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->IdProduct,
					this->NameProduct, this->PriceProduct, this->Searches, this->Sells, this->Description
			});
			this->dgvWishList->Location = System::Drawing::Point(40, 118);
			this->dgvWishList->Margin = System::Windows::Forms::Padding(4);
			this->dgvWishList->MultiSelect = false;
			this->dgvWishList->Name = L"dgvWishList";
			this->dgvWishList->ReadOnly = true;
			this->dgvWishList->RowHeadersWidth = 51;
			this->dgvWishList->Size = System::Drawing::Size(541, 302);
			this->dgvWishList->TabIndex = 2;
			this->dgvWishList->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyWishList::dgvWishList_CellDoubleClick);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(129, 443);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(136, 30);
			this->btnDelete->TabIndex = 4;
			this->btnDelete->Text = L"Eliminar producto";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyWishList::btnDelete_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(352, 443);
			this->btnExit->Margin = System::Windows::Forms::Padding(4);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(117, 30);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"Volver";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyWishList::btnExit_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->panel1->Controls->Add(this->lbwishList);
			this->panel1->Controls->Add(this->pbwishList);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(620, 102);
			this->panel1->TabIndex = 6;
			// 
			// IdProduct
			// 
			this->IdProduct->HeaderText = L"Id";
			this->IdProduct->MinimumWidth = 6;
			this->IdProduct->Name = L"IdProduct";
			this->IdProduct->ReadOnly = true;
			this->IdProduct->Width = 80;
			// 
			// NameProduct
			// 
			this->NameProduct->HeaderText = L"Nombre";
			this->NameProduct->MinimumWidth = 6;
			this->NameProduct->Name = L"NameProduct";
			this->NameProduct->ReadOnly = true;
			this->NameProduct->Width = 125;
			// 
			// PriceProduct
			// 
			this->PriceProduct->HeaderText = L"Precio";
			this->PriceProduct->MinimumWidth = 6;
			this->PriceProduct->Name = L"PriceProduct";
			this->PriceProduct->ReadOnly = true;
			this->PriceProduct->Width = 80;
			// 
			// Searches
			// 
			this->Searches->HeaderText = L"Búsquedas";
			this->Searches->MinimumWidth = 6;
			this->Searches->Name = L"Searches";
			this->Searches->ReadOnly = true;
			this->Searches->Width = 125;
			// 
			// Sells
			// 
			this->Sells->HeaderText = L"Ventas";
			this->Sells->MinimumWidth = 6;
			this->Sells->Name = L"Sells";
			this->Sells->ReadOnly = true;
			this->Sells->Width = 125;
			// 
			// Description
			// 
			this->Description->HeaderText = L"Descripción";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->ReadOnly = true;
			this->Description->Width = 125;
			// 
			// MyWishList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(620, 523);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->dgvWishList);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyWishList";
			this->Text = L"Mi lista de deseos";
			this->Load += gcnew System::EventHandler(this, &MyWishList::MyWishList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbwishList))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWishList))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void MyWishList_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
/*
	public: Void AddProductToWishList(Product^ p) {
		dgvWishList->Rows->Add(gcnew array<String^> {
			Convert::ToString(p->Id),
				p->Name,
				Convert::ToString(p->PriceMin),
				p->Description
		});
	}*/

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dgvWishList_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
