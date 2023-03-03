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
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::Button^ btClose;

	private: System::Windows::Forms::Button^ btDelete;

	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::Label^ AdLb;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtCompany;
	private: System::Windows::Forms::TextBox^ txtWebSite;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UploadAdForm::typeid));
			this->btUpImage = (gcnew System::Windows::Forms::Button());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->AdLb = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCompany = (gcnew System::Windows::Forms::TextBox());
			this->txtWebSite = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// btUpImage
			// 
			this->btUpImage->Location = System::Drawing::Point(37, 336);
			this->btUpImage->Name = L"btUpImage";
			this->btUpImage->Size = System::Drawing::Size(320, 40);
			this->btUpImage->TabIndex = 1;
			this->btUpImage->Text = L"Cargar Nuevo Anuncio";
			this->btUpImage->UseVisualStyleBackColor = true;
			this->btUpImage->Click += gcnew System::EventHandler(this, &UploadAdForm::button1_Click);
			// 
			// btClose
			// 
			this->btClose->Location = System::Drawing::Point(157, 430);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(80, 30);
			this->btClose->TabIndex = 2;
			this->btClose->Text = L"Salir";
			this->btClose->UseVisualStyleBackColor = true;
			this->btClose->Click += gcnew System::EventHandler(this, &UploadAdForm::btClose_Click);
			// 
			// btDelete
			// 
			this->btDelete->Location = System::Drawing::Point(37, 382);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(320, 40);
			this->btDelete->TabIndex = 3;
			this->btDelete->Text = L"Eliminar  anuncio";
			this->btDelete->UseVisualStyleBackColor = true;
			this->btDelete->Click += gcnew System::EventHandler(this, &UploadAdForm::button2_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BackColor = System::Drawing::Color::White;
			this->pbPhoto->Location = System::Drawing::Point(37, 130);
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
			this->AdLb->Location = System::Drawing::Point(120, 100);
			this->AdLb->Name = L"AdLb";
			this->AdLb->Size = System::Drawing::Size(133, 20);
			this->AdLb->TabIndex = 5;
			this->AdLb->Text = L"Anuncio actual";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Compañia";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Pagina web";
			// 
			// txtCompany
			// 
			this->txtCompany->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txtCompany->Location = System::Drawing::Point(123, 30);
			this->txtCompany->Name = L"txtCompany";
			this->txtCompany->ReadOnly = true;
			this->txtCompany->Size = System::Drawing::Size(220, 22);
			this->txtCompany->TabIndex = 8;
			this->txtCompany->Text = L"-";
			// 
			// txtWebSite
			// 
			this->txtWebSite->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txtWebSite->Location = System::Drawing::Point(123, 60);
			this->txtWebSite->Name = L"txtWebSite";
			this->txtWebSite->ReadOnly = true;
			this->txtWebSite->Size = System::Drawing::Size(220, 22);
			this->txtWebSite->TabIndex = 9;
			this->txtWebSite->Text = L"-";
			// 
			// UploadAdForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->ClientSize = System::Drawing::Size(402, 466);
			this->Controls->Add(this->txtWebSite);
			this->Controls->Add(this->txtCompany);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AdLb);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->btUpImage);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
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
	private: System::Void btClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
