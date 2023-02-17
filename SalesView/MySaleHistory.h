#pragma once
#include "ProductStatusForm.h"
namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;
	using namespace SalesModel;


	/// <summary>
	/// Resumen de MySaleHistory
	/// </summary>
	public ref class MySaleHistory : public System::Windows::Forms::Form
	{
	public:
		MySaleHistory(void)
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
		~MySaleHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvMyShopping;
	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdSale;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateSale;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SaleSeller;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceSale;
	private: System::Windows::Forms::Label^ lbTitle;


	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MySaleHistory::typeid));
			this->dgvMyShopping = (gcnew System::Windows::Forms::DataGridView());
			this->IdSale = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateSale = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SaleSeller = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceSale = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMyShopping))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvMyShopping
			// 
			this->dgvMyShopping->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMyShopping->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IdSale,
					this->DateSale, this->SaleSeller, this->PriceSale
			});
			this->dgvMyShopping->Location = System::Drawing::Point(51, 108);
			this->dgvMyShopping->Margin = System::Windows::Forms::Padding(4);
			this->dgvMyShopping->Name = L"dgvMyShopping";
			this->dgvMyShopping->RowHeadersWidth = 51;
			this->dgvMyShopping->Size = System::Drawing::Size(604, 354);
			this->dgvMyShopping->TabIndex = 0;
			this->dgvMyShopping->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MySaleHistory::dgvMyShopping_CellDoubleClick);
			// 
			// IdSale
			// 
			this->IdSale->HeaderText = L"Id";
			this->IdSale->MinimumWidth = 6;
			this->IdSale->Name = L"IdSale";
			this->IdSale->Width = 125;
			// 
			// DateSale
			// 
			this->DateSale->HeaderText = L"Fecha de compra";
			this->DateSale->MinimumWidth = 6;
			this->DateSale->Name = L"DateSale";
			this->DateSale->Width = 125;
			// 
			// SaleSeller
			// 
			this->SaleSeller->HeaderText = L"Vendedor";
			this->SaleSeller->MinimumWidth = 6;
			this->SaleSeller->Name = L"SaleSeller";
			this->SaleSeller->Width = 125;
			// 
			// PriceSale
			// 
			this->PriceSale->HeaderText = L"Precio total de la venta";
			this->PriceSale->MinimumWidth = 6;
			this->PriceSale->Name = L"PriceSale";
			this->PriceSale->Width = 125;
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(148, 32);
			this->lbTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(208, 25);
			this->lbTitle->TabIndex = 1;
			this->lbTitle->Text = L"Historial de compras";
			this->lbTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(51, 16);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 58);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// MySaleHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 532);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->dgvMyShopping);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MySaleHistory";
			this->Text = L"Mis compras";
			this->Load += gcnew System::EventHandler(this, &MySaleHistory::MySaleHistory_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMyShopping))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MySaleHistory_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void dgvMyShopping_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		ProductStatusForm^ myStatus = gcnew ProductStatusForm(Int32::Parse(dgvMyShopping->Rows[e->RowIndex]->Cells[0]->Value->ToString()));
		//int bruh = Int32::Parse(dgvMyShopping->Rows[e->RowIndex]->Cells[0]->Value->ToString());
		myStatus->ShowDialog();
	}
};
}
