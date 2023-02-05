#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SearchProductForm
	/// </summary>
	public ref class SearchProductForm : public System::Windows::Forms::Form
	{
	public:
		SearchProductForm(void)
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
		~SearchProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btSearch;
	private: System::Windows::Forms::Button^ btCancel;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txtProductId;
	private: System::Windows::Forms::TextBox^ txtNameCareer;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btSearch = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->txtProductId = (gcnew System::Windows::Forms::TextBox());
			this->txtNameCareer = (gcnew System::Windows::Forms::TextBox());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre/Carrera relacionada";
			// 
			// btSearch
			// 
			this->btSearch->Location = System::Drawing::Point(172, 176);
			this->btSearch->Name = L"btSearch";
			this->btSearch->Size = System::Drawing::Size(116, 36);
			this->btSearch->TabIndex = 2;
			this->btSearch->Text = L"Buscar";
			this->btSearch->UseVisualStyleBackColor = true;
			// 
			// btCancel
			// 
			this->btCancel->Location = System::Drawing::Point(418, 176);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(92, 36);
			this->btCancel->TabIndex = 3;
			this->btCancel->Text = L"Cancelar";
			this->btCancel->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(43, 233);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(563, 150);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SearchProductForm::dataGridView1_CellContentClick);
			// 
			// txtProductId
			// 
			this->txtProductId->Location = System::Drawing::Point(263, 66);
			this->txtProductId->Name = L"txtProductId";
			this->txtProductId->Size = System::Drawing::Size(100, 22);
			this->txtProductId->TabIndex = 5;
			// 
			// txtNameCareer
			// 
			this->txtNameCareer->Location = System::Drawing::Point(263, 112);
			this->txtNameCareer->Name = L"txtNameCareer";
			this->txtNameCareer->Size = System::Drawing::Size(100, 22);
			this->txtNameCareer->TabIndex = 6;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Stock";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// SearchProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 403);
			this->Controls->Add(this->txtNameCareer);
			this->Controls->Add(this->txtProductId);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->btSearch);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SearchProductForm";
			this->Text = L"Buscador de Productos";
			this->Load += gcnew System::EventHandler(this, &SearchProductForm::SearchProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void SearchProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
