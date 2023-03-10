#pragma once
#include "SaleDetailForm.h"

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CarryOnShoppingForm
	/// </summary>
	public ref class CarryOnShoppingForm : public System::Windows::Forms::Form
	{
		int saleId;
		bool btnPushed=false;
	public:
		CarryOnShoppingForm(int saleId)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
			this->saleId = saleId;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~CarryOnShoppingForm()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region COMPONENTS
	private: System::Windows::Forms::Label^ lbCont;
	protected:
	private: System::Windows::Forms::PictureBox^ pbCheck;
	private: System::Windows::Forms::Button^ btnCarryOn;
	private: System::Windows::Forms::Button^ btnWatchaShopping;

	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CarryOnShoppingForm::typeid));
			this->lbCont = (gcnew System::Windows::Forms::Label());
			this->pbCheck = (gcnew System::Windows::Forms::PictureBox());
			this->btnCarryOn = (gcnew System::Windows::Forms::Button());
			this->btnWatchaShopping = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCheck))->BeginInit();
			this->SuspendLayout();
			// 
			// lbCont
			// 
			this->lbCont->AutoSize = true;
			this->lbCont->BackColor = System::Drawing::Color::Transparent;
			this->lbCont->Location = System::Drawing::Point(12, 9);
			this->lbCont->Name = L"lbCont";
			this->lbCont->Size = System::Drawing::Size(209, 16);
			this->lbCont->TabIndex = 0;
			this->lbCont->Text = L"Se ha a?adido el art?culo al carrito";
			// 
			// pbCheck
			// 
			this->pbCheck->BackColor = System::Drawing::Color::Transparent;
			this->pbCheck->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCheck.BackgroundImage")));
			this->pbCheck->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbCheck->Location = System::Drawing::Point(247, 4);
			this->pbCheck->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbCheck->Name = L"pbCheck";
			this->pbCheck->Size = System::Drawing::Size(25, 25);
			this->pbCheck->TabIndex = 1;
			this->pbCheck->TabStop = false;
			// 
			// btnCarryOn
			// 
			this->btnCarryOn->Location = System::Drawing::Point(51, 34);
			this->btnCarryOn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCarryOn->Name = L"btnCarryOn";
			this->btnCarryOn->Size = System::Drawing::Size(180, 30);
			this->btnCarryOn->TabIndex = 2;
			this->btnCarryOn->Text = L"Continuar comprando";
			this->btnCarryOn->UseVisualStyleBackColor = true;
			this->btnCarryOn->Click += gcnew System::EventHandler(this, &CarryOnShoppingForm::btnCarryOn_Click);
			// 
			// btnWatchaShopping
			// 
			this->btnWatchaShopping->Location = System::Drawing::Point(35, 65);
			this->btnWatchaShopping->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnWatchaShopping->Name = L"btnWatchaShopping";
			this->btnWatchaShopping->Size = System::Drawing::Size(211, 30);
			this->btnWatchaShopping->TabIndex = 3;
			this->btnWatchaShopping->Text = L"Ir al carrito/Pagar";
			this->btnWatchaShopping->UseVisualStyleBackColor = true;
			this->btnWatchaShopping->Click += gcnew System::EventHandler(this, &CarryOnShoppingForm::btnWatchaShopping_Click);
			// 
			// CarryOnShoppingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(328, 103);
			this->Controls->Add(this->btnWatchaShopping);
			this->Controls->Add(this->btnCarryOn);
			this->Controls->Add(this->pbCheck);
			this->Controls->Add(this->lbCont);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CarryOnShoppingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"?Carrito actualizado!";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CarryOnShoppingForm::CarryOnShoppingForm_FormClosing);
			//this->Load += gcnew System::EventHandler(this, &CarryOnShoppingForm::CarryOnShoppingForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCheck))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnWatchaShopping_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnCarryOn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void CarryOnShoppingForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
