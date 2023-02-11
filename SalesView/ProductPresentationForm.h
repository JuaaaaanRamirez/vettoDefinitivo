#pragma once
#include "SaleDetailForm.h"
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
	/// Resumen de ProductPresentationForm
	/// </summary>
	public ref class ProductPresentationForm : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		ProductPresentationForm(Form^ form)
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
		~ProductPresentationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbxProductImagen1;
	private: System::Windows::Forms::PictureBox^ pbxProductImagen2;
	private: System::Windows::Forms::PictureBox^ pbxProductImagen3;
	private: System::Windows::Forms::PictureBox^ pbxProductImagen4;
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Label^ lbDescription;
	protected:






	private: System::Windows::Forms::TextBox^ txtProductName;
	private: System::Windows::Forms::TextBox^ txtDescription;


	private: System::Windows::Forms::Button^ Addbtn;
	private: System::Windows::Forms::NumericUpDown^ amountProduct;
	private: System::Windows::Forms::Label^ lbAmount;
	private: System::Windows::Forms::Label^ lbStarts;
	private: System::Windows::Forms::PictureBox^ pbSellers;
	private: System::Windows::Forms::PictureBox^ pbStars;






	private: System::Windows::Forms::Label^ lbHearts;
	private: System::Windows::Forms::Label^ lbSales;



	private: System::Windows::Forms::Label^ ComentLabel;
	private: System::Windows::Forms::PictureBox^ pictureBox7;









	private: System::Windows::Forms::GroupBox^ gbinformation;
	private: System::Windows::Forms::Button^ Wishbtn;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductPresentationForm::typeid));
			this->pbxProductImagen1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxProductImagen2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxProductImagen3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbxProductImagen4 = (gcnew System::Windows::Forms::PictureBox());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbDescription = (gcnew System::Windows::Forms::Label());
			this->txtProductName = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->Addbtn = (gcnew System::Windows::Forms::Button());
			this->amountProduct = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbAmount = (gcnew System::Windows::Forms::Label());
			this->lbStarts = (gcnew System::Windows::Forms::Label());
			this->pbSellers = (gcnew System::Windows::Forms::PictureBox());
			this->pbStars = (gcnew System::Windows::Forms::PictureBox());
			this->lbHearts = (gcnew System::Windows::Forms::Label());
			this->lbSales = (gcnew System::Windows::Forms::Label());
			this->ComentLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->gbinformation = (gcnew System::Windows::Forms::GroupBox());
			this->Wishbtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->amountProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSellers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStars))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->gbinformation->SuspendLayout();
			this->SuspendLayout();
			// 
			// pbxProductImagen1
			// 
			this->pbxProductImagen1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbxProductImagen1->Location = System::Drawing::Point(180, 30);
			this->pbxProductImagen1->Name = L"pbxProductImagen1";
			this->pbxProductImagen1->Size = System::Drawing::Size(235, 265);
			this->pbxProductImagen1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbxProductImagen1->TabIndex = 0;
			this->pbxProductImagen1->TabStop = false;
			// 
			// pbxProductImagen2
			// 
			this->pbxProductImagen2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbxProductImagen2->Location = System::Drawing::Point(20, 30);
			this->pbxProductImagen2->Name = L"pbxProductImagen2";
			this->pbxProductImagen2->Size = System::Drawing::Size(130, 75);
			this->pbxProductImagen2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbxProductImagen2->TabIndex = 1;
			this->pbxProductImagen2->TabStop = false;
			// 
			// pbxProductImagen3
			// 
			this->pbxProductImagen3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbxProductImagen3->Location = System::Drawing::Point(20, 125);
			this->pbxProductImagen3->Name = L"pbxProductImagen3";
			this->pbxProductImagen3->Size = System::Drawing::Size(130, 75);
			this->pbxProductImagen3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbxProductImagen3->TabIndex = 2;
			this->pbxProductImagen3->TabStop = false;
			// 
			// pbxProductImagen4
			// 
			this->pbxProductImagen4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbxProductImagen4->Location = System::Drawing::Point(20, 220);
			this->pbxProductImagen4->Name = L"pbxProductImagen4";
			this->pbxProductImagen4->Size = System::Drawing::Size(130, 75);
			this->pbxProductImagen4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbxProductImagen4->TabIndex = 3;
			this->pbxProductImagen4->TabStop = false;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(0, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(59, 16);
			this->lbName->TabIndex = 4;
			this->lbName->Text = L"Nombre:";
			// 
			// lbDescription
			// 
			this->lbDescription->AutoSize = true;
			this->lbDescription->Location = System::Drawing::Point(0, 30);
			this->lbDescription->Name = L"lbDescription";
			this->lbDescription->Size = System::Drawing::Size(82, 16);
			this->lbDescription->TabIndex = 5;
			this->lbDescription->Text = L"Descripción:";
			// 
			// txtProductName
			// 
			this->txtProductName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtProductName->Location = System::Drawing::Point(100, 0);
			this->txtProductName->Name = L"txtProductName";
			this->txtProductName->ReadOnly = true;
			this->txtProductName->Size = System::Drawing::Size(346, 15);
			this->txtProductName->TabIndex = 6;
			// 
			// txtDescription
			// 
			this->txtDescription->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDescription->Location = System::Drawing::Point(100, 30);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->ReadOnly = true;
			this->txtDescription->Size = System::Drawing::Size(345, 82);
			this->txtDescription->TabIndex = 7;
			// 
			// Addbtn
			// 
			this->Addbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addbtn->Location = System::Drawing::Point(570, 250);
			this->Addbtn->Name = L"Addbtn";
			this->Addbtn->Size = System::Drawing::Size(220, 40);
			this->Addbtn->TabIndex = 8;
			this->Addbtn->Text = L"Agregar al carrito";
			this->Addbtn->UseVisualStyleBackColor = true;
			this->Addbtn->Click += gcnew System::EventHandler(this, &ProductPresentationForm::Addbtn_Click);
			// 
			// amountProduct
			// 
			this->amountProduct->Location = System::Drawing::Point(540, 150);
			this->amountProduct->Name = L"amountProduct";
			this->amountProduct->Size = System::Drawing::Size(345, 22);
			this->amountProduct->TabIndex = 9;
			// 
			// lbAmount
			// 
			this->lbAmount->AutoSize = true;
			this->lbAmount->Location = System::Drawing::Point(440, 150);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(64, 16);
			this->lbAmount->TabIndex = 10;
			this->lbAmount->Text = L"Cantidad:";
			// 
			// lbStarts
			// 
			this->lbStarts->AutoSize = true;
			this->lbStarts->Location = System::Drawing::Point(440, 190);
			this->lbStarts->Name = L"lbStarts";
			this->lbStarts->Size = System::Drawing::Size(79, 16);
			this->lbStarts->TabIndex = 11;
			this->lbStarts->Text = L"Calificación:";
			// 
			// pbSellers
			// 
			this->pbSellers->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSellers.BackgroundImage")));
			this->pbSellers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbSellers->Location = System::Drawing::Point(735, 190);
			this->pbSellers->Name = L"pbSellers";
			this->pbSellers->Size = System::Drawing::Size(35, 35);
			this->pbSellers->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbSellers->TabIndex = 12;
			this->pbSellers->TabStop = false;
			// 
			// pbStars
			// 
			this->pbStars->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbStars.BackgroundImage")));
			this->pbStars->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbStars->Location = System::Drawing::Point(600, 190);
			this->pbStars->Name = L"pbStars";
			this->pbStars->Size = System::Drawing::Size(35, 35);
			this->pbStars->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbStars->TabIndex = 13;
			this->pbStars->TabStop = false;
			// 
			// lbHearts
			// 
			this->lbHearts->AutoSize = true;
			this->lbHearts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHearts->Location = System::Drawing::Point(565, 190);
			this->lbHearts->Name = L"lbHearts";
			this->lbHearts->Size = System::Drawing::Size(48, 29);
			this->lbHearts->TabIndex = 14;
			this->lbHearts->Text = L"4.7";
			this->lbHearts->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbSales
			// 
			this->lbSales->AutoSize = true;
			this->lbSales->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSales->Location = System::Drawing::Point(666, 190);
			this->lbSales->Name = L"lbSales";
			this->lbSales->Size = System::Drawing::Size(69, 29);
			this->lbSales->TabIndex = 15;
			this->lbSales->Text = L"5000";
			this->lbSales->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ComentLabel
			// 
			this->ComentLabel->AutoSize = true;
			this->ComentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComentLabel->Location = System::Drawing::Point(26, 362);
			this->ComentLabel->Name = L"ComentLabel";
			this->ComentLabel->Size = System::Drawing::Size(83, 16);
			this->ComentLabel->TabIndex = 16;
			this->ComentLabel->Text = L"Comentarios";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox7->Location = System::Drawing::Point(115, 352);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 37);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 17;
			this->pictureBox7->TabStop = false;
			// 
			// gbinformation
			// 
			this->gbinformation->Controls->Add(this->txtDescription);
			this->gbinformation->Controls->Add(this->lbName);
			this->gbinformation->Controls->Add(this->lbDescription);
			this->gbinformation->Controls->Add(this->txtProductName);
			this->gbinformation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gbinformation->Location = System::Drawing::Point(440, 30);
			this->gbinformation->Name = L"gbinformation";
			this->gbinformation->Size = System::Drawing::Size(450, 100);
			this->gbinformation->TabIndex = 19;
			this->gbinformation->TabStop = false;
			// 
			// Wishbtn
			// 
			this->Wishbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wishbtn->Location = System::Drawing::Point(560, 300);
			this->Wishbtn->Name = L"Wishbtn";
			this->Wishbtn->Size = System::Drawing::Size(240, 40);
			this->Wishbtn->TabIndex = 20;
			this->Wishbtn->Text = L"Agregar a la lista de deseos";
			this->Wishbtn->UseVisualStyleBackColor = true;
			// 
			// ProductPresentationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(932, 523);
			this->Controls->Add(this->Wishbtn);
			this->Controls->Add(this->gbinformation);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->ComentLabel);
			this->Controls->Add(this->lbSales);
			this->Controls->Add(this->lbHearts);
			this->Controls->Add(this->pbStars);
			this->Controls->Add(this->pbSellers);
			this->Controls->Add(this->lbStarts);
			this->Controls->Add(this->lbAmount);
			this->Controls->Add(this->amountProduct);
			this->Controls->Add(this->Addbtn);
			this->Controls->Add(this->pbxProductImagen4);
			this->Controls->Add(this->pbxProductImagen3);
			this->Controls->Add(this->pbxProductImagen2);
			this->Controls->Add(this->pbxProductImagen1);
			this->MaximizeBox = false;
			this->Name = L"ProductPresentationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProductoSelccionado";
			this->Load += gcnew System::EventHandler(this, &ProductPresentationForm::ProductPresentationForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->amountProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSellers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStars))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->gbinformation->ResumeLayout(false);
			this->gbinformation->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ShowProduct();
	private: System::Void Addbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		SaleDetailForm^ SaleDetail = gcnew SaleDetailForm();
		SaleDetail->Show();
	}
	private: System::Void ProductPresentationForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowProduct();
	}
};
}

