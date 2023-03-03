#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace SalesModel;
	using namespace SalesController;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace Threading;


	/// <summary>
	/// Resumen de StadisticReportForm
	/// </summary>
	public ref class StadisticReportForm : public System::Windows::Forms::Form
	{
	private:
		Thread^ myThread;
	public:
		StadisticReportForm(void)
		{
			InitializeComponent();
			myThread = gcnew Thread(gcnew ThreadStart(this, &StadisticReportForm::MyRun));
			myThread->IsBackground = true;
			//myThread->Start();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		delegate void MyDelegate();

		void MyRun() {
			while (true) {
				try {
					myThread->Sleep(1000);
					Invoke(gcnew MyDelegate(this, &StadisticReportForm::RefreshReportToday));
				}
				catch (Exception^ ex) {
					return;
				}
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~StadisticReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dtpSaleDate;

	private: System::Windows::Forms::TextBox^ txtSaleId;

	private: System::Windows::Forms::DataGridView^ dgvSells;
	private: System::Windows::Forms::Button^ btShowAllSales;















	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtStock;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btToShow;


	public: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabReportToday;


	private: System::Windows::Forms::TabPage^ tabPage2;


	private: System::Windows::Forms::TabPage^ tabPage3;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartReportToday;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ pieSellsLastWeek;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartMoneyLastWeek;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartReportGoals;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartReportLastMonth;






	private: System::Windows::Forms::Button^ btLookFor2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btLookFor1;
	private: System::Windows::Forms::DataGridView^ dgvStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
private: System::Windows::Forms::TabControl^ tabControl2;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::TabPage^ tabPage5;















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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea31 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend31 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series31 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title31 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea32 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend32 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series32 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title32 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea33 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend33 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series33 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title33 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea34 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend34 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series34 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title34 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea35 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend35 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series35 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title35 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dtpSaleDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtSaleId = (gcnew System::Windows::Forms::TextBox());
			this->dgvSells = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btShowAllSales = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btToShow = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabReportToday = (gcnew System::Windows::Forms::TabPage());
			this->chartReportToday = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pieSellsLastWeek = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartMoneyLastWeek = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chartReportGoals = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartReportLastMonth = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->btLookFor2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btLookFor1 = (gcnew System::Windows::Forms::Button());
			this->dgvStock = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSells))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabReportToday->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportToday))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieSellsLastWeek))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMoneyLastWeek))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportGoals))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportLastMonth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStock))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Filtrar venta por";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fecha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(41, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Id de venta";
			// 
			// dtpSaleDate
			// 
			this->dtpSaleDate->Location = System::Drawing::Point(135, 43);
			this->dtpSaleDate->Name = L"dtpSaleDate";
			this->dtpSaleDate->Size = System::Drawing::Size(200, 22);
			this->dtpSaleDate->TabIndex = 3;
			// 
			// txtSaleId
			// 
			this->txtSaleId->Location = System::Drawing::Point(135, 74);
			this->txtSaleId->Name = L"txtSaleId";
			this->txtSaleId->Size = System::Drawing::Size(100, 22);
			this->txtSaleId->TabIndex = 4;
			this->txtSaleId->TextChanged += gcnew System::EventHandler(this, &StadisticReportForm::txtSaleId_TextChanged);
			// 
			// dgvSells
			// 
			this->dgvSells->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvSells->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSells->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1, this->Column2,
					this->Column3, this->Column6, this->Column4, this->Column5, this->Column10
			});
			this->dgvSells->Location = System::Drawing::Point(40, 129);
			this->dgvSells->Name = L"dgvSells";
			this->dgvSells->RowHeadersWidth = 51;
			this->dgvSells->RowTemplate->Height = 24;
			this->dgvSells->Size = System::Drawing::Size(771, 581);
			this->dgvSells->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 90;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha de venta";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Usuario";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Vendedor";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Importe total";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Tipo de venta";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Estado";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 200;
			// 
			// btShowAllSales
			// 
			this->btShowAllSales->Location = System::Drawing::Point(687, 37);
			this->btShowAllSales->Name = L"btShowAllSales";
			this->btShowAllSales->Size = System::Drawing::Size(124, 59);
			this->btShowAllSales->TabIndex = 6;
			this->btShowAllSales->Text = L"Mostrar reporte general";
			this->btShowAllSales->UseVisualStyleBackColor = true;
			this->btShowAllSales->Click += gcnew System::EventHandler(this, &StadisticReportForm::btShowAllSales_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Productos cuyo stock es menor a";
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(240, 18);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(88, 22);
			this->txtStock->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(340, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"unidades";
			// 
			// btToShow
			// 
			this->btToShow->Location = System::Drawing::Point(420, 15);
			this->btToShow->Name = L"btToShow";
			this->btToShow->Size = System::Drawing::Size(88, 25);
			this->btToShow->TabIndex = 16;
			this->btToShow->Text = L"Mostrar";
			this->btToShow->UseVisualStyleBackColor = true;
			this->btToShow->Click += gcnew System::EventHandler(this, &StadisticReportForm::btToShow_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabReportToday);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(17, 18);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(842, 748);
			this->tabControl1->TabIndex = 17;
			// 
			// tabReportToday
			// 
			this->tabReportToday->AutoScroll = true;
			this->tabReportToday->Controls->Add(this->chartReportToday);
			this->tabReportToday->Location = System::Drawing::Point(4, 25);
			this->tabReportToday->Name = L"tabReportToday";
			this->tabReportToday->Padding = System::Windows::Forms::Padding(3);
			this->tabReportToday->Size = System::Drawing::Size(834, 735);
			this->tabReportToday->TabIndex = 0;
			this->tabReportToday->Text = L"Reporte del dia";
			this->tabReportToday->UseVisualStyleBackColor = true;
			// 
			// chartReportToday
			// 
			chartArea31->Name = L"ChartArea1";
			this->chartReportToday->ChartAreas->Add(chartArea31);
			legend31->Name = L"Legend1";
			this->chartReportToday->Legends->Add(legend31);
			this->chartReportToday->Location = System::Drawing::Point(6, 59);
			this->chartReportToday->Name = L"chartReportToday";
			series31->ChartArea = L"ChartArea1";
			series31->Legend = L"Legend1";
			series31->Name = L"Unidades vendidas";
			this->chartReportToday->Series->Add(series31);
			this->chartReportToday->Size = System::Drawing::Size(802, 473);
			this->chartReportToday->TabIndex = 0;
			this->chartReportToday->Text = L"chart1";
			title31->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title31->Name = L"Productos vendidos hoy";
			title31->Text = L"Productos vendidos hoy";
			title31->TextStyle = System::Windows::Forms::DataVisualization::Charting::TextStyle::Shadow;
			this->chartReportToday->Titles->Add(title31);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pieSellsLastWeek);
			this->tabPage2->Controls->Add(this->chartMoneyLastWeek);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(834, 805);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Reporte de la ultima semana";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pieSellsLastWeek
			// 
			chartArea32->Name = L"ChartArea1";
			this->pieSellsLastWeek->ChartAreas->Add(chartArea32);
			legend32->Name = L"Legend1";
			this->pieSellsLastWeek->Legends->Add(legend32);
			this->pieSellsLastWeek->Location = System::Drawing::Point(49, 412);
			this->pieSellsLastWeek->Name = L"pieSellsLastWeek";
			series32->ChartArea = L"ChartArea1";
			series32->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series32->Legend = L"Legend1";
			series32->Name = L"Numero de ventas";
			this->pieSellsLastWeek->Series->Add(series32);
			this->pieSellsLastWeek->Size = System::Drawing::Size(738, 302);
			this->pieSellsLastWeek->TabIndex = 1;
			this->pieSellsLastWeek->Text = L"chart2";
			title32->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title32->Name = L"Title1";
			title32->Text = L"Numero de ventas durante la semana pasada";
			title32->TextStyle = System::Windows::Forms::DataVisualization::Charting::TextStyle::Shadow;
			this->pieSellsLastWeek->Titles->Add(title32);
			this->pieSellsLastWeek->Click += gcnew System::EventHandler(this, &StadisticReportForm::chartSellsLastWeek_Click);
			// 
			// chartMoneyLastWeek
			// 
			chartArea33->Name = L"ChartArea1";
			this->chartMoneyLastWeek->ChartAreas->Add(chartArea33);
			legend33->Name = L"Legend1";
			this->chartMoneyLastWeek->Legends->Add(legend33);
			this->chartMoneyLastWeek->Location = System::Drawing::Point(33, 33);
			this->chartMoneyLastWeek->Name = L"chartMoneyLastWeek";
			series33->ChartArea = L"ChartArea1";
			series33->Legend = L"Legend1";
			series33->Name = L"Ingresos totales";
			this->chartMoneyLastWeek->Series->Add(series33);
			this->chartMoneyLastWeek->Size = System::Drawing::Size(771, 348);
			this->chartMoneyLastWeek->TabIndex = 0;
			this->chartMoneyLastWeek->Text = L"chart1";
			title33->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title33->Name = L"Title1";
			title33->Text = L"Ingresos de la semana pasada en soles";
			title33->TextStyle = System::Windows::Forms::DataVisualization::Charting::TextStyle::Shadow;
			this->chartMoneyLastWeek->Titles->Add(title33);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chartReportGoals);
			this->tabPage3->Controls->Add(this->chartReportLastMonth);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(834, 719);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Reporte del mes pasado";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chartReportGoals
			// 
			chartArea34->Name = L"ChartArea1";
			this->chartReportGoals->ChartAreas->Add(chartArea34);
			legend34->Name = L"Legend1";
			this->chartReportGoals->Legends->Add(legend34);
			this->chartReportGoals->Location = System::Drawing::Point(41, 378);
			this->chartReportGoals->Name = L"chartReportGoals";
			series34->ChartArea = L"ChartArea1";
			series34->Legend = L"Legend1";
			series34->Name = L"Monto en soles";
			this->chartReportGoals->Series->Add(series34);
			this->chartReportGoals->Size = System::Drawing::Size(758, 342);
			this->chartReportGoals->TabIndex = 1;
			this->chartReportGoals->Text = L"chart2";
			title34->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title34->Name = L"Title1";
			title34->Text = L"Ingresos generados por cada vendedor el mes pasado";
			title34->TextStyle = System::Windows::Forms::DataVisualization::Charting::TextStyle::Shadow;
			this->chartReportGoals->Titles->Add(title34);
			// 
			// chartReportLastMonth
			// 
			chartArea35->Name = L"ChartArea1";
			this->chartReportLastMonth->ChartAreas->Add(chartArea35);
			legend35->Name = L"Legend1";
			this->chartReportLastMonth->Legends->Add(legend35);
			this->chartReportLastMonth->Location = System::Drawing::Point(51, 69);
			this->chartReportLastMonth->Name = L"chartReportLastMonth";
			series35->ChartArea = L"ChartArea1";
			series35->Legend = L"Legend1";
			series35->Name = L"Unidades vendidas";
			this->chartReportLastMonth->Series->Add(series35);
			this->chartReportLastMonth->Size = System::Drawing::Size(748, 293);
			this->chartReportLastMonth->TabIndex = 0;
			this->chartReportLastMonth->Text = L"chart1";
			title35->Font = (gcnew System::Drawing::Font(L"Stencil", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			title35->Name = L"Title1";
			title35->Text = L"Productos mas vendidos el mes pasado";
			title35->TextStyle = System::Windows::Forms::DataVisualization::Charting::TextStyle::Shadow;
			this->chartReportLastMonth->Titles->Add(title35);
			// 
			// btLookFor2
			// 
			this->btLookFor2->Location = System::Drawing::Point(356, 73);
			this->btLookFor2->Name = L"btLookFor2";
			this->btLookFor2->Size = System::Drawing::Size(75, 23);
			this->btLookFor2->TabIndex = 18;
			this->btLookFor2->Text = L"Buscar";
			this->btLookFor2->UseVisualStyleBackColor = true;
			this->btLookFor2->Click += gcnew System::EventHandler(this, &StadisticReportForm::btLookFor2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(41, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(15, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"o";
			// 
			// btLookFor1
			// 
			this->btLookFor1->Location = System::Drawing::Point(356, 41);
			this->btLookFor1->Name = L"btLookFor1";
			this->btLookFor1->Size = System::Drawing::Size(75, 23);
			this->btLookFor1->TabIndex = 20;
			this->btLookFor1->Text = L"Buscar";
			this->btLookFor1->UseVisualStyleBackColor = true;
			this->btLookFor1->Click += gcnew System::EventHandler(this, &StadisticReportForm::btLookFor1_Click);
			// 
			// dgvStock
			// 
			this->dgvStock->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStock->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column7, this->Column8,
					this->Column9
			});
			this->dgvStock->Location = System::Drawing::Point(30, 50);
			this->dgvStock->Name = L"dgvStock";
			this->dgvStock->RowHeadersWidth = 51;
			this->dgvStock->RowTemplate->Height = 24;
			this->dgvStock->Size = System::Drawing::Size(825, 722);
			this->dgvStock->TabIndex = 21;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Id";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 75;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Producto";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 300;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Stock";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage1);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(12, 12);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(881, 814);
			this->tabControl2->TabIndex = 22;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &StadisticReportForm::tabControl2_SelectedIndexChanged_1);
			this->tabControl2->TabIndexChanged += gcnew System::EventHandler(this, &StadisticReportForm::tabControl2_TabIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->tabPage1->Controls->Add(this->dgvSells);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->btLookFor1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->btLookFor2);
			this->tabPage1->Controls->Add(this->dtpSaleDate);
			this->tabPage1->Controls->Add(this->txtSaleId);
			this->tabPage1->Controls->Add(this->btShowAllSales);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(896, 801);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Lista de ventas";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->tabPage4->Controls->Add(this->tabControl1);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(873, 785);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Gráficos";
			this->tabPage4->Click += gcnew System::EventHandler(this, &StadisticReportForm::tabPage4_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->tabPage5->Controls->Add(this->txtStock);
			this->tabPage5->Controls->Add(this->dgvStock);
			this->tabPage5->Controls->Add(this->label4);
			this->tabPage5->Controls->Add(this->btToShow);
			this->tabPage5->Controls->Add(this->label5);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(896, 801);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"Stock";
			// 
			// StadisticReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->ClientSize = System::Drawing::Size(913, 846);
			this->Controls->Add(this->tabControl2);
			this->Name = L"StadisticReportForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reporte de ventas y estadisticas";
			this->Load += gcnew System::EventHandler(this, &StadisticReportForm::StadisticReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSells))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabReportToday->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportToday))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieSellsLastWeek))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMoneyLastWeek))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportGoals))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportLastMonth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStock))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void RefreshReportToday() {
			chartReportToday->Series["Unidades vendidas"]->Points->Clear();

			List <Sale^>^ salesList1 = gcnew  List<Sale^>();

			DateTime hoy = DateTime::Now;
			salesList1 = Controller::DaySalesList(hoy);//puede ser nullptr
			if (salesList1 != nullptr) {
				List<Product^>^ productLis1 = gcnew  List<Product^>();
				productLis1 = Controller::GetListProductOrderBySells(salesList1);
				int quantityOthers = 0;
				int ToShow = 8;
				if (productLis1->Count >= ToShow) {
					chartReportToday->Palette = ChartColorPalette::Fire;

					for (int i = 0; i < productLis1->Count; i++) {
						if (i < ToShow) {
							chartReportToday->Series["Unidades vendidas"]->Points->Add(productLis1[i]->SalesByTime);
							chartReportToday->Series["Unidades vendidas"]->Points[i]->AxisLabel = productLis1[i]->Name;
							chartReportToday->Series["Unidades vendidas"]->Points[i]->Label = Convert::ToString(productLis1[i]->SalesByTime);
						}
						else {
							quantityOthers += productLis1[i]->SalesByTime;
						}

					}
					chartReportToday->Series["Unidades vendidas"]->Points->Add(quantityOthers);
					chartReportToday->Series["Unidades vendidas"]->Points[ToShow]->AxisLabel = "Otros";
					chartReportToday->Series["Unidades vendidas"]->Points[ToShow]->Label = Convert::ToString(quantityOthers);
				}
			}

		}

		void RefreshReportLastWeek() {
			List<Sale^>^ salesList1 = gcnew  List<Sale^>();
			salesList1 = Controller::LastWeekSalesList();

			double lunes = 0, martes = 0, miercoles = 0, jueves = 0, viernes = 0, sabado = 0, domingo = 0;
			int SellLunes = 0, SellMartes = 0, SellMiercoles = 0, SellJueves = 0, SellViernes = 0, SellSabado = 0, SellDomingo = 0;
			for (int i = 0; i < salesList1->Count; i++) {
				DateTime d = Convert::ToDateTime(salesList1[i]->SaleDate);
				switch ((int)d.DayOfWeek)
				{
				case(1): lunes += salesList1[i]->Total;
					SellLunes++;
					break;
				case(2): martes += salesList1[i]->Total;
					SellMartes++;
					break;
				case(3): miercoles += salesList1[i]->Total;
					SellMiercoles++;
					break;
				case(4): jueves += salesList1[i]->Total;
					SellJueves++;
					break;
				case(5): viernes += salesList1[i]->Total;
					SellViernes++;
					break;
				case(6): sabado += salesList1[i]->Total;
					SellSabado++;
					break;
				case(0): domingo += salesList1[i]->Total;
					SellDomingo++;
					break;
				default:
					break;
				}


			}
			//CHART
			chartMoneyLastWeek->Palette = ChartColorPalette::Bright;
			chartMoneyLastWeek->Series["Ingresos totales"]->Points->Add(lunes);
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[0]->AxisLabel = "Lunes";
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[0]->Label = Convert::ToString(lunes);

			chartMoneyLastWeek->Series["Ingresos totales"]->Points->Add(martes);
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[1]->AxisLabel = "Martes";
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[1]->Label = Convert::ToString(martes);

			chartMoneyLastWeek->Series["Ingresos totales"]->Points->Add(miercoles);
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[2]->AxisLabel = "Miercoles";
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[2]->Label = Convert::ToString(miercoles);

			chartMoneyLastWeek->Series["Ingresos totales"]->Points->Add(jueves);
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[3]->AxisLabel = "Jueves";
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[3]->Label = Convert::ToString(jueves);

			chartMoneyLastWeek->Series["Ingresos totales"]->Points->Add(viernes);
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[4]->AxisLabel = "Viernes";
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[4]->Label = Convert::ToString(viernes);

			chartMoneyLastWeek->Series["Ingresos totales"]->Points->Add(sabado);
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[5]->AxisLabel = "Sabado";
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[5]->Label = Convert::ToString(sabado);

			chartMoneyLastWeek->Series["Ingresos totales"]->Points->Add(domingo);
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[6]->AxisLabel = "Domingo";
			chartMoneyLastWeek->Series["Ingresos totales"]->Points[6]->Label = Convert::ToString(domingo);

			//PIE  ############################################################################
			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellLunes);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[0]->LegendText = "Lunes";
			if(SellLunes!=0) pieSellsLastWeek->Series["Numero de ventas"]->Points[0]->Label = Convert::ToString(SellLunes);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellMartes);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[1]->LegendText = "Martes";
			if (SellMartes != 0)pieSellsLastWeek->Series["Numero de ventas"]->Points[1]->Label = Convert::ToString(SellMartes);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellMiercoles);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[2]->LegendText = "Miercoles";
			if (SellMiercoles != 0)pieSellsLastWeek->Series["Numero de ventas"]->Points[2]->Label = Convert::ToString(SellMiercoles);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellJueves);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[3]->LegendText = "Jueves";
			if (SellJueves != 0)pieSellsLastWeek->Series["Numero de ventas"]->Points[3]->Label = Convert::ToString(SellJueves);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellViernes);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[4]->LegendText = "Viernes";
			if (SellViernes != 0)pieSellsLastWeek->Series["Numero de ventas"]->Points[4]->Label = Convert::ToString(SellViernes);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellSabado);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[5]->LegendText = "Sabado";
			if (SellSabado != 0)pieSellsLastWeek->Series["Numero de ventas"]->Points[5]->Label = Convert::ToString(SellSabado);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellDomingo);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[6]->LegendText = "Domingo";
			if (SellDomingo != 0)pieSellsLastWeek->Series["Numero de ventas"]->Points[6]->Label = Convert::ToString(SellDomingo);


		}

		void RefreshReportLastMonth() {
			List<Sale^>^ salesList1 = gcnew  List<Sale^>();
			salesList1 = Controller::LastMonthSalesList();

			List<Product^>^ productLis1 = gcnew  List<Product^>();
			productLis1 = Controller::GetListProductOrderBySells(salesList1);
			int quantityOthers = 0;
			int ToShow = 8;
			if (productLis1->Count >= ToShow) {
				chartReportLastMonth->Palette = ChartColorPalette::EarthTones;
				for (int i = 0; i < productLis1->Count; i++) {
					if (i < ToShow) {
						chartReportLastMonth->Series["Unidades vendidas"]->Points->Add(productLis1[i]->SalesByTime);
						chartReportLastMonth->Series["Unidades vendidas"]->Points[i]->AxisLabel = productLis1[i]->Name;
						chartReportLastMonth->Series["Unidades vendidas"]->Points[i]->Label = Convert::ToString(productLis1[i]->SalesByTime);
					}
					else {
						quantityOthers += productLis1[i]->SalesByTime;
					}

				}
				chartReportLastMonth->Series["Unidades vendidas"]->Points->Add(quantityOthers);
				chartReportLastMonth->Series["Unidades vendidas"]->Points[ToShow]->AxisLabel = "Otros";
				chartReportLastMonth->Series["Unidades vendidas"]->Points[ToShow]->Label = Convert::ToString(quantityOthers);
			}
		}

		void RefreshReportGoalsLastMonth() {
			List<Sale^>^ salesList1 = gcnew  List<Sale^>();
			salesList1 = Controller::LastMonthSalesList();
			List<StoreManager^>^ ListStoreManager = gcnew List<StoreManager^>();
			ListStoreManager = Controller::QueryAllStoreManager();
			double monto;
			if (salesList1 != nullptr) {
				chartReportGoals->Palette = ChartColorPalette::Berry;
				for (int i = 0; i < ListStoreManager->Count; i++) {

					monto = 0;
					for (int j = 0; j < salesList1->Count; j++) {

						salesList1[j]->Customer = (Customer^)Controller::QueryUserById(salesList1[j]->Customer->Id);              //??????????????????
						if (salesList1[j]->StoreManager->Id != 0) salesList1[j]->StoreManager = (StoreManager^)Controller::QueryUserById(salesList1[j]->StoreManager->Id);
						else salesList1[j]->StoreManager->Name = "Asistente Virtual";

						
						if (salesList1[j]->StoreManager->Name->Equals(ListStoreManager[i]->Name)) {

							monto += salesList1[j]->Total;
						}
					}
					chartReportGoals->Series["Monto en soles"]->Points->Add(monto);
					chartReportGoals->Series["Monto en soles"]->Points[i]->AxisLabel = ListStoreManager[i]->Name;
					chartReportGoals->Series["Monto en soles"]->Points[i]->Label = Convert::ToString(monto);
				}
			}
			//Orden correcto
			/*chartReportGoals->Series["Monto en soles"]->Points->Add(5);
			chartReportGoals->Series["Monto en soles"]->Points[0]->AxisLabel = "ffddfdfd";
			chartReportGoals->Series["Monto en soles"]->Points[0]->Label = Convert::ToString(ListStoreManager->Count); */
		}

		void ShowSells() {
			List<Sale^>^ mySells = Controller::QueryAllSales();
			String^ Estado="-";

			dgvSells->Rows->Clear();
			for (int i = 0; i < mySells->Count; i++) {
				if (mySells[i]->Total == 0) continue;
				switch (mySells[i]->Status)
				{
				case 'A': Estado = "REGISTRADO";
					break;
				case 'B': Estado = "ENVIADO";
					break;
				case 'C': Estado = "ENTREGADO";
					break;
				case 'D': Estado = "PRESENTA RECLAMO";
					break;
				case 'E': Estado = "REEMBOLSADO";
					break;
				case 'F': Estado = "NO PROCEDE RECLAMO";
					break;
				case 'G': Estado = "CANCELADO";
					break;
				default:
					break;
				}
				mySells[i]->Customer = (Customer^) Controller::QueryUserById(mySells[i]->Customer->Id);     
				if (mySells[i]->StoreManager->Id != 0) mySells[i]->StoreManager = (StoreManager^)Controller::QueryUserById(mySells[i]->StoreManager->Id);
				else mySells[i]->StoreManager->Name = "Asistente Virtual";

				dgvSells->Rows->Add(gcnew array<String^>{

					"" + mySells[i]->Id,
						mySells[i]->SaleDate,
						mySells[i]->Customer->Name,
						mySells[i]->StoreManager->Name,
						"" + mySells[i]->Total,
						mySells[i]->PaidMode,
						Estado
				});

			}
		}
		//mySells[i]->Customer->Name,
			//mySells[i]->StoreManager->Name,
	private: System::Void StadisticReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//ShowSells();
		RefreshReportToday();
		RefreshReportLastWeek();
		RefreshReportLastMonth();
		RefreshReportGoalsLastMonth();
	}
	private: System::Void chartSellsLastWeek_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btShowAllSales_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowSells();
	}
	private: System::Void btLookFor1_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Sale^>^ mySells = Controller::DaySalesList(dtpSaleDate->Value);
		String^ Estado = "-";

		if (mySells != nullptr) {
			dgvSells->Rows->Clear();
			for (int i = 0; i < mySells->Count; i++) {
				mySells[i]->Customer = (Customer^)Controller::QueryUserById(mySells[i]->Customer->Id);              //??????????????????

				if (mySells[i]->StoreManager->Id != 0) mySells[i]->StoreManager = (StoreManager^)Controller::QueryUserById(mySells[i]->StoreManager->Id);
				else mySells[i]->StoreManager->Name = "Asistente Virtual";

				switch (mySells[i]->Status)
				{
				case 'A': Estado = "REGISTRADO";
					break;
				case 'B': Estado = "ENVIADO";
					break;
				case 'C': Estado = "ENTREGADO";
					break;
				case 'D': Estado = "PRESENTA RECLAMO";
					break;
				case 'E': Estado = "REEMBOLSADO";
					break;
				case 'F': Estado = "NO PROCEDE RECLAMO";
					break;
				case 'G': Estado = "CANCELADO";
					break;
				default:
					break;
				}
				
				dgvSells->Rows->Add(gcnew array<String^>{

					"" + mySells[i]->Id,
						mySells[i]->SaleDate,
						mySells[i]->Customer->Name,
						mySells[i]->StoreManager->Name,
						"" + mySells[i]->Total,
						mySells[i]->PaidMode,
						Estado
				});

			}
		}
		else {
			MessageBox::Show("No existe venta con la fecha ingresada");
		}


	}
	private: System::Void btLookFor2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtSaleId->Text->Equals("")) return;
		Sale^ sale = gcnew Sale();
		Sale^ saleLast = Controller::QueryLastSale();
		
		if (Convert::ToInt32(txtSaleId->Text) <= saleLast->Id) {
			sale = Controller::QuerySaleById(Convert::ToInt32(txtSaleId->Text));
			if (sale->Total == 0) {
				dgvSells->Rows->Clear();
			MessageBox::Show("No existe venta con el Id ingresado");
				return;
			}
			
			////??????????? (int)
			String^ Estado;
			if (sale != nullptr) {
				dgvSells->Rows->Clear();
				sale->Customer = (Customer^)Controller::QueryUserById(sale->Customer->Id);              //??????????????????

				if (sale->StoreManager->Id != 0) sale->StoreManager = (StoreManager^)Controller::QueryUserById(sale->StoreManager->Id);
				else sale->StoreManager->Name = "Asistente Virtual";

				switch (sale->Status)
				{
				case 'A': Estado = "REGISTRADO";
					break;
				case 'B': Estado = "ENVIADO";
					break;
				case 'C': Estado = "ENTREGADO";
					break;
				case 'D': Estado = "PRESENTA RECLAMO";
					break;
				case 'E': Estado = "REEMBOLSADO";
					break;
				case 'F': Estado = "NO PROCEDE RECLAMO";
					break;
				case 'G': Estado = "CANCELADO";
					break;
				default:
					break;
				}


				dgvSells->Rows->Add(gcnew array<String^>{
					"" + sale->Id,
						sale->SaleDate,
						sale->Customer->Name,
						sale->StoreManager->Name,
						"" + sale->Total,
						sale->PaidMode,
						Estado
				});
			}
			else {
				MessageBox::Show("No existe venta con el Id ingresado");
			}
		}
		else {
			dgvSells->Rows->Clear();
			MessageBox::Show("No existe venta con el Id ingresado");
			return;
		}
		

	}
	private: System::Void btToShow_Click(System::Object^ sender, System::EventArgs^ e) {
		List<Product^>^ products = gcnew List<Product^>();
		products = Controller::QueryProductsByStockLimit(Convert::ToInt32(txtStock->Text));

		dgvStock->Rows->Clear();
		for (int i = 0; i < products->Count; i++) {
			dgvStock->Rows->Add(gcnew array<String^>{
				"" + products[i]->Id,
					products[i]->Name,
					"" + products[i]->Stock
			});

		}
	}
	private: System::Void txtSaleId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabControl2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	// Profile Announcer +110+27=+137
	/*if (tabPage1->) {
		// Change Size (X,Y+137)
		this->ClientSize = System::Drawing::Size(680 - 18, 702 - 47 + 137);
		// Move Elemets
		this->AddUser->Location = System::Drawing::Point(86, 346 + 137);
		this->UpdateUser->Location = System::Drawing::Point(234, 346 + 137);
		this->DeleteUser->Location = System::Drawing::Point(390, 346 + 137);
		this->dgvCustomer->Location = System::Drawing::Point(24, 392 + 137);

		// Add Direction
		Announcerbx->Visible = true;
		StoreManagerbx->Visible = false;
		Studentbx->Visible = false;
	}
	else {
		// Change Size (X,Y+100)
		this->ClientSize = System::Drawing::Size(680 - 18, 680 - 47);
		// Move Elemets
		this->AddUser->Location = System::Drawing::Point(86, 324);
		this->UpdateUser->Location = System::Drawing::Point(234, 324);
		this->DeleteUser->Location = System::Drawing::Point(390, 324);
		this->dgvCustomer->Location = System::Drawing::Point(24, 370);

		// Add Direction
		Studentbx->Visible = false;
		StoreManagerbx->Visible = false;
		Announcerbx->Visible = false;
	}
	*/
}
private: System::Void tabControl2_TabIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TabIndex==tabPage1->TabIndex) {
		// Change Size (X,Y+137)
		//tabControl2->Size = System::Drawing::Size(880+10, 882-10);
		this->tabControl2->Size = System::Drawing::Size(880, 100);
	}
	else if (TabIndex == tabPage2->TabIndex) {
		// Change Size (X,Y+137)
		tabControl2->Size = System::Drawing::Size(880 + 20, 882 - 5);

	}
}
private: System::Void tabControl2_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (TabIndex == tabPage1->TabIndex) {
		// Change Size (X,Y+137)
		tabControl2->Size = System::Drawing::Size(880 + 10, 882 - 10);

	}
	else if (TabIndex == tabPage2->TabIndex) {
		// Change Size (X,Y+137)
		tabControl2->Size = System::Drawing::Size(880 + 20, 882 - 5);

	}
}

private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
