#pragma once

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginError
	/// </summary>
	public ref class LoginError : public System::Windows::Forms::Form
	{
	public:
		LoginError(void)
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
		~LoginError()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ LabelUsuario;
	private: System::Windows::Forms::TextBox^ TxtContraseña;
	private: System::Windows::Forms::PictureBox^ PicLogo;
	private: System::Windows::Forms::TextBox^ TxtUsuario;
	private: System::Windows::Forms::Label^ LabelBienvenida;
	private: System::Windows::Forms::Label^ label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LabelUsuario = (gcnew System::Windows::Forms::Label());
			this->TxtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->PicLogo = (gcnew System::Windows::Forms::PictureBox());
			this->TxtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->LabelBienvenida = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(170, 534);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 49);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Iniciar Sesion";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(76, 464);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 24);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Contraseña";
			// 
			// LabelUsuario
			// 
			this->LabelUsuario->AutoSize = true;
			this->LabelUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelUsuario->Location = System::Drawing::Point(76, 380);
			this->LabelUsuario->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelUsuario->Name = L"LabelUsuario";
			this->LabelUsuario->Size = System::Drawing::Size(74, 24);
			this->LabelUsuario->TabIndex = 12;
			this->LabelUsuario->Text = L"Usuario";
			// 
			// TxtContraseña
			// 
			this->TxtContraseña->Location = System::Drawing::Point(82, 497);
			this->TxtContraseña->Margin = System::Windows::Forms::Padding(4);
			this->TxtContraseña->Multiline = true;
			this->TxtContraseña->Name = L"TxtContraseña";
			this->TxtContraseña->PasswordChar = '*';
			this->TxtContraseña->Size = System::Drawing::Size(348, 29);
			this->TxtContraseña->TabIndex = 11;
			// 
			// PicLogo
			// 
			this->PicLogo->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Originales\\Jom.png";
			this->PicLogo->Location = System::Drawing::Point(68, 9);
			this->PicLogo->Margin = System::Windows::Forms::Padding(4);
			this->PicLogo->Name = L"PicLogo";
			this->PicLogo->Size = System::Drawing::Size(379, 309);
			this->PicLogo->TabIndex = 10;
			this->PicLogo->TabStop = false;
			// 
			// TxtUsuario
			// 
			this->TxtUsuario->Location = System::Drawing::Point(82, 414);
			this->TxtUsuario->Margin = System::Windows::Forms::Padding(4);
			this->TxtUsuario->Multiline = true;
			this->TxtUsuario->Name = L"TxtUsuario";
			this->TxtUsuario->Size = System::Drawing::Size(348, 29);
			this->TxtUsuario->TabIndex = 9;
			// 
			// LabelBienvenida
			// 
			this->LabelBienvenida->AutoSize = true;
			this->LabelBienvenida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LabelBienvenida->Location = System::Drawing::Point(60, 321);
			this->LabelBienvenida->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelBienvenida->Name = L"LabelBienvenida";
			this->LabelBienvenida->Size = System::Drawing::Size(304, 33);
			this->LabelBienvenida->TabIndex = 8;
			this->LabelBienvenida->Text = L"Bienvenido al Sistema";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(106, 360);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(304, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Error! Usuario/Contraseña incorrecto";
			// 
			// LoginError
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(507, 593);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LabelUsuario);
			this->Controls->Add(this->TxtContraseña);
			this->Controls->Add(this->PicLogo);
			this->Controls->Add(this->TxtUsuario);
			this->Controls->Add(this->LabelBienvenida);
			this->Name = L"LoginError";
			this->Text = L"LoginError";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PicLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
