#pragma once

#include "ProductForm.h"
#include "ProductListForm.h"
#include "ProductForm.h"

#include "LoginForm.h"

#include "UploadAdForm.h"
#include "userForm.h"


namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SalesMainForm
	/// </summary>
	public ref class SalesMainForm : public System::Windows::Forms::Form
	{
	public:

		static Person^ person; //Variable de clase
    

		//static Object^ person; //Variable de clase o miembro u atributo estático (global).

		SalesMainForm(void)
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
		~SalesMainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarUnaVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnLogin;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Button^ Homebtn;
	public: System::Windows::Forms::PictureBox^ Ad1;
	public: System::Windows::Forms::PictureBox^ Ad2;
	public: System::Windows::Forms::PictureBox^ Ad3;
	public: System::Windows::Forms::PictureBox^ Ad4;





	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ SearchBtn;
	private: System::Windows::Forms::Label^ Presentation;
	private: System::Windows::Forms::ToolStripMenuItem^ estadistidcasDeVentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ subirAnuncioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;






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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());

			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());

			this->subirAnuncioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarUnaVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadistidcasDeVentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Homebtn = (gcnew System::Windows::Forms::Button());
			this->Ad1 = (gcnew System::Windows::Forms::PictureBox());
			this->Ad2 = (gcnew System::Windows::Forms::PictureBox());
			this->Ad3 = (gcnew System::Windows::Forms::PictureBox());
			this->Ad4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->SearchBtn = (gcnew System::Windows::Forms::Button());
			this->Presentation = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->operacionesToolStripMenuItem, this->reportesToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1028, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->productoToolStripMenuItem,
					this->usuariosToolStripMenuItem, this->subirAnuncioToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";

			this->productoToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->productoToolStripMenuItem->Text = L"Producto";
			this->productoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::productoToolStripMenuItem_Click);
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::usuariosToolStripMenuItem_Click);
			// 
			// subirAnuncioToolStripMenuItem
			// 

			this->subirAnuncioToolStripMenuItem->Name = L"subirAnuncioToolStripMenuItem";
			this->subirAnuncioToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->subirAnuncioToolStripMenuItem->Text = L"MiAnuncio";
			this->subirAnuncioToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::subirAnuncioToolStripMenuItem_Click);

			// 
			// subirAnuncioToolStripMenuItem
			// 
			this->subirAnuncioToolStripMenuItem->Name = L"subirAnuncioToolStripMenuItem";
			this->subirAnuncioToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->subirAnuncioToolStripMenuItem->Text = L"MiAnuncio";
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarUnaVentaToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarUnaVentaToolStripMenuItem
			// 
			this->realizarUnaVentaToolStripMenuItem->Name = L"realizarUnaVentaToolStripMenuItem";
			this->realizarUnaVentaToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->realizarUnaVentaToolStripMenuItem->Text = L"Realizar una venta";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->estadistidcasDeVentasToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// estadistidcasDeVentasToolStripMenuItem
			// 
			this->estadistidcasDeVentasToolStripMenuItem->Name = L"estadistidcasDeVentasToolStripMenuItem";

			this->estadistidcasDeVentasToolStripMenuItem->Size = System::Drawing::Size(244, 26);

			this->estadistidcasDeVentasToolStripMenuItem->Text = L"Estadistidcas de ventas";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 38);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(727, 48);
			this->textBox1->TabIndex = 5;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::SystemColors::Control;
			this->btnLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnLogin->Location = System::Drawing::Point(844, 38);
			this->btnLogin->Margin = System::Windows::Forms::Padding(2);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(44, 47);
			this->btnLogin->TabIndex = 6;
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &SalesMainForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(893, 39);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(46, 46);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SalesMainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(947, 38);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(44, 46);
			this->button3->TabIndex = 8;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// Homebtn
			// 
			this->Homebtn->BackColor = System::Drawing::SystemColors::Control;
			this->Homebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Homebtn->Location = System::Drawing::Point(19, 38);
			this->Homebtn->Margin = System::Windows::Forms::Padding(2);
			this->Homebtn->Name = L"Homebtn";
			this->Homebtn->Size = System::Drawing::Size(43, 47);
			this->Homebtn->TabIndex = 10;
			this->Homebtn->UseVisualStyleBackColor = false;
			this->Homebtn->Click += gcnew System::EventHandler(this, &SalesMainForm::Homebtn_Click);
			// 

			// Ad1
			// 
			this->Ad1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad1->Location = System::Drawing::Point(25, 193);
			this->Ad1->Name = L"Ad1";
			this->Ad1->Size = System::Drawing::Size(295, 277);
			this->Ad1->TabIndex = 11;
			this->Ad1->TabStop = false;
			// 
			// Ad2
			// 
			this->Ad2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad2->Location = System::Drawing::Point(340, 193);
			this->Ad2->Name = L"Ad2";
			this->Ad2->Size = System::Drawing::Size(306, 277);
			this->Ad2->TabIndex = 12;
			this->Ad2->TabStop = false;
			// 
			// Ad3
			// 
			this->Ad3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad3->Location = System::Drawing::Point(676, 193);
			this->Ad3->Name = L"Ad3";
			this->Ad3->Size = System::Drawing::Size(300, 277);
			this->Ad3->TabIndex = 13;
			this->Ad3->TabStop = false;
			// 
			// Ad4
			// 
			this->Ad4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad4->Location = System::Drawing::Point(1010, 193);
			this->Ad4->Name = L"Ad4";
			this->Ad4->Size = System::Drawing::Size(295, 277);
			this->Ad4->TabIndex = 14;
			this->Ad4->TabStop = false;

			// 
			
			// SearchBtn
			// 
			this->SearchBtn->BackColor = System::Drawing::SystemColors::Control;
			this->SearchBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SearchBtn->Location = System::Drawing::Point(66, 39);
			this->SearchBtn->Margin = System::Windows::Forms::Padding(2);
			this->SearchBtn->Name = L"SearchBtn";
			this->SearchBtn->Size = System::Drawing::Size(44, 46);
			this->SearchBtn->TabIndex = 16;
			this->SearchBtn->UseVisualStyleBackColor = false;
			this->SearchBtn->Click += gcnew System::EventHandler(this, &SalesMainForm::SearchBtn_Click);
			// 
			// Presentation
			// 
			this->Presentation->AutoSize = true;
			this->Presentation->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Presentation->Location = System::Drawing::Point(302, 97);
			this->Presentation->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Presentation->Name = L"Presentation";
			this->Presentation->Size = System::Drawing::Size(439, 42);
			this->Presentation->TabIndex = 17;
			this->Presentation->Text = L"¡Mejores de la Temporada!";
			this->Presentation->Click += gcnew System::EventHandler(this, &SalesMainForm::label1_Click);
			// 
			// SalesMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1028, 498);
			this->Controls->Add(this->Presentation);
			this->Controls->Add(this->SearchBtn);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->Ad4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Ad3);
			this->Controls->Add(this->Ad2);
			this->Controls->Add(this->menuStrip1);

			this->Controls->Add(this->btnLogin);

			this->Controls->Add(this->Ad1);
			this->Controls->Add(this->button1);

			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Homebtn);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"SalesMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vetto Project";
			this->Load += gcnew System::EventHandler(this, &SalesMainForm::SalesMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();

	}
	private: System::Void productoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		ProductForm^ productForm = gcnew ProductForm();
		//productForm->MdiParent = this;
		productForm->Show();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		LoginForm^ loginForm = gcnew LoginForm();
		loginForm->ShowDialog();
		
		//loginForm->MdiParent = this;
		//loginForm->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SalesMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Homebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SearchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductListForm^ productListForm = gcnew ProductListForm();
		productListForm->MdiParent = this;
		productListForm->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void subirAnuncioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		UploadAdForm^ A = gcnew UploadAdForm(this);
		//UploadAdForm->MdiParent = this;
		A->ShowDialog();
	}
	private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		UserForm^ userForm = gcnew UserForm();
		//productForm->MdiParent = this;
		userForm->Show();
	}
	private: System::Void btRefreshAds_Click(System::Object^ sender, System::EventArgs^ e) {
		/*
			Ad1->Image = gcnew Bitmap(Controller::photo1);
			Ad2->Image = gcnew Bitmap(Controller::photo2);
			Ad3->Image = gcnew Bitmap(Controller::photo3);
			Ad4->Image = gcnew Bitmap(Controller::photo4);
		*/
	}
};
}