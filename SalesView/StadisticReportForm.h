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



	/// <summary>
	/// Resumen de StadisticReportForm
	/// </summary>
	public ref class StadisticReportForm : public System::Windows::Forms::Form
	{
	public:
		StadisticReportForm(void)
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
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dgvSells;






	private: System::Windows::Forms::Button^ button1;






	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabReportToday;


	private: System::Windows::Forms::TabPage^ tabPage2;


	private: System::Windows::Forms::TabPage^ tabPage3;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartReportToday;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ pieSellsLastWeek;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartMoneyLastWeek;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartReportCustomersLastMonth;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartReportLastMonth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StadisticReportForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dgvSells = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabReportToday = (gcnew System::Windows::Forms::TabPage());
			this->chartReportToday = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pieSellsLastWeek = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartMoneyLastWeek = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chartReportCustomersLastMonth = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartReportLastMonth = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSells))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabReportToday->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportToday))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieSellsLastWeek))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMoneyLastWeek))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportCustomersLastMonth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportLastMonth))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Buscar venta por";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fecha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Id de venta";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(130, 68);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// dgvSells
			// 
			this->dgvSells->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSells->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1, this->Column2,
					this->Column3, this->Column6, this->Column4, this->Column5
			});
			this->dgvSells->Location = System::Drawing::Point(41, 150);
			this->dgvSells->Name = L"dgvSells";
			this->dgvSells->RowHeadersWidth = 51;
			this->dgvSells->RowTemplate->Height = 24;
			this->dgvSells->Size = System::Drawing::Size(845, 316);
			this->dgvSells->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(408, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 59);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Mostrar reporte general";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox6);
			this->groupBox2->Location = System::Drawing::Point(25, 1372);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(814, 399);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(88, 48);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(636, 325);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(139, 1328);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Productos con stock menor a: ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(341, 1328);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(460, 1334);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Unidades";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(588, 1319);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 47);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Mostrar";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabReportToday);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(22, 490);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(842, 776);
			this->tabControl1->TabIndex = 17;
			// 
			// tabReportToday
			// 
			this->tabReportToday->Controls->Add(this->chartReportToday);
			this->tabReportToday->Location = System::Drawing::Point(4, 25);
			this->tabReportToday->Name = L"tabReportToday";
			this->tabReportToday->Padding = System::Windows::Forms::Padding(3);
			this->tabReportToday->Size = System::Drawing::Size(834, 747);
			this->tabReportToday->TabIndex = 0;
			this->tabReportToday->Text = L"Reporte del dia";
			this->tabReportToday->UseVisualStyleBackColor = true;
			// 
			// chartReportToday
			// 
			chartArea6->Name = L"ChartArea1";
			this->chartReportToday->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chartReportToday->Legends->Add(legend6);
			this->chartReportToday->Location = System::Drawing::Point(62, 59);
			this->chartReportToday->Name = L"chartReportToday";
			series6->ChartArea = L"ChartArea1";
			series6->Legend = L"Legend1";
			series6->Name = L"Unidades vendidas";
			this->chartReportToday->Series->Add(series6);
			this->chartReportToday->Size = System::Drawing::Size(585, 473);
			this->chartReportToday->TabIndex = 0;
			this->chartReportToday->Text = L"chart1";
			title6->Name = L"Productos vendidos hoy";
			title6->Text = L"Productos vendidos hoy";
			this->chartReportToday->Titles->Add(title6);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pieSellsLastWeek);
			this->tabPage2->Controls->Add(this->chartMoneyLastWeek);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(834, 747);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Reporte de la semana";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pieSellsLastWeek
			// 
			chartArea7->Name = L"ChartArea1";
			this->pieSellsLastWeek->ChartAreas->Add(chartArea7);
			legend7->Name = L"Legend1";
			this->pieSellsLastWeek->Legends->Add(legend7);
			this->pieSellsLastWeek->Location = System::Drawing::Point(49, 412);
			this->pieSellsLastWeek->Name = L"pieSellsLastWeek";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series7->Legend = L"Legend1";
			series7->Name = L"Numero de ventas";
			this->pieSellsLastWeek->Series->Add(series7);
			this->pieSellsLastWeek->Size = System::Drawing::Size(738, 302);
			this->pieSellsLastWeek->TabIndex = 1;
			this->pieSellsLastWeek->Text = L"chart2";
			title7->Name = L"Title1";
			title7->Text = L"Numero de ventas durante la semana pasada";
			this->pieSellsLastWeek->Titles->Add(title7);
			this->pieSellsLastWeek->Click += gcnew System::EventHandler(this, &StadisticReportForm::chartSellsLastWeek_Click);
			// 
			// chartMoneyLastWeek
			// 
			chartArea8->Name = L"ChartArea1";
			this->chartMoneyLastWeek->ChartAreas->Add(chartArea8);
			legend8->Name = L"Legend1";
			this->chartMoneyLastWeek->Legends->Add(legend8);
			this->chartMoneyLastWeek->Location = System::Drawing::Point(33, 33);
			this->chartMoneyLastWeek->Name = L"chartMoneyLastWeek";
			series8->ChartArea = L"ChartArea1";
			series8->Legend = L"Legend1";
			series8->Name = L"Ingresos totales";
			this->chartMoneyLastWeek->Series->Add(series8);
			this->chartMoneyLastWeek->Size = System::Drawing::Size(771, 348);
			this->chartMoneyLastWeek->TabIndex = 0;
			this->chartMoneyLastWeek->Text = L"chart1";
			title8->Name = L"Title1";
			title8->Text = L"Ingresos de la semana pasada en soles";
			this->chartMoneyLastWeek->Titles->Add(title8);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chartReportCustomersLastMonth);
			this->tabPage3->Controls->Add(this->chartReportLastMonth);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(834, 747);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Reporte del mes";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chartReportCustomersLastMonth
			// 
			chartArea9->Name = L"ChartArea1";
			this->chartReportCustomersLastMonth->ChartAreas->Add(chartArea9);
			legend9->Name = L"Legend1";
			this->chartReportCustomersLastMonth->Legends->Add(legend9);
			this->chartReportCustomersLastMonth->Location = System::Drawing::Point(41, 378);
			this->chartReportCustomersLastMonth->Name = L"chartReportCustomersLastMonth";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Legend = L"Legend1";
			series9->Name = L"Numero de clientes";
			this->chartReportCustomersLastMonth->Series->Add(series9);
			this->chartReportCustomersLastMonth->Size = System::Drawing::Size(758, 342);
			this->chartReportCustomersLastMonth->TabIndex = 1;
			this->chartReportCustomersLastMonth->Text = L"chart2";
			title9->Name = L"Title1";
			title9->Text = L"Clientes en el sistema el mes pasado";
			this->chartReportCustomersLastMonth->Titles->Add(title9);
			// 
			// chartReportLastMonth
			// 
			chartArea10->Name = L"ChartArea1";
			this->chartReportLastMonth->ChartAreas->Add(chartArea10);
			legend10->Name = L"Legend1";
			this->chartReportLastMonth->Legends->Add(legend10);
			this->chartReportLastMonth->Location = System::Drawing::Point(51, 69);
			this->chartReportLastMonth->Name = L"chartReportLastMonth";
			series10->ChartArea = L"ChartArea1";
			series10->Legend = L"Legend1";
			series10->Name = L"Unidades vendidas";
			this->chartReportLastMonth->Series->Add(series10);
			this->chartReportLastMonth->Size = System::Drawing::Size(748, 293);
			this->chartReportLastMonth->TabIndex = 0;
			this->chartReportLastMonth->Text = L"chart1";
			title10->Name = L"Title1";
			title10->Text = L"Productos mas vendidos el mes pasado";
			this->chartReportLastMonth->Titles->Add(title10);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
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
			// StadisticReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(973, 919);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgvSells);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"StadisticReportForm";
			this->Text = L"Reporte de ventas y estadisticas";
			this->Load += gcnew System::EventHandler(this, &StadisticReportForm::StadisticReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSells))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabReportToday->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportToday))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pieSellsLastWeek))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartMoneyLastWeek))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportCustomersLastMonth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartReportLastMonth))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void RefreshReportToday() {

			List <Sale^>^ salesList1 = gcnew  List<Sale^>();

			DateTime hoy = DateTime::Now;
			salesList1 = Controller::DaySalesList(hoy);

			List<Product^>^ productLis1 = gcnew  List<Product^>();
			productLis1 = Controller::GetListProductOrderBySells(salesList1);
			int quantityOthers = 0;
			int ToShow = 4;
			if (productLis1->Count >= ToShow) {
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
					SellMartes;
					break;
				case(3): miercoles += salesList1[i]->Total;
					SellMiercoles;
					break;
				case(4): jueves += salesList1[i]->Total;
					SellJueves;
					break;
				case(5): viernes += salesList1[i]->Total;
					SellViernes;
					break;
				case(6): sabado += salesList1[i]->Total;
					SellSabado;
					break;
				case(0): domingo += salesList1[i]->Total;
					SellDomingo;
					break;
				default:
					break;
				}


			}
			//CHART
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
			pieSellsLastWeek->Series["Numero de ventas"]->Points[0]->Label = Convert::ToString(SellLunes);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellMartes);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[1]->LegendText = "Martes";
			pieSellsLastWeek->Series["Numero de ventas"]->Points[1]->Label = Convert::ToString(SellMartes);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellMiercoles);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[2]->LegendText = "Miercoles";
			pieSellsLastWeek->Series["Numero de ventas"]->Points[2]->Label = Convert::ToString(SellMiercoles);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellJueves);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[3]->LegendText = "Jueves";
			pieSellsLastWeek->Series["Numero de ventas"]->Points[3]->Label = Convert::ToString(SellJueves);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellViernes);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[4]->LegendText = "Viernes";
			pieSellsLastWeek->Series["Numero de ventas"]->Points[4]->Label = Convert::ToString(SellViernes);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellSabado);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[5]->LegendText = "Sabado";
			pieSellsLastWeek->Series["Numero de ventas"]->Points[5]->Label = Convert::ToString(SellSabado);

			pieSellsLastWeek->Series["Numero de ventas"]->Points->Add(SellDomingo);
			pieSellsLastWeek->Series["Numero de ventas"]->Points[6]->LegendText = "Domingo";
			pieSellsLastWeek->Series["Numero de ventas"]->Points[6]->Label = Convert::ToString(SellDomingo);


		}

		void RefreshReportLastMonth() {
			List<Sale^>^ salesList1 = gcnew  List<Sale^>();
			salesList1 = Controller::LastMonthSalesList();

			List<Product^>^ productLis1 = gcnew  List<Product^>();
			productLis1 = Controller::GetListProductOrderBySells(salesList1);
			int quantityOthers = 0;
			int ToShow = 4;
			if (productLis1->Count >= ToShow) {
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

		void ShowSells() {
			List<Sale^>^ mySells = Controller::QueryAllSales();

			dgvSells->Rows->Clear();
			for (int i = 0; i < mySells->Count; i++) {
					dgvSells->Rows->Add(gcnew array<String^>{

						"" + mySells[i]->Id,
							mySells[i]->SaleDate,
							mySells[i]->Customer->Name,
							mySells[i]->StoreManager->Name,
							"" + mySells[i]->Total,
						    mySells[i]->PaidMode
					});
				
			}
		}
		//mySells[i]->Customer->Name,
			//mySells[i]->StoreManager->Name,
	private: System::Void StadisticReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowSells();
		RefreshReportToday();
		RefreshReportLastWeek();
		RefreshReportLastMonth();
	}
	private: System::Void chartSellsLastWeek_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
