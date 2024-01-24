#pragma once
#include "Clientes.h"
#include "Productos.h"
#include "Proveedores.h"
#include "GestionCliente.h"
#include "GestionProveedores.h"
#include "GestionServicios.h"

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Finanzas
	/// </summary>
	public ref class Finanzas : public System::Windows::Forms::Form
	{
	public:
		Finanzas(void)
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
		~Finanzas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ BTNClientes;
	private: System::Windows::Forms::Label^ TXTClientes;
	private: System::Windows::Forms::PictureBox^ BTNProveedores;
	private: System::Windows::Forms::Label^ TXTProveedores;
	private: System::Windows::Forms::PictureBox^ BTNServicios;
	private: System::Windows::Forms::Label^ TXTServicios;

	private: System::Windows::Forms::Panel^ PanelContenedor;
	private: System::Windows::Forms::LinkLabel^ BTNGestionClientes;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ BTNGestionServicios;

	private: System::Windows::Forms::LinkLabel^ BTNGestionProveedores;



	protected:


	protected:

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
			this->BTNClientes = (gcnew System::Windows::Forms::PictureBox());
			this->TXTClientes = (gcnew System::Windows::Forms::Label());
			this->BTNProveedores = (gcnew System::Windows::Forms::PictureBox());
			this->TXTProveedores = (gcnew System::Windows::Forms::Label());
			this->BTNServicios = (gcnew System::Windows::Forms::PictureBox());
			this->TXTServicios = (gcnew System::Windows::Forms::Label());
			this->PanelContenedor = (gcnew System::Windows::Forms::Panel());
			this->BTNGestionClientes = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BTNGestionServicios = (gcnew System::Windows::Forms::LinkLabel());
			this->BTNGestionProveedores = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNClientes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNProveedores))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNServicios))->BeginInit();
			this->SuspendLayout();
			// 
			// BTNClientes
			// 
			this->BTNClientes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNClientes->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Cliente.png";
			this->BTNClientes->Location = System::Drawing::Point(22, 1);
			this->BTNClientes->Margin = System::Windows::Forms::Padding(2);
			this->BTNClientes->Name = L"BTNClientes";
			this->BTNClientes->Size = System::Drawing::Size(82, 85);
			this->BTNClientes->TabIndex = 0;
			this->BTNClientes->TabStop = false;
			this->BTNClientes->Click += gcnew System::EventHandler(this, &Finanzas::BTNClientes_Click);
			// 
			// TXTClientes
			// 
			this->TXTClientes->AutoSize = true;
			this->TXTClientes->Location = System::Drawing::Point(31, 54);
			this->TXTClientes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TXTClientes->Name = L"TXTClientes";
			this->TXTClientes->Size = System::Drawing::Size(44, 13);
			this->TXTClientes->TabIndex = 1;
			this->TXTClientes->Text = L"Clientes";
			// 
			// BTNProveedores
			// 
			this->BTNProveedores->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNProveedores->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Proveedor.png";
			this->BTNProveedores->Location = System::Drawing::Point(110, 1);
			this->BTNProveedores->Margin = System::Windows::Forms::Padding(2);
			this->BTNProveedores->Name = L"BTNProveedores";
			this->BTNProveedores->Size = System::Drawing::Size(82, 85);
			this->BTNProveedores->TabIndex = 2;
			this->BTNProveedores->TabStop = false;
			this->BTNProveedores->Click += gcnew System::EventHandler(this, &Finanzas::BTNProveedores_Click);
			// 
			// TXTProveedores
			// 
			this->TXTProveedores->AutoSize = true;
			this->TXTProveedores->Location = System::Drawing::Point(118, 54);
			this->TXTProveedores->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TXTProveedores->Name = L"TXTProveedores";
			this->TXTProveedores->Size = System::Drawing::Size(67, 13);
			this->TXTProveedores->TabIndex = 3;
			this->TXTProveedores->Text = L"Proveedores";
			// 
			// BTNServicios
			// 
			this->BTNServicios->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNServicios->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Productos.png";
			this->BTNServicios->Location = System::Drawing::Point(196, 1);
			this->BTNServicios->Margin = System::Windows::Forms::Padding(2);
			this->BTNServicios->Name = L"BTNServicios";
			this->BTNServicios->Size = System::Drawing::Size(82, 85);
			this->BTNServicios->TabIndex = 4;
			this->BTNServicios->TabStop = false;
			this->BTNServicios->Click += gcnew System::EventHandler(this, &Finanzas::BTNServicios_Click);
			// 
			// TXTServicios
			// 
			this->TXTServicios->AutoSize = true;
			this->TXTServicios->Location = System::Drawing::Point(204, 54);
			this->TXTServicios->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TXTServicios->Name = L"TXTServicios";
			this->TXTServicios->Size = System::Drawing::Size(50, 13);
			this->TXTServicios->TabIndex = 5;
			this->TXTServicios->Text = L"Servicios";
			// 
			// PanelContenedor
			// 
			this->PanelContenedor->Location = System::Drawing::Point(22, 69);
			this->PanelContenedor->Margin = System::Windows::Forms::Padding(2);
			this->PanelContenedor->Name = L"PanelContenedor";
			this->PanelContenedor->Size = System::Drawing::Size(891, 613);
			this->PanelContenedor->TabIndex = 8;
			// 
			// BTNGestionClientes
			// 
			this->BTNGestionClientes->AutoSize = true;
			this->BTNGestionClientes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNGestionClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BTNGestionClientes->LinkColor = System::Drawing::Color::Black;
			this->BTNGestionClientes->Location = System::Drawing::Point(622, 36);
			this->BTNGestionClientes->Name = L"BTNGestionClientes";
			this->BTNGestionClientes->Size = System::Drawing::Size(55, 16);
			this->BTNGestionClientes->TabIndex = 9;
			this->BTNGestionClientes->TabStop = true;
			this->BTNGestionClientes->Text = L"Clientes";
			this->BTNGestionClientes->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Finanzas::BTNGestionClientes_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(702, 9);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(90, 24);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Gestionar";
			// 
			// BTNGestionServicios
			// 
			this->BTNGestionServicios->AutoSize = true;
			this->BTNGestionServicios->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNGestionServicios->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BTNGestionServicios->LinkColor = System::Drawing::Color::Black;
			this->BTNGestionServicios->Location = System::Drawing::Point(816, 36);
			this->BTNGestionServicios->Name = L"BTNGestionServicios";
			this->BTNGestionServicios->Size = System::Drawing::Size(63, 16);
			this->BTNGestionServicios->TabIndex = 11;
			this->BTNGestionServicios->TabStop = true;
			this->BTNGestionServicios->Text = L"Servicios";
			this->BTNGestionServicios->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Finanzas::BTNGestionServicios_LinkClicked);
			// 
			// BTNGestionProveedores
			// 
			this->BTNGestionProveedores->AutoSize = true;
			this->BTNGestionProveedores->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNGestionProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BTNGestionProveedores->LinkColor = System::Drawing::Color::Black;
			this->BTNGestionProveedores->Location = System::Drawing::Point(703, 36);
			this->BTNGestionProveedores->Name = L"BTNGestionProveedores";
			this->BTNGestionProveedores->Size = System::Drawing::Size(86, 16);
			this->BTNGestionProveedores->TabIndex = 12;
			this->BTNGestionProveedores->TabStop = true;
			this->BTNGestionProveedores->Text = L"Proveedores";
			this->BTNGestionProveedores->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Finanzas::BTNGestionProveedores_LinkClicked);
			// 
			// Finanzas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(1194, 704);
			this->Controls->Add(this->BTNGestionProveedores);
			this->Controls->Add(this->BTNGestionServicios);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BTNGestionClientes);
			this->Controls->Add(this->PanelContenedor);
			this->Controls->Add(this->TXTServicios);
			this->Controls->Add(this->BTNServicios);
			this->Controls->Add(this->TXTProveedores);
			this->Controls->Add(this->BTNProveedores);
			this->Controls->Add(this->TXTClientes);
			this->Controls->Add(this->BTNClientes);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Finanzas";
			this->Text = L"Finanzas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNClientes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNProveedores))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNServicios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
				PanelContenedor->Controls->Add(hijo);
				hijo->Show();
			}
	private: System::Void BTNClientes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Clientes());
	}
	private: System::Void BTNProveedores_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Proveedores());
	}
	private: System::Void BTNServicios_Click(System::Object^ sender, System::EventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::Productos());
	}
	private: System::Void BTNGestionClientes_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::GestionCliente());
	}
	private: System::Void BTNGestionProveedores_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::GestionProveedores());
	}
	private: System::Void BTNGestionServicios_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->AbrirFormulario(gcnew Propuesta::GestionServicios());
	}
};
}
