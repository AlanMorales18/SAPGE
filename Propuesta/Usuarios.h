#pragma once
#include "AdministrarUsuarios.h"

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Usuarios
	/// </summary>
	public ref class Usuarios : public System::Windows::Forms::Form
	{
	public:
		Usuarios(void)
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
		~Usuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelUsuarios;
	private: System::Windows::Forms::Label^ LabelNombre;
	private: System::Windows::Forms::Label^ LabelDepartamento;
	private: System::Windows::Forms::Label^ LabelContraseña;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ BTNGuardar;
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
			this->LabelUsuarios = (gcnew System::Windows::Forms::Label());
			this->LabelNombre = (gcnew System::Windows::Forms::Label());
			this->LabelDepartamento = (gcnew System::Windows::Forms::Label());
			this->LabelContraseña = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->BTNGuardar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelUsuarios
			// 
			this->LabelUsuarios->AutoSize = true;
			this->LabelUsuarios->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelUsuarios->Location = System::Drawing::Point(304, 7);
			this->LabelUsuarios->Name = L"LabelUsuarios";
			this->LabelUsuarios->Size = System::Drawing::Size(97, 25);
			this->LabelUsuarios->TabIndex = 0;
			this->LabelUsuarios->Text = L"Usuarios";
			// 
			// LabelNombre
			// 
			this->LabelNombre->AutoSize = true;
			this->LabelNombre->Location = System::Drawing::Point(192, 103);
			this->LabelNombre->Name = L"LabelNombre";
			this->LabelNombre->Size = System::Drawing::Size(50, 13);
			this->LabelNombre->TabIndex = 1;
			this->LabelNombre->Text = L"Nombre: ";
			// 
			// LabelDepartamento
			// 
			this->LabelDepartamento->AutoSize = true;
			this->LabelDepartamento->Location = System::Drawing::Point(163, 137);
			this->LabelDepartamento->Name = L"LabelDepartamento";
			this->LabelDepartamento->Size = System::Drawing::Size(80, 13);
			this->LabelDepartamento->TabIndex = 2;
			this->LabelDepartamento->Text = L"Departamento: ";
			// 
			// LabelContraseña
			// 
			this->LabelContraseña->AutoSize = true;
			this->LabelContraseña->Location = System::Drawing::Point(175, 163);
			this->LabelContraseña->Name = L"LabelContraseña";
			this->LabelContraseña->Size = System::Drawing::Size(67, 13);
			this->LabelContraseña->TabIndex = 3;
			this->LabelContraseña->Text = L"Contraseña: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(249, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(304, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(249, 156);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(304, 20);
			this->textBox2->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Administrador", L"Finanzas", L"Envios" });
			this->comboBox1->Location = System::Drawing::Point(249, 129);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(304, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// BTNGuardar
			// 
			this->BTNGuardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNGuardar->Location = System::Drawing::Point(309, 220);
			this->BTNGuardar->Name = L"BTNGuardar";
			this->BTNGuardar->Size = System::Drawing::Size(75, 23);
			this->BTNGuardar->TabIndex = 7;
			this->BTNGuardar->Text = L"Guardar";
			this->BTNGuardar->UseVisualStyleBackColor = false;
			// 
			// Usuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(746, 425);
			this->Controls->Add(this->BTNGuardar);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->LabelContraseña);
			this->Controls->Add(this->LabelDepartamento);
			this->Controls->Add(this->LabelNombre);
			this->Controls->Add(this->LabelUsuarios);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Usuarios";
			this->Text = L"Usuarios";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
