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
	private: System::Windows::Forms::Label^ lbSciencEngineer;
	private: System::Windows::Forms::Label^ lbArt;
	private: System::Windows::Forms::Label^ lbDrama;
	private: System::Windows::Forms::Label^ lbComunication;
	protected:















	private: System::Windows::Forms::Button^ btUp;
	private: System::Windows::Forms::Button^ btExit;
	private: System::Windows::Forms::CheckedListBox^ chlbHumanity;

	private: System::Windows::Forms::Label^ lbHumanity;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckedListBox^ chlbSocialScience;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckedListBox^ chlbEducation;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckedListBox^ chlbOthers;



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
			this->lbSciencEngineer = (gcnew System::Windows::Forms::Label());
			this->lbArt = (gcnew System::Windows::Forms::Label());
			this->lbDrama = (gcnew System::Windows::Forms::Label());
			this->lbComunication = (gcnew System::Windows::Forms::Label());
			this->btUp = (gcnew System::Windows::Forms::Button());
			this->btExit = (gcnew System::Windows::Forms::Button());
			this->chlbHumanity = (gcnew System::Windows::Forms::CheckedListBox());
			this->lbHumanity = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chlbSocialScience = (gcnew System::Windows::Forms::CheckedListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->chlbEducation = (gcnew System::Windows::Forms::CheckedListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chlbOthers = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// chlbCiencias
			// 
			this->chlbCiencias->FormattingEnabled = true;
			this->chlbCiencias->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
				L"Estadística", L"Física", L"Ingeniería Ambiental y Sostenible",
					L"Ingeniería Biomédica", L"Ingeniería Civil", L"Ingeniería de las Telecomunicaciones", L"Ingeniería de Minas", L"Ingeniería Electrónica",
					L"Ingeniería Geológica", L"Ingeniería Industrial", L"Ingeniería Informática", L"Ingeniería Mecánica", L"Ingeniería Mecatrónica",
					L"Matemáticas", L"Química", L"Todas"
			});
			this->chlbCiencias->Location = System::Drawing::Point(10, 30);
			this->chlbCiencias->Name = L"chlbCiencias";
			this->chlbCiencias->Size = System::Drawing::Size(250, 310);
			this->chlbCiencias->TabIndex = 7;
			// 
			// chlbArteDisenio
			// 
			this->chlbArteDisenio->FormattingEnabled = true;
			this->chlbArteDisenio->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Educación Artística", L"Diseño Gráfico",
					L"Diseño Industrial", L"Escultura", L"Pintura", L"Arte, moda y diseño textil", L"Grabado", L"Todas"
			});
			this->chlbArteDisenio->Location = System::Drawing::Point(280, 30);
			this->chlbArteDisenio->Name = L"chlbArteDisenio";
			this->chlbArteDisenio->Size = System::Drawing::Size(250, 157);
			this->chlbArteDisenio->TabIndex = 8;
			// 
			// chlbArtesEscenicas
			// 
			this->chlbArtesEscenicas->FormattingEnabled = true;
			this->chlbArtesEscenicas->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Danza", L"Teatro", L"Música", L"Creación y Producción Escénica",
					L"Todas"
			});
			this->chlbArtesEscenicas->Location = System::Drawing::Point(280, 211);
			this->chlbArtesEscenicas->Name = L"chlbArtesEscenicas";
			this->chlbArtesEscenicas->Size = System::Drawing::Size(250, 123);
			this->chlbArtesEscenicas->TabIndex = 9;
			// 
			// chlbArtesComunication
			// 
			this->chlbArtesComunication->FormattingEnabled = true;
			this->chlbArtesComunication->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Comunicación Audiovisual", L"Comunicación para el desarrollo",
					L"Publicidad", L"Periodismo", L"Todas"
			});
			this->chlbArtesComunication->Location = System::Drawing::Point(550, 30);
			this->chlbArtesComunication->Name = L"chlbArtesComunication";
			this->chlbArtesComunication->Size = System::Drawing::Size(250, 89);
			this->chlbArtesComunication->TabIndex = 10;
			// 
			// lbSciencEngineer
			// 
			this->lbSciencEngineer->AutoSize = true;
			this->lbSciencEngineer->Location = System::Drawing::Point(10, 10);
			this->lbSciencEngineer->Name = L"lbSciencEngineer";
			this->lbSciencEngineer->Size = System::Drawing::Size(132, 16);
			this->lbSciencEngineer->TabIndex = 11;
			this->lbSciencEngineer->Text = L"Ciencias e Ingenieria";
			// 
			// lbArt
			// 
			this->lbArt->AutoSize = true;
			this->lbArt->Location = System::Drawing::Point(277, 10);
			this->lbArt->Name = L"lbArt";
			this->lbArt->Size = System::Drawing::Size(87, 16);
			this->lbArt->TabIndex = 12;
			this->lbArt->Text = L"Arte y Diseño";
			// 
			// lbDrama
			// 
			this->lbDrama->AutoSize = true;
			this->lbDrama->Location = System::Drawing::Point(277, 190);
			this->lbDrama->Name = L"lbDrama";
			this->lbDrama->Size = System::Drawing::Size(104, 16);
			this->lbDrama->TabIndex = 13;
			this->lbDrama->Text = L"Artes Escénicas";
			// 
			// lbComunication
			// 
			this->lbComunication->AutoSize = true;
			this->lbComunication->Location = System::Drawing::Point(550, 10);
			this->lbComunication->Name = L"lbComunication";
			this->lbComunication->Size = System::Drawing::Size(224, 16);
			this->lbComunication->TabIndex = 14;
			this->lbComunication->Text = L"Ciencias y Artes de la Comunicación";
			// 
			// btUp
			// 
			this->btUp->Location = System::Drawing::Point(375, 340);
			this->btUp->Name = L"btUp";
			this->btUp->Size = System::Drawing::Size(100, 30);
			this->btUp->TabIndex = 15;
			this->btUp->Text = L"Agregar";
			this->btUp->UseVisualStyleBackColor = true;
			this->btUp->Click += gcnew System::EventHandler(this, &CareerListForm::btUp_Click);
			// 
			// btExit
			// 
			this->btExit->Location = System::Drawing::Point(500, 340);
			this->btExit->Name = L"btExit";
			this->btExit->Size = System::Drawing::Size(100, 30);
			this->btExit->TabIndex = 16;
			this->btExit->Text = L"Salir";
			this->btExit->UseVisualStyleBackColor = true;
			this->btExit->Click += gcnew System::EventHandler(this, &CareerListForm::btExit_Click);
			// 
			// chlbHumanity
			// 
			this->chlbHumanity->FormattingEnabled = true;
			this->chlbHumanity->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Arqueología", L"Ciencias de la Información",
					L"Filosofía", L"Geografía y Medio Ambiente", L"Historia", L"Humanidades", L"Lingüística y Literatura"
			});
			this->chlbHumanity->Location = System::Drawing::Point(820, 30);
			this->chlbHumanity->Name = L"chlbHumanity";
			this->chlbHumanity->Size = System::Drawing::Size(224, 140);
			this->chlbHumanity->TabIndex = 17;
			// 
			// lbHumanity
			// 
			this->lbHumanity->AutoSize = true;
			this->lbHumanity->Location = System::Drawing::Point(820, 10);
			this->lbHumanity->Name = L"lbHumanity";
			this->lbHumanity->Size = System::Drawing::Size(170, 16);
			this->lbHumanity->TabIndex = 18;
			this->lbHumanity->Text = L"Letras y Ciencias Humanas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(550, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 16);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Ciencias Sociales";
			// 
			// chlbSocialScience
			// 
			this->chlbSocialScience->FormattingEnabled = true;
			this->chlbSocialScience->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Antropología", L"Ciencia, Política y Gobierno",
					L"Economía", L"Finanzas", L"Relaciones Internacionales", L"Sociología"
			});
			this->chlbSocialScience->Location = System::Drawing::Point(550, 148);
			this->chlbSocialScience->Name = L"chlbSocialScience";
			this->chlbSocialScience->Size = System::Drawing::Size(250, 106);
			this->chlbSocialScience->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(550, 258);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 16);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Educación";
			// 
			// chlbEducation
			// 
			this->chlbEducation->FormattingEnabled = true;
			this->chlbEducation->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Educación Inicial", L"Educación Primaria",
					L"Educación Secundaria"
			});
			this->chlbEducation->Location = System::Drawing::Point(550, 279);
			this->chlbEducation->Name = L"chlbEducation";
			this->chlbEducation->Size = System::Drawing::Size(250, 55);
			this->chlbEducation->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(820, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Otras facultades";
			// 
			// chlbOthers
			// 
			this->chlbOthers->FormattingEnabled = true;
			this->chlbOthers->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Arquitectura", L"Contabilidad", L"Derecho",
					L"Gestión", L"Psicología", L"Hotelería", L"Turismo"
			});
			this->chlbOthers->Location = System::Drawing::Point(820, 200);
			this->chlbOthers->Name = L"chlbOthers";
			this->chlbOthers->Size = System::Drawing::Size(224, 140);
			this->chlbOthers->TabIndex = 23;
			// 
			// CareerListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1082, 383);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->chlbOthers);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->chlbEducation);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chlbSocialScience);
			this->Controls->Add(this->lbHumanity);
			this->Controls->Add(this->chlbHumanity);
			this->Controls->Add(this->btExit);
			this->Controls->Add(this->btUp);
			this->Controls->Add(this->lbComunication);
			this->Controls->Add(this->lbDrama);
			this->Controls->Add(this->lbArt);
			this->Controls->Add(this->lbSciencEngineer);
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

		// Load
	private: System::Void CareerListForm_Load(System::Object^ sender, System::EventArgs^ e) {
	if (Controller::RelationatedCareers->Count > 0) {
		for (int j = 0; j < Controller::RelationatedCareers->Count; j++) {
			for (int i = 0; i < chlbCiencias->Items->Count; i++) {
				if (chlbCiencias->Items[i]->ToString()->Equals(Controller::RelationatedCareers[j])) {
					chlbCiencias->SetItemChecked(i, true);
					break;
				}
			}
			for (int i = 0; i < chlbArteDisenio->Items->Count; i++) {
				if (chlbArteDisenio->Items[i]->ToString()->Equals(Controller::RelationatedCareers[j])) {
					chlbArteDisenio->SetItemChecked(i, true);
					break;
				}
			}
			for (int i = 0; i < chlbArtesEscenicas->Items->Count; i++) {
				if (chlbArtesEscenicas->Items[i]->ToString()->Equals(Controller::RelationatedCareers[j])) {
					chlbArtesEscenicas->SetItemChecked(i, true);
					break;
				}
			}
			for (int i = 0; i < chlbArtesComunication->Items->Count; i++) {
				if (chlbArtesComunication->Items[i]->ToString()->Equals(Controller::RelationatedCareers[j])) {
					chlbArtesComunication->SetItemChecked(i, true);
					break;
				}
			}


		}


	}
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
	for (int i = 0; i < chlbSocialScience->Items->Count; i++) {
		if (chlbSocialScience->GetItemChecked(i)) {
			Controller::RelationatedCareers->Add(chlbSocialScience->Items[i]->ToString());
		}
	}
	for (int i = 0; i < chlbEducation->Items->Count; i++) {
		if (chlbEducation->GetItemChecked(i)) {
			Controller::RelationatedCareers->Add(chlbEducation->Items[i]->ToString());
		}
	}
	for (int i = 0; i < chlbHumanity->Items->Count; i++) {
		if (chlbHumanity->GetItemChecked(i)) {
			Controller::RelationatedCareers->Add(chlbHumanity->Items[i]->ToString());
		}
	}
	for (int i = 0; i < chlbOthers->Items->Count; i++) {
		if (chlbOthers->GetItemChecked(i)) {
			Controller::RelationatedCareers->Add(chlbOthers->Items[i]->ToString());
		}
	}
	this->Close();
}
};
}
