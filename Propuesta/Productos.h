#pragma once

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Productos
	/// </summary>
	public ref class Productos : public System::Windows::Forms::Form
	{
	public:
		Productos(void)
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
		~Productos()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ TituloProductos;
	private: System::Windows::Forms::Label^ LabelClaveUnidad;

	private: System::Windows::Forms::TextBox^ TxtClaveUnidad;
	private: System::Windows::Forms::TextBox^ TxtClaveProd;
	private: System::Windows::Forms::Label^ LabelClaveProd;

	private: System::Windows::Forms::LinkLabel^ LinkSAT1;
	private: System::Windows::Forms::TextBox^ TxtUnidad;
	private: System::Windows::Forms::TextBox^ TxtClave;
	private: System::Windows::Forms::TextBox^ TxtDescripcion;
	private: System::Windows::Forms::TextBox^ TxtValorUnitario;

	private: System::Windows::Forms::Label^ LabelValorUnitario;
	private: System::Windows::Forms::Label^ LabelBase;
	private: System::Windows::Forms::TextBox^ TxtBase;
	private: System::Windows::Forms::Label^ LabelUnidad;
	private: System::Windows::Forms::Label^ LabelClave;
	private: System::Windows::Forms::Label^ LabelDescripcion;
	private: System::Windows::Forms::ComboBox^ TxtImpuestosLocales;
	private: System::Windows::Forms::Label^ LabelImpuestoLocal;

	private: System::Windows::Forms::ComboBox^ TxtImpuestoFederal;
	private: System::Windows::Forms::Label^ LabelImpuestoFederal;
	private: System::Windows::Forms::ComboBox^ TxtObjeto;
	private: System::Windows::Forms::Label^ LabelObjeto;
	private: System::Windows::Forms::Button^ BTNEnviar;







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
			this->TituloProductos = (gcnew System::Windows::Forms::Label());
			this->LabelClaveUnidad = (gcnew System::Windows::Forms::Label());
			this->TxtClaveUnidad = (gcnew System::Windows::Forms::TextBox());
			this->TxtClaveProd = (gcnew System::Windows::Forms::TextBox());
			this->LabelClaveProd = (gcnew System::Windows::Forms::Label());
			this->LinkSAT1 = (gcnew System::Windows::Forms::LinkLabel());
			this->TxtUnidad = (gcnew System::Windows::Forms::TextBox());
			this->TxtClave = (gcnew System::Windows::Forms::TextBox());
			this->TxtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->TxtValorUnitario = (gcnew System::Windows::Forms::TextBox());
			this->LabelValorUnitario = (gcnew System::Windows::Forms::Label());
			this->LabelBase = (gcnew System::Windows::Forms::Label());
			this->TxtBase = (gcnew System::Windows::Forms::TextBox());
			this->LabelUnidad = (gcnew System::Windows::Forms::Label());
			this->LabelClave = (gcnew System::Windows::Forms::Label());
			this->LabelDescripcion = (gcnew System::Windows::Forms::Label());
			this->TxtImpuestosLocales = (gcnew System::Windows::Forms::ComboBox());
			this->LabelImpuestoLocal = (gcnew System::Windows::Forms::Label());
			this->TxtImpuestoFederal = (gcnew System::Windows::Forms::ComboBox());
			this->LabelImpuestoFederal = (gcnew System::Windows::Forms::Label());
			this->TxtObjeto = (gcnew System::Windows::Forms::ComboBox());
			this->LabelObjeto = (gcnew System::Windows::Forms::Label());
			this->BTNEnviar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TituloProductos
			// 
			this->TituloProductos->AutoSize = true;
			this->TituloProductos->Font = (gcnew System::Drawing::Font(L"Open Sans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TituloProductos->Location = System::Drawing::Point(260, 8);
			this->TituloProductos->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TituloProductos->Name = L"TituloProductos";
			this->TituloProductos->Size = System::Drawing::Size(102, 30);
			this->TituloProductos->TabIndex = 2;
			this->TituloProductos->Text = L"Servicios";
			this->TituloProductos->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->TituloProductos->Click += gcnew System::EventHandler(this, &Productos::TituloCliente_Click);
			// 
			// LabelClaveUnidad
			// 
			this->LabelClaveUnidad->AutoSize = true;
			this->LabelClaveUnidad->Location = System::Drawing::Point(38, 50);
			this->LabelClaveUnidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelClaveUnidad->Name = L"LabelClaveUnidad";
			this->LabelClaveUnidad->Size = System::Drawing::Size(75, 13);
			this->LabelClaveUnidad->TabIndex = 3;
			this->LabelClaveUnidad->Text = L"Clave Unidad*";
			// 
			// TxtClaveUnidad
			// 
			this->TxtClaveUnidad->Location = System::Drawing::Point(113, 46);
			this->TxtClaveUnidad->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtClaveUnidad->Name = L"TxtClaveUnidad";
			this->TxtClaveUnidad->Size = System::Drawing::Size(200, 20);
			this->TxtClaveUnidad->TabIndex = 4;
			// 
			// TxtClaveProd
			// 
			this->TxtClaveProd->Location = System::Drawing::Point(435, 46);
			this->TxtClaveProd->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtClaveProd->Name = L"TxtClaveProd";
			this->TxtClaveProd->Size = System::Drawing::Size(200, 20);
			this->TxtClaveProd->TabIndex = 5;
			// 
			// LabelClaveProd
			// 
			this->LabelClaveProd->AutoSize = true;
			this->LabelClaveProd->Location = System::Drawing::Point(316, 50);
			this->LabelClaveProd->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelClaveProd->Name = L"LabelClaveProd";
			this->LabelClaveProd->Size = System::Drawing::Size(123, 13);
			this->LabelClaveProd->TabIndex = 6;
			this->LabelClaveProd->Text = L"Clave Producto/Servicio";
			// 
			// LinkSAT1
			// 
			this->LinkSAT1->AutoSize = true;
			this->LinkSAT1->Location = System::Drawing::Point(175, 68);
			this->LinkSAT1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LinkSAT1->Name = L"LinkSAT1";
			this->LinkSAT1->Size = System::Drawing::Size(297, 13);
			this->LinkSAT1->TabIndex = 7;
			this->LinkSAT1->TabStop = true;
			this->LinkSAT1->Text = L"¿No encuentras la clave\? Consulta el buscador del SAT aquí";
			this->LinkSAT1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Productos::LinkSAT1_LinkClicked);
			// 
			// TxtUnidad
			// 
			this->TxtUnidad->Location = System::Drawing::Point(113, 89);
			this->TxtUnidad->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtUnidad->Name = L"TxtUnidad";
			this->TxtUnidad->Size = System::Drawing::Size(200, 20);
			this->TxtUnidad->TabIndex = 8;
			// 
			// TxtClave
			// 
			this->TxtClave->Location = System::Drawing::Point(435, 89);
			this->TxtClave->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtClave->Name = L"TxtClave";
			this->TxtClave->Size = System::Drawing::Size(200, 20);
			this->TxtClave->TabIndex = 9;
			// 
			// TxtDescripcion
			// 
			this->TxtDescripcion->Location = System::Drawing::Point(113, 112);
			this->TxtDescripcion->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtDescripcion->Name = L"TxtDescripcion";
			this->TxtDescripcion->Size = System::Drawing::Size(200, 20);
			this->TxtDescripcion->TabIndex = 10;
			// 
			// TxtValorUnitario
			// 
			this->TxtValorUnitario->Location = System::Drawing::Point(435, 112);
			this->TxtValorUnitario->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtValorUnitario->Name = L"TxtValorUnitario";
			this->TxtValorUnitario->Size = System::Drawing::Size(58, 20);
			this->TxtValorUnitario->TabIndex = 11;
			// 
			// LabelValorUnitario
			// 
			this->LabelValorUnitario->AutoSize = true;
			this->LabelValorUnitario->Location = System::Drawing::Point(361, 117);
			this->LabelValorUnitario->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelValorUnitario->Name = L"LabelValorUnitario";
			this->LabelValorUnitario->Size = System::Drawing::Size(74, 13);
			this->LabelValorUnitario->TabIndex = 12;
			this->LabelValorUnitario->Text = L"Valor Unitario*";
			// 
			// LabelBase
			// 
			this->LabelBase->AutoSize = true;
			this->LabelBase->Location = System::Drawing::Point(496, 117);
			this->LabelBase->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelBase->Name = L"LabelBase";
			this->LabelBase->Size = System::Drawing::Size(79, 13);
			this->LabelBase->TabIndex = 13;
			this->LabelBase->Text = L"Base gravable*";
			this->LabelBase->Click += gcnew System::EventHandler(this, &Productos::label3_Click);
			// 
			// TxtBase
			// 
			this->TxtBase->Location = System::Drawing::Point(577, 112);
			this->TxtBase->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtBase->Name = L"TxtBase";
			this->TxtBase->Size = System::Drawing::Size(58, 20);
			this->TxtBase->TabIndex = 14;
			// 
			// LabelUnidad
			// 
			this->LabelUnidad->AutoSize = true;
			this->LabelUnidad->Location = System::Drawing::Point(70, 94);
			this->LabelUnidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelUnidad->Name = L"LabelUnidad";
			this->LabelUnidad->Size = System::Drawing::Size(41, 13);
			this->LabelUnidad->TabIndex = 15;
			this->LabelUnidad->Text = L"Unidad";
			// 
			// LabelClave
			// 
			this->LabelClave->AutoSize = true;
			this->LabelClave->Location = System::Drawing::Point(395, 94);
			this->LabelClave->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelClave->Name = L"LabelClave";
			this->LabelClave->Size = System::Drawing::Size(38, 13);
			this->LabelClave->TabIndex = 16;
			this->LabelClave->Text = L"Clave*";
			// 
			// LabelDescripcion
			// 
			this->LabelDescripcion->AutoSize = true;
			this->LabelDescripcion->Location = System::Drawing::Point(46, 117);
			this->LabelDescripcion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelDescripcion->Name = L"LabelDescripcion";
			this->LabelDescripcion->Size = System::Drawing::Size(67, 13);
			this->LabelDescripcion->TabIndex = 17;
			this->LabelDescripcion->Text = L"Descripción*";
			// 
			// TxtImpuestosLocales
			// 
			this->TxtImpuestosLocales->FormattingEnabled = true;
			this->TxtImpuestosLocales->Location = System::Drawing::Point(435, 136);
			this->TxtImpuestosLocales->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtImpuestosLocales->Name = L"TxtImpuestosLocales";
			this->TxtImpuestosLocales->Size = System::Drawing::Size(200, 21);
			this->TxtImpuestosLocales->TabIndex = 18;
			// 
			// LabelImpuestoLocal
			// 
			this->LabelImpuestoLocal->AutoSize = true;
			this->LabelImpuestoLocal->Location = System::Drawing::Point(340, 142);
			this->LabelImpuestoLocal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelImpuestoLocal->Name = L"LabelImpuestoLocal";
			this->LabelImpuestoLocal->Size = System::Drawing::Size(95, 13);
			this->LabelImpuestoLocal->TabIndex = 19;
			this->LabelImpuestoLocal->Text = L"Impuestos Locales";
			// 
			// TxtImpuestoFederal
			// 
			this->TxtImpuestoFederal->FormattingEnabled = true;
			this->TxtImpuestoFederal->Location = System::Drawing::Point(113, 136);
			this->TxtImpuestoFederal->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtImpuestoFederal->Name = L"TxtImpuestoFederal";
			this->TxtImpuestoFederal->Size = System::Drawing::Size(200, 21);
			this->TxtImpuestoFederal->TabIndex = 20;
			// 
			// LabelImpuestoFederal
			// 
			this->LabelImpuestoFederal->AutoSize = true;
			this->LabelImpuestoFederal->Location = System::Drawing::Point(25, 142);
			this->LabelImpuestoFederal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelImpuestoFederal->Name = L"LabelImpuestoFederal";
			this->LabelImpuestoFederal->Size = System::Drawing::Size(88, 13);
			this->LabelImpuestoFederal->TabIndex = 21;
			this->LabelImpuestoFederal->Text = L"Impuesto Federal";
			// 
			// TxtObjeto
			// 
			this->TxtObjeto->FormattingEnabled = true;
			this->TxtObjeto->Location = System::Drawing::Point(113, 161);
			this->TxtObjeto->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->TxtObjeto->Name = L"TxtObjeto";
			this->TxtObjeto->Size = System::Drawing::Size(200, 21);
			this->TxtObjeto->TabIndex = 22;
			// 
			// LabelObjeto
			// 
			this->LabelObjeto->AutoSize = true;
			this->LabelObjeto->Location = System::Drawing::Point(10, 167);
			this->LabelObjeto->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelObjeto->Name = L"LabelObjeto";
			this->LabelObjeto->Size = System::Drawing::Size(103, 13);
			this->LabelObjeto->TabIndex = 23;
			this->LabelObjeto->Text = L"Objeto de impuestos";
			// 
			// BTNEnviar
			// 
			this->BTNEnviar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNEnviar->Location = System::Drawing::Point(294, 203);
			this->BTNEnviar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->BTNEnviar->Name = L"BTNEnviar";
			this->BTNEnviar->Size = System::Drawing::Size(85, 33);
			this->BTNEnviar->TabIndex = 24;
			this->BTNEnviar->Text = L"Enviar";
			this->BTNEnviar->UseVisualStyleBackColor = true;
			// 
			// Productos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(699, 431);
			this->Controls->Add(this->BTNEnviar);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Productos";
			this->Text = L"Productos";
			this->Load += gcnew System::EventHandler(this, &Productos::Productos_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TituloCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LinkSAT1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		// URL de Google que deseas abrir
		System::String^ googleURL = "http://pys.sat.gob.mx/PyS/catPyS.aspx";

		// Abre el enlace en el navegador web predeterminado
		System::Diagnostics::Process::Start(googleURL);
	}
	private: System::Void Productos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
