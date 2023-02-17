#pragma once
#include "ProductPresentationForm.h"
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
	/// Resumen de ProductListForm
	/// </summary>
	public ref class ProductListForm : public System::Windows::Forms::Form
	{
		Form^ refForm; //Variable de instancia
	public:

		ProductListForm(Form^ form)
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
		~ProductListForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::TextBox^ txtSearchBox;
	public: System::Windows::Forms::DataGridView^ dgvProductList;





	private: System::Windows::Forms::Button^ Searchbtn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CarrerasRelacionadas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Calificación;























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
			this->txtSearchBox = (gcnew System::Windows::Forms::TextBox());
			this->dgvProductList = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CarrerasRelacionadas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Calificación = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Searchbtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductList))->BeginInit();
			this->SuspendLayout();
			// 
			// txtSearchBox
			// 
			this->txtSearchBox->BackColor = System::Drawing::SystemColors::Control;
			this->txtSearchBox->Location = System::Drawing::Point(42, 12);
			this->txtSearchBox->Name = L"txtSearchBox";
			this->txtSearchBox->Size = System::Drawing::Size(873, 22);
			this->txtSearchBox->TabIndex = 39;
			this->txtSearchBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ProductListForm::txtSearchBox_KeyDown);
			// 
			// dgvProductList
			// 
			this->dgvProductList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProductList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Nombre,
					this->Stock, this->CarrerasRelacionadas, this->Calificación
			});
			this->dgvProductList->Location = System::Drawing::Point(12, 43);
			this->dgvProductList->Name = L"dgvProductList";
			this->dgvProductList->ReadOnly = true;
			this->dgvProductList->RowHeadersWidth = 51;
			this->dgvProductList->RowTemplate->Height = 24;
			this->dgvProductList->Size = System::Drawing::Size(903, 506);
			this->dgvProductList->TabIndex = 41;
			this->dgvProductList->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductListForm::dgvProductList_CellDoubleClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
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
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->MinimumWidth = 6;
			this->Stock->Name = L"Stock";
			this->Stock->ReadOnly = true;
			this->Stock->Width = 125;
			// 
			// CarrerasRelacionadas
			// 
			this->CarrerasRelacionadas->HeaderText = L"Carreras Relacionadas";
			this->CarrerasRelacionadas->MinimumWidth = 6;
			this->CarrerasRelacionadas->Name = L"CarrerasRelacionadas";
			this->CarrerasRelacionadas->ReadOnly = true;
			this->CarrerasRelacionadas->Width = 125;
			// 
			// Calificación
			// 
			this->Calificación->HeaderText = L"Calificación";
			this->Calificación->MinimumWidth = 6;
			this->Calificación->Name = L"Calificación";
			this->Calificación->ReadOnly = true;
			this->Calificación->Width = 125;
			// 
			// Searchbtn
			// 
			this->Searchbtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Searchbtn.BackgroundImage")));
			this->Searchbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Searchbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Searchbtn->ForeColor = System::Drawing::Color::Transparent;
			this->Searchbtn->Location = System::Drawing::Point(12, 12);
			this->Searchbtn->Name = L"Searchbtn";
			this->Searchbtn->Size = System::Drawing::Size(25, 25);
			this->Searchbtn->TabIndex = 42;
			this->Searchbtn->UseVisualStyleBackColor = false;
			this->Searchbtn->Click += gcnew System::EventHandler(this, &ProductListForm::Searchbtn_Click);
			// 
			// ProductListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(927, 561);
			this->Controls->Add(this->Searchbtn);
			this->Controls->Add(this->dgvProductList);
			this->Controls->Add(this->txtSearchBox);
			this->MaximizeBox = false;
			this->Name = L"ProductListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lista de Productos";
			this->Load += gcnew System::EventHandler(this, &ProductListForm::ProductListForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProductList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Functions
		void ShowProducts() {
			List<Product^>^ myProductList = Controller::QueryProductsByNameOrDescription(txtSearchBox->Text);		// Make List
			dgvProductList->Rows->Clear();										// Clear Dgv

			for (int i = 0; i < myProductList->Count; i++) {					// Look for!
				// Make Carrers
				String^ careersString;
				for (int j = 0; j < myProductList[i]->Career->Count; j++) {
					careersString = careersString + "/" + myProductList[i]->Career[j];
				}

				dgvProductList->Rows->Add(gcnew array<String^>{
					"" + myProductList[i]->Id,
						"" + myProductList[i]->Name,
						"" + myProductList[i]->Stock,
						"" + careersString,
						"" + myProductList[i]->Starts
				});
			}
		}

		// Dgv
	private: System::Void dgvProductList_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		   // Load
	private: System::Void ProductListForm_Load(System::Object^ sender, System::EventArgs^ e);
		   // Search
	private: System::Void Searchbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowProducts();
	}
	private: System::Void txtSearchBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyData == Keys::Enter) Searchbtn->PerformClick();
	}

	};
}



