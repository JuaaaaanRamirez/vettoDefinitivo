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

	/// <summary>
	/// Resumen de UploadAdForm
	/// </summary>
	public ref class UploadAdForm : public System::Windows::Forms::Form
	{
		Form^ refForm; //Variable de instancia
	public:
		UploadAdForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~UploadAdForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ btUpImage;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::Label^ AdLb;





	protected:



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btUpImage = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->AdLb = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// btUpImage
			// 
			this->btUpImage->Location = System::Drawing::Point(40, 246);
			this->btUpImage->Name = L"btUpImage";
			this->btUpImage->Size = System::Drawing::Size(320, 40);
			this->btUpImage->TabIndex = 1;
			this->btUpImage->Text = L"Cargar Nuevo Anuncio";
			this->btUpImage->UseVisualStyleBackColor = true;
			this->btUpImage->Click += gcnew System::EventHandler(this, &UploadAdForm::button1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(40, 292);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(320, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Eliminar  anuncio";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UploadAdForm::button2_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->Location = System::Drawing::Point(40, 40);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(320, 200);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPhoto->TabIndex = 4;
			this->pbPhoto->TabStop = false;
			// 
			// AdLb
			// 
			this->AdLb->AutoSize = true;
			this->AdLb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->AdLb->Location = System::Drawing::Point(123, 15);
			this->AdLb->Name = L"AdLb";
			this->AdLb->Size = System::Drawing::Size(133, 20);
			this->AdLb->TabIndex = 5;
			this->AdLb->Text = L"Anuncio actual";
			// 
			// UploadAdForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 373);
			this->Controls->Add(this->AdLb);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btUpImage);
			this->Name = L"UploadAdForm";
			this->Text = L"Mi anuncio";
			this->Load += gcnew System::EventHandler(this, &UploadAdForm::UploadAdForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btRefreshImagines_Click(System::Object^ sender, System::EventArgs^ e) {
		
	/*
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			if (Controller::photo1->Equals(nullptr)) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				//(Customer^)(person)->Ad = ms->ToArray();
				Controller::photo1 = ms->ToArray();
			}
		}
		else {
			MessageBox::Show("Debe subir una imagen de su anuncio");
			return;
		}
		/*
		Announcer^ announcer = gcnew Announcer();
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			announcer->Add = ms->ToArray();
		}
		*/
	
	}
private: System::Void UploadAdForm_Load(System::Object^ sender, System::EventArgs^ e);
	


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
