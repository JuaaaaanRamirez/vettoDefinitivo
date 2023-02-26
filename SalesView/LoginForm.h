#pragma once

#include"NewCustomerForm.h"

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
		Form^ refForm; //Variable de instancia
	public:
		LoginForm(Form^ form)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnNewCustomer;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pbLogin;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnNewCustomer = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pbLogin = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogin))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 127);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 165);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Contraseña";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(183, 127);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(224, 22);
			this->txtUsername->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(183, 159);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(224, 22);
			this->txtPassword->TabIndex = 2;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::txtPassword_KeyDown);
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(113, 197);
			this->btnOk->Margin = System::Windows::Forms::Padding(4);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(100, 28);
			this->btnOk->TabIndex = 3;
			this->btnOk->Text = L"Iniciar sesión";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(259, 197);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(100, 28);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// btnNewCustomer
			// 
			this->btnNewCustomer->Location = System::Drawing::Point(259, 263);
			this->btnNewCustomer->Margin = System::Windows::Forms::Padding(4);
			this->btnNewCustomer->Name = L"btnNewCustomer";
			this->btnNewCustomer->Size = System::Drawing::Size(127, 30);
			this->btnNewCustomer->TabIndex = 5;
			this->btnNewCustomer->Text = L"Nuevo Usuario";
			this->btnNewCustomer->UseVisualStyleBackColor = true;
			this->btnNewCustomer->Click += gcnew System::EventHandler(this, &LoginForm::btnNewCustomer_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 263);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"¿No tiene usuario resgistrado\?";
			// 
			// pbLogin
			// 
			this->pbLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(166)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->pbLogin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogin.Image")));
			this->pbLogin->Location = System::Drawing::Point(1, 2);
			this->pbLogin->Margin = System::Windows::Forms::Padding(4);
			this->pbLogin->Name = L"pbLogin";
			this->pbLogin->Size = System::Drawing::Size(460, 94);
			this->pbLogin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbLogin->TabIndex = 4;
			this->pbLogin->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->ClientSize = System::Drawing::Size(460, 321);
			this->Controls->Add(this->pbLogin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnNewCustomer);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Autenticacion de usuarios";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
	if (e->KeyData == Keys::Enter)
		btnOk->PerformClick();
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnNewCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
	NewCustomerForm^ newCustomerForm = gcnew NewCustomerForm(this);
	newCustomerForm->ShowDialog();
}
};
}