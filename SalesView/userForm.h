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
	/// Resumen de UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
	private: System::Windows::Forms::RadioButton^ rbtnAnnoucer;
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
			this->rbtnAnnoucer = (gcnew System::Windows::Forms::RadioButton());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->BeginInit();
			this->GenBox->SuspendLayout();
			this->ProfileBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 10);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 47);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 109);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 78);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Apellido (*)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 191);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Teléfono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(44, 268);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 16);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Fec. Nac.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(247, 10);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"DNI (*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(44, 231);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 16);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Género";
			// 
			// txtCustomerName
			// 
			this->txtCustomerName->Location = System::Drawing::Point(152, 47);
			this->txtCustomerName->Margin = System::Windows::Forms::Padding(4);
			this->txtCustomerName->Name = L"txtCustomerName";
			this->txtCustomerName->Size = System::Drawing::Size(339, 22);
			this->txtCustomerName->TabIndex = 2;
			// 
			// txtDocNumber
			// 
			this->txtDocNumber->Location = System::Drawing::Point(307, 10);
			this->txtDocNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtDocNumber->Name = L"txtDocNumber";
			this->txtDocNumber->Size = System::Drawing::Size(184, 22);
			this->txtDocNumber->TabIndex = 2;
			// 
			// txtCustomerId
			// 
			this->txtCustomerId->Location = System::Drawing::Point(152, 10);
			this->txtCustomerId->Margin = System::Windows::Forms::Padding(4);
			this->txtCustomerId->Name = L"txtCustomerId";
			this->txtCustomerId->Size = System::Drawing::Size(85, 22);
			this->txtCustomerId->TabIndex = 2;
			// 
			// txtCustomerLastName
			// 
			this->txtCustomerLastName->Location = System::Drawing::Point(152, 78);
			this->txtCustomerLastName->Margin = System::Windows::Forms::Padding(4);
			this->txtCustomerLastName->Name = L"txtCustomerLastName";
			this->txtCustomerLastName->Size = System::Drawing::Size(339, 22);
			this->txtCustomerLastName->TabIndex = 2;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(152, 109);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(339, 22);
			this->txtEmail->TabIndex = 2;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(152, 191);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(224, 22);
			this->txtPhoneNumber->TabIndex = 2;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(152, 268);
			this->dtpBirthday->Margin = System::Windows::Forms::Padding(4);
			this->dtpBirthday->MaxDate = System::DateTime(2023, 2, 7, 0, 0, 0, 0);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(265, 22);
			this->dtpBirthday->TabIndex = 3;
			this->dtpBirthday->Value = System::DateTime(2023, 2, 7, 0, 0, 0, 0);
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Location = System::Drawing::Point(7, 11);
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
			this->pbCustomer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCustomer.BackgroundImage")));
			this->pbCustomer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbCustomer->Location = System::Drawing::Point(550, 10);
			this->pbCustomer->Margin = System::Windows::Forms::Padding(4);
			this->pbCustomer->Name = L"pbCustomer";
			this->pbCustomer->Size = System::Drawing::Size(151, 128);
			this->pbCustomer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbCustomer->TabIndex = 6;
			this->pbCustomer->TabStop = false;
			// 
			// btnUpdatePhoto
			// 
			this->btnUpdatePhoto->Location = System::Drawing::Point(571, 146);
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
			this->AddUser->Location = System::Drawing::Point(103, 387);
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
			this->DeleteUser->Location = System::Drawing::Point(424, 387);
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
			this->UpdateUser->Location = System::Drawing::Point(264, 387);
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
			this->label11->Location = System::Drawing::Point(44, 146);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 16);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Usuario";
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(152, 143);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(100, 22);
			this->txtUser->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(271, 146);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 16);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Contraseña";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(353, 143);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(124, 22);
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
			this->rbtnStudent->CheckedChanged += gcnew System::EventHandler(this, &UserForm::radioButton1_CheckedChanged);
			// 
			// rbtnAnnoucer
			// 
			this->rbtnAnnoucer->AutoSize = true;
			this->rbtnAnnoucer->Location = System::Drawing::Point(127, 16);
			this->rbtnAnnoucer->Name = L"rbtnAnnoucer";
			this->rbtnAnnoucer->Size = System::Drawing::Size(94, 20);
			this->rbtnAnnoucer->TabIndex = 17;
			this->rbtnAnnoucer->TabStop = true;
			this->rbtnAnnoucer->Text = L"Anunciante";
			this->rbtnAnnoucer->UseVisualStyleBackColor = true;
			this->rbtnAnnoucer->CheckedChanged += gcnew System::EventHandler(this, &UserForm::radioButton2_CheckedChanged);
			// 
			// rbtnStoreManager
			// 
			this->rbtnStoreManager->AutoSize = true;
			this->rbtnStoreManager->Location = System::Drawing::Point(237, 16);
			this->rbtnStoreManager->Name = L"rbtnStoreManager";
			this->rbtnStoreManager->Size = System::Drawing::Size(135, 20);
			this->rbtnStoreManager->TabIndex = 18;
			this->rbtnStoreManager->TabStop = true;
			this->rbtnStoreManager->Text = L"Gerente de tienda";
			this->rbtnStoreManager->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 328);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 16);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Perfil";
			// 
			// dgvCustomer
			// 
			this->dgvCustomer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCustomer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id, this->Nombre,
					this->Apellidos, this->Email, this->Teléfono
			});
			this->dgvCustomer->Location = System::Drawing::Point(47, 442);
			this->dgvCustomer->Name = L"dgvCustomer";
			this->dgvCustomer->RowHeadersWidth = 51;
			this->dgvCustomer->RowTemplate->Height = 24;
			this->dgvCustomer->Size = System::Drawing::Size(654, 248);
			this->dgvCustomer->TabIndex = 20;
			this->dgvCustomer->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserForm::dgvCustomer_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 125;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// Apellidos
			// 
			this->Apellidos->HeaderText = L"Apellidos";
			this->Apellidos->MinimumWidth = 6;
			this->Apellidos->Name = L"Apellidos";
			this->Apellidos->Width = 125;
			// 
			// Email
			// 
			this->Email->HeaderText = L"Email";
			this->Email->MinimumWidth = 6;
			this->Email->Name = L"Email";
			this->Email->Width = 125;
			// 
			// Teléfono
			// 
			this->Teléfono->HeaderText = L"Teléfono";
			this->Teléfono->MinimumWidth = 6;
			this->Teléfono->Name = L"Teléfono";
			this->Teléfono->Width = 125;
			// 
			// GenBox
			// 
			this->GenBox->Controls->Add(this->rbtnFem);
			this->GenBox->Controls->Add(this->rbtnMasc);
			this->GenBox->Location = System::Drawing::Point(152, 220);
			this->GenBox->Name = L"GenBox";
			this->GenBox->Size = System::Drawing::Size(200, 34);
			this->GenBox->TabIndex = 21;
			this->GenBox->TabStop = false;
			// 
			// ProfileBox
			// 
			this->ProfileBox->Controls->Add(this->rbtnStoreManager);
			this->ProfileBox->Controls->Add(this->rbtnAnnoucer);
			this->ProfileBox->Controls->Add(this->rbtnStudent);
			this->ProfileBox->Location = System::Drawing::Point(152, 312);
			this->ProfileBox->Name = L"ProfileBox";
			this->ProfileBox->Size = System::Drawing::Size(455, 36);
			this->ProfileBox->TabIndex = 22;
			this->ProfileBox->TabStop = false;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 754);
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
			this->Location = System::Drawing::Point(47, 434);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"UserForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mantenimiento de usuarios";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->EndInit();
			this->GenBox->ResumeLayout(false);
			this->GenBox->PerformLayout();
			this->ProfileBox->ResumeLayout(false);
			this->ProfileBox->PerformLayout();
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
	private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
				   MessageBox::Show("La email del usuario no debe estar vacío.");
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
			   if (!(rbtnStudent->Checked || rbtnAnnoucer->Checked || rbtnStoreManager->Checked)) {
				   MessageBox::Show("Debe elegir un perfil.");
				   return 1;
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

			   // rbtn
			   rbtnMasc->Checked = false;
			   rbtnFem->Checked = false;
			   rbtnStudent->Checked = false;
			   rbtnAnnoucer->Checked = false;
			   rbtnStoreManager->Checked = false;
			   pbCustomer->Image = nullptr;

			   // Date
			   dtpBirthday->Value = DateTime::Today;
		   }
		   void PutOnData(Person^ user) {
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

			   // Profile
			   if (rbtnStudent->Checked) user->Profile = 'S';
			   else if (rbtnStoreManager->Checked) user->Profile = 'M';
			   else user->Profile = 'A';

			   // BirthDay
			   String^ birthday = Convert::ToString(dtpBirthday->Value);
			   user->Birthday = birthday;

			   // Image
			   if (pbCustomer != nullptr && pbCustomer->Image != nullptr) {
				   System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				   pbCustomer->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				   user->Photo = ms->ToArray();
			   }
		   }

		   // CRUD
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
		Person^ theresone = Controller::QueryUserById(Convert::ToInt32(txtCustomerId->Text));
		if (theresone != nullptr) { MessageBox::Show("El ID de usuario ya existe."); return; }


		// Save Data
		Person^ user = gcnew Person();
		PutOnData(user);

		Controller::AddUser(user);

		CleanControls();
		ShowUsers();
	}
	private: System::Void UpdateCustomer_Click(System::Object^ sender, System::EventArgs^ e) {

		// Verification
		int returned = Verification();
		if (returned == 1) return;

		// Make Person
		Person^ user = gcnew Person();
		PutOnData(user);

		Controller::UpdateUser(user);
		CleanControls();
		ShowUsers();
	}
	private: System::Void dgvCustomer_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Build tools
		int selectedRowIndex = dgvCustomer->SelectedCells[0]->RowIndex;
		List<Person^>^ myPersonList = Controller::QueryAllUsers();

		int userId;
		if (selectedRowIndex >= (myPersonList->Count)) { CleanControls(); return; }
		userId = Convert::ToInt32(dgvCustomer->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Person^ p = Controller::QueryUserById(userId);


		// Put on data
		txtCustomerId->Text = "" + p->Id;
		txtDocNumber->Text = "" + p->DocNumber;
		txtCustomerName->Text = "" + p->Name;
		txtCustomerLastName->Text = "" + p->LastName;
		txtEmail->Text = "" + p->Email;
		txtUser->Text = "" + p->Username;
		txtPassword->Text = "" + p->Password;
		txtPhoneNumber->Text = "" + p->PhoneNumber;

		// Gen
		if ((p->Gender)=='M') rbtnMasc->Checked = true;
		else rbtnFem->Checked= true;

		// Profile
		if (p->Profile == 'S') rbtnStudent->Checked = true;
		else if (p->Profile == 'M') rbtnStoreManager->Checked = true;
		else rbtnAnnoucer->Checked = true;

		// Date
		dtpBirthday->Value = Convert::ToDateTime( p->Birthday);
		// Put Image
		if (p->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
			pbCustomer->Image = Image::FromStream(ms);
		}
		else {
			pbCustomer->Image = gcnew Bitmap("D:\\PUCP\\LPOO\\PROYECTO\\PCS\\PC3\\Vetto\\resources\\UserPictures\\Default.png");
		}
	}
	private: System::Void btnUpdatePhoto_Click(System::Object^ sender, System::EventArgs^ e) {
				OpenFileDialog^ opnfd = gcnew OpenFileDialog();
				opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
				if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) pbCustomer->Image = gcnew Bitmap(opnfd->FileName);
				else pbCustomer->Image = gcnew Bitmap("D:\\PUCP\\LPOO\\PROYECTO\\PCS\\PC3\\Vetto\\resources\\UserPictures\\Default.png");
			}
	private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowUsers();
	}
	};
}