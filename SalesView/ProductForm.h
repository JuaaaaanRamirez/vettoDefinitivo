#pragma once
#include "CareerListForm.h"
#include "Resource.h"

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;
	using namespace SalesModel;
	using namespace System::Collections::Generic;
	using namespace Threading;

	/// <summary>
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	private:
		Thread^ myThread;
	public:
		ProductForm(void)
		{
			InitializeComponent();
			myThread = gcnew Thread(gcnew ThreadStart(this, &ProductForm::MyRun));
			myThread->IsBackground = true;
			//myThread->Start();  
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}
		delegate void MyDelegate();

		void MyRun() {
			while (true) {
				try {
					myThread->Sleep(10000); //10s
					Invoke(gcnew MyDelegate(this, &ProductForm::ShowProducts));
				}
				catch (Exception^ ex) {
					return;
				}
			}
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~ProductForm()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ txtProductId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtPriceMin;

	private: System::Windows::Forms::TextBox^ txtStock;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::PictureBox^ pbPhoto;

	private: System::Windows::Forms::Button^ btnSetImage;
	private: System::Windows::Forms::DataGridView^ dgvProducts;







	private: System::Windows::Forms::TextBox^ txtPriceMaj;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnCarrer;













	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::Button^ btnClear;





















	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtProductId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceMin = (gcnew System::Windows::Forms::TextBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->btnSetImage = (gcnew System::Windows::Forms::Button());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtPriceMaj = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnCarrer = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"C?digo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripci?n:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio minorista (s/.)";
			this->label4->Click += gcnew System::EventHandler(this, &ProductForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Stock:";
			// 
			// txtProductId
			// 
			this->txtProductId->Location = System::Drawing::Point(109, 20);
			this->txtProductId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtProductId->Name = L"txtProductId";
			this->txtProductId->Size = System::Drawing::Size(305, 22);
			this->txtProductId->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(109, 50);
			this->txtName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(305, 22);
			this->txtName->TabIndex = 7;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(109, 80);
			this->txtDescription->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(305, 58);
			this->txtDescription->TabIndex = 8;
			// 
			// txtPriceMin
			// 
			this->txtPriceMin->Location = System::Drawing::Point(180, 160);
			this->txtPriceMin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceMin->Name = L"txtPriceMin";
			this->txtPriceMin->Size = System::Drawing::Size(100, 22);
			this->txtPriceMin->TabIndex = 9;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(180, 220);
			this->txtStock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(100, 22);
			this->txtStock->TabIndex = 11;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(20, 270);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(109, 30);
			this->btnAdd->TabIndex = 14;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(200, 270);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(109, 30);
			this->btnUpdate->TabIndex = 15;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(400, 270);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(109, 30);
			this->btnDelete->TabIndex = 16;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BackColor = System::Drawing::Color::White;
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(600, 20);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(249, 250);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPhoto->TabIndex = 15;
			this->pbPhoto->TabStop = false;
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(605, 286);
			this->btnSetImage->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(240, 30);
			this->btnSetImage->TabIndex = 13;
			this->btnSetImage->Text = L"Agregar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			this->btnSetImage->Click += gcnew System::EventHandler(this, &ProductForm::btnSetImage_Click);
			// 
			// dgvProducts
			// 
			this->dgvProducts->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dgvProducts->Location = System::Drawing::Point(20, 335);
			this->dgvProducts->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->ReadOnly = true;
			this->dgvProducts->RowHeadersWidth = 51;
			this->dgvProducts->RowTemplate->Height = 24;
			this->dgvProducts->Size = System::Drawing::Size(835, 406);
			this->dgvProducts->TabIndex = 17;
			this->dgvProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvProducts_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 200;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio minorista (s/.)";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 75;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Precio mayorista (s/.)";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 75;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Carreras dest.";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 500;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Stock";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 50;
			// 
			// txtPriceMaj
			// 
			this->txtPriceMaj->Location = System::Drawing::Point(180, 190);
			this->txtPriceMaj->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceMaj->Name = L"txtPriceMaj";
			this->txtPriceMaj->Size = System::Drawing::Size(100, 22);
			this->txtPriceMaj->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Precio mayorista (s/.)";
			// 
			// btnCarrer
			// 
			this->btnCarrer->Location = System::Drawing::Point(320, 160);
			this->btnCarrer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCarrer->Name = L"btnCarrer";
			this->btnCarrer->Size = System::Drawing::Size(240, 30);
			this->btnCarrer->TabIndex = 12;
			this->btnCarrer->Text = L"Elegir carreras ";
			this->btnCarrer->UseVisualStyleBackColor = true;
			this->btnCarrer->Click += gcnew System::EventHandler(this, &ProductForm::btnCarrer_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(320, 206);
			this->btnClear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(240, 30);
			this->btnClear->TabIndex = 19;
			this->btnClear->Text = L"Limpiar";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &ProductForm::btnClean_Click);
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(883, 750);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnCarrer);
			this->Controls->Add(this->txtPriceMaj);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->btnSetImage);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtPriceMin);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtProductId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ProductForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mantenimiento de productos";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void ShowProducts() {
			List<Product^>^ myProductList = Controller::QueryAllProducts();

			dgvProducts->Rows->Clear();
			for (int i = 0; i < myProductList->Count; i++) {

				String^ careersString;
				for (int j = 0; j < myProductList[i]->Career->Count; j++) {
					careersString = careersString + "/" + myProductList[i]->Career[j];
				}

				dgvProducts->Rows->Add(gcnew array<String^>{

					"" + myProductList[i]->Id,
						myProductList[i]->Name,
						"" + myProductList[i]->PriceMin,
						"" + myProductList[i]->PriceMaj,
						careersString,
						"" + myProductList[i]->Stock
				});
			}
		}
		void CleanControls() {
			txtProductId->ReadOnly = false;
			txtProductId->Clear();
			txtName->Clear();
			txtDescription->Clear();
			txtPriceMin->Clear();
			txtPriceMaj->Clear();
			txtStock->Clear();
			pbPhoto->Image = nullptr;
			/*
			rbComunConfirmation->Checked = false;
			cmbCareer1->SelectedIndex = -1;
			cmbCareer2->SelectedIndex = -1;
			cmbCareer3->SelectedIndex = -1;
			cmbCareer4->SelectedIndex = -1;
			cmbCareer5->SelectedIndex = -1;

			*/
		}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		if (txtProductId->Text->Trim() == "") {

		}
		if (txtName->Text->Trim() == "") {
			MessageBox::Show("El nombre del producto no debe estar vac?o.");
			return;
		}
		if (txtDescription->Text->Trim() == "") {
			MessageBox::Show("La descripcion del producto no debe estar vac?o.");
			return;
		}
		if (txtPriceMin->Text->Trim() == "") {
			MessageBox::Show("El precio minorista no debe estar vac?o.");
			return;
		}
		if (txtPriceMaj->Text->Trim() == "") {
			MessageBox::Show("El precio mayorista no debe estar vac?o.");
			return;
		}
		if (txtStock->Text->Trim() == "") {
			MessageBox::Show("El stock no debe estar vac?o.");
			return;
		}


		Product^ product = gcnew Product();
		product->Id = Convert::ToInt32(txtProductId->Text);
		product->Name = txtName->Text;
		product->Description = txtDescription->Text;
		product->PriceMin = Convert::ToDouble(txtPriceMin->Text);
		product->PriceMaj = Convert::ToDouble(txtPriceMaj->Text);
		product->Stock = Convert::ToInt32(txtStock->Text);
		product->Status = 'A';
		product->Career = gcnew List<String^>();
		product->Searches = 0;
		product->Starts = 5;
		product->Sales = 0;
		for (int i = 0; i < Controller::RelationatedCareers->Count; i++) {
			product->Career->Add(Controller::RelationatedCareers[i]);
		}

		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			product->Photo = ms->ToArray();
		}
		if (Controller::RelationatedCareers->Count == 0) {
			MessageBox::Show("Debe elegir al menos un acarrera relacionada");
			return;
		}

		int confirmation = Controller::AddProduct(product);
		if (confirmation == -1) {
			MessageBox::Show("Ya existe un Producto con el mismo Id");
			return;
		}

		CleanControls();
		MessageBox::Show("Se agrego el producto exitosamente");
		Controller::RelationatedCareers->Clear();
		ShowProducts();
	}
	private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowProducts();
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtProductId->Text->Trim() == "") {
			MessageBox::Show("El Id del producto no debe estar vac?o.");
			return;
		}
		if (txtName->Text->Trim() == "") {
			MessageBox::Show("El nombre del producto no debe estar vac?o.");
			return;
		}
		if (txtDescription->Text->Trim() == "") {
			MessageBox::Show("La descripcion del producto no debe estar vac?o.");
			return;
		}
		if (txtPriceMin->Text->Trim() == "") {
			MessageBox::Show("El precio minorista no debe estar vac?o.");
			return;
		}
		if (txtPriceMaj->Text->Trim() == "") {
			MessageBox::Show("El precio mayorista no debe estar vac?o.");
			return;
		}
		if (txtStock->Text->Trim() == "") {
			MessageBox::Show("El stock no debe estar vac?o.");
			return;
		}


		Product^ product = gcnew Product();
		product->Id = Convert::ToInt32(txtProductId->Text);
		product->Name = txtName->Text;
		product->Description = txtDescription->Text;
		product->PriceMin = Convert::ToDouble(txtPriceMin->Text);
		product->PriceMaj = Convert::ToDouble(txtPriceMaj->Text);
		product->Stock = Convert::ToInt32(txtStock->Text);
		product->Status = 'A';
		product->Career = gcnew List<String^>();
		for (int i = 0; i < Controller::RelationatedCareers->Count; i++) {
			product->Career->Add(Controller::RelationatedCareers[i]);
		}

		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			product->Photo = ms->ToArray();
		}
		if (Controller::RelationatedCareers->Count == 0) {
			MessageBox::Show("Debe elegir al menos un acarrera relacionada");
			return;
		}
		int verificator = Controller::UpdateProduct(product);
		if (verificator == -1) {
			MessageBox::Show("No existe producto a modificar con el Id indicado");
			return;
		}

		CleanControls();
		MessageBox::Show("Se modifico el producto exitosamente");
		Controller::RelationatedCareers->Clear();
		ShowProducts();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtProductId->Text->Equals("")) { MessageBox::Show("No ha seleccionado alg?n producto."); return; }
		int ID = Convert::ToInt32(txtProductId->Text);
		Controller::DeleteProduct(ID);
		CleanControls();
		MessageBox::Show("Eliminacion exitosa");
		Controller::RelationatedCareers->Clear();

		ShowProducts();
	}
	private: System::Void btnSetImage_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ opnfd = gcnew OpenFileDialog();
		opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
		}

	}
	private: System::Void dgvProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		int selectedRowIndex = dgvProducts->SelectedCells[0]->RowIndex;
		if (dgvProducts->Rows[selectedRowIndex]->Cells[0]->Value == nullptr) {
			CleanControls();
			txtProductId->ReadOnly = false;
			Controller::RelationatedCareers->Clear();
			return;
		}
		txtProductId->ReadOnly = true;

		int productId = Convert::ToInt32(dgvProducts->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Product^ p = Controller::QueryProductById(productId);
		txtProductId->Text = "" + p->Id;
		txtName->Text = p->Name;
		txtDescription->Text = p->Description;
		txtPriceMin->Text = "" + p->PriceMin;
		txtPriceMaj->Text = "" + p->PriceMaj;
		txtStock->Text = "" + p->Stock;
		Controller::RelationatedCareers = p->Career;

		if (p->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
			pbPhoto->Image = Image::FromStream(ms);
		}
		else {
			pbPhoto->Image = nullptr;
			pbPhoto->Invalidate();
		}
		//################################################
	}
	private: System::Void btnCarrer_Click(System::Object^ sender, System::EventArgs^ e) {

		CareerListForm^ CareerList = gcnew CareerListForm();
		CareerList->ShowDialog();

	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnClean_Click(System::Object^ sender, System::EventArgs^ e) {
		CleanControls();
		Controller::RelationatedCareers->Clear();
	}
	};
}