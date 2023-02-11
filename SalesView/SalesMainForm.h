#pragma once

#include "ProductForm.h"
#include "ProductListForm.h"
#include "ProductForm.h"
#include "LoginForm.h"
#include "UploadAdForm.h"
#include "UserForm.h"
#include "StadisticReportForm.h"


namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;    // Controller
	using namespace SalesModel;			// Classes and Instances
	using namespace System::Collections::Generic;	// List


	/// <summary>
	/// Resumen de SalesMainForm
	/// </summary>
	public ref class SalesMainForm : public System::Windows::Forms::Form
	{
	public:

		//static Person^ person; //Variable de clase
    
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

	public: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productoToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarUnaVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;


	public: System::Windows::Forms::PictureBox^ Ad1;
	public: System::Windows::Forms::PictureBox^ Ad2;
	public: System::Windows::Forms::PictureBox^ Ad3;
	public: System::Windows::Forms::PictureBox^ Ad4;

	private: System::Windows::Forms::ToolStripMenuItem^ estadistidcasDeVentasToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^ subirAnuncioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;

	private: System::Windows::Forms::PictureBox^ AppPictureBox;
	private: System::Windows::Forms::Label^ lbSeventhProduct;
	public:


	private: System::Windows::Forms::Label^ lbSixthProduct;

	private: System::Windows::Forms::Label^ lbFifthProduct;

	private: System::Windows::Forms::Label^ lbFourthProduct;

	private: System::Windows::Forms::Label^ lbThirdProduct;

	private: System::Windows::Forms::Label^ lbSecondProduct;

	private: System::Windows::Forms::Label^ lbFirstProduct;

	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;




	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ BestLabel;
	private: System::Windows::Forms::PictureBox^ pbSeventhProduct;


	private: System::Windows::Forms::PictureBox^ pbSixthProduct;

	private: System::Windows::Forms::PictureBox^ pbFifthProduct;



public: System::Windows::Forms::TextBox^ SearchBox;
	private: System::Windows::Forms::PictureBox^ pbThirdProduct;
	private: System::Windows::Forms::PictureBox^ pbFourthProduct;
	public:



	private: System::Windows::Forms::PictureBox^ pbSecondProduct;

	private: System::Windows::Forms::PictureBox^ pbFirstProduct;

	private: System::Windows::Forms::Label^ label8;


public: System::Windows::Forms::Button^ btnLogin;
public:
public: System::Windows::Forms::Label^ Userlb;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnSearch;
	public:
	public:

public:






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesMainForm::typeid));
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
			this->Ad1 = (gcnew System::Windows::Forms::PictureBox());
			this->Ad2 = (gcnew System::Windows::Forms::PictureBox());
			this->Ad3 = (gcnew System::Windows::Forms::PictureBox());
			this->Ad4 = (gcnew System::Windows::Forms::PictureBox());
			this->AppPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->lbSeventhProduct = (gcnew System::Windows::Forms::Label());
			this->lbSixthProduct = (gcnew System::Windows::Forms::Label());
			this->lbFifthProduct = (gcnew System::Windows::Forms::Label());
			this->lbFourthProduct = (gcnew System::Windows::Forms::Label());
			this->lbThirdProduct = (gcnew System::Windows::Forms::Label());
			this->lbSecondProduct = (gcnew System::Windows::Forms::Label());
			this->lbFirstProduct = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->BestLabel = (gcnew System::Windows::Forms::Label());
			this->pbSeventhProduct = (gcnew System::Windows::Forms::PictureBox());
			this->pbSixthProduct = (gcnew System::Windows::Forms::PictureBox());
			this->pbFifthProduct = (gcnew System::Windows::Forms::PictureBox());
			this->SearchBox = (gcnew System::Windows::Forms::TextBox());
			this->pbThirdProduct = (gcnew System::Windows::Forms::PictureBox());
			this->pbFourthProduct = (gcnew System::Windows::Forms::PictureBox());
			this->pbSecondProduct = (gcnew System::Windows::Forms::PictureBox());
			this->pbFirstProduct = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->Userlb = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSeventhProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSixthProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFifthProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbThirdProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFourthProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSecondProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFirstProduct))->BeginInit();
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1362, 30);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 26);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
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
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 26);
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
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarUnaVentaToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(106, 26);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarUnaVentaToolStripMenuItem
			// 
			this->realizarUnaVentaToolStripMenuItem->Name = L"realizarUnaVentaToolStripMenuItem";
			this->realizarUnaVentaToolStripMenuItem->Size = System::Drawing::Size(213, 26);
			this->realizarUnaVentaToolStripMenuItem->Text = L"Realizar una venta";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->estadistidcasDeVentasToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 26);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// estadistidcasDeVentasToolStripMenuItem
			// 
			this->estadistidcasDeVentasToolStripMenuItem->Name = L"estadistidcasDeVentasToolStripMenuItem";
			this->estadistidcasDeVentasToolStripMenuItem->Size = System::Drawing::Size(235, 26);
			this->estadistidcasDeVentasToolStripMenuItem->Text = L"Estadísticas de ventas";
			this->estadistidcasDeVentasToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::estadistidcasDeVentasToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 26);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// Ad1
			// 
			this->Ad1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad1->Location = System::Drawing::Point(10, 440);
			this->Ad1->Margin = System::Windows::Forms::Padding(4);
			this->Ad1->Name = L"Ad1";
			this->Ad1->Size = System::Drawing::Size(300, 157);
			this->Ad1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Ad1->TabIndex = 11;
			this->Ad1->TabStop = false;
			// 
			// Ad2
			// 
			this->Ad2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad2->Location = System::Drawing::Point(330, 440);
			this->Ad2->Margin = System::Windows::Forms::Padding(4);
			this->Ad2->Name = L"Ad2";
			this->Ad2->Size = System::Drawing::Size(300, 157);
			this->Ad2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Ad2->TabIndex = 12;
			this->Ad2->TabStop = false;
			// 
			// Ad3
			// 
			this->Ad3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad3->Location = System::Drawing::Point(650, 440);
			this->Ad3->Margin = System::Windows::Forms::Padding(4);
			this->Ad3->Name = L"Ad3";
			this->Ad3->Size = System::Drawing::Size(300, 157);
			this->Ad3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Ad3->TabIndex = 13;
			this->Ad3->TabStop = false;
			// 
			// Ad4
			// 
			this->Ad4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad4->Location = System::Drawing::Point(970, 440);
			this->Ad4->Margin = System::Windows::Forms::Padding(4);
			this->Ad4->Name = L"Ad4";
			this->Ad4->Size = System::Drawing::Size(300, 157);
			this->Ad4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Ad4->TabIndex = 14;
			this->Ad4->TabStop = false;
			// 
			// AppPictureBox
			// 
			this->AppPictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppPictureBox.BackgroundImage")));
			this->AppPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AppPictureBox->Location = System::Drawing::Point(10, 30);
			this->AppPictureBox->Name = L"AppPictureBox";
			this->AppPictureBox->Size = System::Drawing::Size(120, 120);
			this->AppPictureBox->TabIndex = 62;
			this->AppPictureBox->TabStop = false;
			// 
			// lbSeventhProduct
			// 
			this->lbSeventhProduct->AutoSize = true;
			this->lbSeventhProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbSeventhProduct->Location = System::Drawing::Point(1109, 380);
			this->lbSeventhProduct->Name = L"lbSeventhProduct";
			this->lbSeventhProduct->Size = System::Drawing::Size(36, 20);
			this->lbSeventhProduct->TabIndex = 61;
			this->lbSeventhProduct->Text = L"777";
			// 
			// lbSixthProduct
			// 
			this->lbSixthProduct->AutoSize = true;
			this->lbSixthProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSixthProduct->Location = System::Drawing::Point(946, 380);
			this->lbSixthProduct->Name = L"lbSixthProduct";
			this->lbSixthProduct->Size = System::Drawing::Size(36, 20);
			this->lbSixthProduct->TabIndex = 60;
			this->lbSixthProduct->Text = L"666";
			// 
			// lbFifthProduct
			// 
			this->lbFifthProduct->AutoSize = true;
			this->lbFifthProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFifthProduct->Location = System::Drawing::Point(787, 380);
			this->lbFifthProduct->Name = L"lbFifthProduct";
			this->lbFifthProduct->Size = System::Drawing::Size(45, 20);
			this->lbFifthProduct->TabIndex = 59;
			this->lbFifthProduct->Text = L"1069";
			// 
			// lbFourthProduct
			// 
			this->lbFourthProduct->AutoSize = true;
			this->lbFourthProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFourthProduct->Location = System::Drawing::Point(619, 380);
			this->lbFourthProduct->Name = L"lbFourthProduct";
			this->lbFourthProduct->Size = System::Drawing::Size(45, 20);
			this->lbFourthProduct->TabIndex = 58;
			this->lbFourthProduct->Text = L"1256";
			// 
			// lbThirdProduct
			// 
			this->lbThirdProduct->AutoSize = true;
			this->lbThirdProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbThirdProduct->Location = System::Drawing::Point(457, 380);
			this->lbThirdProduct->Name = L"lbThirdProduct";
			this->lbThirdProduct->Size = System::Drawing::Size(45, 20);
			this->lbThirdProduct->TabIndex = 57;
			this->lbThirdProduct->Text = L"1354";
			// 
			// lbSecondProduct
			// 
			this->lbSecondProduct->AutoSize = true;
			this->lbSecondProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSecondProduct->Location = System::Drawing::Point(293, 380);
			this->lbSecondProduct->Name = L"lbSecondProduct";
			this->lbSecondProduct->Size = System::Drawing::Size(45, 20);
			this->lbSecondProduct->TabIndex = 56;
			this->lbSecondProduct->Text = L"1496";
			// 
			// lbFirstProduct
			// 
			this->lbFirstProduct->AutoSize = true;
			this->lbFirstProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbFirstProduct->Location = System::Drawing::Point(129, 380);
			this->lbFirstProduct->Name = L"lbFirstProduct";
			this->lbFirstProduct->Size = System::Drawing::Size(45, 20);
			this->lbFirstProduct->TabIndex = 55;
			this->lbFirstProduct->Text = L"1500";
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox16->Location = System::Drawing::Point(1160, 380);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(25, 25);
			this->pictureBox16->TabIndex = 54;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox15->Location = System::Drawing::Point(180, 380);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(25, 25);
			this->pictureBox15->TabIndex = 53;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox14->Location = System::Drawing::Point(356, 380);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(25, 25);
			this->pictureBox14->TabIndex = 52;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox13->Location = System::Drawing::Point(508, 380);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(25, 25);
			this->pictureBox13->TabIndex = 51;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox12->Location = System::Drawing::Point(670, 380);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(25, 25);
			this->pictureBox12->TabIndex = 50;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox11->Location = System::Drawing::Point(838, 380);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(25, 25);
			this->pictureBox11->TabIndex = 49;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox10->Location = System::Drawing::Point(1000, 380);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(25, 25);
			this->pictureBox10->TabIndex = 48;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->Location = System::Drawing::Point(180, 165);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 30);
			this->pictureBox5->TabIndex = 44;
			this->pictureBox5->TabStop = false;
			// 
			// BestLabel
			// 
			this->BestLabel->AutoSize = true;
			this->BestLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BestLabel->Location = System::Drawing::Point(10, 165);
			this->BestLabel->Name = L"BestLabel";
			this->BestLabel->Size = System::Drawing::Size(168, 29);
			this->BestLabel->TabIndex = 43;
			this->BestLabel->Text = L"Mas buscados";
			// 
			// pbSeventhProduct
			// 
			this->pbSeventhProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSeventhProduct.BackgroundImage")));
			this->pbSeventhProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbSeventhProduct->Location = System::Drawing::Point(1060, 210);
			this->pbSeventhProduct->Name = L"pbSeventhProduct";
			this->pbSeventhProduct->Size = System::Drawing::Size(150, 150);
			this->pbSeventhProduct->TabIndex = 41;
			this->pbSeventhProduct->TabStop = false;
			// 
			// pbSixthProduct
			// 
			this->pbSixthProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSixthProduct.BackgroundImage")));
			this->pbSixthProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbSixthProduct->Location = System::Drawing::Point(900, 210);
			this->pbSixthProduct->Name = L"pbSixthProduct";
			this->pbSixthProduct->Size = System::Drawing::Size(150, 150);
			this->pbSixthProduct->TabIndex = 40;
			this->pbSixthProduct->TabStop = false;
			// 
			// pbFifthProduct
			// 
			this->pbFifthProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFifthProduct.BackgroundImage")));
			this->pbFifthProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbFifthProduct->Location = System::Drawing::Point(740, 210);
			this->pbFifthProduct->Name = L"pbFifthProduct";
			this->pbFifthProduct->Size = System::Drawing::Size(150, 150);
			this->pbFifthProduct->TabIndex = 39;
			this->pbFifthProduct->TabStop = false;
			// 
			// SearchBox
			// 
			this->SearchBox->BackColor = System::Drawing::SystemColors::Control;
			this->SearchBox->Location = System::Drawing::Point(166, 97);
			this->SearchBox->Name = L"SearchBox";
			this->SearchBox->Size = System::Drawing::Size(790, 22);
			this->SearchBox->TabIndex = 37;
			this->SearchBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SalesMainForm::SearchBox_KeyDown);
			// 
			// pbThirdProduct
			// 
			this->pbThirdProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbThirdProduct.BackgroundImage")));
			this->pbThirdProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbThirdProduct->Location = System::Drawing::Point(420, 210);
			this->pbThirdProduct->Name = L"pbThirdProduct";
			this->pbThirdProduct->Size = System::Drawing::Size(150, 150);
			this->pbThirdProduct->TabIndex = 35;
			this->pbThirdProduct->TabStop = false;
			// 
			// pbFourthProduct
			// 
			this->pbFourthProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFourthProduct.BackgroundImage")));
			this->pbFourthProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbFourthProduct->Location = System::Drawing::Point(580, 210);
			this->pbFourthProduct->Name = L"pbFourthProduct";
			this->pbFourthProduct->Size = System::Drawing::Size(150, 150);
			this->pbFourthProduct->TabIndex = 34;
			this->pbFourthProduct->TabStop = false;
			// 
			// pbSecondProduct
			// 
			this->pbSecondProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSecondProduct.BackgroundImage")));
			this->pbSecondProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbSecondProduct->Location = System::Drawing::Point(260, 210);
			this->pbSecondProduct->Name = L"pbSecondProduct";
			this->pbSecondProduct->Size = System::Drawing::Size(150, 150);
			this->pbSecondProduct->TabIndex = 33;
			this->pbSecondProduct->TabStop = false;
			// 
			// pbFirstProduct
			// 
			this->pbFirstProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFirstProduct.BackgroundImage")));
			this->pbFirstProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbFirstProduct->Location = System::Drawing::Point(100, 210);
			this->pbFirstProduct->Name = L"pbFirstProduct";
			this->pbFirstProduct->Size = System::Drawing::Size(150, 150);
			this->pbFirstProduct->TabIndex = 32;
			this->pbFirstProduct->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(580, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 52);
			this->label8->TabIndex = 64;
			this->label8->Text = L"VETTO";
			// 
			// btnLogin
			// 
			this->btnLogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogin.BackgroundImage")));
			this->btnLogin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->ForeColor = System::Drawing::Color::Transparent;
			this->btnLogin->Location = System::Drawing::Point(973, 50);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(100, 100);
			this->btnLogin->TabIndex = 67;
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &SalesMainForm::btnLogin_Click);
			// 
			// Userlb
			// 
			this->Userlb->AutoSize = true;
			this->Userlb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Userlb->Location = System::Drawing::Point(1079, 97);
			this->Userlb->Name = L"Userlb";
			this->Userlb->Size = System::Drawing::Size(88, 25);
			this->Userlb->TabIndex = 68;
			this->Userlb->Text = L"Invitado";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Todos" });
			this->comboBox1->Location = System::Drawing::Point(166, 125);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 69;
			// 
			// btnSearch
			// 
			this->btnSearch->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSearch.BackgroundImage")));
			this->btnSearch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearch->ForeColor = System::Drawing::Color::Transparent;
			this->btnSearch->Location = System::Drawing::Point(136, 97);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(25, 25);
			this->btnSearch->TabIndex = 70;
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &SalesMainForm::btnSearch_Click);
			// 
			// SalesMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1362, 633);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Userlb);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->AppPictureBox);
			this->Controls->Add(this->lbSeventhProduct);
			this->Controls->Add(this->lbSixthProduct);
			this->Controls->Add(this->lbFifthProduct);
			this->Controls->Add(this->lbFourthProduct);
			this->Controls->Add(this->lbThirdProduct);
			this->Controls->Add(this->lbSecondProduct);
			this->Controls->Add(this->lbFirstProduct);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->BestLabel);
			this->Controls->Add(this->pbSeventhProduct);
			this->Controls->Add(this->pbSixthProduct);
			this->Controls->Add(this->pbFifthProduct);
			this->Controls->Add(this->SearchBox);
			this->Controls->Add(this->pbThirdProduct);
			this->Controls->Add(this->pbFourthProduct);
			this->Controls->Add(this->pbSecondProduct);
			this->Controls->Add(this->pbFirstProduct);
			this->Controls->Add(this->Ad4);
			this->Controls->Add(this->Ad3);
			this->Controls->Add(this->Ad2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->Ad1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSeventhProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSixthProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFifthProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbThirdProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFourthProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSecondProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFirstProduct))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Functions
		void Ad() {
			subirAnuncioToolStripMenuItem->Visible = false;
			List<Announcer^>^ AnounList = gcnew List<Announcer^>();
			AnounList = Controller::QueryAllAnnouncer();
			for (int i = 0; i < AnounList->Count; i++) {
				if (AnounList[i]->AdInSistem) {

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(AnounList[i]->Ad);
					switch (AnounList[i]->NumberPictureBox) {
					case 1: Ad1->Image = Image::FromStream(ms);
						break;
					case 2: Ad2->Image = Image::FromStream(ms);
						break;
					case 3: Ad3->Image = Image::FromStream(ms);
						break;
					case 4: Ad4->Image = Image::FromStream(ms);
						break;
					default:
						break;
					}

				}
			}
		}
		List<Product^>^ GetTop() {
			List<Product^>^ myProductList = Controller::QueryAllProducts();
			for (int i = 0; i < myProductList->Count; i++) // Look for!
				for (int j = i; j < myProductList->Count; j++)
					if (myProductList[j]->Searches > myProductList[i]->Searches) { 
						Product^ temp = myProductList[i];
						 myProductList[i] = myProductList[j];
						 myProductList[j] = temp;
					}
			return myProductList;
	    }
		void PutTop(List<Product^>^ myTopList) {
			// Stream
			System::IO::MemoryStream^ ms;

			ms = gcnew System::IO::MemoryStream(myTopList[0]->Photo); pbFirstProduct->BackgroundImage = Image::FromStream(ms); lbFirstProduct->Text = "" + myTopList[0]->Searches;
			ms = gcnew System::IO::MemoryStream(myTopList[1]->Photo); pbSecondProduct->BackgroundImage = Image::FromStream(ms); lbSecondProduct->Text = "" + myTopList[1]->Searches;
			ms = gcnew System::IO::MemoryStream(myTopList[2]->Photo); pbThirdProduct->BackgroundImage = Image::FromStream(ms); lbThirdProduct->Text = "" + myTopList[2]->Searches;
			ms = gcnew System::IO::MemoryStream(myTopList[3]->Photo); pbFourthProduct->BackgroundImage = Image::FromStream(ms); lbFourthProduct->Text = "" + myTopList[3]->Searches;
			ms = gcnew System::IO::MemoryStream(myTopList[4]->Photo); pbFifthProduct->BackgroundImage = Image::FromStream(ms); lbFifthProduct->Text = "" + myTopList[4]->Searches;
			ms = gcnew System::IO::MemoryStream(myTopList[5]->Photo); pbSixthProduct->BackgroundImage = Image::FromStream(ms); lbSixthProduct->Text = "" + myTopList[5]->Searches;
			ms = gcnew System::IO::MemoryStream(myTopList[6]->Photo); pbSeventhProduct->BackgroundImage = Image::FromStream(ms); lbSeventhProduct->Text = "" + myTopList[6]->Searches;
		}
		
	// Stripmenu
	private: System::Void productoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		ProductForm^ productForm = gcnew ProductForm();
		//productForm->MdiParent = this;
		productForm->ShowDialog();
	}
	private: System::Void subirAnuncioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		UploadAdForm^ A = gcnew UploadAdForm(this);
		//UploadAdForm->MdiParent = this;
		A->ShowDialog();
	}
	private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		UserForm^ userForm = gcnew UserForm();
		//productForm->MdiParent = this;
		userForm->ShowDialog();
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
	private: System::Void estadistidcasDeVentasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			   StadisticReportForm^ Stadistics = gcnew StadisticReportForm();
			   Stadistics->ShowDialog();
		   }

	// Load
	private: System::Void SalesMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Ad();
		PutTop(GetTop());
	}
	// Login
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginForm^ loginForm = gcnew LoginForm(this);
		loginForm->ShowDialog();
}
	// SearchProducts
	private: System::Void SearchBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyData == Keys::Enter) btnSearch->PerformClick();
}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductListForm^ productListForm = gcnew ProductListForm(this);
	//productListForm->MdiParent = this;
	productListForm->ShowDialog();

}
};
}