#pragma once

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AdministrarUsuarios
	/// </summary>
	public ref class AdministrarUsuarios : public System::Windows::Forms::Form
	{
	public:
		AdministrarUsuarios(void)
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
		~AdministrarUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelNombreBuscar;
	protected:

	protected:

	private: System::Windows::Forms::Label^ LabelUsuarios;
	private: System::Windows::Forms::TextBox^ TxtNombreBuscar;

	private: System::Windows::Forms::Button^ BTNBuscar;
	private: System::Windows::Forms::Label^ LabelNombre;
	private: System::Windows::Forms::Label^ LabelDepartamento;
	private: System::Windows::Forms::Label^ LabelContraseña;
	private: System::Windows::Forms::TextBox^ TxtNombre;
	private: System::Windows::Forms::TextBox^ TxtDepartamento;
	private: System::Windows::Forms::TextBox^ TxtContraseña;
	private: System::Windows::Forms::Button^ BTNActualizar;
	private: System::Windows::Forms::Button^ BTNBorrar;



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
			this->LabelNombreBuscar = (gcnew System::Windows::Forms::Label());
			this->LabelUsuarios = (gcnew System::Windows::Forms::Label());
			this->TxtNombreBuscar = (gcnew System::Windows::Forms::TextBox());
			this->BTNBuscar = (gcnew System::Windows::Forms::Button());
			this->LabelNombre = (gcnew System::Windows::Forms::Label());
			this->LabelDepartamento = (gcnew System::Windows::Forms::Label());
			this->LabelContraseña = (gcnew System::Windows::Forms::Label());
			this->TxtNombre = (gcnew System::Windows::Forms::TextBox());
			this->TxtDepartamento = (gcnew System::Windows::Forms::TextBox());
			this->TxtContraseña = (gcnew System::Windows::Forms::TextBox());
			this->BTNActualizar = (gcnew System::Windows::Forms::Button());
			this->BTNBorrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelNombreBuscar
			// 
			this->LabelNombreBuscar->AutoSize = true;
			this->LabelNombreBuscar->Location = System::Drawing::Point(180, 58);
			this->LabelNombreBuscar->Name = L"LabelNombreBuscar";
			this->LabelNombreBuscar->Size = System::Drawing::Size(50, 13);
			this->LabelNombreBuscar->TabIndex = 0;
			this->LabelNombreBuscar->Text = L"Nombre: ";
			// 
			// LabelUsuarios
			// 
			this->LabelUsuarios->AutoSize = true;
			this->LabelUsuarios->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelUsuarios->Location = System::Drawing::Point(281, 9);
			this->LabelUsuarios->Name = L"LabelUsuarios";
			this->LabelUsuarios->Size = System::Drawing::Size(97, 25);
			this->LabelUsuarios->TabIndex = 1;
			this->LabelUsuarios->Text = L"Usuarios";
			// 
			// TxtNombreBuscar
			// 
			this->TxtNombreBuscar->Location = System::Drawing::Point(236, 51);
			this->TxtNombreBuscar->Name = L"TxtNombreBuscar";
			this->TxtNombreBuscar->Size = System::Drawing::Size(277, 20);
			this->TxtNombreBuscar->TabIndex = 2;
			// 
			// BTNBuscar
			// 
			this->BTNBuscar->Location = System::Drawing::Point(286, 77);
			this->BTNBuscar->Name = L"BTNBuscar";
			this->BTNBuscar->Size = System::Drawing::Size(75, 23);
			this->BTNBuscar->TabIndex = 3;
			this->BTNBuscar->Text = L"Buscar";
			this->BTNBuscar->UseVisualStyleBackColor = true;
			// 
			// LabelNombre
			// 
			this->LabelNombre->AutoSize = true;
			this->LabelNombre->Location = System::Drawing::Point(180, 151);
			this->LabelNombre->Name = L"LabelNombre";
			this->LabelNombre->Size = System::Drawing::Size(50, 13);
			this->LabelNombre->TabIndex = 4;
			this->LabelNombre->Text = L"Nombre: ";
			// 
			// LabelDepartamento
			// 
			this->LabelDepartamento->AutoSize = true;
			this->LabelDepartamento->Location = System::Drawing::Point(150, 177);
			this->LabelDepartamento->Name = L"LabelDepartamento";
			this->LabelDepartamento->Size = System::Drawing::Size(80, 13);
			this->LabelDepartamento->TabIndex = 5;
			this->LabelDepartamento->Text = L"Departamento: ";
			// 
			// LabelContraseña
			// 
			this->LabelContraseña->AutoSize = true;
			this->LabelContraseña->Location = System::Drawing::Point(163, 204);
			this->LabelContraseña->Name = L"LabelContraseña";
			this->LabelContraseña->Size = System::Drawing::Size(67, 13);
			this->LabelContraseña->TabIndex = 6;
			this->LabelContraseña->Text = L"Contraseña: ";
			// 
			// TxtNombre
			// 
			this->TxtNombre->Location = System::Drawing::Point(236, 144);
			this->TxtNombre->Name = L"TxtNombre";
			this->TxtNombre->Size = System::Drawing::Size(277, 20);
			this->TxtNombre->TabIndex = 7;
			// 
			// TxtDepartamento
			// 
			this->TxtDepartamento->Location = System::Drawing::Point(236, 170);
			this->TxtDepartamento->Name = L"TxtDepartamento";
			this->TxtDepartamento->Size = System::Drawing::Size(277, 20);
			this->TxtDepartamento->TabIndex = 8;
			// 
			// TxtContraseña
			// 
			this->TxtContraseña->Location = System::Drawing::Point(236, 197);
			this->TxtContraseña->Name = L"TxtContraseña";
			this->TxtContraseña->Size = System::Drawing::Size(277, 20);
			this->TxtContraseña->TabIndex = 9;
			// 
			// BTNActualizar
			// 
			this->BTNActualizar->Location = System::Drawing::Point(236, 257);
			this->BTNActualizar->Name = L"BTNActualizar";
			this->BTNActualizar->Size = System::Drawing::Size(75, 23);
			this->BTNActualizar->TabIndex = 10;
			this->BTNActualizar->Text = L"Actualizar";
			this->BTNActualizar->UseVisualStyleBackColor = true;
			// 
			// BTNBorrar
			// 
			this->BTNBorrar->Location = System::Drawing::Point(370, 257);
			this->BTNBorrar->Name = L"BTNBorrar";
			this->BTNBorrar->Size = System::Drawing::Size(75, 23);
			this->BTNBorrar->TabIndex = 11;
			this->BTNBorrar->Text = L"Borrar";
			this->BTNBorrar->UseVisualStyleBackColor = true;
			// 
			// AdministrarUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(746, 425);
			this->Controls->Add(this->BTNBorrar);
			this->Controls->Add(this->BTNActualizar);
			this->Controls->Add(this->TxtContraseña);
			this->Controls->Add(this->TxtDepartamento);
			this->Controls->Add(this->TxtNombre);
			this->Controls->Add(this->LabelContraseña);
			this->Controls->Add(this->LabelDepartamento);
			this->Controls->Add(this->LabelNombre);
			this->Controls->Add(this->BTNBuscar);
			this->Controls->Add(this->TxtNombreBuscar);
			this->Controls->Add(this->LabelUsuarios);
			this->Controls->Add(this->LabelNombreBuscar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdministrarUsuarios";
			this->Text = L"AdministrarUsuarios";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
