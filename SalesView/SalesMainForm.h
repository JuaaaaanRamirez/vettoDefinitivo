#pragma once

#include "ProductForm.h"
#include "ProductListForm.h"
#include "ProductForm.h"
#include "LoginForm.h"
#include "UploadAdForm.h"
#include "UserForm.h"
#include "StadisticReportForm.h"
#include "NewCustomerForm.h"
#include "SaleDetailForm.h"


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
		

	public: System::Windows::Forms::GroupBox^ gbMenuCustomer;
	private: System::Windows::Forms::Button^ btnSignOut;

	private: System::Windows::Forms::Button^ btnShopping;
	private: System::Windows::Forms::Button^ btnWishList;
	private: System::Windows::Forms::Button^ btnRecord;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::GroupBox^ gbMenuAnnouncer;
	private: System::Windows::Forms::Button^ btnSingOutAnnouncer;
	private: System::Windows::Forms::Button^ btnMyAdd;


	public: System::Windows::Forms::Label^ Idlb;
	public: System::Windows::Forms::Label^ company4;
	public: System::Windows::Forms::Label^ company3;
	public: System::Windows::Forms::Label^ company2;
	public: System::Windows::Forms::Label^ company1;
	public: System::Windows::Forms::LinkLabel^ linkLabel4;
	public: System::Windows::Forms::LinkLabel^ linkLabel3;
	public: System::Windows::Forms::LinkLabel^ linkLabel2;
	public: System::Windows::Forms::LinkLabel^ linkLabel1;
	public: System::Windows::Forms::PictureBox^ Ad4;
	public: System::Windows::Forms::PictureBox^ Ad3;
	public: System::Windows::Forms::PictureBox^ Ad2;
	public: System::Windows::Forms::PictureBox^ Ad1;
	private: System::Windows::Forms::PictureBox^ pbFake;
	public:
		//static Object^ person; //Variable de clase o miembro u atributo estático (global).
	public:	static bool MenuVisibility = false;
	public:
		static SalesMainForm^ instance;		// Easy data
		static Person^ person; //Variable de clase
	public: System::Windows::Forms::GroupBox^ gbMenuStoreManager;
	private: System::Windows::Forms::Button^ btnReportSales;
	public:
	private: System::Windows::Forms::Button^ btnAllProducts;
	private: System::Windows::Forms::Button^ btnAllUsers;
	private: System::Windows::Forms::Button^ btnSignOutStoreMager;
	private: System::Windows::Forms::Button^ btnSale;
	public: System::Windows::Forms::GroupBox^ gbSellerCompany;
	private:
	private: System::Windows::Forms::Button^ btnLoginOutSellerCompany;
	
	private: System::Windows::Forms::Button^ btnAllPerson;
	private: System::Windows::Forms::Button^ btnAllReports;
	public:	   static Button^ userPhoto;

		SalesMainForm(void)
		{
			InitializeComponent();
			instance = this; // Easy Data
			userPhoto = btnLogin;
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
public: System::Windows::Forms::Label^ lbJob;
public: System::Windows::Forms::Label^ lbCompany;
public: System::Windows::Forms::GroupBox^ gbMenuLogin;
private: System::Windows::Forms::Button^ btnNewCustomer;
public:
private: System::Windows::Forms::Button^ btnLoginCustomer;
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
			this->lbJob = (gcnew System::Windows::Forms::Label());
			this->lbCompany = (gcnew System::Windows::Forms::Label());
			this->gbMenuLogin = (gcnew System::Windows::Forms::GroupBox());
			this->btnNewCustomer = (gcnew System::Windows::Forms::Button());
			this->btnLoginCustomer = (gcnew System::Windows::Forms::Button());
			this->gbMenuCustomer = (gcnew System::Windows::Forms::GroupBox());
			this->btnSignOut = (gcnew System::Windows::Forms::Button());
			this->btnShopping = (gcnew System::Windows::Forms::Button());
			this->btnWishList = (gcnew System::Windows::Forms::Button());
			this->btnRecord = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->gbMenuAnnouncer = (gcnew System::Windows::Forms::GroupBox());
			this->btnSingOutAnnouncer = (gcnew System::Windows::Forms::Button());
			this->btnMyAdd = (gcnew System::Windows::Forms::Button());
			this->Idlb = (gcnew System::Windows::Forms::Label());
			this->company4 = (gcnew System::Windows::Forms::Label());
			this->company3 = (gcnew System::Windows::Forms::Label());
			this->company2 = (gcnew System::Windows::Forms::Label());
			this->company1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->Ad4 = (gcnew System::Windows::Forms::PictureBox());
			this->Ad3 = (gcnew System::Windows::Forms::PictureBox());
			this->Ad2 = (gcnew System::Windows::Forms::PictureBox());
			this->Ad1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbFake = (gcnew System::Windows::Forms::PictureBox());
			this->gbMenuStoreManager = (gcnew System::Windows::Forms::GroupBox());
			this->btnReportSales = (gcnew System::Windows::Forms::Button());
			this->btnAllProducts = (gcnew System::Windows::Forms::Button());
			this->btnAllUsers = (gcnew System::Windows::Forms::Button());
			this->btnSignOutStoreMager = (gcnew System::Windows::Forms::Button());
			this->btnSale = (gcnew System::Windows::Forms::Button());
			this->gbSellerCompany = (gcnew System::Windows::Forms::GroupBox());
			this->btnLoginOutSellerCompany = (gcnew System::Windows::Forms::Button());
			this->btnAllPerson = (gcnew System::Windows::Forms::Button());
			this->btnAllReports = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
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
			this->gbMenuLogin->SuspendLayout();
			this->gbMenuCustomer->SuspendLayout();
			this->gbMenuAnnouncer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFake))->BeginInit();
			this->gbMenuStoreManager->SuspendLayout();
			this->gbSellerCompany->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(1361, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
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
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
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
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(106, 24);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarUnaVentaToolStripMenuItem
			// 
			this->realizarUnaVentaToolStripMenuItem->Name = L"realizarUnaVentaToolStripMenuItem";
			this->realizarUnaVentaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->realizarUnaVentaToolStripMenuItem->Text = L"Realizar una venta";
			this->realizarUnaVentaToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::realizarUnaVentaToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->estadistidcasDeVentasToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
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
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// AppPictureBox
			// 
			this->AppPictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppPictureBox.BackgroundImage")));
			this->AppPictureBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AppPictureBox->Location = System::Drawing::Point(11, 30);
			this->AppPictureBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AppPictureBox->Name = L"AppPictureBox";
			this->AppPictureBox->Size = System::Drawing::Size(120, 121);
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
			this->lbSixthProduct->Location = System::Drawing::Point(947, 380);
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
			this->pictureBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pictureBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pictureBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pictureBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(25, 25);
			this->pictureBox13->TabIndex = 51;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox12->Location = System::Drawing::Point(669, 380);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(25, 25);
			this->pictureBox12->TabIndex = 50;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox11->Location = System::Drawing::Point(837, 380);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pictureBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(29, 30);
			this->pictureBox5->TabIndex = 44;
			this->pictureBox5->TabStop = false;
			// 
			// BestLabel
			// 
			this->BestLabel->AutoSize = true;
			this->BestLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BestLabel->Location = System::Drawing::Point(11, 165);
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
			this->pbSeventhProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbSeventhProduct->Name = L"pbSeventhProduct";
			this->pbSeventhProduct->Size = System::Drawing::Size(149, 150);
			this->pbSeventhProduct->TabIndex = 41;
			this->pbSeventhProduct->TabStop = false;
			// 
			// pbSixthProduct
			// 
			this->pbSixthProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSixthProduct.BackgroundImage")));
			this->pbSixthProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbSixthProduct->Location = System::Drawing::Point(900, 210);
			this->pbSixthProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbSixthProduct->Name = L"pbSixthProduct";
			this->pbSixthProduct->Size = System::Drawing::Size(149, 150);
			this->pbSixthProduct->TabIndex = 40;
			this->pbSixthProduct->TabStop = false;
			// 
			// pbFifthProduct
			// 
			this->pbFifthProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFifthProduct.BackgroundImage")));
			this->pbFifthProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbFifthProduct->Location = System::Drawing::Point(740, 210);
			this->pbFifthProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbFifthProduct->Name = L"pbFifthProduct";
			this->pbFifthProduct->Size = System::Drawing::Size(149, 150);
			this->pbFifthProduct->TabIndex = 39;
			this->pbFifthProduct->TabStop = false;
			// 
			// SearchBox
			// 
			this->SearchBox->BackColor = System::Drawing::SystemColors::Control;
			this->SearchBox->Location = System::Drawing::Point(165, 97);
			this->SearchBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SearchBox->Name = L"SearchBox";
			this->SearchBox->Size = System::Drawing::Size(791, 22);
			this->SearchBox->TabIndex = 37;
			this->SearchBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SalesMainForm::SearchBox_KeyDown);
			// 
			// pbThirdProduct
			// 
			this->pbThirdProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbThirdProduct.BackgroundImage")));
			this->pbThirdProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbThirdProduct->Location = System::Drawing::Point(420, 210);
			this->pbThirdProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbThirdProduct->Name = L"pbThirdProduct";
			this->pbThirdProduct->Size = System::Drawing::Size(149, 150);
			this->pbThirdProduct->TabIndex = 35;
			this->pbThirdProduct->TabStop = false;
			// 
			// pbFourthProduct
			// 
			this->pbFourthProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFourthProduct.BackgroundImage")));
			this->pbFourthProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbFourthProduct->Location = System::Drawing::Point(580, 210);
			this->pbFourthProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbFourthProduct->Name = L"pbFourthProduct";
			this->pbFourthProduct->Size = System::Drawing::Size(149, 150);
			this->pbFourthProduct->TabIndex = 34;
			this->pbFourthProduct->TabStop = false;
			// 
			// pbSecondProduct
			// 
			this->pbSecondProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSecondProduct.BackgroundImage")));
			this->pbSecondProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbSecondProduct->Location = System::Drawing::Point(260, 210);
			this->pbSecondProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbSecondProduct->Name = L"pbSecondProduct";
			this->pbSecondProduct->Size = System::Drawing::Size(149, 150);
			this->pbSecondProduct->TabIndex = 33;
			this->pbSecondProduct->TabStop = false;
			// 
			// pbFirstProduct
			// 
			this->pbFirstProduct->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFirstProduct.BackgroundImage")));
			this->pbFirstProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbFirstProduct->Location = System::Drawing::Point(100, 210);
			this->pbFirstProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbFirstProduct->Name = L"pbFirstProduct";
			this->pbFirstProduct->Size = System::Drawing::Size(149, 150);
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
			this->btnLogin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->Userlb->Location = System::Drawing::Point(1080, 86);
			this->Userlb->Name = L"Userlb";
			this->Userlb->Size = System::Drawing::Size(88, 25);
			this->Userlb->TabIndex = 68;
			this->Userlb->Text = L"Invitado";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Todos" });
			this->comboBox1->Location = System::Drawing::Point(165, 126);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->btnSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(25, 25);
			this->btnSearch->TabIndex = 70;
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &SalesMainForm::btnSearch_Click);
			// 
			// lbJob
			// 
			this->lbJob->AutoSize = true;
			this->lbJob->Location = System::Drawing::Point(1081, 64);
			this->lbJob->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbJob->Name = L"lbJob";
			this->lbJob->Size = System::Drawing::Size(44, 16);
			this->lbJob->TabIndex = 71;
			this->lbJob->Text = L"Cargo";
			// 
			// lbCompany
			// 
			this->lbCompany->AutoSize = true;
			this->lbCompany->Location = System::Drawing::Point(1080, 111);
			this->lbCompany->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCompany->Name = L"lbCompany";
			this->lbCompany->Size = System::Drawing::Size(138, 16);
			this->lbCompany->TabIndex = 72;
			this->lbCompany->Text = L"Nombre de compañia";
			// 
			// gbMenuLogin
			// 
			this->gbMenuLogin->Controls->Add(this->btnNewCustomer);
			this->gbMenuLogin->Controls->Add(this->btnLoginCustomer);
			this->gbMenuLogin->Location = System::Drawing::Point(971, 156);
			this->gbMenuLogin->Margin = System::Windows::Forms::Padding(4);
			this->gbMenuLogin->Name = L"gbMenuLogin";
			this->gbMenuLogin->Padding = System::Windows::Forms::Padding(4);
			this->gbMenuLogin->Size = System::Drawing::Size(301, 135);
			this->gbMenuLogin->TabIndex = 73;
			this->gbMenuLogin->TabStop = false;
			this->gbMenuLogin->Text = L"Invitado";
			this->gbMenuLogin->Visible = false;
			// 
			// btnNewCustomer
			// 
			this->btnNewCustomer->Location = System::Drawing::Point(11, 57);
			this->btnNewCustomer->Margin = System::Windows::Forms::Padding(4);
			this->btnNewCustomer->Name = L"btnNewCustomer";
			this->btnNewCustomer->Size = System::Drawing::Size(283, 38);
			this->btnNewCustomer->TabIndex = 0;
			this->btnNewCustomer->Text = L"Registrarse";
			this->btnNewCustomer->UseVisualStyleBackColor = true;
			this->btnNewCustomer->Click += gcnew System::EventHandler(this, &SalesMainForm::btnNewCustomer_Click);
			// 
			// btnLoginCustomer
			// 
			this->btnLoginCustomer->Location = System::Drawing::Point(11, 23);
			this->btnLoginCustomer->Margin = System::Windows::Forms::Padding(4);
			this->btnLoginCustomer->Name = L"btnLoginCustomer";
			this->btnLoginCustomer->Size = System::Drawing::Size(283, 38);
			this->btnLoginCustomer->TabIndex = 0;
			this->btnLoginCustomer->Text = L"Iniciar sesion";
			this->btnLoginCustomer->UseVisualStyleBackColor = true;
			this->btnLoginCustomer->Click += gcnew System::EventHandler(this, &SalesMainForm::btnLoginCustomer_Click);
			// 
			// gbMenuCustomer
			// 
			this->gbMenuCustomer->Controls->Add(this->btnSignOut);
			this->gbMenuCustomer->Controls->Add(this->btnShopping);
			this->gbMenuCustomer->Controls->Add(this->btnWishList);
			this->gbMenuCustomer->Controls->Add(this->btnRecord);
			this->gbMenuCustomer->Controls->Add(this->btnEdit);
			this->gbMenuCustomer->Location = System::Drawing::Point(972, 153);
			this->gbMenuCustomer->Margin = System::Windows::Forms::Padding(4);
			this->gbMenuCustomer->Name = L"gbMenuCustomer";
			this->gbMenuCustomer->Padding = System::Windows::Forms::Padding(4);
			this->gbMenuCustomer->Size = System::Drawing::Size(300, 208);
			this->gbMenuCustomer->TabIndex = 74;
			this->gbMenuCustomer->TabStop = false;
			this->gbMenuCustomer->Text = L"Cliente";
			this->gbMenuCustomer->Visible = false;
			// 
			// btnSignOut
			// 
			this->btnSignOut->Location = System::Drawing::Point(9, 158);
			this->btnSignOut->Margin = System::Windows::Forms::Padding(4);
			this->btnSignOut->Name = L"btnSignOut";
			this->btnSignOut->Size = System::Drawing::Size(283, 38);
			this->btnSignOut->TabIndex = 0;
			this->btnSignOut->Text = L"Cerrar sesion";
			this->btnSignOut->UseVisualStyleBackColor = true;
			this->btnSignOut->Click += gcnew System::EventHandler(this, &SalesMainForm::btnSignOut_Click);
			// 
			// btnShopping
			// 
			this->btnShopping->Location = System::Drawing::Point(9, 123);
			this->btnShopping->Margin = System::Windows::Forms::Padding(4);
			this->btnShopping->Name = L"btnShopping";
			this->btnShopping->Size = System::Drawing::Size(283, 38);
			this->btnShopping->TabIndex = 0;
			this->btnShopping->Text = L"Carrito de compras";
			this->btnShopping->UseVisualStyleBackColor = true;
			this->btnShopping->Click += gcnew System::EventHandler(this, &SalesMainForm::btnShopping_Click);
			// 
			// btnWishList
			// 
			this->btnWishList->Location = System::Drawing::Point(9, 87);
			this->btnWishList->Margin = System::Windows::Forms::Padding(4);
			this->btnWishList->Name = L"btnWishList";
			this->btnWishList->Size = System::Drawing::Size(283, 38);
			this->btnWishList->TabIndex = 0;
			this->btnWishList->Text = L"Lista de deseos";
			this->btnWishList->UseVisualStyleBackColor = true;
			this->btnWishList->Click += gcnew System::EventHandler(this, &SalesMainForm::btnWishList_Click);
			// 
			// btnRecord
			// 
			this->btnRecord->Location = System::Drawing::Point(9, 52);
			this->btnRecord->Margin = System::Windows::Forms::Padding(4);
			this->btnRecord->Name = L"btnRecord";
			this->btnRecord->Size = System::Drawing::Size(283, 38);
			this->btnRecord->TabIndex = 0;
			this->btnRecord->Text = L"Mis pedidos";
			this->btnRecord->UseVisualStyleBackColor = true;
			this->btnRecord->Click += gcnew System::EventHandler(this, &SalesMainForm::btnRecord_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(9, 16);
			this->btnEdit->Margin = System::Windows::Forms::Padding(4);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(283, 38);
			this->btnEdit->TabIndex = 0;
			this->btnEdit->Text = L"Editar perfil";
			this->btnEdit->UseVisualStyleBackColor = true;
			this->btnEdit->Click += gcnew System::EventHandler(this, &SalesMainForm::btnEdit_Click);
			// 
			// gbMenuAnnouncer
			// 
			this->gbMenuAnnouncer->Controls->Add(this->btnSingOutAnnouncer);
			this->gbMenuAnnouncer->Controls->Add(this->btnMyAdd);
			this->gbMenuAnnouncer->Location = System::Drawing::Point(971, 145);
			this->gbMenuAnnouncer->Margin = System::Windows::Forms::Padding(4);
			this->gbMenuAnnouncer->Name = L"gbMenuAnnouncer";
			this->gbMenuAnnouncer->Padding = System::Windows::Forms::Padding(4);
			this->gbMenuAnnouncer->Size = System::Drawing::Size(313, 105);
			this->gbMenuAnnouncer->TabIndex = 75;
			this->gbMenuAnnouncer->TabStop = false;
			this->gbMenuAnnouncer->Text = L"Anunciante";
			this->gbMenuAnnouncer->Visible = false;
			// 
			// btnSingOutAnnouncer
			// 
			this->btnSingOutAnnouncer->Location = System::Drawing::Point(8, 57);
			this->btnSingOutAnnouncer->Margin = System::Windows::Forms::Padding(4);
			this->btnSingOutAnnouncer->Name = L"btnSingOutAnnouncer";
			this->btnSingOutAnnouncer->Size = System::Drawing::Size(283, 38);
			this->btnSingOutAnnouncer->TabIndex = 0;
			this->btnSingOutAnnouncer->Text = L"Cerrar sesion";
			this->btnSingOutAnnouncer->UseVisualStyleBackColor = true;
			this->btnSingOutAnnouncer->Click += gcnew System::EventHandler(this, &SalesMainForm::btnSingOutAnnouncer_Click);
			// 
			// btnMyAdd
			// 
			this->btnMyAdd->Location = System::Drawing::Point(8, 23);
			this->btnMyAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnMyAdd->Name = L"btnMyAdd";
			this->btnMyAdd->Size = System::Drawing::Size(283, 38);
			this->btnMyAdd->TabIndex = 0;
			this->btnMyAdd->Text = L"Mi anuncio";
			this->btnMyAdd->UseVisualStyleBackColor = true;
			this->btnMyAdd->Click += gcnew System::EventHandler(this, &SalesMainForm::btnMyAdd_Click);
			// 
			// Idlb
			// 
			this->Idlb->AutoSize = true;
			this->Idlb->Location = System::Drawing::Point(1293, 606);
			this->Idlb->Name = L"Idlb";
			this->Idlb->Size = System::Drawing::Size(14, 16);
			this->Idlb->TabIndex = 77;
			this->Idlb->Text = L"0";
			this->Idlb->Visible = false;
			// 
			// company4
			// 
			this->company4->AutoSize = true;
			this->company4->Location = System::Drawing::Point(988, 412);
			this->company4->Name = L"company4";
			this->company4->Size = System::Drawing::Size(83, 16);
			this->company4->TabIndex = 90;
			this->company4->Text = L"Anunciante 4";
			// 
			// company3
			// 
			this->company3->AutoSize = true;
			this->company3->Location = System::Drawing::Point(667, 412);
			this->company3->Name = L"company3";
			this->company3->Size = System::Drawing::Size(83, 16);
			this->company3->TabIndex = 89;
			this->company3->Text = L"Anunciante 3";
			// 
			// company2
			// 
			this->company2->AutoSize = true;
			this->company2->Location = System::Drawing::Point(359, 412);
			this->company2->Name = L"company2";
			this->company2->Size = System::Drawing::Size(83, 16);
			this->company2->TabIndex = 88;
			this->company2->Text = L"Anunciante 2";
			// 
			// company1
			// 
			this->company1->AutoSize = true;
			this->company1->Location = System::Drawing::Point(19, 414);
			this->company1->Name = L"company1";
			this->company1->Size = System::Drawing::Size(83, 16);
			this->company1->TabIndex = 87;
			this->company1->Text = L"Anunciante 1";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Location = System::Drawing::Point(988, 610);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(34, 16);
			this->linkLabel4->TabIndex = 86;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"link4";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(668, 610);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(34, 16);
			this->linkLabel3->TabIndex = 85;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"link3";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(335, 610);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(34, 16);
			this->linkLabel2->TabIndex = 84;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"link2";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(19, 610);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(34, 16);
			this->linkLabel1->TabIndex = 83;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"link1";
			// 
			// Ad4
			// 
			this->Ad4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad4->Location = System::Drawing::Point(976, 433);
			this->Ad4->Margin = System::Windows::Forms::Padding(4);
			this->Ad4->Name = L"Ad4";
			this->Ad4->Size = System::Drawing::Size(300, 157);
			this->Ad4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Ad4->TabIndex = 82;
			this->Ad4->TabStop = false;
			// 
			// Ad3
			// 
			this->Ad3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad3->Location = System::Drawing::Point(656, 433);
			this->Ad3->Margin = System::Windows::Forms::Padding(4);
			this->Ad3->Name = L"Ad3";
			this->Ad3->Size = System::Drawing::Size(300, 157);
			this->Ad3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Ad3->TabIndex = 81;
			this->Ad3->TabStop = false;
			// 
			// Ad2
			// 
			this->Ad2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad2->Location = System::Drawing::Point(336, 433);
			this->Ad2->Margin = System::Windows::Forms::Padding(4);
			this->Ad2->Name = L"Ad2";
			this->Ad2->Size = System::Drawing::Size(300, 157);
			this->Ad2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Ad2->TabIndex = 80;
			this->Ad2->TabStop = false;
			// 
			// Ad1
			// 
			this->Ad1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Ad1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Ad1->Location = System::Drawing::Point(16, 433);
			this->Ad1->Margin = System::Windows::Forms::Padding(4);
			this->Ad1->Name = L"Ad1";
			this->Ad1->Size = System::Drawing::Size(300, 157);
			this->Ad1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Ad1->TabIndex = 79;
			this->Ad1->TabStop = false;
			// 
			// pbFake
			// 
			this->pbFake->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFake.BackgroundImage")));
			this->pbFake->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbFake->Location = System::Drawing::Point(1299, 606);
			this->pbFake->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbFake->Name = L"pbFake";
			this->pbFake->Size = System::Drawing::Size(11, 10);
			this->pbFake->TabIndex = 91;
			this->pbFake->TabStop = false;
			this->pbFake->Visible = false;
			// 
			// gbMenuStoreManager
			// 
			this->gbMenuStoreManager->Controls->Add(this->btnReportSales);
			this->gbMenuStoreManager->Controls->Add(this->btnAllProducts);
			this->gbMenuStoreManager->Controls->Add(this->btnAllUsers);
			this->gbMenuStoreManager->Controls->Add(this->btnSignOutStoreMager);
			this->gbMenuStoreManager->Controls->Add(this->btnSale);
			this->gbMenuStoreManager->Location = System::Drawing::Point(963, 145);
			this->gbMenuStoreManager->Margin = System::Windows::Forms::Padding(4);
			this->gbMenuStoreManager->Name = L"gbMenuStoreManager";
			this->gbMenuStoreManager->Padding = System::Windows::Forms::Padding(4);
			this->gbMenuStoreManager->Size = System::Drawing::Size(321, 229);
			this->gbMenuStoreManager->TabIndex = 92;
			this->gbMenuStoreManager->TabStop = false;
			this->gbMenuStoreManager->Text = L"Gerente de tienda";
			this->gbMenuStoreManager->Visible = false;
			// 
			// btnReportSales
			// 
			this->btnReportSales->Location = System::Drawing::Point(19, 32);
			this->btnReportSales->Margin = System::Windows::Forms::Padding(4);
			this->btnReportSales->Name = L"btnReportSales";
			this->btnReportSales->Size = System::Drawing::Size(283, 38);
			this->btnReportSales->TabIndex = 0;
			this->btnReportSales->Text = L"Reporte de ventas";
			this->btnReportSales->UseVisualStyleBackColor = true;
			this->btnReportSales->Click += gcnew System::EventHandler(this, &SalesMainForm::btnReportSales_Click);
			// 
			// btnAllProducts
			// 
			this->btnAllProducts->Location = System::Drawing::Point(19, 68);
			this->btnAllProducts->Margin = System::Windows::Forms::Padding(4);
			this->btnAllProducts->Name = L"btnAllProducts";
			this->btnAllProducts->Size = System::Drawing::Size(283, 38);
			this->btnAllProducts->TabIndex = 0;
			this->btnAllProducts->Text = L"Mantenimiento de productos";
			this->btnAllProducts->UseVisualStyleBackColor = true;
			this->btnAllProducts->Click += gcnew System::EventHandler(this, &SalesMainForm::btnAllProducts_Click);
			// 
			// btnAllUsers
			// 
			this->btnAllUsers->Location = System::Drawing::Point(19, 103);
			this->btnAllUsers->Margin = System::Windows::Forms::Padding(4);
			this->btnAllUsers->Name = L"btnAllUsers";
			this->btnAllUsers->Size = System::Drawing::Size(283, 38);
			this->btnAllUsers->TabIndex = 0;
			this->btnAllUsers->Text = L"Mantenimiento de usuarios";
			this->btnAllUsers->UseVisualStyleBackColor = true;
			this->btnAllUsers->Click += gcnew System::EventHandler(this, &SalesMainForm::btnAllUsers_Click);
			// 
			// btnSignOutStoreMager
			// 
			this->btnSignOutStoreMager->Location = System::Drawing::Point(19, 174);
			this->btnSignOutStoreMager->Margin = System::Windows::Forms::Padding(4);
			this->btnSignOutStoreMager->Name = L"btnSignOutStoreMager";
			this->btnSignOutStoreMager->Size = System::Drawing::Size(283, 38);
			this->btnSignOutStoreMager->TabIndex = 0;
			this->btnSignOutStoreMager->Text = L"Cerrar sesion";
			this->btnSignOutStoreMager->UseVisualStyleBackColor = true;
			this->btnSignOutStoreMager->Click += gcnew System::EventHandler(this, &SalesMainForm::btnSignOutStoreMager_Click_1);
			// 
			// btnSale
			// 
			this->btnSale->Location = System::Drawing::Point(19, 138);
			this->btnSale->Margin = System::Windows::Forms::Padding(4);
			this->btnSale->Name = L"btnSale";
			this->btnSale->Size = System::Drawing::Size(283, 38);
			this->btnSale->TabIndex = 0;
			this->btnSale->Text = L"Realizar venta";
			this->btnSale->UseVisualStyleBackColor = true;
			this->btnSale->Click += gcnew System::EventHandler(this, &SalesMainForm::btnSale_Click);
			// 
			// gbSellerCompany
			// 
			this->gbSellerCompany->Controls->Add(this->btnLoginOutSellerCompany);
			this->gbSellerCompany->Controls->Add(this->btnAllPerson);
			this->gbSellerCompany->Controls->Add(this->btnAllReports);
			this->gbSellerCompany->Location = System::Drawing::Point(956, 145);
			this->gbSellerCompany->Margin = System::Windows::Forms::Padding(4);
			this->gbSellerCompany->Name = L"gbSellerCompany";
			this->gbSellerCompany->Padding = System::Windows::Forms::Padding(4);
			this->gbSellerCompany->Size = System::Drawing::Size(321, 169);
			this->gbSellerCompany->TabIndex = 93;
			this->gbSellerCompany->TabStop = false;
			this->gbSellerCompany->Text = L"Jefe de la tienda";
			this->gbSellerCompany->Visible = false;
			// 
			// btnLoginOutSellerCompany
			// 
			this->btnLoginOutSellerCompany->Location = System::Drawing::Point(32, 101);
			this->btnLoginOutSellerCompany->Margin = System::Windows::Forms::Padding(4);
			this->btnLoginOutSellerCompany->Name = L"btnLoginOutSellerCompany";
			this->btnLoginOutSellerCompany->Size = System::Drawing::Size(283, 38);
			this->btnLoginOutSellerCompany->TabIndex = 0;
			this->btnLoginOutSellerCompany->Text = L"Cerrar sesion";
			this->btnLoginOutSellerCompany->UseVisualStyleBackColor = true;
			this->btnLoginOutSellerCompany->Click += gcnew System::EventHandler(this, &SalesMainForm::btnLoginOutSellerCompany_Click);
			// 
			// btnAllPerson
			// 
			this->btnAllPerson->Location = System::Drawing::Point(32, 66);
			this->btnAllPerson->Margin = System::Windows::Forms::Padding(4);
			this->btnAllPerson->Name = L"btnAllPerson";
			this->btnAllPerson->Size = System::Drawing::Size(283, 38);
			this->btnAllPerson->TabIndex = 0;
			this->btnAllPerson->Text = L"Mantenimiento de usuarios";
			this->btnAllPerson->UseVisualStyleBackColor = true;
			this->btnAllPerson->Click += gcnew System::EventHandler(this, &SalesMainForm::btnAllPerson_Click);
			// 
			// btnAllReports
			// 
			this->btnAllReports->Location = System::Drawing::Point(32, 31);
			this->btnAllReports->Margin = System::Windows::Forms::Padding(4);
			this->btnAllReports->Name = L"btnAllReports";
			this->btnAllReports->Size = System::Drawing::Size(283, 38);
			this->btnAllReports->TabIndex = 0;
			this->btnAllReports->Text = L"Reporte de ventas";
			this->btnAllReports->UseVisualStyleBackColor = true;
			this->btnAllReports->Click += gcnew System::EventHandler(this, &SalesMainForm::btnAllReports_Click);
			// 
			// SalesMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1361, 633);
			this->Controls->Add(this->gbSellerCompany);
			this->Controls->Add(this->gbMenuStoreManager);
			this->Controls->Add(this->pbFake);
			this->Controls->Add(this->company4);
			this->Controls->Add(this->company3);
			this->Controls->Add(this->company2);
			this->Controls->Add(this->company1);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Ad4);
			this->Controls->Add(this->Ad3);
			this->Controls->Add(this->Ad2);
			this->Controls->Add(this->Ad1);
			this->Controls->Add(this->Idlb);
			this->Controls->Add(this->gbMenuAnnouncer);
			this->Controls->Add(this->gbMenuCustomer);
			this->Controls->Add(this->gbMenuLogin);
			this->Controls->Add(this->lbCompany);
			this->Controls->Add(this->lbJob);
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
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"SalesMainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vetto Project";
			this->Load += gcnew System::EventHandler(this, &SalesMainForm::SalesMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
			this->gbMenuLogin->ResumeLayout(false);
			this->gbMenuCustomer->ResumeLayout(false);
			this->gbMenuAnnouncer->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ad1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFake))->EndInit();
			this->gbMenuStoreManager->ResumeLayout(false);
			this->gbSellerCompany->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Functions
		void Ad() {
			subirAnuncioToolStripMenuItem->Visible = false;
			List<Announcer^>^ AnounList = gcnew List<Announcer^>();
			AnounList = Controller::QueryAllAnnouncer();

			company1->Text = " ";
			linkLabel1->Text = " ";
			company2->Text = " ";
			linkLabel2->Text = " ";
			company3->Text = " ";
			linkLabel3->Text = " ";
			company4->Text = " ";
			linkLabel4->Text = " ";

			for (int i = 0; i < AnounList->Count; i++) {
				if (AnounList[i]->AdInSistem) {

					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(AnounList[i]->Ad);
					switch (AnounList[i]->NumberPictureBox) {
					case 1: Ad1->Image = Image::FromStream(ms);
						company1->Text = AnounList[i]->CompanyName;
						linkLabel1->Text = AnounList[i]->WebSiteLink;
						break;
					case 2: Ad2->Image = Image::FromStream(ms);
						company2->Text = AnounList[i]->CompanyName;
						linkLabel2->Text = AnounList[i]->WebSiteLink;
						break;
					case 3: Ad3->Image = Image::FromStream(ms);
						company3->Text = AnounList[i]->CompanyName;
						linkLabel3->Text = AnounList[i]->WebSiteLink;
						break;
					case 4: Ad4->Image = Image::FromStream(ms);
						company4->Text = AnounList[i]->CompanyName;
						linkLabel4->Text = AnounList[i]->WebSiteLink;
						break;
					default:
						break;
					}

				}
			}
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
		void SignOff() {
			person = nullptr;
			Idlb->Text = "0";
			lbJob->Text = "";
			Userlb->Text = "Invitado";
			lbCompany->Text = "";
			// btnLogin->BackgroundImage = gcnew Bitmap("resources/SalesMain/Main/Anonymous.png");
			 //btnLogin->BackgroundImage = gcnew Bitmap("resources/UserPictures/Default.png");
			btnLogin->BackgroundImage = pbFake->BackgroundImage; // Bv 
			gbMenuLogin->Visible = false;
			gbMenuCustomer->Visible = false;
			gbMenuAnnouncer->Visible = false;
			gbMenuStoreManager->Visible = false;
			MenuVisibility = false;
			menuStrip1->Visible = false;

			// Have you paid?
			if (!SaleDetailForm::mySaleDetail->paid) {
				Sale^ mySale = Controller::QueryLastSale();
				Controller::DeleteSale(mySale->Id);
			}
		}
		void GoSale() {
			// Reload
			List<Sale^>^ mysaleList = Controller::QueryAllSales(); // Really necesary
			// New sale
			Sale^ newSale = gcnew Sale();
			int saleId = Controller::AddSale(newSale); mysaleList = Controller::QueryAllSales();
			// Add Customer
			Customer^ myCustomer = gcnew Customer(); myCustomer->Name = ""; myCustomer->Username = ""; myCustomer->Address = ""; mysaleList[saleId]->Customer = myCustomer;
			// Add Store manager
			StoreManager^ storeManager = gcnew StoreManager(); storeManager->Name = person->Name; mysaleList[saleId]->StoreManager = storeManager;
			mysaleList[saleId]->PaidMode = "Presencial";
			mysaleList[saleId]->SaleDate = Convert::ToString(DateTime::Now);

			// Update
			Controller::UpdateSale(mysaleList[saleId]);
			SaleDetailForm^ mySaleDetail = gcnew SaleDetailForm(saleId); mySaleDetail->ShowDialog();
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
		PutTop(Controller::GetTopProducts());
		lbCompany->Text = "";
		lbJob->Text = "";
	}
	// Login
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		//LoginForm^ loginForm = gcnew LoginForm(this);
		//loginForm->ShowDialog();

		if (person == nullptr) {
			gbMenuLogin->Visible = !(MenuVisibility);
			gbMenuCustomer->Visible = false;
			gbMenuAnnouncer->Visible = false;
			gbMenuStoreManager->Visible = false;
			gbSellerCompany->Visible = false;
		}
		else if (person->Profile == 'S') {
			gbMenuLogin->Visible = false;
			gbMenuCustomer->Visible = !(MenuVisibility);
			gbMenuAnnouncer->Visible = false;
			gbMenuStoreManager->Visible = false;
			gbSellerCompany->Visible = false;
		}
		else if (person->Profile == 'A') {
			gbMenuLogin->Visible = false;
			gbMenuCustomer->Visible = false;
			gbMenuAnnouncer->Visible = !(MenuVisibility);
			gbMenuStoreManager->Visible = false;
			gbSellerCompany->Visible = false;
		}
		else if (person->Profile == 'M') {
			gbMenuLogin->Visible = false;
			gbMenuCustomer->Visible = false;
			gbMenuAnnouncer->Visible = false;
			gbMenuStoreManager->Visible = !(MenuVisibility);
			gbSellerCompany->Visible = false;
		}
		else if (person->Profile == 'B') {
			gbSellerCompany->Visible = !(MenuVisibility);
			gbMenuLogin->Visible = false;
			gbMenuCustomer->Visible = false;
			gbMenuAnnouncer->Visible = false;
			gbMenuStoreManager->Visible = false;
		}
		MenuVisibility = !(MenuVisibility);
}
	// SearchProducts
	private: System::Void SearchBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyData == Keys::Enter) btnSearch->PerformClick();
}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductListForm^ productListForm = gcnew ProductListForm(this);
	//productListForm->MdiParent = this;
	productListForm->ShowDialog();
	this->Refresh();
}
private: System::Void btnLoginCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm(this);
	loginForm->ShowDialog();
}
private: System::Void btnNewCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	NewCustomerForm^ newCustomerForm = gcnew NewCustomerForm(this);
	newCustomerForm->ShowDialog();
}
private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	NewCustomerForm^ newCustomerForm = gcnew NewCustomerForm(this);
	newCustomerForm->ShowDialog();
}
private: System::Void btnRecord_Click(System::Object^ sender, System::EventArgs^ e) {
	//Form de HISTORIAL DE VENTAS DEL CLIENTE
}
private: System::Void btnWishList_Click(System::Object^ sender, System::EventArgs^ e) {
	//Form de la LISTA DE DESEOS DEL CLIENTE
}
private: System::Void btnShopping_Click(System::Object^ sender, System::EventArgs^ e) {
	//SaleDetailForm^ saleDetailForm = gcnew SaleDetailForm();
	//saleDetailForm->ShowDialog();
}
private: System::Void btnSignOut_Click(System::Object^ sender, System::EventArgs^ e) {
	SignOff();
}
	  
private: System::Void btnMyAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	UploadAdForm^ A = gcnew UploadAdForm(this);
	A->ShowDialog();
}
private: System::Void btnSingOutAnnouncer_Click(System::Object^ sender, System::EventArgs^ e) {
	SignOff();
}
private: System::Void btnSignOutStoreMager_Click(System::Object^ sender, System::EventArgs^ e) {
	SignOff();
}
private: System::Void btnReportSales_Click(System::Object^ sender, System::EventArgs^ e) {
	StadisticReportForm^ Stadistics = gcnew StadisticReportForm();
	Stadistics->ShowDialog();
}
private: System::Void btnAllProducts_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductListForm^ productListForm = gcnew ProductListForm(this);
	productListForm->ShowDialog();
}
private: System::Void btnAllUsers_Click(System::Object^ sender, System::EventArgs^ e) {
	UserForm^ userForm = gcnew UserForm();
	userForm->ShowDialog();
}
private: System::Void btnSale_Click(System::Object^ sender, System::EventArgs^ e) {
	SaleDetailForm^ saleDetailForm = gcnew SaleDetailForm(0);
	saleDetailForm->ShowDialog();
}
private: System::Void btnSignOutStoreMager_Click_1(System::Object^ sender, System::EventArgs^ e) {
	SignOff();
}
private: System::Void btnAllReports_Click(System::Object^ sender, System::EventArgs^ e) {
	StadisticReportForm^ Stadistics = gcnew StadisticReportForm();
	Stadistics->ShowDialog();
}
private: System::Void btnLoginOutSellerCompany_Click(System::Object^ sender, System::EventArgs^ e) {
	SignOff();
}
private: System::Void btnAllPerson_Click(System::Object^ sender, System::EventArgs^ e) {
	UserForm^ userForm = gcnew UserForm();
	userForm->ShowDialog();
}
private: System::Void realizarUnaVentaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// New sale
	GoSale();
}
};
}