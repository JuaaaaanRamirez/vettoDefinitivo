#pragma once
namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginFirstForm
	/// </summary>
	public ref class LoginFirstForm : public System::Windows::Forms::Form
	{
	public:
		LoginFirstForm(void)
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
		~LoginFirstForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbWait;
	private: System::Windows::Forms::Label^ lbCart;

	private: System::Windows::Forms::Button^ btnLoguin;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginFirstForm::typeid));
			this->pbWait = (gcnew System::Windows::Forms::PictureBox());
			this->lbCart = (gcnew System::Windows::Forms::Label());
			this->btnLoguin = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbWait))->BeginInit();
			this->SuspendLayout();
			// 
			// pbWait
			// 
			this->pbWait->BackColor = System::Drawing::SystemColors::Window;
			this->pbWait->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbWait.Image")));
			this->pbWait->Location = System::Drawing::Point(-15, 16);
			this->pbWait->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pbWait->Name = L"pbWait";
			this->pbWait->Size = System::Drawing::Size(202, 130);
			this->pbWait->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbWait->TabIndex = 0;
			this->pbWait->TabStop = false;
			this->pbWait->Click += gcnew System::EventHandler(this, &LoginFirstForm::pbWait_Click);
			// 
			// lbCart
			// 
			this->lbCart->AutoSize = true;
			this->lbCart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCart->Location = System::Drawing::Point(11, 4);
			this->lbCart->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbCart->Name = L"lbCart";
			this->lbCart->Size = System::Drawing::Size(140, 36);
			this->lbCart->TabIndex = 1;
			this->lbCart->Text = L"¡Ingrese para seguir \r\ncomprando!";
			this->lbCart->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnLoguin
			// 
			this->btnLoguin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoguin->Location = System::Drawing::Point(45, 138);
			this->btnLoguin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnLoguin->Name = L"btnLoguin";
			this->btnLoguin->Size = System::Drawing::Size(77, 23);
			this->btnLoguin->TabIndex = 3;
			this->btnLoguin->Text = L"Ingresar";
			this->btnLoguin->UseVisualStyleBackColor = true;
			this->btnLoguin->Click += gcnew System::EventHandler(this, &LoginFirstForm::btnLoguin_Click);
			// 
			// LoginFirstForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(198, 165);
			this->Controls->Add(this->btnLoguin);
			this->Controls->Add(this->lbCart);
			this->Controls->Add(this->pbWait);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximizeBox = false;
			this->Name = L"LoginFirstForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"¡Loguearse!";
			this->Load += gcnew System::EventHandler(this, &LoginFirstForm::LoginFirstForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbWait))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginFirstForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnLoguin_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pbWait_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

/**/