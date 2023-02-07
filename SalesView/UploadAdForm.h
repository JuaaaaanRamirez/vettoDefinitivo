#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UploadAdForm
	/// </summary>
	public ref class UploadAdForm : public System::Windows::Forms::Form
	{
	public:
		UploadAdForm(void)
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
		~UploadAdForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	protected:

	private: System::Windows::Forms::Button^ btUpImage;
	private: System::Windows::Forms::Button^ btRefreshImagines;
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
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btUpImage = (gcnew System::Windows::Forms::Button());
			this->btRefreshImagines = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbPhoto->Location = System::Drawing::Point(96, 12);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(378, 249);
			this->pbPhoto->TabIndex = 0;
			this->pbPhoto->TabStop = false;
			// 
			// btUpImage
			// 
			this->btUpImage->Location = System::Drawing::Point(131, 288);
			this->btUpImage->Name = L"btUpImage";
			this->btUpImage->Size = System::Drawing::Size(319, 37);
			this->btUpImage->TabIndex = 1;
			this->btUpImage->Text = L"Cargar Nuevo Anuncio";
			this->btUpImage->UseVisualStyleBackColor = true;
			this->btUpImage->Click += gcnew System::EventHandler(this, &UploadAdForm::button1_Click);
			// 
			// btRefreshImagines
			// 
			this->btRefreshImagines->Location = System::Drawing::Point(160, 350);
			this->btRefreshImagines->Name = L"btRefreshImagines";
			this->btRefreshImagines->Size = System::Drawing::Size(250, 51);
			this->btRefreshImagines->TabIndex = 2;
			this->btRefreshImagines->Text = L"Subir al sistema de anuncios";
			this->btRefreshImagines->UseVisualStyleBackColor = true;
			this->btRefreshImagines->Click += gcnew System::EventHandler(this, &UploadAdForm::btRefreshImagines_Click);
			// 
			// UploadAdForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 448);
			this->Controls->Add(this->btRefreshImagines);
			this->Controls->Add(this->btUpImage);
			this->Controls->Add(this->pbPhoto);
			this->Name = L"UploadAdForm";
			this->Text = L"Mi anuncio";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ opnfd = gcnew OpenFileDialog();
		opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
		}
	}
	private: System::Void btRefreshImagines_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
		Announcer^ announcer = gcnew Announcer();
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			announcer->Add = ms->ToArray();
		}
		*/
	}
};
}
