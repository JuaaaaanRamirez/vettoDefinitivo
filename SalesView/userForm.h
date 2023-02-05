#pragma once

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
	/// Resumen de CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtCustomerName;
	private: System::Windows::Forms::TextBox^ txtDocNumber;




	private: System::Windows::Forms::TextBox^ txtCustomerId;
	private: System::Windows::Forms::TextBox^ txtCustomerLastName;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::TextBox^ txtCustomerPoints;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::RadioButton^ rbtnMasc;
	private: System::Windows::Forms::RadioButton^ rbtnFem;
	private: System::Windows::Forms::PictureBox^ pbCustomer;














	private: System::Windows::Forms::Button^ btnUpdatePhoto;

	private: System::Windows::Forms::DataGridView^ dgvCustomer;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ customerId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fisrtName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phoneNumber;
	private: System::Windows::Forms::Button^ AddCustomer;
	private: System::Windows::Forms::Button^ DeleteCustomer;
	private: System::Windows::Forms::Button^ UpdateCustomer;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtCompanyName;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtGoals;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtSalary;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ txtWebPage;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtCustomerName = (gcnew System::Windows::Forms::TextBox());
			this->txtDocNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerId = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerPoints = (gcnew System::Windows::Forms::TextBox());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->pbCustomer = (gcnew System::Windows::Forms::PictureBox());
			this->btnUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->dgvCustomer = (gcnew System::Windows::Forms::DataGridView());
			this->customerId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fisrtName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AddCustomer = (gcnew System::Windows::Forms::Button());
			this->DeleteCustomer = (gcnew System::Windows::Forms::Button());
			this->UpdateCustomer = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtCompanyName = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtGoals = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtSalary = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtWebPage = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 34);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 71);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 133);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 102);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Apellido (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 354);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Dirección";
			this->label5->Click += gcnew System::EventHandler(this, &CustomerForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 220);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Teléfono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(44, 250);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Fec. Nac.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 467);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 16);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Puntos";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(247, 34);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"DNI (*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(385, 218);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 16);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Género";
			// 
			// txtCustomerName
			// 
			this->txtCustomerName->Location = System::Drawing::Point(152, 71);
			this->txtCustomerName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtCustomerName->Name = L"txtCustomerName";
			this->txtCustomerName->Size = System::Drawing::Size(339, 22);
			this->txtCustomerName->TabIndex = 2;
			// 
			// txtDocNumber
			// 
			this->txtDocNumber->Location = System::Drawing::Point(307, 34);
			this->txtDocNumber->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtDocNumber->Name = L"txtDocNumber";
			this->txtDocNumber->Size = System::Drawing::Size(184, 22);
			this->txtDocNumber->TabIndex = 2;
			// 
			// txtCustomerId
			// 
			this->txtCustomerId->Location = System::Drawing::Point(152, 34);
			this->txtCustomerId->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtCustomerId->Name = L"txtCustomerId";
			this->txtCustomerId->Size = System::Drawing::Size(85, 22);
			this->txtCustomerId->TabIndex = 2;
			// 
			// txtCustomerLastName
			// 
			this->txtCustomerLastName->Location = System::Drawing::Point(152, 102);
			this->txtCustomerLastName->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtCustomerLastName->Name = L"txtCustomerLastName";
			this->txtCustomerLastName->Size = System::Drawing::Size(339, 22);
			this->txtCustomerLastName->TabIndex = 2;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(152, 133);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(339, 22);
			this->txtEmail->TabIndex = 2;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(29, 380);
			this->txtAddress->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(253, 64);
			this->txtAddress->TabIndex = 2;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(152, 215);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(224, 22);
			this->txtPhoneNumber->TabIndex = 2;
			// 
			// txtCustomerPoints
			// 
			this->txtCustomerPoints->Location = System::Drawing::Point(98, 464);
			this->txtCustomerPoints->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtCustomerPoints->Name = L"txtCustomerPoints";
			this->txtCustomerPoints->Size = System::Drawing::Size(103, 22);
			this->txtCustomerPoints->TabIndex = 2;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(152, 246);
			this->dtpBirthday->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(265, 22);
			this->dtpBirthday->TabIndex = 3;
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Location = System::Drawing::Point(468, 215);
			this->rbtnMasc->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rbtnMasc->Name = L"rbtnMasc";
			this->rbtnMasc->Size = System::Drawing::Size(64, 20);
			this->rbtnMasc->TabIndex = 4;
			this->rbtnMasc->TabStop = true;
			this->rbtnMasc->Text = L"Masc.";
			this->rbtnMasc->UseVisualStyleBackColor = true;
			// 
			// rbtnFem
			// 
			this->rbtnFem->AutoSize = true;
			this->rbtnFem->Location = System::Drawing::Point(548, 215);
			this->rbtnFem->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rbtnFem->Name = L"rbtnFem";
			this->rbtnFem->Size = System::Drawing::Size(58, 20);
			this->rbtnFem->TabIndex = 5;
			this->rbtnFem->TabStop = true;
			this->rbtnFem->Text = L"Fem.";
			this->rbtnFem->UseVisualStyleBackColor = true;
			// 
			// pbCustomer
			// 
			this->pbCustomer->Location = System::Drawing::Point(562, 34);
			this->pbCustomer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pbCustomer->Name = L"pbCustomer";
			this->pbCustomer->Size = System::Drawing::Size(119, 115);
			this->pbCustomer->TabIndex = 6;
			this->pbCustomer->TabStop = false;
			// 
			// btnUpdatePhoto
			// 
			this->btnUpdatePhoto->Location = System::Drawing::Point(562, 167);
			this->btnUpdatePhoto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnUpdatePhoto->Name = L"btnUpdatePhoto";
			this->btnUpdatePhoto->Size = System::Drawing::Size(100, 28);
			this->btnUpdatePhoto->TabIndex = 7;
			this->btnUpdatePhoto->Text = L"Editar foto";
			this->btnUpdatePhoto->UseVisualStyleBackColor = true;
			// 
			// dgvCustomer
			// 
			this->dgvCustomer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCustomer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->customerId,
					this->fisrtName, this->lastName, this->email, this->phoneNumber
			});
			this->dgvCustomer->Location = System::Drawing::Point(47, 570);
			this->dgvCustomer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvCustomer->Name = L"dgvCustomer";
			this->dgvCustomer->RowHeadersWidth = 51;
			this->dgvCustomer->Size = System::Drawing::Size(605, 98);
			this->dgvCustomer->TabIndex = 8;
			// 
			// customerId
			// 
			this->customerId->HeaderText = L"Id";
			this->customerId->MinimumWidth = 6;
			this->customerId->Name = L"customerId";
			this->customerId->Width = 40;
			// 
			// fisrtName
			// 
			this->fisrtName->HeaderText = L"Nombres";
			this->fisrtName->MinimumWidth = 6;
			this->fisrtName->Name = L"fisrtName";
			this->fisrtName->Width = 125;
			// 
			// lastName
			// 
			this->lastName->HeaderText = L"Apellidos";
			this->lastName->MinimumWidth = 6;
			this->lastName->Name = L"lastName";
			this->lastName->Width = 125;
			// 
			// email
			// 
			this->email->HeaderText = L"Email";
			this->email->MinimumWidth = 6;
			this->email->Name = L"email";
			this->email->Width = 125;
			// 
			// phoneNumber
			// 
			this->phoneNumber->HeaderText = L"Télefono";
			this->phoneNumber->MinimumWidth = 6;
			this->phoneNumber->Name = L"phoneNumber";
			this->phoneNumber->Width = 70;
			// 
			// AddCustomer
			// 
			this->AddCustomer->Location = System::Drawing::Point(110, 523);
			this->AddCustomer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->AddCustomer->Name = L"AddCustomer";
			this->AddCustomer->Size = System::Drawing::Size(100, 28);
			this->AddCustomer->TabIndex = 9;
			this->AddCustomer->Text = L"Agregar";
			this->AddCustomer->UseVisualStyleBackColor = true;
			// 
			// DeleteCustomer
			// 
			this->DeleteCustomer->Location = System::Drawing::Point(451, 523);
			this->DeleteCustomer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DeleteCustomer->Name = L"DeleteCustomer";
			this->DeleteCustomer->Size = System::Drawing::Size(100, 28);
			this->DeleteCustomer->TabIndex = 10;
			this->DeleteCustomer->Text = L"Eliminar";
			this->DeleteCustomer->UseVisualStyleBackColor = true;
			// 
			// UpdateCustomer
			// 
			this->UpdateCustomer->Location = System::Drawing::Point(275, 523);
			this->UpdateCustomer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->UpdateCustomer->Name = L"UpdateCustomer";
			this->UpdateCustomer->Size = System::Drawing::Size(100, 28);
			this->UpdateCustomer->TabIndex = 11;
			this->UpdateCustomer->Text = L"Modificar";
			this->UpdateCustomer->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(47, 167);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 16);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Usuario";
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(152, 167);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(100, 22);
			this->txtUser->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(271, 170);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 16);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Contraseña";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(367, 170);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(124, 22);
			this->txtPassword->TabIndex = 15;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(110, 304);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(91, 20);
			this->radioButton1->TabIndex = 16;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Estudiante";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &CustomerForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(343, 304);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(94, 20);
			this->radioButton2->TabIndex = 17;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Anunciante";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &CustomerForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(586, 304);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(135, 20);
			this->radioButton3->TabIndex = 18;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Gerente de tienda";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(322, 354);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(138, 16);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Nombre de compañia";
			// 
			// txtCompanyName
			// 
			this->txtCompanyName->Location = System::Drawing::Point(339, 383);
			this->txtCompanyName->Name = L"txtCompanyName";
			this->txtCompanyName->Size = System::Drawing::Size(121, 22);
			this->txtCompanyName->TabIndex = 20;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(570, 383);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 16);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Meta";
			// 
			// txtGoals
			// 
			this->txtGoals->Location = System::Drawing::Point(631, 383);
			this->txtGoals->Name = L"txtGoals";
			this->txtGoals->Size = System::Drawing::Size(100, 22);
			this->txtGoals->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(570, 437);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(50, 16);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Salario";
			// 
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(631, 437);
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(100, 22);
			this->txtSalary->TabIndex = 24;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(322, 418);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(123, 16);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Link de pagina web";
			// 
			// txtWebPage
			// 
			this->txtWebPage->Location = System::Drawing::Point(325, 461);
			this->txtWebPage->Name = L"txtWebPage";
			this->txtWebPage->Size = System::Drawing::Size(207, 22);
			this->txtWebPage->TabIndex = 26;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 721);
			this->Controls->Add(this->txtWebPage);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->txtSalary);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txtGoals);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txtCompanyName);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->UpdateCustomer);
			this->Controls->Add(this->DeleteCustomer);
			this->Controls->Add(this->AddCustomer);
			this->Controls->Add(this->dgvCustomer);
			this->Controls->Add(this->btnUpdatePhoto);
			this->Controls->Add(this->pbCustomer);
			this->Controls->Add(this->rbtnFem);
			this->Controls->Add(this->rbtnMasc);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->txtDocNumber);
			this->Controls->Add(this->txtCustomerPoints);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->txtCustomerId);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtCustomerLastName);
			this->Controls->Add(this->txtCustomerName);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}