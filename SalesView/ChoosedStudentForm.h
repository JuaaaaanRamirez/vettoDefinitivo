#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ChoosedStudentForm
	/// </summary>
	public ref class ChoosedStudentForm : public System::Windows::Forms::Form
	{
	public:
		ChoosedStudentForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ChoosedStudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtAddress;
	protected:

	private: System::Windows::Forms::Button^ btnAddress;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->btnAddress = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Direcci�n de domicilio:";
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(10, 29);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(447, 45);
			this->txtAddress->TabIndex = 1;
			// 
			// btnAddress
			// 
			this->btnAddress->Location = System::Drawing::Point(202, 80);
			this->btnAddress->Name = L"btnAddress";
			this->btnAddress->Size = System::Drawing::Size(75, 25);
			this->btnAddress->TabIndex = 2;
			this->btnAddress->Text = L"Aceptar";
			this->btnAddress->UseVisualStyleBackColor = true;
			this->btnAddress->Click += gcnew System::EventHandler(this, &ChoosedStudentForm::btnAddress_Click);
			// 
			// ChoosedStudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 114);
			this->Controls->Add(this->btnAddress);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->label1);
			this->Name = L"ChoosedStudentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Informaci�n adicional";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void btnAddress_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verification
		if (txtAddress->Text == "") { MessageBox::Show("La direcci�n de domicilio no puede estar vac�a."); return; }

		// Look For Customer!
		
		
	}
	};
}
