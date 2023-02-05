#pragma once
#include "ProductPresentationForm.h"

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^ ProductListGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewImageColumn^ Column5;





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
			this->ProductListGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewImageColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductListGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// ProductListGrid
			// 
			this->ProductListGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ProductListGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->ProductListGrid->Location = System::Drawing::Point(12, 12);
			this->ProductListGrid->Name = L"ProductListGrid";
			this->ProductListGrid->RowHeadersWidth = 51;
			this->ProductListGrid->RowTemplate->Height = 24;
			this->ProductListGrid->Size = System::Drawing::Size(903, 537);
			this->ProductListGrid->TabIndex = 0;
			this->ProductListGrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductListForm::ProductListGrid_CellContentClick);
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
			// Column5
			// 
			this->Column5->HeaderText = L"Imagen (Ref*)";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// ProductListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(927, 561);
			this->Controls->Add(this->ProductListGrid);
			this->MaximizeBox = false;
			this->Name = L"ProductListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lista de Productos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProductListGrid))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ProductListGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		ProductPresentationForm^ ProductDes = gcnew ProductPresentationForm();
		ProductDes->Show();
	}
	};
}
