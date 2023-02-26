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
	using namespace Threading;
	/// <summary>
	/// Resumen de UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	private:
		Thread^ myThread;
	public:
		UserForm(void)
		{
			InitializeComponent();
			myThread = gcnew Thread(gcnew ThreadStart(this, &UserForm::MyRun));
			myThread->IsBackground = true;
			myThread->Start();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		delegate void MyDelegate();

		void MyRun() {
			while (true) {
				try {
					myThread->Sleep(10000);//10s
					Invoke(gcnew MyDelegate(this, &UserForm::ShowUsers));
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
		~UserForm()
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

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtCustomerName;
	private: System::Windows::Forms::TextBox^ txtDocNumber;




	private: System::Windows::Forms::TextBox^ txtCustomerId;
	private: System::Windows::Forms::TextBox^ txtCustomerLastName;
	private: System::Windows::Forms::TextBox^ txtEmail;

	private: System::Windows::Forms::TextBox^ txtPhoneNumber;

	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::RadioButton^ rbtnMasc;
	private: System::Windows::Forms::RadioButton^ rbtnFem;
	private: System::Windows::Forms::PictureBox^ pbCustomer;

	private: System::Windows::Forms::Button^ btnUpdatePhoto;








	private: System::Windows::Forms::Button^ AddUser;
	private: System::Windows::Forms::Button^ DeleteUser;


	private: System::Windows::Forms::Button^ UpdateUser;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::RadioButton^ rbtnStudent;
	private: System::Windows::Forms::RadioButton^ rbtnAnnouncer;

	private: System::Windows::Forms::RadioButton^ rbtnStoreManager;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dgvCustomer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellidos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Teléfono;
	private: System::Windows::Forms::GroupBox^ GenBox;
	private: System::Windows::Forms::GroupBox^ ProfileBox;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ Addresslb;

	private: System::Windows::Forms::TextBox^ txtAdress;

	private: System::Windows::Forms::GroupBox^ Studentbx;
	private: System::Windows::Forms::TextBox^ txtCPoints;


	private: System::Windows::Forms::Label^ Pointslb;
	private: System::Windows::Forms::GroupBox^ StoreManagerbx;
	private: System::Windows::Forms::TextBox^ txtStatus;

	private: System::Windows::Forms::TextBox^ txtAStore;

	private: System::Windows::Forms::TextBox^ txtSalary;

	private: System::Windows::Forms::Label^ Statuslb;
	private: System::Windows::Forms::Label^ Storelb;
	private: System::Windows::Forms::Label^ Salarylb;
	private: System::Windows::Forms::TextBox^ txtGoal;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ Companylb;
	private: System::Windows::Forms::Label^ WebSitelb;
	private: System::Windows::Forms::Label^ Adslb;
	private: System::Windows::Forms::TextBox^ txtCompanyName;


	private: System::Windows::Forms::GroupBox^ Announcerbx;
	private: System::Windows::Forms::TextBox^ txtWebSite;
	private: System::Windows::Forms::PictureBox^ AdsImage;
private: System::Windows::Forms::CheckBox^ chBxPass;








		   //private: System::Windows::Forms::DataGridView^ dgvCustomer;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtCustomerName = (gcnew System::Windows::Forms::TextBox());
			this->txtDocNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerId = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->rbtnMasc = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnFem = (gcnew System::Windows::Forms::RadioButton());
			this->pbCustomer = (gcnew System::Windows::Forms::PictureBox());
			this->btnUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->AddUser = (gcnew System::Windows::Forms::Button());
			this->DeleteUser = (gcnew System::Windows::Forms::Button());
			this->UpdateUser = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->rbtnStudent = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnAnnouncer = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnStoreManager = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dgvCustomer = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellidos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Teléfono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->GenBox = (gcnew System::Windows::Forms::GroupBox());
			this->ProfileBox = (gcnew System::Windows::Forms::GroupBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->Addresslb = (gcnew System::Windows::Forms::Label());
			this->txtAdress = (gcnew System::Windows::Forms::TextBox());
			this->Studentbx = (gcnew System::Windows::Forms::GroupBox());
			this->txtCPoints = (gcnew System::Windows::Forms::TextBox());
			this->Pointslb = (gcnew System::Windows::Forms::Label());
			this->StoreManagerbx = (gcnew System::Windows::Forms::GroupBox());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->txtAStore = (gcnew System::Windows::Forms::TextBox());
			this->txtSalary = (gcnew System::Windows::Forms::TextBox());
			this->Statuslb = (gcnew System::Windows::Forms::Label());
			this->Storelb = (gcnew System::Windows::Forms::Label());
			this->Salarylb = (gcnew System::Windows::Forms::Label());
			this->txtGoal = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Companylb = (gcnew System::Windows::Forms::Label());
			this->WebSitelb = (gcnew System::Windows::Forms::Label());
			this->Adslb = (gcnew System::Windows::Forms::Label());
			this->txtCompanyName = (gcnew System::Windows::Forms::TextBox());
			this->Announcerbx = (gcnew System::Windows::Forms::GroupBox());
			this->AdsImage = (gcnew System::Windows::Forms::PictureBox());
			this->txtWebSite = (gcnew System::Windows::Forms::TextBox());
			this->chBxPass = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->BeginInit();
			this->GenBox->SuspendLayout();
			this->ProfileBox->SuspendLayout();
			this->Studentbx->SuspendLayout();
			this->StoreManagerbx->SuspendLayout();
			this->Announcerbx->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AdsImage))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 41);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 101);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 71);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Apellidos";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(21, 161);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Teléfono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 231);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Fec. Nac.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(196, 11);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"DNI";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(21, 201);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 16);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Género";
			// 
			// txtCustomerName
			// 
			this->txtCustomerName->Location = System::Drawing::Point(86, 41);
			this->txtCustomerName->Margin = System::Windows::Forms::Padding(4);
			this->txtCustomerName->Name = L"txtCustomerName";
			this->txtCustomerName->Size = System::Drawing::Size(339, 22);
			this->txtCustomerName->TabIndex = 2;
			// 
			// txtDocNumber
			// 
			this->txtDocNumber->Location = System::Drawing::Point(234, 11);
			this->txtDocNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtDocNumber->Name = L"txtDocNumber";
			this->txtDocNumber->Size = System::Drawing::Size(191, 22);
			this->txtDocNumber->TabIndex = 2;
			this->txtDocNumber->TextChanged += gcnew System::EventHandler(this, &UserForm::txtDocNumber_TextChanged);
			// 
			// txtCustomerId
			// 
			this->txtCustomerId->Location = System::Drawing::Point(86, 11);
			this->txtCustomerId->Margin = System::Windows::Forms::Padding(4);
			this->txtCustomerId->Name = L"txtCustomerId";
			this->txtCustomerId->Size = System::Drawing::Size(85, 22);
			this->txtCustomerId->TabIndex = 2;
			// 
			// txtCustomerLastName
			// 
			this->txtCustomerLastName->Location = System::Drawing::Point(86, 71);
			this->txtCustomerLastName->Margin = System::Windows::Forms::Padding(4);
			this->txtCustomerLastName->Name = L"txtCustomerLastName";
			this->txtCustomerLastName->Size = System::Drawing::Size(339, 22);
			this->txtCustomerLastName->TabIndex = 2;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(86, 101);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(339, 22);
			this->txtEmail->TabIndex = 2;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(86, 161);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(339, 22);
			this->txtPhoneNumber->TabIndex = 2;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(86, 231);
			this->dtpBirthday->Margin = System::Windows::Forms::Padding(4);
			this->dtpBirthday->MaxDate = System::DateTime(3042, 12, 31, 0, 0, 0, 0);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(265, 22);
			this->dtpBirthday->TabIndex = 3;
			this->dtpBirthday->Value = System::DateTime(2023, 2, 7, 0, 0, 0, 0);
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Location = System::Drawing::Point(0, 11);
			this->rbtnMasc->Margin = System::Windows::Forms::Padding(4);
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
			this->rbtnFem->Location = System::Drawing::Point(127, 11);
			this->rbtnFem->Margin = System::Windows::Forms::Padding(4);
			this->rbtnFem->Name = L"rbtnFem";
			this->rbtnFem->Size = System::Drawing::Size(58, 20);
			this->rbtnFem->TabIndex = 5;
			this->rbtnFem->TabStop = true;
			this->rbtnFem->Text = L"Fem.";
			this->rbtnFem->UseVisualStyleBackColor = true;
			// 
			// pbCustomer
			// 
			this->pbCustomer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pbCustomer->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCustomer.InitialImage")));
			this->pbCustomer->Location = System::Drawing::Point(457, 13);
			this->pbCustomer->Margin = System::Windows::Forms::Padding(4);
			this->pbCustomer->Name = L"pbCustomer";
			this->pbCustomer->Size = System::Drawing::Size(151, 128);
			this->pbCustomer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbCustomer->TabIndex = 6;
			this->pbCustomer->TabStop = false;
			// 
			// btnUpdatePhoto
			// 
			this->btnUpdatePhoto->Location = System::Drawing::Point(478, 149);
			this->btnUpdatePhoto->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdatePhoto->Name = L"btnUpdatePhoto";
			this->btnUpdatePhoto->Size = System::Drawing::Size(100, 28);
			this->btnUpdatePhoto->TabIndex = 7;
			this->btnUpdatePhoto->Text = L"Editar foto";
			this->btnUpdatePhoto->UseVisualStyleBackColor = true;
			this->btnUpdatePhoto->Click += gcnew System::EventHandler(this, &UserForm::btnUpdatePhoto_Click);
			// 
			// AddUser
			// 
			this->AddUser->Location = System::Drawing::Point(86, 324);
			this->AddUser->Margin = System::Windows::Forms::Padding(4);
			this->AddUser->Name = L"AddUser";
			this->AddUser->Size = System::Drawing::Size(100, 28);
			this->AddUser->TabIndex = 9;
			this->AddUser->Text = L"Agregar";
			this->AddUser->UseVisualStyleBackColor = true;
			this->AddUser->Click += gcnew System::EventHandler(this, &UserForm::AddCustomer_Click);
			// 
			// DeleteUser
			// 
			this->DeleteUser->Location = System::Drawing::Point(390, 324);
			this->DeleteUser->Margin = System::Windows::Forms::Padding(4);
			this->DeleteUser->Name = L"DeleteUser";
			this->DeleteUser->Size = System::Drawing::Size(100, 28);
			this->DeleteUser->TabIndex = 10;
			this->DeleteUser->Text = L"Eliminar";
			this->DeleteUser->UseVisualStyleBackColor = true;
			this->DeleteUser->Click += gcnew System::EventHandler(this, &UserForm::DeleteCustomer_Click);
			// 
			// UpdateUser
			// 
			this->UpdateUser->Location = System::Drawing::Point(234, 324);
			this->UpdateUser->Margin = System::Windows::Forms::Padding(4);
			this->UpdateUser->Name = L"UpdateUser";
			this->UpdateUser->Size = System::Drawing::Size(100, 28);
			this->UpdateUser->TabIndex = 11;
			this->UpdateUser->Text = L"Modificar";
			this->UpdateUser->UseVisualStyleBackColor = true;
			this->UpdateUser->Click += gcnew System::EventHandler(this, &UserForm::UpdateCustomer_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(21, 131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 16);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Usuario";
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(86, 131);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(100, 22);
			this->txtUser->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(196, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 16);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Contraseña";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(278, 131);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(147, 22);
			this->txtPassword->TabIndex = 15;
			// 
			// rbtnStudent
			// 
			this->rbtnStudent->AutoSize = true;
			this->rbtnStudent->Location = System::Drawing::Point(6, 16);
			this->rbtnStudent->Name = L"rbtnStudent";
			this->rbtnStudent->Size = System::Drawing::Size(91, 20);
			this->rbtnStudent->TabIndex = 16;
			this->rbtnStudent->TabStop = true;
			this->rbtnStudent->Text = L"Estudiante";
			this->rbtnStudent->UseVisualStyleBackColor = true;
			this->rbtnStudent->CheckedChanged += gcnew System::EventHandler(this, &UserForm::rbtnStudent_CheckedChanged);
			// 
			// rbtnAnnouncer
			// 
			this->rbtnAnnouncer->AutoSize = true;
			this->rbtnAnnouncer->Location = System::Drawing::Point(127, 16);
			this->rbtnAnnouncer->Name = L"rbtnAnnouncer";
			this->rbtnAnnouncer->Size = System::Drawing::Size(94, 20);
			this->rbtnAnnouncer->TabIndex = 17;
			this->rbtnAnnouncer->TabStop = true;
			this->rbtnAnnouncer->Text = L"Anunciante";
			this->rbtnAnnouncer->UseVisualStyleBackColor = true;
			this->rbtnAnnouncer->CheckedChanged += gcnew System::EventHandler(this, &UserForm::rbtnAnnouncer_CheckedChanged);
			// 
			// rbtnStoreManager
			// 
			this->rbtnStoreManager->AutoSize = true;
			this->rbtnStoreManager->Location = System::Drawing::Point(237, 15);
			this->rbtnStoreManager->Name = L"rbtnStoreManager";
			this->rbtnStoreManager->Size = System::Drawing::Size(135, 20);
			this->rbtnStoreManager->TabIndex = 18;
			this->rbtnStoreManager->TabStop = true;
			this->rbtnStoreManager->Text = L"Gerente de tienda";
			this->rbtnStoreManager->UseVisualStyleBackColor = true;
			this->rbtnStoreManager->CheckedChanged += gcnew System::EventHandler(this, &UserForm::rbtnStoreManager_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 16);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Perfil";
			// 
			// dgvCustomer
			// 
			this->dgvCustomer->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvCustomer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCustomer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Nombre,
					this->Apellidos, this->Email, this->Teléfono
			});
			this->dgvCustomer->Location = System::Drawing::Point(24, 370);
			this->dgvCustomer->Name = L"dgvCustomer";
			this->dgvCustomer->ReadOnly = true;
			this->dgvCustomer->RowHeadersWidth = 51;
			this->dgvCustomer->RowTemplate->Height = 24;
			this->dgvCustomer->Size = System::Drawing::Size(584, 248);
			this->dgvCustomer->TabIndex = 20;
			this->dgvCustomer->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserForm::dgvCustomer_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 125;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			this->Nombre->Width = 125;
			// 
			// Apellidos
			// 
			this->Apellidos->HeaderText = L"Apellidos";
			this->Apellidos->MinimumWidth = 6;
			this->Apellidos->Name = L"Apellidos";
			this->Apellidos->ReadOnly = true;
			this->Apellidos->Width = 125;
			// 
			// Email
			// 
			this->Email->HeaderText = L"Email";
			this->Email->MinimumWidth = 6;
			this->Email->Name = L"Email";
			this->Email->ReadOnly = true;
			this->Email->Width = 125;
			// 
			// Teléfono
			// 
			this->Teléfono->HeaderText = L"Teléfono";
			this->Teléfono->MinimumWidth = 6;
			this->Teléfono->Name = L"Teléfono";
			this->Teléfono->ReadOnly = true;
			this->Teléfono->Width = 125;
			// 
			// GenBox
			// 
			this->GenBox->Controls->Add(this->rbtnFem);
			this->GenBox->Controls->Add(this->rbtnMasc);
			this->GenBox->Location = System::Drawing::Point(86, 191);
			this->GenBox->Name = L"GenBox";
			this->GenBox->Size = System::Drawing::Size(200, 34);
			this->GenBox->TabIndex = 21;
			this->GenBox->TabStop = false;
			// 
			// ProfileBox
			// 
			this->ProfileBox->Controls->Add(this->rbtnStoreManager);
			this->ProfileBox->Controls->Add(this->rbtnAnnouncer);
			this->ProfileBox->Controls->Add(this->rbtnStudent);
			this->ProfileBox->Location = System::Drawing::Point(86, 261);
			this->ProfileBox->Name = L"ProfileBox";
			this->ProfileBox->Size = System::Drawing::Size(455, 46);
			this->ProfileBox->TabIndex = 22;
			this->ProfileBox->TabStop = false;
			// 
			// Addresslb
			// 
			this->Addresslb->AutoSize = true;
			this->Addresslb->Location = System::Drawing::Point(0, 11);
			this->Addresslb->Name = L"Addresslb";
			this->Addresslb->Size = System::Drawing::Size(64, 16);
			this->Addresslb->TabIndex = 23;
			this->Addresslb->Text = L"Dirección";
			// 
			// txtAdress
			// 
			this->txtAdress->Location = System::Drawing::Point(71, 11);
			this->txtAdress->Name = L"txtAdress";
			this->txtAdress->Size = System::Drawing::Size(333, 22);
			this->txtAdress->TabIndex = 24;
			// 
			// Studentbx
			// 
			this->Studentbx->Controls->Add(this->txtCPoints);
			this->Studentbx->Controls->Add(this->Pointslb);
			this->Studentbx->Controls->Add(this->Addresslb);
			this->Studentbx->Controls->Add(this->txtAdress);
			this->Studentbx->Location = System::Drawing::Point(21, 300);
			this->Studentbx->Name = L"Studentbx";
			this->Studentbx->Size = System::Drawing::Size(404, 76);
			this->Studentbx->TabIndex = 25;
			this->Studentbx->TabStop = false;
			this->Studentbx->Visible = false;
			// 
			// txtCPoints
			// 
			this->txtCPoints->Location = System::Drawing::Point(71, 41);
			this->txtCPoints->Name = L"txtCPoints";
			this->txtCPoints->Size = System::Drawing::Size(333, 22);
			this->txtCPoints->TabIndex = 26;
			// 
			// Pointslb
			// 
			this->Pointslb->AutoSize = true;
			this->Pointslb->Location = System::Drawing::Point(0, 41);
			this->Pointslb->Name = L"Pointslb";
			this->Pointslb->Size = System::Drawing::Size(67, 32);
			this->Pointslb->TabIndex = 25;
			this->Pointslb->Text = L"Puntos de\r\nCliente";
			// 
			// StoreManagerbx
			// 
			this->StoreManagerbx->Controls->Add(this->txtStatus);
			this->StoreManagerbx->Controls->Add(this->txtAStore);
			this->StoreManagerbx->Controls->Add(this->txtSalary);
			this->StoreManagerbx->Controls->Add(this->Statuslb);
			this->StoreManagerbx->Controls->Add(this->Storelb);
			this->StoreManagerbx->Controls->Add(this->Salarylb);
			this->StoreManagerbx->Controls->Add(this->txtGoal);
			this->StoreManagerbx->Controls->Add(this->label8);
			this->StoreManagerbx->Location = System::Drawing::Point(21, 300);
			this->StoreManagerbx->Name = L"StoreManagerbx";
			this->StoreManagerbx->Size = System::Drawing::Size(404, 132);
			this->StoreManagerbx->TabIndex = 26;
			this->StoreManagerbx->TabStop = false;
			this->StoreManagerbx->Visible = false;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(87, 101);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(317, 22);
			this->txtStatus->TabIndex = 7;
			// 
			// txtAStore
			// 
			this->txtAStore->Location = System::Drawing::Point(87, 71);
			this->txtAStore->Name = L"txtAStore";
			this->txtAStore->Size = System::Drawing::Size(317, 22);
			this->txtAStore->TabIndex = 6;
			// 
			// txtSalary
			// 
			this->txtSalary->Location = System::Drawing::Point(87, 41);
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(317, 22);
			this->txtSalary->TabIndex = 5;
			// 
			// Statuslb
			// 
			this->Statuslb->AutoSize = true;
			this->Statuslb->Location = System::Drawing::Point(0, 101);
			this->Statuslb->Name = L"Statuslb";
			this->Statuslb->Size = System::Drawing::Size(50, 16);
			this->Statuslb->TabIndex = 4;
			this->Statuslb->Text = L"Estado";
			// 
			// Storelb
			// 
			this->Storelb->AutoSize = true;
			this->Storelb->Location = System::Drawing::Point(0, 71);
			this->Storelb->Name = L"Storelb";
			this->Storelb->Size = System::Drawing::Size(90, 16);
			this->Storelb->TabIndex = 3;
			this->Storelb->Text = L"Tienda Actual";
			// 
			// Salarylb
			// 
			this->Salarylb->AutoSize = true;
			this->Salarylb->Location = System::Drawing::Point(0, 41);
			this->Salarylb->Name = L"Salarylb";
			this->Salarylb->Size = System::Drawing::Size(50, 16);
			this->Salarylb->TabIndex = 2;
			this->Salarylb->Text = L"Salario";
			// 
			// txtGoal
			// 
			this->txtGoal->Location = System::Drawing::Point(87, 11);
			this->txtGoal->Name = L"txtGoal";
			this->txtGoal->Size = System::Drawing::Size(317, 22);
			this->txtGoal->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(0, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 16);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Meta Actual";
			// 
			// Companylb
			// 
			this->Companylb->AutoSize = true;
			this->Companylb->Location = System::Drawing::Point(0, 11);
			this->Companylb->Name = L"Companylb";
			this->Companylb->Size = System::Drawing::Size(69, 16);
			this->Companylb->TabIndex = 0;
			this->Companylb->Text = L"Compañía";
			// 
			// WebSitelb
			// 
			this->WebSitelb->AutoSize = true;
			this->WebSitelb->Location = System::Drawing::Point(0, 41);
			this->WebSitelb->Name = L"WebSitelb";
			this->WebSitelb->Size = System::Drawing::Size(65, 16);
			this->WebSitelb->TabIndex = 1;
			this->WebSitelb->Text = L"Sitio Web";
			// 
			// Adslb
			// 
			this->Adslb->AutoSize = true;
			this->Adslb->Location = System::Drawing::Point(0, 71);
			this->Adslb->Name = L"Adslb";
			this->Adslb->Size = System::Drawing::Size(55, 16);
			this->Adslb->TabIndex = 2;
			this->Adslb->Text = L"Anuncio";
			// 
			// txtCompanyName
			// 
			this->txtCompanyName->Location = System::Drawing::Point(75, 11);
			this->txtCompanyName->Name = L"txtCompanyName";
			this->txtCompanyName->Size = System::Drawing::Size(323, 22);
			this->txtCompanyName->TabIndex = 3;
			// 
			// Announcerbx
			// 
			this->Announcerbx->Controls->Add(this->AdsImage);
			this->Announcerbx->Controls->Add(this->txtWebSite);
			this->Announcerbx->Controls->Add(this->txtCompanyName);
			this->Announcerbx->Controls->Add(this->Adslb);
			this->Announcerbx->Controls->Add(this->WebSitelb);
			this->Announcerbx->Controls->Add(this->Companylb);
			this->Announcerbx->Location = System::Drawing::Point(21, 300);
			this->Announcerbx->Name = L"Announcerbx";
			this->Announcerbx->Size = System::Drawing::Size(401, 155);
			this->Announcerbx->TabIndex = 27;
			this->Announcerbx->TabStop = false;
			this->Announcerbx->Visible = false;
			// 
			// AdsImage
			// 
			this->AdsImage->Location = System::Drawing::Point(75, 71);
			this->AdsImage->Name = L"AdsImage";
			this->AdsImage->Size = System::Drawing::Size(150, 78);
			this->AdsImage->TabIndex = 5;
			this->AdsImage->TabStop = false;
			// 
			// txtWebSite
			// 
			this->txtWebSite->Location = System::Drawing::Point(75, 41);
			this->txtWebSite->Name = L"txtWebSite";
			this->txtWebSite->Size = System::Drawing::Size(323, 22);
			this->txtWebSite->TabIndex = 4;
			// 
			// chBxPass
			// 
			this->chBxPass->AutoSize = true;
			this->chBxPass->Location = System::Drawing::Point(460, 191);
			this->chBxPass->Name = L"chBxPass";
			this->chBxPass->Size = System::Drawing::Size(144, 20);
			this->chBxPass->TabIndex = 28;
			this->chBxPass->Text = L"Mostrar contraseña";
			this->chBxPass->UseVisualStyleBackColor = true;
			this->chBxPass->CheckedChanged += gcnew System::EventHandler(this, &UserForm::chBxPass_CheckedChanged);
			// 
			// UserForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->ClientSize = System::Drawing::Size(662, 633);
			this->Controls->Add(this->chBxPass);
			this->Controls->Add(this->Announcerbx);
			this->Controls->Add(this->StoreManagerbx);
			this->Controls->Add(this->Studentbx);
			this->Controls->Add(this->ProfileBox);
			this->Controls->Add(this->GenBox);
			this->Controls->Add(this->dgvCustomer);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->UpdateUser);
			this->Controls->Add(this->DeleteUser);
			this->Controls->Add(this->AddUser);
			this->Controls->Add(this->btnUpdatePhoto);
			this->Controls->Add(this->pbCustomer);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->txtDocNumber);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->txtCustomerId);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtCustomerLastName);
			this->Controls->Add(this->txtCustomerName);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"UserForm";
			this->Text = L"Mantenimiento de usuarios";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->EndInit();
			this->GenBox->ResumeLayout(false);
			this->GenBox->PerformLayout();
			this->ProfileBox->ResumeLayout(false);
			this->ProfileBox->PerformLayout();
			this->Studentbx->ResumeLayout(false);
			this->Studentbx->PerformLayout();
			this->StoreManagerbx->ResumeLayout(false);
			this->StoreManagerbx->PerformLayout();
			this->Announcerbx->ResumeLayout(false);
			this->Announcerbx->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AdsImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txtDocNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   // Functions
		   void ShowUsers() {
			   List<Person^>^ myPersonList = Controller::QueryAllUsers();		// Make List
			   dgvCustomer->Rows->Clear();										// Clear Dgv

			   for (int i = 0; i < myPersonList->Count; i++) {					// Look for!
				   dgvCustomer->Rows->Add(gcnew array<String^>{
					   "" + myPersonList[i]->Id,
						   "" + myPersonList[i]->Name,
						   "" + myPersonList[i]->LastName,
						   "" + myPersonList[i]->Email,
						   "" + myPersonList[i]->PhoneNumber
				   });
			   }
			   //PRUEBA DEL BUSCADOR DE PERSON POR ID
			/*
			   Person^ user = gcnew Person();
			   user = Controller::QueryUserById(3);
			   if (user != nullptr) {
				   dgvCustomer->Rows->Add(gcnew array<String^>{
					   "" + user->Id,
						   "" + user->Name,
						   "" + user->LastName,
						   "" + user->Email,
						   "" + user->PhoneNumber
				   });
			   }*/
		   }
		   int Verification() {
			   if (txtCustomerId->Text->Trim() == "") {
				   MessageBox::Show("El Id del usuario no debe estar vacío.");
				   return 1;
			   }
			   if (txtDocNumber->Text->Trim() == "") {
				   MessageBox::Show("El número del DNI no debe estar vacío.");
				   return 1;
			   }
			   if (txtCustomerName->Text->Trim() == "") {
				   MessageBox::Show("El nombre del usuario no debe estar vacío.");
				   return 1;
			   }
			   if (txtCustomerLastName->Text->Trim() == "") {
				   MessageBox::Show("El apellido del usuario no debe estar vacío.");
				   return 1;
			   }
			   if (txtEmail->Text->Trim() == "") {
				   MessageBox::Show("El email del usuario no debe estar vacío.");
				   return 1;
			   }
			   if (txtUser->Text->Trim() == "") {
				   MessageBox::Show("El nickname del usuario no debe estar vacío.");
				   return 1;
			   }
			   if (txtPassword->Text->Trim() == "") {
				   MessageBox::Show("Escriba una contraseña.");
				   return 1;
			   }
			   if (txtPhoneNumber->Text->Trim() == "") {
				   MessageBox::Show("El número de teléfono no debe estar vacío.");
				   return 1;
			   }
			   if (!(rbtnMasc->Checked || rbtnFem->Checked)) {
				   MessageBox::Show("Debe elegir un género.");
				   return 1;
			   }
			   if (!(rbtnStudent->Checked || rbtnAnnouncer->Checked || rbtnStoreManager->Checked)) {
				   MessageBox::Show("Debe elegir un perfil.");
				   return 1;
			   }

			   // According to Profile
			   if (rbtnStudent->Checked) {
				   if (txtAdress->Text->Trim() == "") { MessageBox::Show("La dirección del cliente no debe estar vacía."); return 1; }
				   if (txtCPoints->Text->Trim() == "") { MessageBox::Show("Los puntos de cliente no deben estar vacíos."); return 1; }
			   }
			   if (rbtnStoreManager->Checked) {
				   if (txtGoal->Text->Trim() == "") { MessageBox::Show("La meta del jefe de venta no debe estar vacía."); return 1; }
				   if (txtSalary->Text->Trim() == "") { MessageBox::Show("El salario del jefe de venta no debe estar vacío."); return 1;}
				   if (txtAStore->Text->Trim() == "") { MessageBox::Show("La tienda del jefe de venta no debe estar vacía."); return 1; }
				   if (txtStatus->Text->Trim() == "") { MessageBox::Show("El estado del jefe de venta no debe estar vacío."); return 1; }
			   }
			   if (rbtnAnnouncer->Checked) {
				   if (txtCompanyName->Text->Trim() == "") { MessageBox::Show("El nombre de la compañía no debe estar vacío."); return 1; }
				   if (txtWebSite->Text->Trim() == "") { MessageBox::Show("El sitio web no debe estar vacío."); return 1; }
			   }
			   return 0;
		   }
		   void CleanControls() {
			   txtCustomerId->Clear();
			   txtDocNumber->Clear();
			   txtCustomerName->Clear();
			   txtCustomerLastName->Clear();
			   txtEmail->Clear();
			   txtUser->Clear();
			   txtPassword->Clear();
			   txtPhoneNumber->Clear();
			   txtAdress->Clear();
			   txtCPoints->Clear();
			   txtGoal->Clear();
			   txtSalary->Clear();
			   txtAStore->Clear();
			   txtStatus->Clear();
			   txtCompanyName->Clear();
			   txtWebSite->Clear();

			   // rbtn
			   rbtnMasc->Checked = false;
			   rbtnFem->Checked = false;
			   rbtnStudent->Checked = false;
			   rbtnAnnouncer->Checked = false;
			   rbtnStoreManager->Checked = false;
			   pbCustomer->Image = nullptr;

			   // Date
			   dtpBirthday->Value = DateTime::Today;
		   }
		   Person^ PutOnData() {

			   Person^ user;
			   // Profile
			   if (rbtnStudent->Checked) {
				   user = gcnew Customer();
				   user->Profile = 'S';
				   safe_cast<Customer^>(user)->CustomerPoints = Convert::ToInt32(txtCPoints->Text);
				   safe_cast<Customer^>(user)->Address = txtAdress->Text;
			   }
			   else if (rbtnStoreManager->Checked) {
				   user = gcnew StoreManager();
				   user->Profile = 'M';
				   safe_cast<StoreManager^>(user)->Goals = Convert::ToDouble(txtGoal->Text);
				   safe_cast<StoreManager^>(user)->Salary = txtSalary->Text;
				   safe_cast<StoreManager^>(user)->Store = txtAStore->Text;
				   safe_cast<StoreManager^>(user)->Status = txtStatus->Text;
			   }
			   else {
				   user = gcnew Announcer();
				   user->Profile = 'A';
				   safe_cast<Announcer^>(user)->CompanyName = txtCompanyName->Text;
				   safe_cast<Announcer^>(user)->WebSiteLink = txtWebSite->Text;
				   safe_cast<Announcer^>(user)->AdInSistem = false;
				   safe_cast<Announcer^>(user)->NumberPictureBox = 0;
				   safe_cast<Announcer^>(user)->Ad = nullptr;

			   }

			   user->Id = Convert::ToInt32(txtCustomerId->Text);
			   user->DocNumber = txtDocNumber->Text;
			   user->Name = txtCustomerName->Text;
			   user->LastName = txtCustomerLastName->Text;
			   user->Email = txtEmail->Text;
			   user->Username = txtUser->Text;
			   user->Password = txtPassword->Text;
			   user->PhoneNumber = txtPhoneNumber->Text->Trim();

			   // Gen
			   if (rbtnMasc->Checked) user->Gender = 'M';
			   else user->Gender = 'F';

			   // BirthDay
			   String^ birthday = Convert::ToString(dtpBirthday->Value);
			   user->Birthday = birthday;

			   // Image
			   System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			   if (pbCustomer != nullptr && pbCustomer->Image != nullptr) {
				   pbCustomer->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				   user->Photo = ms->ToArray();
			   }
			   else {
				   pbCustomer->InitialImage->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				   user->Photo = ms->ToArray();
			   }

			   return user;
		   }

		   // CRUDss
	private: System::Void DeleteCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtCustomerId->Text->Equals("")) { MessageBox::Show("El Id del usuario no debe estar vacío."); return; }
		int ID = Convert::ToInt32(txtCustomerId->Text);

		Controller::DeleteUser(ID);
		CleanControls();
		ShowUsers();
	}
	private: System::Void AddCustomer_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verification
		int returned = Verification();
		if (returned == 1) return;


		// Is there anyone already?
		Person^ theresone = Controller::QueryPersonByCredentials(txtUser->Text,txtPassword->Text);
		Person^ theresone2 = Controller::QueryUserById(Convert::ToInt32(txtCustomerId->Text));
		if (theresone != nullptr || theresone2 != nullptr) { MessageBox::Show("El usuario ya existe."); return; }


		// Save Data
		Person^ user;
		if (rbtnStudent->Checked) user = gcnew Customer();
		else if (rbtnStoreManager->Checked) user = gcnew StoreManager();
		else user = gcnew Announcer();
		user = PutOnData();
		Controller::AddUser(user);
		CleanControls();
		ShowUsers();
	}
	private: System::Void UpdateCustomer_Click(System::Object^ sender, System::EventArgs^ e) {

		// Verification
		int returned = Verification();
		if (returned == 1) return;

		// Make Person
		Person^ user;
		if (rbtnStudent->Checked) user = gcnew Customer();
		else if (rbtnStoreManager->Checked) user = gcnew StoreManager();
		else user = gcnew Announcer();
		user = PutOnData();
		int ID = Convert::ToInt32(txtCustomerId->Text);
		Person^ UserWithoutChange = Controller::QueryUserById(ID);
		safe_cast<Customer^>(user)->WishList= safe_cast<Customer^>(UserWithoutChange)->WishList;
		Controller::UpdateUser(user);
		CleanControls();
		ShowUsers();
	}
	private: System::Void dgvCustomer_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Build tools
		int selectedRowIndex = dgvCustomer->SelectedCells[0]->RowIndex;
		List<Person^>^ myPersonList = Controller::QueryAllUsers();

		int userId;
		if (selectedRowIndex >= (myPersonList->Count)) { 
			CleanControls(); 
			return; 
		}
		userId = Convert::ToInt32(dgvCustomer->Rows[selectedRowIndex]->Cells[0]->Value->ToString());

		Person^ p;
		// Profile
		/*
		if (rbtnStudent->Checked) p = gcnew Customer();
		else if (rbtnStoreManager->Checked) p = gcnew StoreManager();
		else  p = gcnew Announcer();*/
		p = Controller::QueryUserById(userId);
		/*
		if (user->Profile== 'S') {
			Customer^ p = Controller::QueryUserById(userId);

			txtCPoints->Text = "" + p->CustomerPoints;
			txtAdress->Text = "" + p->Address;
		}else if (user->Profile == 'A') {
			Announcer^ p = gcnew Announcer();
		}
		else {
			StoreManager^ p = gcnew StoreManager();
		}*/

		// Put on data
		if (p->GetType() == Customer::typeid) {
			
			txtCPoints->Text = "" + dynamic_cast<Customer^>(p)->CustomerPoints;
			txtAdress->Text = "" + dynamic_cast<Customer^>(p)->Address;

		}
		else if (p->GetType() == Announcer::typeid) {
			txtCompanyName->Text = "" + dynamic_cast<Announcer^>(p)->CompanyName;
			txtWebSite->Text = "" + dynamic_cast<Announcer^>(p)->WebSiteLink;

		}
		else if (p->GetType() == StoreManager::typeid) {
			
			txtGoal->Text = "" + dynamic_cast<StoreManager^>(p)->Goals;
			txtSalary->Text = "" + dynamic_cast<StoreManager^>(p)->Salary;
			txtAStore->Text = "" + dynamic_cast<StoreManager^>(p)->Store;
			txtStatus->Text = "" + dynamic_cast<StoreManager^>(p)->Status;
		}

		txtCustomerId->Text = "" + p->Id;
		txtDocNumber->Text = "" + p->DocNumber;
		txtCustomerName->Text = "" + p->Name;
		txtCustomerLastName->Text = "" + p->LastName;
		txtEmail->Text = "" + p->Email;
		txtUser->Text = "" + p->Username;
		txtPassword->Text = "" + p->Password;
		txtPhoneNumber->Text = "" + p->PhoneNumber;
		/*
		if (p->Profile == 'S') {
			txtCPoints->Text = "" + dynamic_cast<Customer^>(p)->CustomerPoints;
	
			txtAdress->Text = "" + dynamic_cast<Customer^>(p)->Address;
		}
		else if (p->Profile == 'M') {
			txtGoal->Text = "" + dynamic_cast<StoreManager^>(p)->Goals;
			txtSalary->Text = "" + dynamic_cast<StoreManager^>(p)->Salary;
			txtAStore->Text = "" + dynamic_cast<StoreManager^>(p)->Store;
			txtStatus->Text = "" + dynamic_cast<StoreManager^>(p)->Status;
		}
		else if (p->Profile == 'A') {
			txtCompanyName->Text = "" + dynamic_cast<Announcer^>(p)->CompanyName;
			txtWebSite->Text = "" + dynamic_cast<Announcer^>(p)->WebSiteLink;
		}*/


		// Gen
		if ((p->Gender) == 'M') rbtnMasc->Checked = true;
		else rbtnFem->Checked = true;

		// Profile
		if (p->Profile == 'S') rbtnStudent->Checked = true;
		else if (p->Profile == 'M') rbtnStoreManager->Checked = true;
		else rbtnAnnouncer->Checked = true;

		// Date
		dtpBirthday->Value = Convert::ToDateTime(p->Birthday);
		// Put Image

		if (p->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
			pbCustomer->Image = Image::FromStream(ms);
		}
		/*else {
			pbCustomer->Image = gcnew Bitmap("resources/UserPictures/Default.png");
		}*/
	}
	private: System::Void btnUpdatePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ opnfd = gcnew OpenFileDialog();
		opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) pbCustomer->Image = gcnew Bitmap(opnfd->FileName);
		/*else pbCustomer->Image = gcnew Bitmap("resources/UserPictures/Default.png");*/
	}
	private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowUsers();
	}

		   //Rbtn Profile
	private: System::Void rbtnStudent_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		// Remember not to put FONT in AutoSize/AutoScale
		// Profile Student +55
		if (rbtnStudent->Checked) {

			// Change Size (X,Y+55)
			this->ClientSize = System::Drawing::Size(680 - 18, 680 - 47 + 55);
			// Move Elemets
			this->AddUser->Location = System::Drawing::Point(86, 324 + 55);
			this->UpdateUser->Location = System::Drawing::Point(234, 324 + 55);
			this->DeleteUser->Location = System::Drawing::Point(390, 324 + 55);
			this->dgvCustomer->Location = System::Drawing::Point(24, 370 + 55);

			// Add Direction
			Studentbx->Visible = true;
			StoreManagerbx->Visible = false;
			Announcerbx->Visible = false;
		}
		else {
			// Change Size (X,Y)
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

		/*// Profile Annoucer
		if (rbtnAnnoucer->Checked) {
			// Change Size (X,Y+55)
			this->ClientSize = System::Drawing::Size(680 - 18, 680 - 47 + 55);
			// Move Elemets
			this->AddUser->Location = System::Drawing::Point(86, 324 + 55);
			this->UpdateUser->Location = System::Drawing::Point(234, 324 + 55);
			this->DeleteUser->Location = System::Drawing::Point(390, 324 + 55);
			this->dgvCustomer->Location = System::Drawing::Point(24, 370 + 55);
			// Add Direction
			Studentbx->Visible = true;
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
		}*/
	}
	private: System::Void rbtnStoreManager_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// Profile Store Manager +110
		if (rbtnStoreManager->Checked) {
			// Change Size (X,Y+110)
			this->ClientSize = System::Drawing::Size(680 - 18, 680 - 47 + 110);
			// Move Elemets
			this->AddUser->Location = System::Drawing::Point(86, 324 + 110);
			this->UpdateUser->Location = System::Drawing::Point(234, 324 + 110);
			this->DeleteUser->Location = System::Drawing::Point(390, 324 + 110);
			this->dgvCustomer->Location = System::Drawing::Point(24, 370 + 110);

			// Add Direction
			StoreManagerbx->Visible = true;
			Studentbx->Visible = false;
			Announcerbx->Visible = false;
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
	}
	private: System::Void rbtnAnnouncer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// Profile Announcer +110+27=+137
		if (rbtnAnnouncer->Checked) {
			// Change Size (X,Y+137)
			this->ClientSize = System::Drawing::Size(680 - 18, 680 - 47 + 137);
			// Move Elemets
			this->AddUser->Location = System::Drawing::Point(86, 324 + 137);
			this->UpdateUser->Location = System::Drawing::Point(234, 324 + 137);
			this->DeleteUser->Location = System::Drawing::Point(390, 324 + 137);
			this->dgvCustomer->Location = System::Drawing::Point(24, 370 + 137);

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
	}
    private: System::Void chBxPass_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chBxPass->Checked) txtPassword->PasswordChar = false;
	else txtPassword->PasswordChar = '*';
}
};
}