#pragma once
#include "LoginFirstForm.h"
#include "CarryOnShoppingForm.h"
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
		
	public:	
	public:
		Form^ refForm;
		int userId, saleId=0;
		ProductPresentationForm(Form^ form1, int userId)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form1;
			this->userId = userId;
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
	private: System::Windows::Forms::PictureBox^ pbxProductImagen;
	protected:




	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Label^ lbDescription;
	public: System::Windows::Forms::TextBox^ txtId;
	protected:







	private: System::Windows::Forms::TextBox^ txtDescription;


	private: System::Windows::Forms::Button^ Addbtn;
	private: System::Windows::Forms::NumericUpDown^ nudAmount;

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
	private: System::Windows::Forms::TextBox^ txtProductName;

	private: System::Windows::Forms::Label^ lbId;





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
			this->pbxProductImagen = (gcnew System::Windows::Forms::PictureBox());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbDescription = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->Addbtn = (gcnew System::Windows::Forms::Button());
			this->nudAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbAmount = (gcnew System::Windows::Forms::Label());
			this->lbStarts = (gcnew System::Windows::Forms::Label());
			this->pbSellers = (gcnew System::Windows::Forms::PictureBox());
			this->pbStars = (gcnew System::Windows::Forms::PictureBox());
			this->lbHearts = (gcnew System::Windows::Forms::Label());
			this->lbSales = (gcnew System::Windows::Forms::Label());
			this->ComentLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->gbinformation = (gcnew System::Windows::Forms::GroupBox());
			this->txtProductName = (gcnew System::Windows::Forms::TextBox());
			this->lbId = (gcnew System::Windows::Forms::Label());
			this->Wishbtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAmount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSellers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStars))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->gbinformation->SuspendLayout();
			this->SuspendLayout();
			// 
			// pbxProductImagen
			// 
			this->pbxProductImagen->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbxProductImagen->Location = System::Drawing::Point(20, 30);
			this->pbxProductImagen->Name = L"pbxProductImagen";
			this->pbxProductImagen->Size = System::Drawing::Size(235, 265);
			this->pbxProductImagen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbxProductImagen->TabIndex = 0;
			this->pbxProductImagen->TabStop = false;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(0, 30);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(59, 16);
			this->lbName->TabIndex = 4;
			this->lbName->Text = L"Nombre:";
			// 
			// lbDescription
			// 
			this->lbDescription->AutoSize = true;
			this->lbDescription->Location = System::Drawing::Point(0, 60);
			this->lbDescription->Name = L"lbDescription";
			this->lbDescription->Size = System::Drawing::Size(82, 16);
			this->lbDescription->TabIndex = 5;
			this->lbDescription->Text = L"Descripción:";
			// 
			// txtId
			// 
			this->txtId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtId->Location = System::Drawing::Point(100, 0);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(346, 15);
			this->txtId->TabIndex = 6;
			// 
			// txtDescription
			// 
			this->txtDescription->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDescription->Location = System::Drawing::Point(100, 60);
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
			this->Addbtn->Location = System::Drawing::Point(400, 250);
			this->Addbtn->Name = L"Addbtn";
			this->Addbtn->Size = System::Drawing::Size(220, 40);
			this->Addbtn->TabIndex = 8;
			this->Addbtn->Text = L"Agregar al carrito";
			this->Addbtn->UseVisualStyleBackColor = true;
			this->Addbtn->Click += gcnew System::EventHandler(this, &ProductPresentationForm::Addbtn_Click);
			// 
			// nudAmount
			// 
			this->nudAmount->Location = System::Drawing::Point(370, 150);
			this->nudAmount->Name = L"nudAmount";
			this->nudAmount->Size = System::Drawing::Size(345, 22);
			this->nudAmount->TabIndex = 9;
			// 
			// lbAmount
			// 
			this->lbAmount->AutoSize = true;
			this->lbAmount->Location = System::Drawing::Point(270, 150);
			this->lbAmount->Name = L"lbAmount";
			this->lbAmount->Size = System::Drawing::Size(64, 16);
			this->lbAmount->TabIndex = 10;
			this->lbAmount->Text = L"Cantidad:";
			// 
			// lbStarts
			// 
			this->lbStarts->AutoSize = true;
			this->lbStarts->Location = System::Drawing::Point(270, 190);
			this->lbStarts->Name = L"lbStarts";
			this->lbStarts->Size = System::Drawing::Size(79, 16);
			this->lbStarts->TabIndex = 11;
			this->lbStarts->Text = L"Calificación:";
			// 
			// pbSellers
			// 
			this->pbSellers->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSellers.BackgroundImage")));
			this->pbSellers->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbSellers->Location = System::Drawing::Point(565, 188);
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
			this->pbStars->Location = System::Drawing::Point(430, 188);
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
			this->lbHearts->Location = System::Drawing::Point(395, 190);
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
			this->lbSales->Location = System::Drawing::Point(496, 190);
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
			this->ComentLabel->Location = System::Drawing::Point(20, 360);
			this->ComentLabel->Name = L"ComentLabel";
			this->ComentLabel->Size = System::Drawing::Size(83, 16);
			this->ComentLabel->TabIndex = 16;
			this->ComentLabel->Text = L"Comentarios";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox7->Location = System::Drawing::Point(110, 355);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 37);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 17;
			this->pictureBox7->TabStop = false;
			// 
			// gbinformation
			// 
			this->gbinformation->Controls->Add(this->txtProductName);
			this->gbinformation->Controls->Add(this->lbId);
			this->gbinformation->Controls->Add(this->txtDescription);
			this->gbinformation->Controls->Add(this->lbName);
			this->gbinformation->Controls->Add(this->lbDescription);
			this->gbinformation->Controls->Add(this->txtId);
			this->gbinformation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gbinformation->Location = System::Drawing::Point(270, 30);
			this->gbinformation->Name = L"gbinformation";
			this->gbinformation->Size = System::Drawing::Size(450, 100);
			this->gbinformation->TabIndex = 19;
			this->gbinformation->TabStop = false;
			// 
			// txtProductName
			// 
			this->txtProductName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtProductName->Location = System::Drawing::Point(100, 30);
			this->txtProductName->Name = L"txtProductName";
			this->txtProductName->ReadOnly = true;
			this->txtProductName->Size = System::Drawing::Size(346, 15);
			this->txtProductName->TabIndex = 9;
			// 
			// lbId
			// 
			this->lbId->AutoSize = true;
			this->lbId->Location = System::Drawing::Point(0, 0);
			this->lbId->Name = L"lbId";
			this->lbId->Size = System::Drawing::Size(23, 16);
			this->lbId->TabIndex = 8;
			this->lbId->Text = L"ID:";
			// 
			// Wishbtn
			// 
			this->Wishbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wishbtn->Location = System::Drawing::Point(390, 300);
			this->Wishbtn->Name = L"Wishbtn";
			this->Wishbtn->Size = System::Drawing::Size(240, 40);
			this->Wishbtn->TabIndex = 20;
			this->Wishbtn->Text = L"Agregar a la lista de deseos";
			this->Wishbtn->UseVisualStyleBackColor = true;
			this->Wishbtn->Click += gcnew System::EventHandler(this, &ProductPresentationForm::Wishbtn_Click);
			// 
			// ProductPresentationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 523);
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
			this->Controls->Add(this->nudAmount);
			this->Controls->Add(this->Addbtn);
			this->Controls->Add(this->pbxProductImagen);
			this->MaximizeBox = false;
			this->Name = L"ProductPresentationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Producto Selccionado";
			this->Load += gcnew System::EventHandler(this, &ProductPresentationForm::ProductPresentationForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxProductImagen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudAmount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSellers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStars))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->gbinformation->ResumeLayout(false);
			this->gbinformation->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		SaleDetail^ CreateSaleDetail() {
			SaleDetail^ newSaleDetail = gcnew SaleDetail();
			newSaleDetail->Id = Convert::ToInt32(txtId->Text);
			newSaleDetail->Product = Controller::QueryProductById(Convert::ToInt32(txtId->Text));
			newSaleDetail->Quantity = Convert::ToInt32(nudAmount->Text);
			newSaleDetail->UnitPrice = newSaleDetail->Product->PriceMin;
			newSaleDetail->SubTotal = (newSaleDetail->UnitPrice) * (newSaleDetail->Quantity);
			return newSaleDetail;
		}
		void ShowProduct();
		void GetSale() {

			// New Sale?
			if (SaleDetailForm::mySaleDetail->paid) {
				SaleDetailForm::mySaleDetail->paid = false;
				Sale^ newSale = gcnew Sale();
				saleId = Controller::AddSale(newSale);
			}
			// New SaleDeatil?
			List<Sale^>^ mysaleList = Controller::QueryAllSales();

			// Put Customer
			Customer^ customer = (Customer^)Controller::QueryUserById(userId); mysaleList[saleId]->Customer = customer; // Customer
			/*//PONER UN IF ...PARA EL MODO COMPRA ONLINE O VENTA PRESENCIAL PARA AÑADIR EL NOMBRE DEL STORE MANAGER julio
			// o tener un ID = 0 para el estore manager del tipo asistente virtual*/


			// Is it Online?
			StoreManager^ storeManager = gcnew StoreManager();
			storeManager->Name = "Asistente virtual";
			mysaleList[saleId]->StoreManager = storeManager;
			mysaleList[saleId]->PaidMode = "Virtual";
			mysaleList[saleId]->SaleDate = Convert::ToString(DateTime::Now);

			//Is the product repeated?
			for (int i = 0; i < mysaleList[saleId]->SaleDetails->Count; i++)
				if (mysaleList[saleId]->SaleDetails[i]->Product->Id == Convert::ToInt32(txtId->Text)) {MessageBox::Show("Este producto ya ha sido añadido al carrito"); return;}

			// Put On Data
			SaleDetail^ newSaleDetail= CreateSaleDetail();
			mysaleList[saleId]->SaleDetails->Add(newSaleDetail); Controller::UpdateSale(mysaleList[saleId]);												  //SaleDetail
			CarryOnShoppingForm^ carryOn = gcnew CarryOnShoppingForm(saleId);
			carryOn->ShowDialog();
			this->Close();
		}
	private: System::Void Addbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verification
		if (userId != 0) {	// It's not an user
			Person^ user = Controller::QueryUserById(userId);
			if (user->Profile == 'S' || user->Profile == 'C') { // Is it a customer?
				if (Convert::ToInt32(nudAmount->Text) != 0) {	// You choosed an amount?
					GetSale();
				}
				else MessageBox::Show("¡Debe seleccionar la cantidad de productos a comprar!");
			}
			else MessageBox::Show("¡Debe ser un cliente para comprar!");
			
		}
		else {
			LoginFirstForm^ getLoguin = gcnew LoginFirstForm();
			getLoguin->ShowDialog();
			this->Close();
		}
	}
	private: System::Void ProductPresentationForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Reload
		List<Sale^>^ mySaleList = Controller::QueryAllSales(); // Really necesary
		ShowProduct();
	}
	private: System::Void Wishbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Agregado a la lista de deseos :3");
	}
	};
}

