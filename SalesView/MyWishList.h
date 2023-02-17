#pragma once
//#include "SalesMainForm.h"
#include "ProductSearchForm.h"
#include "SalesMainForm.h"


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
	public:
		MyWishList(void)
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


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyWishList::typeid));
			this->pbwishList = (gcnew System::Windows::Forms::PictureBox());
			this->lbwishList = (gcnew System::Windows::Forms::Label());
			this->dgvWishList = (gcnew System::Windows::Forms::DataGridView());
			this->IdProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbwishList))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWishList))->BeginInit();
			this->SuspendLayout();
			// 
			// pbwishList
			// 
			this->pbwishList->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbwishList.Image")));
			this->pbwishList->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbwishList.InitialImage")));
			this->pbwishList->Location = System::Drawing::Point(43, 27);
			this->pbwishList->Name = L"pbwishList";
			this->pbwishList->Size = System::Drawing::Size(59, 50);
			this->pbwishList->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbwishList->TabIndex = 0;
			this->pbwishList->TabStop = false;
			// 
			// lbwishList
			// 
			this->lbwishList->AutoSize = true;
			this->lbwishList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbwishList->Location = System::Drawing::Point(117, 38);
			this->lbwishList->Name = L"lbwishList";
			this->lbwishList->Size = System::Drawing::Size(158, 20);
			this->lbwishList->TabIndex = 1;
			this->lbwishList->Text = L"Mi lista de deseos ";
			// 
			// dgvWishList
			// 
			this->dgvWishList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvWishList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IdProduct,
					this->NameProduct, this->PriceProduct, this->Description
			});
			this->dgvWishList->Location = System::Drawing::Point(30, 96);
			this->dgvWishList->Name = L"dgvWishList";
			this->dgvWishList->Size = System::Drawing::Size(406, 245);
			this->dgvWishList->TabIndex = 2;
			// 
			// IdProduct
			// 
			this->IdProduct->HeaderText = L"Id";
			this->IdProduct->Name = L"IdProduct";
			this->IdProduct->Width = 80;
			// 
			// NameProduct
			// 
			this->NameProduct->HeaderText = L"Nombre";
			this->NameProduct->Name = L"NameProduct";
			// 
			// PriceProduct
			// 
			this->PriceProduct->HeaderText = L"Precio";
			this->PriceProduct->Name = L"PriceProduct";
			this->PriceProduct->Width = 80;
			// 
			// Description
			// 
			this->Description->HeaderText = L"Descripción";
			this->Description->Name = L"Description";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(97, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Eliminar producto";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(264, 360);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Volver";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyWishList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 425);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dgvWishList);
			this->Controls->Add(this->lbwishList);
			this->Controls->Add(this->pbwishList);
			this->Name = L"MyWishList";
			this->Text = L"MyWishList";
			this->Load += gcnew System::EventHandler(this, &MyWishList::MyWishList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbwishList))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvWishList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyWishList_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
