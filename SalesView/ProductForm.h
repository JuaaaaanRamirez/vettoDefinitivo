#pragma once
#include "CareerListForm.h"

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

	/// <summary>
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
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












	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;













	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->txtPriceMaj = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			this->label1->Click += gcnew System::EventHandler(this, &ProductForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripción:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio minorista (s/.)";
			this->label4->Click += gcnew System::EventHandler(this, &ProductForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Stock:";
			// 
			// txtProductId
			// 
			this->txtProductId->Location = System::Drawing::Point(182, 35);
			this->txtProductId->Name = L"txtProductId";
			this->txtProductId->Size = System::Drawing::Size(100, 22);
			this->txtProductId->TabIndex = 6;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(182, 77);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(228, 22);
			this->txtName->TabIndex = 7;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(182, 116);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(306, 58);
			this->txtDescription->TabIndex = 8;
			// 
			// txtPriceMin
			// 
			this->txtPriceMin->Location = System::Drawing::Point(182, 180);
			this->txtPriceMin->Name = L"txtPriceMin";
			this->txtPriceMin->Size = System::Drawing::Size(100, 22);
			this->txtPriceMin->TabIndex = 9;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(182, 246);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(100, 22);
			this->txtStock->TabIndex = 10;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(53, 345);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(117, 39);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(233, 345);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(108, 40);
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(406, 345);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(107, 40);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(586, 12);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(290, 282);
			this->pbPhoto->TabIndex = 15;
			this->pbPhoto->TabStop = false;
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(612, 328);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(242, 33);
			this->btnSetImage->TabIndex = 16;
			this->btnSetImage->Text = L"Agregar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			this->btnSetImage->Click += gcnew System::EventHandler(this, &ProductForm::btnSetImage_Click);
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dgvProducts->Location = System::Drawing::Point(36, 425);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->RowHeadersWidth = 51;
			this->dgvProducts->RowTemplate->Height = 24;
			this->dgvProducts->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dgvProducts->Size = System::Drawing::Size(993, 287);
			this->dgvProducts->TabIndex = 17;
			this->dgvProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvProducts_CellClick);
			this->dgvProducts->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dataGridView1_CellContentClick);
			// 
			// txtPriceMaj
			// 
			this->txtPriceMaj->Location = System::Drawing::Point(182, 212);
			this->txtPriceMaj->Name = L"txtPriceMaj";
			this->txtPriceMaj->Size = System::Drawing::Size(100, 22);
			this->txtPriceMaj->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(33, 219);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Precio mayorista (s/.)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(344, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 58);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Elegir carreras vinculadas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProductForm::button1_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio minorista (s/.)";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 75;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Precio mayorista (s/.)";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 75;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Carreras dest.";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 500;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Stock";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 50;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1067, 609);
			this->Controls->Add(this->button1);
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
			this->Name = L"ProductForm";
			this->Text = L"Mantenimiento de productos";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtProductId->Text->Trim() == "") {
		MessageBox::Show("El Id del producto no debe estar vacío.");
		return;
	}
	if (txtName->Text->Trim() == "") {
		MessageBox::Show("El nombre del producto no debe estar vacío.");
		return;
	}
	if (txtDescription->Text->Trim() == "") {
		MessageBox::Show("La descripcion del producto no debe estar vacío.");
		return;
	}
	if (txtPriceMin->Text->Trim() == "") {
		MessageBox::Show("El precio minorista no debe estar vacío.");
		return;
	}
	if (txtPriceMaj->Text->Trim() == "") {
		MessageBox::Show("El precio mayorista no debe estar vacío.");
		return;
	}
	if (txtStock->Text->Trim() == "") {
		MessageBox::Show("El stock no debe estar vacío.");
		return;
	}
	if ((!(rbComunConfirmation->Checked)) && (cmbCareer1->SelectedIndex < 0 && cmbCareer2->SelectedIndex < 0 && cmbCareer3->SelectedIndex < 0 && cmbCareer4->SelectedIndex < 0 && cmbCareer5->SelectedIndex < 0)) {
		MessageBox::Show("Debe elegir alguna carrera relacionada");
		return;
	}

	Product^ product = gcnew Product();
	product->Id=Convert::ToInt32(txtProductId->Text);
	product->Name = txtName->Text;
	product->Description = txtDescription->Text;
	product->PriceMin = Convert::ToDouble(txtPriceMin->Text);
	product->PriceMaj = Convert::ToDouble(txtPriceMaj->Text);
	product->Stock = Convert::ToInt32(txtStock->Text);
	product->Status = 'A';
	product->Career = gcnew List<String^>();
	if (rbComunConfirmation->Checked) {

		product->Career = Controller::QueryAllCareers();
	} 
	else {
		if (cmbCareer1->SelectedIndex >=0 ) product->Career->Add(cmbCareer1->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer2->SelectedIndex >= 0) product->Career->Add(cmbCareer2->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer3->SelectedIndex >= 0) product->Career->Add(cmbCareer3->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer4->SelectedIndex >= 0) product->Career->Add(cmbCareer4->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer5->SelectedIndex >= 0) product->Career->Add(cmbCareer5->SelectedItem->ToString());
		else product->Career->Add("");
	}

	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		product->Photo = ms->ToArray();
	}

	Controller::AddProduct(product);

	CleanControls();
	ShowProducts();
}

void ShowProducts() {
	List<Product^>^ myProductList = Controller::QueryAllProducts();

	dgvProducts->Rows->Clear();
		for (int i = 0; i < myProductList->Count; i++) {
			if (myProductList[i]->Career->Count > 5) {
				dgvProducts->Rows->Add(gcnew array<String^>{

					"" + myProductList[i]->Id,
						myProductList[i]->Name,
						"" + myProductList[i]->PriceMin,
						"" + myProductList[i]->PriceMaj,
						"Producto comun a muchas carreras",
						"" + myProductList[i]->Stock
				});
			}
			else {
				dgvProducts->Rows->Add(gcnew array<String^>{

					"" + myProductList[i]->Id,
						myProductList[i]->Name,
						"" + myProductList[i]->PriceMin,
						"" + myProductList[i]->PriceMaj,
						myProductList[i]->Career[0]+" " + myProductList[i]->Career[1]+ " " + myProductList[i]->Career[2]+ " " + myProductList[i]->Career[3]+" " + myProductList[i]->Career[4],
						"" + myProductList[i]->Stock
				});
			}
		}
}

void CleanControls() {
	txtProductId->Clear();
	txtName->Clear();
	txtDescription->Clear();
	txtPriceMin->Clear();
	txtPriceMaj->Clear();
	txtStock->Clear();
	pbPhoto->Image = nullptr;
	rbComunConfirmation->Checked=false;
	cmbCareer1->SelectedIndex = -1;
	cmbCareer2->SelectedIndex = -1;
	cmbCareer3->SelectedIndex = -1;
	cmbCareer4->SelectedIndex = -1;
	cmbCareer5->SelectedIndex = -1;
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowProducts();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	Product^ product = gcnew Product();
	product->Id = Convert::ToInt32(txtProductId->Text);
	product->Name = txtName->Text;
	product->Description = txtDescription->Text;
	product->PriceMin = Convert::ToDouble(txtPriceMin->Text);
	product->PriceMaj = Convert::ToDouble(txtPriceMaj->Text);
	product->Stock = Convert::ToInt32(txtStock->Text);
	product->Status = 'A';
	product->Career = gcnew List<String^>();
	if (rbComunConfirmation->Checked) {

		product->Career = Controller::QueryAllCareers();
	}
	else {
		if (cmbCareer1->SelectedIndex >= 0) product->Career->Add(cmbCareer1->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer2->SelectedIndex >= 0) product->Career->Add(cmbCareer2->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer3->SelectedIndex >= 0) product->Career->Add(cmbCareer3->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer4->SelectedIndex >= 0) product->Career->Add(cmbCareer4->SelectedItem->ToString());
		else product->Career->Add("");
		if (cmbCareer5->SelectedIndex >= 0) product->Career->Add(cmbCareer5->SelectedItem->ToString());
		else product->Career->Add("");
	}

	if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
		product->Photo = ms->ToArray();
	}

	Controller::UpdateProduct(product);

	CleanControls();
	ShowProducts();
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int ID = Convert::ToInt32(txtProductId->Text);
	Controller::DeleteProduct(ID);
	CleanControls();
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
	int productId = Convert::ToInt32(dgvProducts->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Product^ p = Controller::QueryProductById(productId);
	txtProductId->Text = "" + p->Id;
	txtName->Text = p->Name;
	txtDescription->Text = p->Description;
	txtPriceMin->Text = "" + p->PriceMin;
	txtPriceMaj->Text = "" + p->PriceMaj;
	txtStock->Text = "" + p->Stock;
	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbPhoto->Image = Image::FromStream(ms);
	}
	else {
		pbPhoto->Image = nullptr;
		pbPhoto->Invalidate();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	CareerListForm^ CareerListForm = gcnew CareerListForm();
	CareerListForm->MdiParent = this;
	CareerListForm->Show();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
