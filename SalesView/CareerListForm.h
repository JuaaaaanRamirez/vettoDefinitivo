#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CareerListForm
	/// </summary>
	public ref class CareerListForm : public System::Windows::Forms::Form
	{
	public:
		CareerListForm(void)
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
		~CareerListForm()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox3;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	protected:

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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox4 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Estadística", L"Física", L"Ingeniería Ambiental y Sostenible",
					L"Ingeniería Biomédica", L"Ingeniería Civil", L"Ingeniería de las Telecomunicaciones", L"Ingeniería de Minas", L"Ingeniería Electrónica",
					L"Ingeniería Geológica", L"Ingeniería Industrial", L"Ingeniería Informática", L"Ingeniería Mecánica", L"Ingeniería Mecatrónica",
					L"Matemáticas", L"Química"
			});
			this->checkedListBox1->Location = System::Drawing::Point(35, 44);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(248, 259);
			this->checkedListBox1->TabIndex = 7;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CareerListForm::checkedListBox1_SelectedIndexChanged);
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Educación Artística", L"Diseño Gráfico",
					L"Diseño Industrial", L"Escultura", L"Pintura", L"Arte, moda y diseño textil", L"Grabado"
			});
			this->checkedListBox2->Location = System::Drawing::Point(319, 44);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(184, 157);
			this->checkedListBox2->TabIndex = 8;
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Danza", L"Teatro", L"Música", L"Creación y Producción Escénica" });
			this->checkedListBox3->Location = System::Drawing::Point(537, 44);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(226, 123);
			this->checkedListBox3->TabIndex = 9;
			// 
			// checkedListBox4
			// 
			this->checkedListBox4->FormattingEnabled = true;
			this->checkedListBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Comunicación Audiovisual", L"Comunicación para el desarrollo",
					L"Publicidad", L"Periodismo"
			});
			this->checkedListBox4->Location = System::Drawing::Point(807, 61);
			this->checkedListBox4->Name = L"checkedListBox4";
			this->checkedListBox4->Size = System::Drawing::Size(224, 106);
			this->checkedListBox4->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Ciencias e Ingenieria";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(325, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Arte y Diseño";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(576, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Artes Escénicas";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(804, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Ciencias y Artes de la Comunicación";
			// 
			// CareerListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1054, 344);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkedListBox4);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->checkedListBox1);
			this->Name = L"CareerListForm";
			this->Text = L"Lista de carreras";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
