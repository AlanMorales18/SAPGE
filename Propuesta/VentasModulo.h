#pragma once
#include "Cotizacion.h"
#include "GestionCotizaciones.h"

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentasModulo
	/// </summary>
	public ref class VentasModulo : public System::Windows::Forms::Form
	{
	public:
		VentasModulo(void)
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
		~VentasModulo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ BTNCotizacion;
	private: System::Windows::Forms::Label^ TXTCotizacion;
	private: System::Windows::Forms::Panel^ PanelContenedor;
	private: System::Windows::Forms::LinkLabel^ BTNGestionCotizaciones;
	private: System::Windows::Forms::Label^ label1;

	protected:

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
			this->BTNCotizacion = (gcnew System::Windows::Forms::PictureBox());
			this->TXTCotizacion = (gcnew System::Windows::Forms::Label());
			this->PanelContenedor = (gcnew System::Windows::Forms::Panel());
			this->BTNGestionCotizaciones = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNCotizacion))->BeginInit();
			this->SuspendLayout();
			// 
			// BTNCotizacion
			// 
			this->BTNCotizacion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNCotizacion->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Cotizacion.png";
			this->BTNCotizacion->Location = System::Drawing::Point(22, 1);
			this->BTNCotizacion->Name = L"BTNCotizacion";
			this->BTNCotizacion->Size = System::Drawing::Size(82, 85);
			this->BTNCotizacion->TabIndex = 1;
			this->BTNCotizacion->TabStop = false;
			this->BTNCotizacion->Click += gcnew System::EventHandler(this, &VentasModulo::BTNCotizacion_Click);
			// 
			// TXTCotizacion
			// 
			this->TXTCotizacion->AutoSize = true;
			this->TXTCotizacion->Location = System::Drawing::Point(31, 54);
			this->TXTCotizacion->Name = L"TXTCotizacion";
			this->TXTCotizacion->Size = System::Drawing::Size(56, 13);
			this->TXTCotizacion->TabIndex = 2;
			this->TXTCotizacion->Text = L"Cotizacion";
			// 
			// PanelContenedor
			// 
			this->PanelContenedor->Location = System::Drawing::Point(22, 69);
			this->PanelContenedor->Name = L"PanelContenedor";
			this->PanelContenedor->Size = System::Drawing::Size(891, 613);
			this->PanelContenedor->TabIndex = 3;
			// 
			// BTNGestionCotizaciones
			// 
			this->BTNGestionCotizaciones->AutoSize = true;
			this->BTNGestionCotizaciones->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNGestionCotizaciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BTNGestionCotizaciones->LinkColor = System::Drawing::Color::Black;
			this->BTNGestionCotizaciones->Location = System::Drawing::Point(732, 33);
			this->BTNGestionCotizaciones->Name = L"BTNGestionCotizaciones";
			this->BTNGestionCotizaciones->Size = System::Drawing::Size(84, 16);
			this->BTNGestionCotizaciones->TabIndex = 16;
			this->BTNGestionCotizaciones->TabStop = true;
			this->BTNGestionCotizaciones->Text = L"Cotizaciones";
			this->BTNGestionCotizaciones->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &VentasModulo::BTNGestionCotizaciones_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(731, 9);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(90, 24);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Gestionar";
			// 
			// VentasModulo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(1194, 704);
			this->Controls->Add(this->BTNGestionCotizaciones);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PanelContenedor);
			this->Controls->Add(this->TXTCotizacion);
			this->Controls->Add(this->BTNCotizacion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VentasModulo";
			this->Text = L"VentasModulo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNCotizacion))->EndInit();
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

		private: System::Void BTNCotizacion_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirFormulario(gcnew Propuesta::Cotizacion());
		}
		private: System::Void BTNGestionCotizaciones_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
			this->AbrirFormulario(gcnew Propuesta::GestionCotizaciones());
		}
};
}
