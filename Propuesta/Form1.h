#pragma once
#include "Finanzas.h"
#include "VentasModulo.h"
#include "Ajustes.h"
#include "Login.h"
#include "LoginError.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ PanelIzq;
	protected:

	protected:


	private: System::Windows::Forms::Panel^ PanelInicio;

	private: System::Windows::Forms::PictureBox^ BTNFinan;



	private: System::Windows::Forms::Panel^ PanelDer;
	private: System::Windows::Forms::Label^ TxtAdmin;
	private: System::Windows::Forms::Label^ TxtFiananzas;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ TXTVentas;

	private: System::Windows::Forms::Panel^ PanelServ;
	private: System::Windows::Forms::PictureBox^ BTNAjustes;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ BTNInicio;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PanelIzq = (gcnew System::Windows::Forms::Panel());
			this->BTNAjustes = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TXTVentas = (gcnew System::Windows::Forms::Label());
			this->BTNFinan = (gcnew System::Windows::Forms::PictureBox());
			this->TxtFiananzas = (gcnew System::Windows::Forms::Label());
			this->TxtAdmin = (gcnew System::Windows::Forms::Label());
			this->PanelInicio = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->PanelDer = (gcnew System::Windows::Forms::Panel());
			this->PanelServ = (gcnew System::Windows::Forms::Panel());
			this->BTNInicio = (gcnew System::Windows::Forms::Button());
			this->PanelIzq->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNAjustes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNFinan))->BeginInit();
			this->PanelInicio->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// PanelIzq
			// 
			this->PanelIzq->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->PanelIzq->Controls->Add(this->BTNAjustes);
			this->PanelIzq->Controls->Add(this->pictureBox1);
			this->PanelIzq->Controls->Add(this->TXTVentas);
			this->PanelIzq->Controls->Add(this->BTNFinan);
			this->PanelIzq->Controls->Add(this->TxtFiananzas);
			this->PanelIzq->Controls->Add(this->TxtAdmin);
			this->PanelIzq->Controls->Add(this->PanelInicio);
			this->PanelIzq->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelIzq->Location = System::Drawing::Point(0, 0);
			this->PanelIzq->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PanelIzq->Name = L"PanelIzq";
			this->PanelIzq->Size = System::Drawing::Size(129, 881);
			this->PanelIzq->TabIndex = 0;
			// 
			// BTNAjustes
			// 
			this->BTNAjustes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNAjustes->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Ajustes.png";
			this->BTNAjustes->Location = System::Drawing::Point(15, 783);
			this->BTNAjustes->Margin = System::Windows::Forms::Padding(4);
			this->BTNAjustes->Name = L"BTNAjustes";
			this->BTNAjustes->Size = System::Drawing::Size(88, 84);
			this->BTNAjustes->TabIndex = 5;
			this->BTNAjustes->TabStop = false;
			this->BTNAjustes->Click += gcnew System::EventHandler(this, &Form1::BTNAjustes_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Ventas.png";
			this->pictureBox1->Location = System::Drawing::Point(16, 290);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(88, 84);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// TXTVentas
			// 
			this->TXTVentas->AutoSize = true;
			this->TXTVentas->Location = System::Drawing::Point(35, 377);
			this->TXTVentas->Name = L"TXTVentas";
			this->TXTVentas->Size = System::Drawing::Size(49, 16);
			this->TXTVentas->TabIndex = 4;
			this->TXTVentas->Text = L"Ventas";
			// 
			// BTNFinan
			// 
			this->BTNFinan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNFinan->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Finanzas.png";
			this->BTNFinan->Location = System::Drawing::Point(16, 151);
			this->BTNFinan->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BTNFinan->Name = L"BTNFinan";
			this->BTNFinan->Size = System::Drawing::Size(88, 84);
			this->BTNFinan->TabIndex = 1;
			this->BTNFinan->TabStop = false;
			this->BTNFinan->Click += gcnew System::EventHandler(this, &Form1::BTNFinan_Click);
			// 
			// TxtFiananzas
			// 
			this->TxtFiananzas->AutoSize = true;
			this->TxtFiananzas->Location = System::Drawing::Point(23, 254);
			this->TxtFiananzas->Name = L"TxtFiananzas";
			this->TxtFiananzas->Size = System::Drawing::Size(74, 16);
			this->TxtFiananzas->TabIndex = 3;
			this->TxtFiananzas->Text = L" y Finanzas";
			// 
			// TxtAdmin
			// 
			this->TxtAdmin->AutoSize = true;
			this->TxtAdmin->Location = System::Drawing::Point(11, 238);
			this->TxtAdmin->Name = L"TxtAdmin";
			this->TxtAdmin->Size = System::Drawing::Size(95, 16);
			this->TxtAdmin->TabIndex = 2;
			this->TxtAdmin->Text = L"Administracion";
			this->TxtAdmin->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// PanelInicio
			// 
			this->PanelInicio->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->PanelInicio->Controls->Add(this->BTNInicio);
			this->PanelInicio->Controls->Add(this->pictureBox2);
			this->PanelInicio->Dock = System::Windows::Forms::DockStyle::Top;
			this->PanelInicio->Location = System::Drawing::Point(0, 0);
			this->PanelInicio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PanelInicio->Name = L"PanelInicio";
			this->PanelInicio->Size = System::Drawing::Size(129, 133);
			this->PanelInicio->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Jom.png";
			this->pictureBox2->Location = System::Drawing::Point(26, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(84, 78);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// PanelDer
			// 
			this->PanelDer->BackColor = System::Drawing::SystemColors::ControlLight;
			this->PanelDer->Dock = System::Windows::Forms::DockStyle::Right;
			this->PanelDer->Location = System::Drawing::Point(1431, 0);
			this->PanelDer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PanelDer->Name = L"PanelDer";
			this->PanelDer->Size = System::Drawing::Size(173, 881);
			this->PanelDer->TabIndex = 3;
			// 
			// PanelServ
			// 
			this->PanelServ->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->PanelServ->Location = System::Drawing::Point(135, 0);
			this->PanelServ->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PanelServ->Name = L"PanelServ";
			this->PanelServ->Size = System::Drawing::Size(1609, 878);
			this->PanelServ->TabIndex = 2;
			// 
			// BTNInicio
			// 
			this->BTNInicio->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNInicio->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTNInicio->Location = System::Drawing::Point(28, 107);
			this->BTNInicio->Name = L"BTNInicio";
			this->BTNInicio->Size = System::Drawing::Size(75, 23);
			this->BTNInicio->TabIndex = 1;
			this->BTNInicio->Text = L"Inicio";
			this->BTNInicio->UseVisualStyleBackColor = true;
			this->BTNInicio->Click += gcnew System::EventHandler(this, &Form1::BTNInicio_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(1604, 881);
			this->Controls->Add(this->PanelDer);
			this->Controls->Add(this->PanelServ);
			this->Controls->Add(this->PanelIzq);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->PanelIzq->ResumeLayout(false);
			this->PanelIzq->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNAjustes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNFinan))->EndInit();
			this->PanelInicio->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		public:
			Form^ actual;
		void AbrirFormulario(Form^ hijo) {
			if (this->actual != nullptr) {
				this->actual->Close();
			}
			this->actual = hijo;
			hijo->Dock = DockStyle::Fill;
			hijo->TopLevel = false;
			PanelServ->Controls->Add(hijo);
			hijo->Show();
		}
	//Botones
	/*
	private: System::Void BTNClientes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Clientes());
	}
	private: System::Void BTNProductos_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Productos());
	}
	private: System::Void Prueba_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Proveedores());
	}
	
	//Imagenes
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Clientes());
	}
	private: System::Void ImgProductos_Click(System::Object^ sender, System::EventArgs^ e) {		
		this->AbrirFormulario(gcnew Propuesta::Proveedores());
	}
	private: System::Void ImgProveedores_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Productos());
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Inicio());
	}
	*/
	private: System::Void BTNFinan_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Finanzas());
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::VentasModulo());
	}
	private: System::Void BTNAjustes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Ajustes());
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Login());
	}
	private: System::Void BTNInicio_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::LoginError());
	}
};
}
