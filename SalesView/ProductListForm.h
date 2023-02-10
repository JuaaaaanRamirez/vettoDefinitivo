#pragma once
#include "ProductPresentationForm.h"
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
	/// Resumen de ProductListForm
	/// </summary>
	public ref class ProductListForm : public System::Windows::Forms::Form
	{
	public:
		ProductListForm(void)
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
		~ProductListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvProductList;
	protected:






	private: System::Windows::Forms::PictureBox^ Searchbtn;
	private: System::Windows::Forms::TextBox^ SearchBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Imagen;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductListForm::typeid));
			this->dgvProductList = (gcnew System::Windows::Forms::DataGridView());
			this->Searchbtn = (gcnew System::Windows::Forms::PictureBox());
			this->SearchBox = (gcnew System::Windows::Forms::TextBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Imagen = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductList))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Searchbtn))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvProductList
			// 
			this->dgvProductList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProductList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Imagen
			});
			this->dgvProductList->Location = System::Drawing::Point(12, 43);
			this->dgvProductList->Name = L"dgvProductList";
			this->dgvProductList->RowHeadersWidth = 51;
			this->dgvProductList->RowTemplate->Height = 24;
			this->dgvProductList->Size = System::Drawing::Size(903, 506);
			this->dgvProductList->TabIndex = 0;
			this->dgvProductList->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductListForm::ProductListGrid_CellClick);
			// 
			// Searchbtn
			// 
			this->Searchbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Searchbtn.BackgroundImage")));
			this->Searchbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Searchbtn->Location = System::Drawing::Point(12, 12);
			this->Searchbtn->Name = L"Searchbtn";
			this->Searchbtn->Size = System::Drawing::Size(25, 25);
			this->Searchbtn->TabIndex = 40;
			this->Searchbtn->TabStop = false;
			// 
			// SearchBox
			// 
			this->SearchBox->BackColor = System::Drawing::SystemColors::Control;
			this->SearchBox->Location = System::Drawing::Point(42, 12);
			this->SearchBox->Name = L"SearchBox";
			this->SearchBox->Size = System::Drawing::Size(873, 22);
			this->SearchBox->TabIndex = 39;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Stock";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Nombre";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Calificación";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Imagen
			// 
			this->Imagen->HeaderText = L"Imagen";
			this->Imagen->MinimumWidth = 6;
			this->Imagen->Name = L"Imagen";
			this->Imagen->Width = 125;
			// 
			// ProductListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(927, 561);
			this->Controls->Add(this->Searchbtn);
			this->Controls->Add(this->SearchBox);
			this->Controls->Add(this->dgvProductList);
			this->MaximizeBox = false;
			this->Name = L"ProductListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lista de Productos";
			this->Load += gcnew System::EventHandler(this, &ProductListForm::ProductListForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductList))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Searchbtn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ShowProducts() {
			List<Product^>^ myProductList = Controller::QueryAllProducts();		// Make List
			dgvProductList->Rows->Clear();										// Clear Dgv

			for (int i = 0; i < myProductList->Count; i++) {					// Look for!
				dgvProductList->Rows->Add(gcnew array<String^>{
					"" + myProductList[i]->Id,
						"" + myProductList[i]->Stock,
						"" + myProductList[i]->Name,
						"" + myProductList[i]->Name,
						"" + myProductList[i]->Name
				});
			}
		}
	private: System::Void ProductListGrid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		ProductPresentationForm^ ProductDes = gcnew ProductPresentationForm();
		ProductDes->Show();
	}
	private: System::Void ProductListForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowProducts();
	}
};
}
