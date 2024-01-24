#pragma once
#include "Usuarios.h"
#include "AdministrarUsuarios.h"

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ajustes
	/// </summary>
	public ref class Ajustes : public System::Windows::Forms::Form
	{
	public:
		Ajustes(void)
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
		~Ajustes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ BTNUsuario;
	private: System::Windows::Forms::Label^ LabelUsuarios;
	private: System::Windows::Forms::Panel^ PanelContenedor;
	private: System::Windows::Forms::PictureBox^ BTNBuscar;

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
			this->BTNUsuario = (gcnew System::Windows::Forms::PictureBox());
			this->LabelUsuarios = (gcnew System::Windows::Forms::Label());
			this->PanelContenedor = (gcnew System::Windows::Forms::Panel());
			this->BTNBuscar = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNUsuario))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNBuscar))->BeginInit();
			this->SuspendLayout();
			// 
			// BTNUsuario
			// 
			this->BTNUsuario->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNUsuario->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Usuario.png";
			this->BTNUsuario->Location = System::Drawing::Point(22, 1);
			this->BTNUsuario->Name = L"BTNUsuario";
			this->BTNUsuario->Size = System::Drawing::Size(82, 85);
			this->BTNUsuario->TabIndex = 0;
			this->BTNUsuario->TabStop = false;
			this->BTNUsuario->Click += gcnew System::EventHandler(this, &Ajustes::BTNUsuario_Click);
			// 
			// LabelUsuarios
			// 
			this->LabelUsuarios->AutoSize = true;
			this->LabelUsuarios->Location = System::Drawing::Point(36, 54);
			this->LabelUsuarios->Name = L"LabelUsuarios";
			this->LabelUsuarios->Size = System::Drawing::Size(48, 13);
			this->LabelUsuarios->TabIndex = 1;
			this->LabelUsuarios->Text = L"Usuarios";
			// 
			// PanelContenedor
			// 
			this->PanelContenedor->Location = System::Drawing::Point(22, 69);
			this->PanelContenedor->Name = L"PanelContenedor";
			this->PanelContenedor->Size = System::Drawing::Size(891, 613);
			this->PanelContenedor->TabIndex = 2;
			// 
			// BTNBuscar
			// 
			this->BTNBuscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNBuscar->ImageLocation = L"C:\\Users\\ousei\\source\\Imagenes\\Buscar.png";
			this->BTNBuscar->Location = System::Drawing::Point(828, 1);
			this->BTNBuscar->Name = L"BTNBuscar";
			this->BTNBuscar->Size = System::Drawing::Size(82, 85);
			this->BTNBuscar->TabIndex = 3;
			this->BTNBuscar->TabStop = false;
			this->BTNBuscar->Click += gcnew System::EventHandler(this, &Ajustes::BTNBuscar_Click);
			// 
			// Ajustes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(1194, 704);
			this->Controls->Add(this->BTNBuscar);
			this->Controls->Add(this->PanelContenedor);
			this->Controls->Add(this->LabelUsuarios);
			this->Controls->Add(this->BTNUsuario);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Ajustes";
			this->Text = L"Ajustes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNUsuario))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BTNBuscar))->EndInit();
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


		private: System::Void BTNUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirFormulario(gcnew Propuesta::Usuarios());
		}
		private: System::Void BTNBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirFormulario(gcnew Propuesta::AdministrarUsuarios());
		}
};
}
