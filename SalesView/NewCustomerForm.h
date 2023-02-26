#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesModel;
	using namespace SalesController;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Resumen de NewCustomerForm
	/// </summary>
	public ref class NewCustomerForm : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		NewCustomerForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NewCustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::TextBox^ txtAddress;





	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtDocNumber;


	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::RadioButton^ rbtnMasc;
	private: System::Windows::Forms::RadioButton^ rbtnFem;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtPasswordAgain;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ btnBack;






	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtCustomerPoints;

	private: System::Windows::Forms::PictureBox^ pbCustomer;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewCustomerForm::typeid));
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtDocNumber = (gcnew System::Windows::Forms::TextBox());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtPasswordAgain = (gcnew System::Windows::Forms::TextBox());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->txtCustomerPoints = (gcnew System::Windows::Forms::TextBox());
			this->pbCustomer = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->BeginInit();
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->Dock = System::Windows::Forms::DockStyle::Top;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label12->Location = System::Drawing::Point(0, 0);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(564, 60);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Registro de nuevo ususario";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 74);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(80, 110);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Apellido ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(80, 154);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Email ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(80, 196);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Direción";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(80, 262);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Celular ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(80, 346);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 16);
			this->label7->TabIndex = 0;
			this->label7->Text = L"DNI";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(80, 309);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 16);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Fec. Nac.";
			this->label8->Click += gcnew System::EventHandler(this, &NewCustomerForm::label8_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(80, 384);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 16);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Género";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(176, 74);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(4);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(281, 22);
			this->txtFirstName->TabIndex = 1;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(176, 110);
			this->txtLastName->Margin = System::Windows::Forms::Padding(4);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(281, 22);
			this->txtLastName->TabIndex = 2;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(176, 262);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(184, 22);
			this->txtPhoneNumber->TabIndex = 5;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(176, 187);
			this->txtAddress->Margin = System::Windows::Forms::Padding(4);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(281, 57);
			this->txtAddress->TabIndex = 4;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(176, 150);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(281, 22);
			this->txtEmail->TabIndex = 3;
			// 
			// txtDocNumber
			// 
			this->txtDocNumber->Location = System::Drawing::Point(176, 342);
			this->txtDocNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtDocNumber->Name = L"txtDocNumber";
			this->txtDocNumber->Size = System::Drawing::Size(184, 22);
			this->txtDocNumber->TabIndex = 7;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(176, 309);
			this->dtpBirthday->Margin = System::Windows::Forms::Padding(4);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(281, 22);
			this->dtpBirthday->TabIndex = 6;
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Location = System::Drawing::Point(279, 384);
			this->rbtnMasc->Margin = System::Windows::Forms::Padding(4);
			this->rbtnMasc->Name = L"rbtnMasc";
			this->rbtnMasc->Size = System::Drawing::Size(89, 20);
			this->rbtnMasc->TabIndex = 9;
			this->rbtnMasc->TabStop = true;
			this->rbtnMasc->Text = L"Masculino";
			this->rbtnMasc->UseVisualStyleBackColor = true;
			// 
			// rbtnFem
			// 
			this->rbtnFem->AutoSize = true;
			this->rbtnFem->Location = System::Drawing::Point(176, 382);
			this->rbtnFem->Margin = System::Windows::Forms::Padding(4);
			this->rbtnFem->Name = L"rbtnFem";
			this->rbtnFem->Size = System::Drawing::Size(88, 20);
			this->rbtnFem->TabIndex = 8;
			this->rbtnFem->TabStop = true;
			this->rbtnFem->Text = L"Femenino";
			this->rbtnFem->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 430);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Usuario ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(80, 465);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 16);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Contraseña ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(80, 500);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(124, 16);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Repetir contraseña ";
			this->label11->Click += gcnew System::EventHandler(this, &NewCustomerForm::label11_Click);
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(265, 430);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(192, 22);
			this->txtUsername->TabIndex = 10;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(265, 462);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(192, 22);
			this->txtPassword->TabIndex = 11;
			// 
			// txtPasswordAgain
			// 
			this->txtPasswordAgain->Location = System::Drawing::Point(265, 494);
			this->txtPasswordAgain->Margin = System::Windows::Forms::Padding(4);
			this->txtPasswordAgain->Name = L"txtPasswordAgain";
			this->txtPasswordAgain->PasswordChar = '*';
			this->txtPasswordAgain->Size = System::Drawing::Size(192, 22);
			this->txtPasswordAgain->TabIndex = 12;
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(104, 553);
			this->btnRegister->Margin = System::Windows::Forms::Padding(4);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(100, 28);
			this->btnRegister->TabIndex = 13;
			this->btnRegister->Text = L"Aceptar";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &NewCustomerForm::btnRegister_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(331, 553);
			this->btnBack->Margin = System::Windows::Forms::Padding(4);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(100, 28);
			this->btnBack->TabIndex = 14;
			this->btnBack->Text = L"Cancelar";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &NewCustomerForm::btnBack_Click);
			// 
			// txtCustomerPoints
			// 
			this->txtCustomerPoints->Location = System::Drawing::Point(369, 262);
			this->txtCustomerPoints->Margin = System::Windows::Forms::Padding(4);
			this->txtCustomerPoints->Name = L"txtCustomerPoints";
			this->txtCustomerPoints->Size = System::Drawing::Size(88, 22);
			this->txtCustomerPoints->TabIndex = 5;
			this->txtCustomerPoints->Visible = false;
			// 
			// pbCustomer
			// 
			this->pbCustomer->ErrorImage = nullptr;
			this->pbCustomer->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCustomer.InitialImage")));
			this->pbCustomer->Location = System::Drawing::Point(411, 346);
			this->pbCustomer->Margin = System::Windows::Forms::Padding(4);
			this->pbCustomer->Name = L"pbCustomer";
			this->pbCustomer->Size = System::Drawing::Size(81, 62);
			this->pbCustomer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbCustomer->TabIndex = 15;
			this->pbCustomer->TabStop = false;
			this->pbCustomer->Visible = false;
			// 
			// NewCustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(564, 608);
			this->Controls->Add(this->pbCustomer);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->txtPasswordAgain);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rbtnFem);
			this->Controls->Add(this->rbtnMasc);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtDocNumber);
			this->Controls->Add(this->txtCustomerPoints);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"NewCustomerForm";
			this->Text = L"Datos del consumidor";
			this->Load += gcnew System::EventHandler(this, &NewCustomerForm::NewCustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NewCustomerForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e);
		   void RegisterCustomer() {
			   
			   Customer^ p = gcnew Customer();;
			   try {

				   if (txtFirstName->Text->Trim() == "") {
					   MessageBox::Show("Ingrese su nombre.");
					   return;
				   }
				   if (txtLastName->Text->Trim() == "") {
					   MessageBox::Show("Ingrese su apellido.");
					   return;
				   }
				   if (txtEmail->Text->Trim() == "") {
					   MessageBox::Show("Ingrese su email.");
					   return;
				   }
				   if (txtDocNumber->Text->Trim() == "") {
					   MessageBox::Show("Ingrese su DNI.");
					   return;
				   }
				   /*if (txtDocNumber->Text->Trim() == "") {
					   MessageBox::Show("Su DNI debe tener 8 dígitos.");
					   return;
				   }*/
				   if (txtUsername->Text->Trim() == "") {
					   MessageBox::Show("Ingrese su nombre de usuario.");
					   return;
				   }
				   if (txtPassword->Text->Trim() == "") {
					   MessageBox::Show("Ingrese su contraseña.");
					   return;
				   }
				   if (txtPasswordAgain->Text->Trim() == "") {
					   MessageBox::Show("Repita su contraseña.");
					   return;
				   }
				   if (txtPasswordAgain->Text->Trim() != txtPassword->Text->Trim()) {
					   MessageBox::Show("Las contraseñas no son iguales");
					   return;
				   }
				   if (Controller::ExistUsername(txtUsername->Text)) {
					   MessageBox::Show("El nombre usuario ingresado ya existe");
					   return;
				   }
				   if (Controller::ExistDocNumber(txtDocNumber->Text)) {
					   MessageBox::Show("El numero de DNI  ingresado ya existe");
					   return;
				   }

				   //p->Id = Int32::Parse(txtPersonId->Text);
				   p->Id = Controller::FindNewId(p);
				   p->Name = txtFirstName->Text;
				   p->LastName = txtLastName->Text;
				   p->DocNumber = txtDocNumber->Text;
				   p->Address = txtAddress->Text;
				   p->CustomerPoints = 0;
				   p->Email = txtEmail->Text;
				   p->PhoneNumber = txtPhoneNumber->Text;
				   p->Birthday = dtpBirthday->Value.ToString();
				   p->Password = txtPassword->Text;
				   p->Username = txtUsername->Text;
				   p->Profile = 'S';
				   if (rbtnMasc->Checked) p->Gender = 'M';
				   else p->Gender = 'F';

				   /*p = gcnew Customer(Int32::Parse(txtId->Text), txtFirstName->Text, txtLastName->Text,
					   txtDocNumber->Text, txtAddress->Text, txtPhoneNumber->Text,
					   txtEmail->Text,
					   rbtnMasc->Checked ? 'M' : 'F',
					   dtpBirthday->Value.ToString("yyyy-MM-dd"));*/
				   /*if (p->Photo != nullptr) {
					   System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
					   pbCustomer->Image = Image::FromStream(ms);
				   }*/
				   System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				   if (pbCustomer != nullptr && pbCustomer->Image != nullptr) {
					   pbCustomer->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					   p->Photo = ms->ToArray();
				   }
				   else {
					   pbCustomer->InitialImage->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
					   p->Photo = ms->ToArray();
				   }



			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->ToString(), "Comparta el error al área de TI.");
				   return;
			   }

			   Controller::AddUser(p);
			   MessageBox::Show("Se ha regitrado el nuevo usuario con exito");
			   //MessageBox::Show("Hola");
			  
			   this->Close();
		   }
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e);

};
}