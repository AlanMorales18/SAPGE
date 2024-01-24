#pragma once

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	public:
		Clientes(void)
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
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ TituloCliente;
	private: System::Windows::Forms::TextBox^ TxtRFCCliente;
	private: System::Windows::Forms::TextBox^ TxtAlias;
	private: System::Windows::Forms::TextBox^ TxtNoExt;
	private: System::Windows::Forms::TextBox^ TxtCP;
	private: System::Windows::Forms::TextBox^ TxtMuncipio;
	private: System::Windows::Forms::TextBox^ TxtLocalidad;
	private: System::Windows::Forms::TextBox^ TxtNoCuenta;
	private: System::Windows::Forms::TextBox^ TxtRegimen;
	private: System::Windows::Forms::TextBox^ TxtRazon;
	private: System::Windows::Forms::TextBox^ TxtCalle;
	private: System::Windows::Forms::TextBox^ TxtNoInt;
	private: System::Windows::Forms::TextBox^ TxtEstado;
	private: System::Windows::Forms::TextBox^ TxtColonia;
	private: System::Windows::Forms::TextBox^ TxtReferencia;
	private: System::Windows::Forms::TextBox^ TxtPais;
	private: System::Windows::Forms::ComboBox^ TxtCFDI;
	private: System::Windows::Forms::Label^ LabelRFCCliente;
	private: System::Windows::Forms::Label^ LabelAlias;
	private: System::Windows::Forms::Label^ LabelNoExt;
	private: System::Windows::Forms::Label^ LabelCP;
	private: System::Windows::Forms::Label^ LabelMunicipio;
	private: System::Windows::Forms::Label^ LabelLocalidad;
	private: System::Windows::Forms::Label^ LabelNoCuenta;
	private: System::Windows::Forms::Label^ LabelRegimen;
	private: System::Windows::Forms::Label^ LabelRazon;
	private: System::Windows::Forms::Label^ LabelCalle;
	private: System::Windows::Forms::Label^ LabelNoInt;
	private: System::Windows::Forms::Label^ LabelEstado;
	private: System::Windows::Forms::Label^ LabelColonia;
	private: System::Windows::Forms::Label^ LabelReferencia;
	private: System::Windows::Forms::Label^ LabelPais;
	private: System::Windows::Forms::Label^ LabelCFDI;
	private: System::Windows::Forms::Label^ TituloDatos;
	private: System::Windows::Forms::TextBox^ TxtNombre;
	private: System::Windows::Forms::TextBox^ TxtTel1;
	private: System::Windows::Forms::TextBox^ TxtCorreo;
	private: System::Windows::Forms::TextBox^ TxtCargo;
	private: System::Windows::Forms::TextBox^ TxtTel2;
	private: System::Windows::Forms::Label^ LabelNombre;
	private: System::Windows::Forms::Label^ LabelTel1;
	private: System::Windows::Forms::Label^ LabelCorreo;
	private: System::Windows::Forms::Label^ LabelCargo;
	private: System::Windows::Forms::Label^ LabelTel2;
	private: System::Windows::Forms::Button^ BTNGuardar;












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
			this->TituloCliente = (gcnew System::Windows::Forms::Label());
			this->TxtRFCCliente = (gcnew System::Windows::Forms::TextBox());
			this->TxtAlias = (gcnew System::Windows::Forms::TextBox());
			this->TxtNoExt = (gcnew System::Windows::Forms::TextBox());
			this->TxtCP = (gcnew System::Windows::Forms::TextBox());
			this->TxtMuncipio = (gcnew System::Windows::Forms::TextBox());
			this->TxtLocalidad = (gcnew System::Windows::Forms::TextBox());
			this->TxtNoCuenta = (gcnew System::Windows::Forms::TextBox());
			this->TxtRegimen = (gcnew System::Windows::Forms::TextBox());
			this->TxtRazon = (gcnew System::Windows::Forms::TextBox());
			this->TxtCalle = (gcnew System::Windows::Forms::TextBox());
			this->TxtNoInt = (gcnew System::Windows::Forms::TextBox());
			this->TxtEstado = (gcnew System::Windows::Forms::TextBox());
			this->TxtColonia = (gcnew System::Windows::Forms::TextBox());
			this->TxtReferencia = (gcnew System::Windows::Forms::TextBox());
			this->TxtPais = (gcnew System::Windows::Forms::TextBox());
			this->TxtCFDI = (gcnew System::Windows::Forms::ComboBox());
			this->LabelRFCCliente = (gcnew System::Windows::Forms::Label());
			this->LabelAlias = (gcnew System::Windows::Forms::Label());
			this->LabelNoExt = (gcnew System::Windows::Forms::Label());
			this->LabelCP = (gcnew System::Windows::Forms::Label());
			this->LabelMunicipio = (gcnew System::Windows::Forms::Label());
			this->LabelLocalidad = (gcnew System::Windows::Forms::Label());
			this->LabelNoCuenta = (gcnew System::Windows::Forms::Label());
			this->LabelRegimen = (gcnew System::Windows::Forms::Label());
			this->LabelRazon = (gcnew System::Windows::Forms::Label());
			this->LabelCalle = (gcnew System::Windows::Forms::Label());
			this->LabelNoInt = (gcnew System::Windows::Forms::Label());
			this->LabelEstado = (gcnew System::Windows::Forms::Label());
			this->LabelColonia = (gcnew System::Windows::Forms::Label());
			this->LabelReferencia = (gcnew System::Windows::Forms::Label());
			this->LabelPais = (gcnew System::Windows::Forms::Label());
			this->LabelCFDI = (gcnew System::Windows::Forms::Label());
			this->TituloDatos = (gcnew System::Windows::Forms::Label());
			this->TxtNombre = (gcnew System::Windows::Forms::TextBox());
			this->TxtTel1 = (gcnew System::Windows::Forms::TextBox());
			this->TxtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->TxtCargo = (gcnew System::Windows::Forms::TextBox());
			this->TxtTel2 = (gcnew System::Windows::Forms::TextBox());
			this->LabelNombre = (gcnew System::Windows::Forms::Label());
			this->LabelTel1 = (gcnew System::Windows::Forms::Label());
			this->LabelCorreo = (gcnew System::Windows::Forms::Label());
			this->LabelCargo = (gcnew System::Windows::Forms::Label());
			this->LabelTel2 = (gcnew System::Windows::Forms::Label());
			this->BTNGuardar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TituloCliente
			// 
			this->TituloCliente->AutoSize = true;
			this->TituloCliente->Font = (gcnew System::Drawing::Font(L"Open Sans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TituloCliente->Location = System::Drawing::Point(308, 12);
			this->TituloCliente->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TituloCliente->Name = L"TituloCliente";
			this->TituloCliente->Size = System::Drawing::Size(95, 30);
			this->TituloCliente->TabIndex = 1;
			this->TituloCliente->Text = L"Clientes";
			this->TituloCliente->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TxtRFCCliente
			// 
			this->TxtRFCCliente->Location = System::Drawing::Point(110, 56);
			this->TxtRFCCliente->Margin = System::Windows::Forms::Padding(2);
			this->TxtRFCCliente->Name = L"TxtRFCCliente";
			this->TxtRFCCliente->Size = System::Drawing::Size(179, 20);
			this->TxtRFCCliente->TabIndex = 2;
			// 
			// TxtAlias
			// 
			this->TxtAlias->Location = System::Drawing::Point(110, 78);
			this->TxtAlias->Margin = System::Windows::Forms::Padding(2);
			this->TxtAlias->Name = L"TxtAlias";
			this->TxtAlias->Size = System::Drawing::Size(179, 20);
			this->TxtAlias->TabIndex = 3;
			// 
			// TxtNoExt
			// 
			this->TxtNoExt->Location = System::Drawing::Point(110, 101);
			this->TxtNoExt->Margin = System::Windows::Forms::Padding(2);
			this->TxtNoExt->Name = L"TxtNoExt";
			this->TxtNoExt->Size = System::Drawing::Size(179, 20);
			this->TxtNoExt->TabIndex = 4;
			// 
			// TxtCP
			// 
			this->TxtCP->Location = System::Drawing::Point(110, 123);
			this->TxtCP->Margin = System::Windows::Forms::Padding(2);
			this->TxtCP->Name = L"TxtCP";
			this->TxtCP->Size = System::Drawing::Size(179, 20);
			this->TxtCP->TabIndex = 5;
			// 
			// TxtMuncipio
			// 
			this->TxtMuncipio->Location = System::Drawing::Point(110, 146);
			this->TxtMuncipio->Margin = System::Windows::Forms::Padding(2);
			this->TxtMuncipio->Name = L"TxtMuncipio";
			this->TxtMuncipio->Size = System::Drawing::Size(179, 20);
			this->TxtMuncipio->TabIndex = 6;
			// 
			// TxtLocalidad
			// 
			this->TxtLocalidad->Location = System::Drawing::Point(110, 168);
			this->TxtLocalidad->Margin = System::Windows::Forms::Padding(2);
			this->TxtLocalidad->Name = L"TxtLocalidad";
			this->TxtLocalidad->Size = System::Drawing::Size(179, 20);
			this->TxtLocalidad->TabIndex = 7;
			// 
			// TxtNoCuenta
			// 
			this->TxtNoCuenta->Location = System::Drawing::Point(110, 190);
			this->TxtNoCuenta->Margin = System::Windows::Forms::Padding(2);
			this->TxtNoCuenta->Name = L"TxtNoCuenta";
			this->TxtNoCuenta->Size = System::Drawing::Size(179, 20);
			this->TxtNoCuenta->TabIndex = 8;
			// 
			// TxtRegimen
			// 
			this->TxtRegimen->Location = System::Drawing::Point(110, 213);
			this->TxtRegimen->Margin = System::Windows::Forms::Padding(2);
			this->TxtRegimen->Name = L"TxtRegimen";
			this->TxtRegimen->Size = System::Drawing::Size(179, 20);
			this->TxtRegimen->TabIndex = 9;
			// 
			// TxtRazon
			// 
			this->TxtRazon->Location = System::Drawing::Point(450, 56);
			this->TxtRazon->Margin = System::Windows::Forms::Padding(2);
			this->TxtRazon->Name = L"TxtRazon";
			this->TxtRazon->Size = System::Drawing::Size(179, 20);
			this->TxtRazon->TabIndex = 10;
			// 
			// TxtCalle
			// 
			this->TxtCalle->Location = System::Drawing::Point(450, 78);
			this->TxtCalle->Margin = System::Windows::Forms::Padding(2);
			this->TxtCalle->Name = L"TxtCalle";
			this->TxtCalle->Size = System::Drawing::Size(179, 20);
			this->TxtCalle->TabIndex = 11;
			// 
			// TxtNoInt
			// 
			this->TxtNoInt->Location = System::Drawing::Point(450, 101);
			this->TxtNoInt->Margin = System::Windows::Forms::Padding(2);
			this->TxtNoInt->Name = L"TxtNoInt";
			this->TxtNoInt->Size = System::Drawing::Size(179, 20);
			this->TxtNoInt->TabIndex = 12;
			// 
			// TxtEstado
			// 
			this->TxtEstado->Location = System::Drawing::Point(450, 123);
			this->TxtEstado->Margin = System::Windows::Forms::Padding(2);
			this->TxtEstado->Name = L"TxtEstado";
			this->TxtEstado->Size = System::Drawing::Size(179, 20);
			this->TxtEstado->TabIndex = 13;
			// 
			// TxtColonia
			// 
			this->TxtColonia->Location = System::Drawing::Point(450, 146);
			this->TxtColonia->Margin = System::Windows::Forms::Padding(2);
			this->TxtColonia->Name = L"TxtColonia";
			this->TxtColonia->Size = System::Drawing::Size(179, 20);
			this->TxtColonia->TabIndex = 14;
			// 
			// TxtReferencia
			// 
			this->TxtReferencia->Location = System::Drawing::Point(450, 168);
			this->TxtReferencia->Margin = System::Windows::Forms::Padding(2);
			this->TxtReferencia->Name = L"TxtReferencia";
			this->TxtReferencia->Size = System::Drawing::Size(179, 20);
			this->TxtReferencia->TabIndex = 15;
			// 
			// TxtPais
			// 
			this->TxtPais->Location = System::Drawing::Point(450, 190);
			this->TxtPais->Margin = System::Windows::Forms::Padding(2);
			this->TxtPais->Name = L"TxtPais";
			this->TxtPais->Size = System::Drawing::Size(179, 20);
			this->TxtPais->TabIndex = 16;
			// 
			// TxtCFDI
			// 
			this->TxtCFDI->FormattingEnabled = true;
			this->TxtCFDI->Location = System::Drawing::Point(450, 213);
			this->TxtCFDI->Margin = System::Windows::Forms::Padding(2);
			this->TxtCFDI->Name = L"TxtCFDI";
			this->TxtCFDI->Size = System::Drawing::Size(263, 21);
			this->TxtCFDI->TabIndex = 17;
			this->TxtCFDI->Text = L"Uso que dará a las facturas el receptor del CFDI";
			// 
			// LabelRFCCliente
			// 
			this->LabelRFCCliente->AutoSize = true;
			this->LabelRFCCliente->Location = System::Drawing::Point(39, 61);
			this->LabelRFCCliente->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelRFCCliente->Name = L"LabelRFCCliente";
			this->LabelRFCCliente->Size = System::Drawing::Size(67, 13);
			this->LabelRFCCliente->TabIndex = 18;
			this->LabelRFCCliente->Text = L"RFC Cliente*";
			this->LabelRFCCliente->Click += gcnew System::EventHandler(this, &Clientes::label1_Click);
			// 
			// LabelAlias
			// 
			this->LabelAlias->AutoSize = true;
			this->LabelAlias->Location = System::Drawing::Point(76, 83);
			this->LabelAlias->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelAlias->Name = L"LabelAlias";
			this->LabelAlias->Size = System::Drawing::Size(29, 13);
			this->LabelAlias->TabIndex = 19;
			this->LabelAlias->Text = L"Alias";
			// 
			// LabelNoExt
			// 
			this->LabelNoExt->AutoSize = true;
			this->LabelNoExt->Location = System::Drawing::Point(45, 106);
			this->LabelNoExt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNoExt->Name = L"LabelNoExt";
			this->LabelNoExt->Size = System::Drawing::Size(62, 13);
			this->LabelNoExt->TabIndex = 20;
			this->LabelNoExt->Text = L"No. Exterior";
			this->LabelNoExt->Click += gcnew System::EventHandler(this, &Clientes::label1_Click_1);
			// 
			// LabelCP
			// 
			this->LabelCP->AutoSize = true;
			this->LabelCP->Location = System::Drawing::Point(77, 128);
			this->LabelCP->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCP->Name = L"LabelCP";
			this->LabelCP->Size = System::Drawing::Size(31, 13);
			this->LabelCP->TabIndex = 21;
			this->LabelCP->Text = L"C.P.*";
			// 
			// LabelMunicipio
			// 
			this->LabelMunicipio->AutoSize = true;
			this->LabelMunicipio->Location = System::Drawing::Point(54, 150);
			this->LabelMunicipio->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelMunicipio->Name = L"LabelMunicipio";
			this->LabelMunicipio->Size = System::Drawing::Size(52, 13);
			this->LabelMunicipio->TabIndex = 22;
			this->LabelMunicipio->Text = L"Municipio";
			// 
			// LabelLocalidad
			// 
			this->LabelLocalidad->AutoSize = true;
			this->LabelLocalidad->Location = System::Drawing::Point(52, 173);
			this->LabelLocalidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelLocalidad->Name = L"LabelLocalidad";
			this->LabelLocalidad->Size = System::Drawing::Size(53, 13);
			this->LabelLocalidad->TabIndex = 23;
			this->LabelLocalidad->Text = L"Localidad";
			// 
			// LabelNoCuenta
			// 
			this->LabelNoCuenta->AutoSize = true;
			this->LabelNoCuenta->Location = System::Drawing::Point(39, 195);
			this->LabelNoCuenta->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNoCuenta->Name = L"LabelNoCuenta";
			this->LabelNoCuenta->Size = System::Drawing::Size(69, 13);
			this->LabelNoCuenta->TabIndex = 24;
			this->LabelNoCuenta->Text = L"Num. Cuenta";
			// 
			// LabelRegimen
			// 
			this->LabelRegimen->AutoSize = true;
			this->LabelRegimen->Location = System::Drawing::Point(21, 218);
			this->LabelRegimen->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelRegimen->Name = L"LabelRegimen";
			this->LabelRegimen->Size = System::Drawing::Size(83, 13);
			this->LabelRegimen->TabIndex = 25;
			this->LabelRegimen->Text = L"Régimen Fiscal*";
			// 
			// LabelRazon
			// 
			this->LabelRazon->AutoSize = true;
			this->LabelRazon->Location = System::Drawing::Point(372, 61);
			this->LabelRazon->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelRazon->Name = L"LabelRazon";
			this->LabelRazon->Size = System::Drawing::Size(74, 13);
			this->LabelRazon->TabIndex = 26;
			this->LabelRazon->Text = L"Rázon Social*";
			// 
			// LabelCalle
			// 
			this->LabelCalle->AutoSize = true;
			this->LabelCalle->Location = System::Drawing::Point(415, 83);
			this->LabelCalle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCalle->Name = L"LabelCalle";
			this->LabelCalle->Size = System::Drawing::Size(30, 13);
			this->LabelCalle->TabIndex = 27;
			this->LabelCalle->Text = L"Calle";
			// 
			// LabelNoInt
			// 
			this->LabelNoInt->AutoSize = true;
			this->LabelNoInt->Location = System::Drawing::Point(389, 106);
			this->LabelNoInt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNoInt->Name = L"LabelNoInt";
			this->LabelNoInt->Size = System::Drawing::Size(59, 13);
			this->LabelNoInt->TabIndex = 28;
			this->LabelNoInt->Text = L"No. Interior";
			// 
			// LabelEstado
			// 
			this->LabelEstado->AutoSize = true;
			this->LabelEstado->Location = System::Drawing::Point(406, 128);
			this->LabelEstado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelEstado->Name = L"LabelEstado";
			this->LabelEstado->Size = System::Drawing::Size(40, 13);
			this->LabelEstado->TabIndex = 29;
			this->LabelEstado->Text = L"Estado";
			this->LabelEstado->Click += gcnew System::EventHandler(this, &Clientes::label1_Click_2);
			// 
			// LabelColonia
			// 
			this->LabelColonia->AutoSize = true;
			this->LabelColonia->Location = System::Drawing::Point(403, 150);
			this->LabelColonia->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelColonia->Name = L"LabelColonia";
			this->LabelColonia->Size = System::Drawing::Size(42, 13);
			this->LabelColonia->TabIndex = 30;
			this->LabelColonia->Text = L"Colonia";
			this->LabelColonia->Click += gcnew System::EventHandler(this, &Clientes::label1_Click_3);
			// 
			// LabelReferencia
			// 
			this->LabelReferencia->AutoSize = true;
			this->LabelReferencia->Location = System::Drawing::Point(387, 173);
			this->LabelReferencia->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelReferencia->Name = L"LabelReferencia";
			this->LabelReferencia->Size = System::Drawing::Size(59, 13);
			this->LabelReferencia->TabIndex = 31;
			this->LabelReferencia->Text = L"Referencia";
			// 
			// LabelPais
			// 
			this->LabelPais->AutoSize = true;
			this->LabelPais->Location = System::Drawing::Point(418, 195);
			this->LabelPais->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelPais->Name = L"LabelPais";
			this->LabelPais->Size = System::Drawing::Size(29, 13);
			this->LabelPais->TabIndex = 32;
			this->LabelPais->Text = L"País";
			// 
			// LabelCFDI
			// 
			this->LabelCFDI->AutoSize = true;
			this->LabelCFDI->Location = System::Drawing::Point(372, 219);
			this->LabelCFDI->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCFDI->Name = L"LabelCFDI";
			this->LabelCFDI->Size = System::Drawing::Size(74, 13);
			this->LabelCFDI->TabIndex = 33;
			this->LabelCFDI->Text = L"Uso del CFDI*";
			// 
			// TituloDatos
			// 
			this->TituloDatos->AutoSize = true;
			this->TituloDatos->Font = (gcnew System::Drawing::Font(L"Open Sans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TituloDatos->Location = System::Drawing::Point(258, 249);
			this->TituloDatos->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TituloDatos->Name = L"TituloDatos";
			this->TituloDatos->Size = System::Drawing::Size(201, 30);
			this->TituloDatos->TabIndex = 34;
			this->TituloDatos->Text = L"Datos de Contacto";
			this->TituloDatos->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// TxtNombre
			// 
			this->TxtNombre->Location = System::Drawing::Point(110, 294);
			this->TxtNombre->Margin = System::Windows::Forms::Padding(2);
			this->TxtNombre->Name = L"TxtNombre";
			this->TxtNombre->Size = System::Drawing::Size(179, 20);
			this->TxtNombre->TabIndex = 35;
			// 
			// TxtTel1
			// 
			this->TxtTel1->Location = System::Drawing::Point(110, 316);
			this->TxtTel1->Margin = System::Windows::Forms::Padding(2);
			this->TxtTel1->Name = L"TxtTel1";
			this->TxtTel1->Size = System::Drawing::Size(179, 20);
			this->TxtTel1->TabIndex = 36;
			// 
			// TxtCorreo
			// 
			this->TxtCorreo->Location = System::Drawing::Point(110, 338);
			this->TxtCorreo->Margin = System::Windows::Forms::Padding(2);
			this->TxtCorreo->Name = L"TxtCorreo";
			this->TxtCorreo->Size = System::Drawing::Size(179, 20);
			this->TxtCorreo->TabIndex = 37;
			// 
			// TxtCargo
			// 
			this->TxtCargo->Location = System::Drawing::Point(450, 296);
			this->TxtCargo->Margin = System::Windows::Forms::Padding(2);
			this->TxtCargo->Name = L"TxtCargo";
			this->TxtCargo->Size = System::Drawing::Size(179, 20);
			this->TxtCargo->TabIndex = 38;
			// 
			// TxtTel2
			// 
			this->TxtTel2->Location = System::Drawing::Point(450, 318);
			this->TxtTel2->Margin = System::Windows::Forms::Padding(2);
			this->TxtTel2->Name = L"TxtTel2";
			this->TxtTel2->Size = System::Drawing::Size(179, 20);
			this->TxtTel2->TabIndex = 39;
			this->TxtTel2->TextChanged += gcnew System::EventHandler(this, &Clientes::TxtTel2_TextChanged);
			// 
			// LabelNombre
			// 
			this->LabelNombre->AutoSize = true;
			this->LabelNombre->Location = System::Drawing::Point(61, 298);
			this->LabelNombre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNombre->Name = L"LabelNombre";
			this->LabelNombre->Size = System::Drawing::Size(44, 13);
			this->LabelNombre->TabIndex = 40;
			this->LabelNombre->Text = L"Nombre";
			// 
			// LabelTel1
			// 
			this->LabelTel1->AutoSize = true;
			this->LabelTel1->Location = System::Drawing::Point(49, 321);
			this->LabelTel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelTel1->Name = L"LabelTel1";
			this->LabelTel1->Size = System::Drawing::Size(58, 13);
			this->LabelTel1->TabIndex = 41;
			this->LabelTel1->Text = L"Teléfono 1";
			// 
			// LabelCorreo
			// 
			this->LabelCorreo->AutoSize = true;
			this->LabelCorreo->Location = System::Drawing::Point(7, 343);
			this->LabelCorreo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCorreo->Name = L"LabelCorreo";
			this->LabelCorreo->Size = System::Drawing::Size(98, 13);
			this->LabelCorreo->TabIndex = 42;
			this->LabelCorreo->Text = L"Correo Electronico*";
			// 
			// LabelCargo
			// 
			this->LabelCargo->AutoSize = true;
			this->LabelCargo->Location = System::Drawing::Point(374, 298);
			this->LabelCargo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCargo->Name = L"LabelCargo";
			this->LabelCargo->Size = System::Drawing::Size(73, 13);
			this->LabelCargo->TabIndex = 43;
			this->LabelCargo->Text = L"Cargo/Puesto";
			// 
			// LabelTel2
			// 
			this->LabelTel2->AutoSize = true;
			this->LabelTel2->Location = System::Drawing::Point(389, 323);
			this->LabelTel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelTel2->Name = L"LabelTel2";
			this->LabelTel2->Size = System::Drawing::Size(58, 13);
			this->LabelTel2->TabIndex = 44;
			this->LabelTel2->Text = L"Teléfono 2";
			// 
			// BTNGuardar
			// 
			this->BTNGuardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNGuardar->Location = System::Drawing::Point(314, 375);
			this->BTNGuardar->Margin = System::Windows::Forms::Padding(2);
			this->BTNGuardar->Name = L"BTNGuardar";
			this->BTNGuardar->Size = System::Drawing::Size(91, 30);
			this->BTNGuardar->TabIndex = 45;
			this->BTNGuardar->Text = L"Guardar";
			this->BTNGuardar->UseVisualStyleBackColor = true;
			this->BTNGuardar->Click += gcnew System::EventHandler(this, &Clientes::button1_Click);
			// 
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(746, 425);
			this->Controls->Add(this->BTNGuardar);
			this->Controls->Add(this->LabelTel2);
			this->Controls->Add(this->LabelCargo);
			this->Controls->Add(this->LabelCorreo);
			this->Controls->Add(this->LabelTel1);
			this->Controls->Add(this->LabelNombre);
			this->Controls->Add(this->TxtTel2);
			this->Controls->Add(this->TxtCargo);
			this->Controls->Add(this->TxtCorreo);
			this->Controls->Add(this->TxtTel1);
			this->Controls->Add(this->TxtNombre);
			this->Controls->Add(this->TituloDatos);
			this->Controls->Add(this->LabelCFDI);
			this->Controls->Add(this->LabelPais);
			this->Controls->Add(this->LabelReferencia);
			this->Controls->Add(this->LabelColonia);
			this->Controls->Add(this->LabelEstado);
			this->Controls->Add(this->LabelNoInt);
			this->Controls->Add(this->LabelCalle);
			this->Controls->Add(this->LabelRazon);
			this->Controls->Add(this->LabelRegimen);
			this->Controls->Add(this->LabelNoCuenta);
			this->Controls->Add(this->LabelLocalidad);
			this->Controls->Add(this->LabelMunicipio);
			this->Controls->Add(this->LabelCP);
			this->Controls->Add(this->LabelNoExt);
			this->Controls->Add(this->LabelAlias);
			this->Controls->Add(this->LabelRFCCliente);
			this->Controls->Add(this->TxtCFDI);
			this->Controls->Add(this->TxtPais);
			this->Controls->Add(this->TxtReferencia);
			this->Controls->Add(this->TxtColonia);
			this->Controls->Add(this->TxtEstado);
			this->Controls->Add(this->TxtNoInt);
			this->Controls->Add(this->TxtCalle);
			this->Controls->Add(this->TxtRazon);
			this->Controls->Add(this->TxtRegimen);
			this->Controls->Add(this->TxtNoCuenta);
			this->Controls->Add(this->TxtLocalidad);
			this->Controls->Add(this->TxtMuncipio);
			this->Controls->Add(this->TxtCP);
			this->Controls->Add(this->TxtNoExt);
			this->Controls->Add(this->TxtAlias);
			this->Controls->Add(this->TxtRFCCliente);
			this->Controls->Add(this->TituloCliente);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Clientes";
			this->Text = L"Clientes";
			this->Load += gcnew System::EventHandler(this, &Clientes::Clientes_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Clientes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TxtTel2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
