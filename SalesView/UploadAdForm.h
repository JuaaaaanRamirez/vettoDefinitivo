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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->btUpImage = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btUpImage
			// 
			this->btUpImage->Location = System::Drawing::Point(86, 43);
			this->btUpImage->Name = L"btUpImage";
			this->btUpImage->Size = System::Drawing::Size(319, 37);
			this->btUpImage->TabIndex = 1;
			this->btUpImage->Text = L"Cargar Nuevo Anuncio";
			this->btUpImage->UseVisualStyleBackColor = true;
			this->btUpImage->Click += gcnew System::EventHandler(this, &UploadAdForm::button1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(86, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 124);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 44);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Eliminar mi anuncio";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// UploadAdForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 221);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btUpImage);
			this->Name = L"UploadAdForm";
			this->Text = L"Mi anuncio";
			this->Load += gcnew System::EventHandler(this, &UploadAdForm::UploadAdForm_Load);
			this->ResumeLayout(false);

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
private: System::Void UploadAdForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
