#pragma once

#include "ProductForm.h"
#include "ProductListForm.h"

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
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vendedoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarUnaVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ anunciantesToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Button^ Homebtn;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ SearchBtn;
	private: System::Windows::Forms::Label^ Presentation;





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
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vendedoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->anunciantesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarUnaVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Homebtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->SearchBtn = (gcnew System::Windows::Forms::Button());
			this->Presentation = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(1333, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &SalesMainForm::menuStrip1_ItemClicked);
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->productoToolStripMenuItem,
					this->clientesToolStripMenuItem, this->vendedoresToolStripMenuItem, this->anunciantesToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// productoToolStripMenuItem
			// 
			this->productoToolStripMenuItem->Name = L"productoToolStripMenuItem";
			this->productoToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->productoToolStripMenuItem->Text = L"Producto";
			this->productoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::productoToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			// 
			// vendedoresToolStripMenuItem
			// 
			this->vendedoresToolStripMenuItem->Name = L"vendedoresToolStripMenuItem";
			this->vendedoresToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->vendedoresToolStripMenuItem->Text = L"Vendedores";
			// 
			// anunciantesToolStripMenuItem
			// 
			this->anunciantesToolStripMenuItem->Name = L"anunciantesToolStripMenuItem";
			this->anunciantesToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->anunciantesToolStripMenuItem->Text = L"Anunciantes";
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarUnaVentaToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(106, 24);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarUnaVentaToolStripMenuItem
			// 
			this->realizarUnaVentaToolStripMenuItem->Name = L"realizarUnaVentaToolStripMenuItem";
			this->realizarUnaVentaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->realizarUnaVentaToolStripMenuItem->Text = L"Realizar una venta";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 47);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(968, 58);
			this->textBox1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(1126, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 58);
			this->button1->TabIndex = 6;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SalesMainForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(1191, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 57);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SalesMainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(1263, 47);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 57);
			this->button3->TabIndex = 8;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// Homebtn
			// 
			this->Homebtn->BackColor = System::Drawing::SystemColors::Control;
			this->Homebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Homebtn->Location = System::Drawing::Point(25, 47);
			this->Homebtn->Name = L"Homebtn";
			this->Homebtn->Size = System::Drawing::Size(57, 58);
			this->Homebtn->TabIndex = 10;
			this->Homebtn->UseVisualStyleBackColor = false;
			this->Homebtn->Click += gcnew System::EventHandler(this, &SalesMainForm::Homebtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(25, 193);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(295, 277);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(340, 193);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(306, 277);
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(676, 193);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(300, 277);
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Location = System::Drawing::Point(1010, 193);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(295, 277);
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(73, 494);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(1179, 107);
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// SearchBtn
			// 
			this->SearchBtn->BackColor = System::Drawing::SystemColors::Control;
			this->SearchBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SearchBtn->Location = System::Drawing::Point(88, 48);
			this->SearchBtn->Name = L"SearchBtn";
			this->SearchBtn->Size = System::Drawing::Size(58, 57);
			this->SearchBtn->TabIndex = 16;
			this->SearchBtn->UseVisualStyleBackColor = false;
			this->SearchBtn->Click += gcnew System::EventHandler(this, &SalesMainForm::SearchBtn_Click);
			// 
			// Presentation
			// 
			this->Presentation->AutoSize = true;
			this->Presentation->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Presentation->Location = System::Drawing::Point(402, 119);
			this->Presentation->Name = L"Presentation";
			this->Presentation->Size = System::Drawing::Size(544, 52);
			this->Presentation->TabIndex = 17;
			this->Presentation->Text = L"¡Mejores de la Temporada!";
			this->Presentation->Click += gcnew System::EventHandler(this, &SalesMainForm::label1_Click);
			// 
			// SalesMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1333, 613);
			this->Controls->Add(this->Presentation);
			this->Controls->Add(this->SearchBtn);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Homebtn);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"SalesMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vetto Project";
			this->Load += gcnew System::EventHandler(this, &SalesMainForm::SalesMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
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
		//productForm->MdiParent = this;
		productListForm->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
};
}