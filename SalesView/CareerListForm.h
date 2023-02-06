#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;
 

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
	private: System::Windows::Forms::CheckedListBox^ chlbCiencias;
	private: System::Windows::Forms::CheckedListBox^ chlbArteDisenio;

	private: System::Windows::Forms::CheckedListBox^ chlbArtesEscenicas;
	private: System::Windows::Forms::CheckedListBox^ chlbArtesComunication;
	protected:











	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btUp;
	private: System::Windows::Forms::Button^ btExit;

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
			this->chlbCiencias = (gcnew System::Windows::Forms::CheckedListBox());
			this->chlbArteDisenio = (gcnew System::Windows::Forms::CheckedListBox());
			this->chlbArtesEscenicas = (gcnew System::Windows::Forms::CheckedListBox());
			this->chlbArtesComunication = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btUp = (gcnew System::Windows::Forms::Button());
			this->btExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// chlbCiencias
			// 
			this->chlbCiencias->FormattingEnabled = true;
			this->chlbCiencias->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"Estadística", L"Física", L"Ingeniería Ambiental y Sostenible",
					L"Ingeniería Biomédica", L"Ingeniería Civil", L"Ingeniería de las Telecomunicaciones", L"Ingeniería de Minas", L"Ingeniería Electrónica",
					L"Ingeniería Geológica", L"Ingeniería Industrial", L"Ingeniería Informática", L"Ingeniería Mecánica", L"Ingeniería Mecatrónica",
					L"Matemáticas", L"Química"
			});
			this->chlbCiencias->Location = System::Drawing::Point(35, 44);
			this->chlbCiencias->Name = L"chlbCiencias";
			this->chlbCiencias->Size = System::Drawing::Size(248, 259);
			this->chlbCiencias->TabIndex = 7;
			this->chlbCiencias->SelectedIndexChanged += gcnew System::EventHandler(this, &CareerListForm::checkedListBox1_SelectedIndexChanged);
			// 
			// chlbArteDisenio
			// 
			this->chlbArteDisenio->FormattingEnabled = true;
			this->chlbArteDisenio->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Educación Artística", L"Diseño Gráfico",
					L"Diseño Industrial", L"Escultura", L"Pintura", L"Arte, moda y diseño textil", L"Grabado"
			});
			this->chlbArteDisenio->Location = System::Drawing::Point(319, 44);
			this->chlbArteDisenio->Name = L"chlbArteDisenio";
			this->chlbArteDisenio->Size = System::Drawing::Size(184, 157);
			this->chlbArteDisenio->TabIndex = 8;
			// 
			// chlbArtesEscenicas
			// 
			this->chlbArtesEscenicas->FormattingEnabled = true;
			this->chlbArtesEscenicas->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Danza", L"Teatro", L"Música", L"Creación y Producción Escénica" });
			this->chlbArtesEscenicas->Location = System::Drawing::Point(537, 44);
			this->chlbArtesEscenicas->Name = L"chlbArtesEscenicas";
			this->chlbArtesEscenicas->Size = System::Drawing::Size(226, 123);
			this->chlbArtesEscenicas->TabIndex = 9;
			// 
			// chlbArtesComunication
			// 
			this->chlbArtesComunication->FormattingEnabled = true;
			this->chlbArtesComunication->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Comunicación Audiovisual", L"Comunicación para el desarrollo",
					L"Publicidad", L"Periodismo"
			});
			this->chlbArtesComunication->Location = System::Drawing::Point(807, 61);
			this->chlbArtesComunication->Name = L"chlbArtesComunication";
			this->chlbArtesComunication->Size = System::Drawing::Size(224, 106);
			this->chlbArtesComunication->TabIndex = 10;
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
			// btUp
			// 
			this->btUp->Location = System::Drawing::Point(537, 250);
			this->btUp->Name = L"btUp";
			this->btUp->Size = System::Drawing::Size(70, 31);
			this->btUp->TabIndex = 15;
			this->btUp->Text = L"Agregar";
			this->btUp->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btUp->UseVisualStyleBackColor = true;
			this->btUp->Click += gcnew System::EventHandler(this, &CareerListForm::btUp_Click);
			// 
			// btExit
			// 
			this->btExit->Location = System::Drawing::Point(646, 258);
			this->btExit->Name = L"btExit";
			this->btExit->Size = System::Drawing::Size(75, 23);
			this->btExit->TabIndex = 16;
			this->btExit->Text = L"Salir";
			this->btExit->UseVisualStyleBackColor = true;
			this->btExit->Click += gcnew System::EventHandler(this, &CareerListForm::btExit_Click);
			// 
			// CareerListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 407);
			this->Controls->Add(this->btExit);
			this->Controls->Add(this->btUp);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chlbArtesComunication);
			this->Controls->Add(this->chlbArtesEscenicas);
			this->Controls->Add(this->chlbArteDisenio);
			this->Controls->Add(this->chlbCiencias);
			this->Name = L"CareerListForm";
			this->Text = L"Lista de carreras";
			this->Load += gcnew System::EventHandler(this, &CareerListForm::CareerListForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CareerListForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void btUp_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Controller::RelationatedCareers->Clear();

	for(int i=0; i< chlbCiencias->Items->Count; i++){
		if (chlbCiencias->GetItemChecked(i)) {
			Controller::RelationatedCareers->Add(chlbCiencias->Items[i]->ToString());
		}
	}

	for (int i = 0; i < chlbArteDisenio->Items->Count; i++) {
		if (chlbArteDisenio->GetItemChecked(i)) {
			Controller::RelationatedCareers->Add(chlbArteDisenio->Items[i]->ToString());
		}
	}

	for (int i = 0; i < chlbArtesEscenicas->Items->Count; i++) {
		if (chlbArtesEscenicas->GetItemChecked(i)) {
			Controller::RelationatedCareers->Add(chlbArtesEscenicas->Items[i]->ToString());
		}
	}

	for (int i = 0; i < chlbArtesComunication->Items->Count; i++) {
		if (chlbArtesComunication->GetItemChecked(i)) {
			Controller::RelationatedCareers->Add(chlbArtesComunication->Items[i]->ToString());
		}
	}
	this->Close();
}
};
}
