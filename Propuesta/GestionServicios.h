#pragma once

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GestionServicios
	/// </summary>
	public ref class GestionServicios : public System::Windows::Forms::Form
	{
	public:
		GestionServicios(void)
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
		~GestionServicios()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ LabelObjeto;
	private: System::Windows::Forms::ComboBox^ TxtObjeto;
	private: System::Windows::Forms::Label^ LabelImpuestoFederal;
	private: System::Windows::Forms::ComboBox^ TxtImpuestoFederal;
	private: System::Windows::Forms::Label^ LabelImpuestoLocal;
	private: System::Windows::Forms::ComboBox^ TxtImpuestosLocales;
	private: System::Windows::Forms::Label^ LabelDescripcion;
	private: System::Windows::Forms::Label^ LabelClave;
	private: System::Windows::Forms::Label^ LabelUnidad;
	private: System::Windows::Forms::TextBox^ TxtBase;
	private: System::Windows::Forms::Label^ LabelBase;
	private: System::Windows::Forms::Label^ LabelValorUnitario;
	private: System::Windows::Forms::TextBox^ TxtValorUnitario;
	private: System::Windows::Forms::TextBox^ TxtDescripcion;
	private: System::Windows::Forms::TextBox^ TxtClave;
	private: System::Windows::Forms::TextBox^ TxtUnidad;
	private: System::Windows::Forms::LinkLabel^ LinkSAT1;
	private: System::Windows::Forms::Label^ LabelClaveProd;
	private: System::Windows::Forms::TextBox^ TxtClaveProd;
	private: System::Windows::Forms::TextBox^ TxtClaveUnidad;
	private: System::Windows::Forms::Label^ LabelClaveUnidad;
	private: System::Windows::Forms::Label^ TituloProductos;
	private: System::Windows::Forms::Button^ BTNBuscar;
	private: System::Windows::Forms::TextBox^ TxtBuscarProveedor;
	private: System::Windows::Forms::Label^ LabelBuscar;
	private: System::Windows::Forms::Button^ BTNBorrar;
	private: System::Windows::Forms::Button^ BTNGuardar;

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
			this->LabelObjeto = (gcnew System::Windows::Forms::Label());
			this->TxtObjeto = (gcnew System::Windows::Forms::ComboBox());
			this->LabelImpuestoFederal = (gcnew System::Windows::Forms::Label());
			this->TxtImpuestoFederal = (gcnew System::Windows::Forms::ComboBox());
			this->LabelImpuestoLocal = (gcnew System::Windows::Forms::Label());
			this->TxtImpuestosLocales = (gcnew System::Windows::Forms::ComboBox());
			this->LabelDescripcion = (gcnew System::Windows::Forms::Label());
			this->LabelClave = (gcnew System::Windows::Forms::Label());
			this->LabelUnidad = (gcnew System::Windows::Forms::Label());
			this->TxtBase = (gcnew System::Windows::Forms::TextBox());
			this->LabelBase = (gcnew System::Windows::Forms::Label());
			this->LabelValorUnitario = (gcnew System::Windows::Forms::Label());
			this->TxtValorUnitario = (gcnew System::Windows::Forms::TextBox());
			this->TxtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->TxtClave = (gcnew System::Windows::Forms::TextBox());
			this->TxtUnidad = (gcnew System::Windows::Forms::TextBox());
			this->LinkSAT1 = (gcnew System::Windows::Forms::LinkLabel());
			this->LabelClaveProd = (gcnew System::Windows::Forms::Label());
			this->TxtClaveProd = (gcnew System::Windows::Forms::TextBox());
			this->TxtClaveUnidad = (gcnew System::Windows::Forms::TextBox());
			this->LabelClaveUnidad = (gcnew System::Windows::Forms::Label());
			this->TituloProductos = (gcnew System::Windows::Forms::Label());
			this->BTNBuscar = (gcnew System::Windows::Forms::Button());
			this->TxtBuscarProveedor = (gcnew System::Windows::Forms::TextBox());
			this->LabelBuscar = (gcnew System::Windows::Forms::Label());
			this->BTNBorrar = (gcnew System::Windows::Forms::Button());
			this->BTNGuardar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelObjeto
			// 
			this->LabelObjeto->AutoSize = true;
			this->LabelObjeto->Location = System::Drawing::Point(50, 270);
			this->LabelObjeto->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelObjeto->Name = L"LabelObjeto";
			this->LabelObjeto->Size = System::Drawing::Size(103, 13);
			this->LabelObjeto->TabIndex = 46;
			this->LabelObjeto->Text = L"Objeto de impuestos";
			// 
			// TxtObjeto
			// 
			this->TxtObjeto->FormattingEnabled = true;
			this->TxtObjeto->Location = System::Drawing::Point(153, 264);
			this->TxtObjeto->Margin = System::Windows::Forms::Padding(2);
			this->TxtObjeto->Name = L"TxtObjeto";
			this->TxtObjeto->Size = System::Drawing::Size(200, 21);
			this->TxtObjeto->TabIndex = 45;
			// 
			// LabelImpuestoFederal
			// 
			this->LabelImpuestoFederal->AutoSize = true;
			this->LabelImpuestoFederal->Location = System::Drawing::Point(65, 245);
			this->LabelImpuestoFederal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelImpuestoFederal->Name = L"LabelImpuestoFederal";
			this->LabelImpuestoFederal->Size = System::Drawing::Size(88, 13);
			this->LabelImpuestoFederal->TabIndex = 44;
			this->LabelImpuestoFederal->Text = L"Impuesto Federal";
			// 
			// TxtImpuestoFederal
			// 
			this->TxtImpuestoFederal->FormattingEnabled = true;
			this->TxtImpuestoFederal->Location = System::Drawing::Point(153, 239);
			this->TxtImpuestoFederal->Margin = System::Windows::Forms::Padding(2);
			this->TxtImpuestoFederal->Name = L"TxtImpuestoFederal";
			this->TxtImpuestoFederal->Size = System::Drawing::Size(200, 21);
			this->TxtImpuestoFederal->TabIndex = 43;
			// 
			// LabelImpuestoLocal
			// 
			this->LabelImpuestoLocal->AutoSize = true;
			this->LabelImpuestoLocal->Location = System::Drawing::Point(380, 245);
			this->LabelImpuestoLocal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelImpuestoLocal->Name = L"LabelImpuestoLocal";
			this->LabelImpuestoLocal->Size = System::Drawing::Size(95, 13);
			this->LabelImpuestoLocal->TabIndex = 42;
			this->LabelImpuestoLocal->Text = L"Impuestos Locales";
			// 
			// TxtImpuestosLocales
			// 
			this->TxtImpuestosLocales->FormattingEnabled = true;
			this->TxtImpuestosLocales->Location = System::Drawing::Point(475, 239);
			this->TxtImpuestosLocales->Margin = System::Windows::Forms::Padding(2);
			this->TxtImpuestosLocales->Name = L"TxtImpuestosLocales";
			this->TxtImpuestosLocales->Size = System::Drawing::Size(200, 21);
			this->TxtImpuestosLocales->TabIndex = 41;
			// 
			// LabelDescripcion
			// 
			this->LabelDescripcion->AutoSize = true;
			this->LabelDescripcion->Location = System::Drawing::Point(86, 220);
			this->LabelDescripcion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelDescripcion->Name = L"LabelDescripcion";
			this->LabelDescripcion->Size = System::Drawing::Size(67, 13);
			this->LabelDescripcion->TabIndex = 40;
			this->LabelDescripcion->Text = L"Descripción*";
			// 
			// LabelClave
			// 
			this->LabelClave->AutoSize = true;
			this->LabelClave->Location = System::Drawing::Point(435, 197);
			this->LabelClave->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelClave->Name = L"LabelClave";
			this->LabelClave->Size = System::Drawing::Size(38, 13);
			this->LabelClave->TabIndex = 39;
			this->LabelClave->Text = L"Clave*";
			// 
			// LabelUnidad
			// 
			this->LabelUnidad->AutoSize = true;
			this->LabelUnidad->Location = System::Drawing::Point(110, 197);
			this->LabelUnidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelUnidad->Name = L"LabelUnidad";
			this->LabelUnidad->Size = System::Drawing::Size(41, 13);
			this->LabelUnidad->TabIndex = 38;
			this->LabelUnidad->Text = L"Unidad";
			// 
			// TxtBase
			// 
			this->TxtBase->Location = System::Drawing::Point(617, 215);
			this->TxtBase->Margin = System::Windows::Forms::Padding(2);
			this->TxtBase->Name = L"TxtBase";
			this->TxtBase->Size = System::Drawing::Size(58, 20);
			this->TxtBase->TabIndex = 37;
			// 
			// LabelBase
			// 
			this->LabelBase->AutoSize = true;
			this->LabelBase->Location = System::Drawing::Point(536, 220);
			this->LabelBase->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelBase->Name = L"LabelBase";
			this->LabelBase->Size = System::Drawing::Size(79, 13);
			this->LabelBase->TabIndex = 36;
			this->LabelBase->Text = L"Base gravable*";
			// 
			// LabelValorUnitario
			// 
			this->LabelValorUnitario->AutoSize = true;
			this->LabelValorUnitario->Location = System::Drawing::Point(401, 220);
			this->LabelValorUnitario->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelValorUnitario->Name = L"LabelValorUnitario";
			this->LabelValorUnitario->Size = System::Drawing::Size(74, 13);
			this->LabelValorUnitario->TabIndex = 35;
			this->LabelValorUnitario->Text = L"Valor Unitario*";
			// 
			// TxtValorUnitario
			// 
			this->TxtValorUnitario->Location = System::Drawing::Point(475, 215);
			this->TxtValorUnitario->Margin = System::Windows::Forms::Padding(2);
			this->TxtValorUnitario->Name = L"TxtValorUnitario";
			this->TxtValorUnitario->Size = System::Drawing::Size(58, 20);
			this->TxtValorUnitario->TabIndex = 34;
			// 
			// TxtDescripcion
			// 
			this->TxtDescripcion->Location = System::Drawing::Point(153, 215);
			this->TxtDescripcion->Margin = System::Windows::Forms::Padding(2);
			this->TxtDescripcion->Name = L"TxtDescripcion";
			this->TxtDescripcion->Size = System::Drawing::Size(200, 20);
			this->TxtDescripcion->TabIndex = 33;
			// 
			// TxtClave
			// 
			this->TxtClave->Location = System::Drawing::Point(475, 192);
			this->TxtClave->Margin = System::Windows::Forms::Padding(2);
			this->TxtClave->Name = L"TxtClave";
			this->TxtClave->Size = System::Drawing::Size(200, 20);
			this->TxtClave->TabIndex = 32;
			// 
			// TxtUnidad
			// 
			this->TxtUnidad->Location = System::Drawing::Point(153, 192);
			this->TxtUnidad->Margin = System::Windows::Forms::Padding(2);
			this->TxtUnidad->Name = L"TxtUnidad";
			this->TxtUnidad->Size = System::Drawing::Size(200, 20);
			this->TxtUnidad->TabIndex = 31;
			// 
			// LinkSAT1
			// 
			this->LinkSAT1->AutoSize = true;
			this->LinkSAT1->Location = System::Drawing::Point(215, 171);
			this->LinkSAT1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LinkSAT1->Name = L"LinkSAT1";
			this->LinkSAT1->Size = System::Drawing::Size(297, 13);
			this->LinkSAT1->TabIndex = 30;
			this->LinkSAT1->TabStop = true;
			this->LinkSAT1->Text = L"¿No encuentras la clave\? Consulta el buscador del SAT aquí";
			// 
			// LabelClaveProd
			// 
			this->LabelClaveProd->AutoSize = true;
			this->LabelClaveProd->Location = System::Drawing::Point(356, 153);
			this->LabelClaveProd->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelClaveProd->Name = L"LabelClaveProd";
			this->LabelClaveProd->Size = System::Drawing::Size(123, 13);
			this->LabelClaveProd->TabIndex = 29;
			this->LabelClaveProd->Text = L"Clave Producto/Servicio";
			// 
			// TxtClaveProd
			// 
			this->TxtClaveProd->Location = System::Drawing::Point(475, 149);
			this->TxtClaveProd->Margin = System::Windows::Forms::Padding(2);
			this->TxtClaveProd->Name = L"TxtClaveProd";
			this->TxtClaveProd->Size = System::Drawing::Size(200, 20);
			this->TxtClaveProd->TabIndex = 28;
			// 
			// TxtClaveUnidad
			// 
			this->TxtClaveUnidad->Location = System::Drawing::Point(153, 149);
			this->TxtClaveUnidad->Margin = System::Windows::Forms::Padding(2);
			this->TxtClaveUnidad->Name = L"TxtClaveUnidad";
			this->TxtClaveUnidad->Size = System::Drawing::Size(200, 20);
			this->TxtClaveUnidad->TabIndex = 27;
			// 
			// LabelClaveUnidad
			// 
			this->LabelClaveUnidad->AutoSize = true;
			this->LabelClaveUnidad->Location = System::Drawing::Point(78, 153);
			this->LabelClaveUnidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelClaveUnidad->Name = L"LabelClaveUnidad";
			this->LabelClaveUnidad->Size = System::Drawing::Size(75, 13);
			this->LabelClaveUnidad->TabIndex = 26;
			this->LabelClaveUnidad->Text = L"Clave Unidad*";
			// 
			// TituloProductos
			// 
			this->TituloProductos->AutoSize = true;
			this->TituloProductos->Font = (gcnew System::Drawing::Font(L"Open Sans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TituloProductos->Location = System::Drawing::Point(276, 9);
			this->TituloProductos->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TituloProductos->Name = L"TituloProductos";
			this->TituloProductos->Size = System::Drawing::Size(218, 30);
			this->TituloProductos->TabIndex = 25;
			this->TituloProductos->Text = L"Gestion de Servicios";
			this->TituloProductos->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// BTNBuscar
			// 
			this->BTNBuscar->Location = System::Drawing::Point(498, 52);
			this->BTNBuscar->Name = L"BTNBuscar";
			this->BTNBuscar->Size = System::Drawing::Size(75, 23);
			this->BTNBuscar->TabIndex = 140;
			this->BTNBuscar->Text = L"Buscar";
			this->BTNBuscar->UseVisualStyleBackColor = true;
			// 
			// TxtBuscarProveedor
			// 
			this->TxtBuscarProveedor->Location = System::Drawing::Point(295, 54);
			this->TxtBuscarProveedor->Name = L"TxtBuscarProveedor";
			this->TxtBuscarProveedor->Size = System::Drawing::Size(184, 20);
			this->TxtBuscarProveedor->TabIndex = 139;
			// 
			// LabelBuscar
			// 
			this->LabelBuscar->AutoSize = true;
			this->LabelBuscar->Location = System::Drawing::Point(150, 62);
			this->LabelBuscar->Name = L"LabelBuscar";
			this->LabelBuscar->Size = System::Drawing::Size(136, 13);
			this->LabelBuscar->TabIndex = 138;
			this->LabelBuscar->Text = L"Clave de Unidad a buscar: ";
			// 
			// BTNBorrar
			// 
			this->BTNBorrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNBorrar->Location = System::Drawing::Point(270, 317);
			this->BTNBorrar->Margin = System::Windows::Forms::Padding(2);
			this->BTNBorrar->Name = L"BTNBorrar";
			this->BTNBorrar->Size = System::Drawing::Size(91, 30);
			this->BTNBorrar->TabIndex = 142;
			this->BTNBorrar->Text = L"Borrar";
			this->BTNBorrar->UseVisualStyleBackColor = true;
			// 
			// BTNGuardar
			// 
			this->BTNGuardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNGuardar->Location = System::Drawing::Point(382, 317);
			this->BTNGuardar->Margin = System::Windows::Forms::Padding(2);
			this->BTNGuardar->Name = L"BTNGuardar";
			this->BTNGuardar->Size = System::Drawing::Size(91, 30);
			this->BTNGuardar->TabIndex = 141;
			this->BTNGuardar->Text = L"Guardar";
			this->BTNGuardar->UseVisualStyleBackColor = true;
			// 
			// GestionServicios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(730, 386);
			this->Controls->Add(this->BTNBorrar);
			this->Controls->Add(this->BTNGuardar);
			this->Controls->Add(this->BTNBuscar);
			this->Controls->Add(this->TxtBuscarProveedor);
			this->Controls->Add(this->LabelBuscar);
			this->Controls->Add(this->LabelObjeto);
			this->Controls->Add(this->TxtObjeto);
			this->Controls->Add(this->LabelImpuestoFederal);
			this->Controls->Add(this->TxtImpuestoFederal);
			this->Controls->Add(this->LabelImpuestoLocal);
			this->Controls->Add(this->TxtImpuestosLocales);
			this->Controls->Add(this->LabelDescripcion);
			this->Controls->Add(this->LabelClave);
			this->Controls->Add(this->LabelUnidad);
			this->Controls->Add(this->TxtBase);
			this->Controls->Add(this->LabelBase);
			this->Controls->Add(this->LabelValorUnitario);
			this->Controls->Add(this->TxtValorUnitario);
			this->Controls->Add(this->TxtDescripcion);
			this->Controls->Add(this->TxtClave);
			this->Controls->Add(this->TxtUnidad);
			this->Controls->Add(this->LinkSAT1);
			this->Controls->Add(this->LabelClaveProd);
			this->Controls->Add(this->TxtClaveProd);
			this->Controls->Add(this->TxtClaveUnidad);
			this->Controls->Add(this->LabelClaveUnidad);
			this->Controls->Add(this->TituloProductos);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GestionServicios";
			this->Text = L"GestionServicios";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
