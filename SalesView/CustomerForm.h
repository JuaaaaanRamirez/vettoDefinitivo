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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Apellido (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Dirección";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Teléfono";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(33, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Fec. Nac.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(329, 217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Puntos";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(185, 28);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"DNI (*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(289, 194);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Género";
			// 
			// txtCustomerName
			// 
			this->txtCustomerName->Location = System::Drawing::Point(114, 58);
			this->txtCustomerName->Name = L"txtCustomerName";
			this->txtCustomerName->Size = System::Drawing::Size(255, 20);
			this->txtCustomerName->TabIndex = 2;
			// 
			// txtDocNumber
			// 
			this->txtDocNumber->Location = System::Drawing::Point(230, 28);
			this->txtDocNumber->Name = L"txtDocNumber";
			this->txtDocNumber->Size = System::Drawing::Size(139, 20);
			this->txtDocNumber->TabIndex = 2;
			// 
			// txtCustomerId
			// 
			this->txtCustomerId->Location = System::Drawing::Point(114, 28);
			this->txtCustomerId->Name = L"txtCustomerId";
			this->txtCustomerId->Size = System::Drawing::Size(65, 20);
			this->txtCustomerId->TabIndex = 2;
			// 
			// txtCustomerLastName
			// 
			this->txtCustomerLastName->Location = System::Drawing::Point(114, 83);
			this->txtCustomerLastName->Name = L"txtCustomerLastName";
			this->txtCustomerLastName->Size = System::Drawing::Size(255, 20);
			this->txtCustomerLastName->TabIndex = 2;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(114, 108);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(255, 20);
			this->txtEmail->TabIndex = 2;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(114, 133);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(255, 53);
			this->txtAddress->TabIndex = 2;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(114, 192);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(169, 20);
			this->txtPhoneNumber->TabIndex = 2;
			// 
			// txtCustomerPoints
			// 
			this->txtCustomerPoints->Location = System::Drawing::Point(375, 217);
			this->txtCustomerPoints->Name = L"txtCustomerPoints";
			this->txtCustomerPoints->Size = System::Drawing::Size(65, 20);
			this->txtCustomerPoints->TabIndex = 2;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(114, 217);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(200, 20);
			this->dtpBirthday->TabIndex = 3;
			// 
			// rbtnMasc
			// 
			this->rbtnMasc->AutoSize = true;
			this->rbtnMasc->Location = System::Drawing::Point(351, 192);
			this->rbtnMasc->Name = L"rbtnMasc";
			this->rbtnMasc->Size = System::Drawing::Size(54, 17);
			this->rbtnMasc->TabIndex = 4;
			this->rbtnMasc->TabStop = true;
			this->rbtnMasc->Text = L"Masc.";
			this->rbtnMasc->UseVisualStyleBackColor = true;
			// 
			// rbtnFem
			// 
			this->rbtnFem->AutoSize = true;
			this->rbtnFem->Location = System::Drawing::Point(411, 192);
			this->rbtnFem->Name = L"rbtnFem";
			this->rbtnFem->Size = System::Drawing::Size(48, 17);
			this->rbtnFem->TabIndex = 5;
			this->rbtnFem->TabStop = true;
			this->rbtnFem->Text = L"Fem.";
			this->rbtnFem->UseVisualStyleBackColor = true;
			// 
			// pbCustomer
			// 
			this->pbCustomer->Location = System::Drawing::Point(390, 28);
			this->pbCustomer->Name = L"pbCustomer";
			this->pbCustomer->Size = System::Drawing::Size(100, 100);
			this->pbCustomer->TabIndex = 6;
			this->pbCustomer->TabStop = false;
			// 
			// btnUpdatePhoto
			// 
			this->btnUpdatePhoto->Location = System::Drawing::Point(401, 136);
			this->btnUpdatePhoto->Name = L"btnUpdatePhoto";
			this->btnUpdatePhoto->Size = System::Drawing::Size(75, 23);
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
			this->dgvCustomer->Location = System::Drawing::Point(36, 312);
			this->dgvCustomer->Name = L"dgvCustomer";
			this->dgvCustomer->Size = System::Drawing::Size(454, 205);
			this->dgvCustomer->TabIndex = 8;
			// 
			// customerId
			// 
			this->customerId->HeaderText = L"Id";
			this->customerId->Name = L"customerId";
			this->customerId->Width = 40;
			// 
			// fisrtName
			// 
			this->fisrtName->HeaderText = L"Nombres";
			this->fisrtName->Name = L"fisrtName";
			// 
			// lastName
			// 
			this->lastName->HeaderText = L"Apellidos";
			this->lastName->Name = L"lastName";
			// 
			// email
			// 
			this->email->HeaderText = L"Email";
			this->email->Name = L"email";
			// 
			// phoneNumber
			// 
			this->phoneNumber->HeaderText = L"Télefono";
			this->phoneNumber->Name = L"phoneNumber";
			this->phoneNumber->Width = 70;
			// 
			// AddCustomer
			// 
			this->AddCustomer->Location = System::Drawing::Point(95, 251);
			this->AddCustomer->Name = L"AddCustomer";
			this->AddCustomer->Size = System::Drawing::Size(75, 23);
			this->AddCustomer->TabIndex = 9;
			this->AddCustomer->Text = L"Agregar";
			this->AddCustomer->UseVisualStyleBackColor = true;
			// 
			// DeleteCustomer
			// 
			this->DeleteCustomer->Location = System::Drawing::Point(351, 251);
			this->DeleteCustomer->Name = L"DeleteCustomer";
			this->DeleteCustomer->Size = System::Drawing::Size(75, 23);
			this->DeleteCustomer->TabIndex = 10;
			this->DeleteCustomer->Text = L"Eliminar";
			this->DeleteCustomer->UseVisualStyleBackColor = true;
			// 
			// UpdateCustomer
			// 
			this->UpdateCustomer->Location = System::Drawing::Point(219, 251);
			this->UpdateCustomer->Name = L"UpdateCustomer";
			this->UpdateCustomer->Size = System::Drawing::Size(75, 23);
			this->UpdateCustomer->TabIndex = 11;
			this->UpdateCustomer->Text = L"Modificar";
			this->UpdateCustomer->UseVisualStyleBackColor = true;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 539);
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
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCustomer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCustomer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}