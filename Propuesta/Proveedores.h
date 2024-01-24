#pragma once

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Proveedores
	/// </summary>
	public ref class Proveedores : public System::Windows::Forms::Form
	{
	public:
		Proveedores(void)
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
		~Proveedores()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ LabelTel2;
	private: System::Windows::Forms::Label^ LabelCargo;
	private: System::Windows::Forms::Label^ LabelCorreo;
	private: System::Windows::Forms::Label^ LabelTel1;
	private: System::Windows::Forms::Label^ LabelNombre;
	private: System::Windows::Forms::TextBox^ TxtTel2;
	private: System::Windows::Forms::TextBox^ TxtCargo;
	private: System::Windows::Forms::TextBox^ TxtCorreo;
	private: System::Windows::Forms::TextBox^ TxtTel1;
	private: System::Windows::Forms::TextBox^ TxtNombre;
	private: System::Windows::Forms::Label^ TituloDatos;
	private: System::Windows::Forms::Label^ LabelCFDI;
	private: System::Windows::Forms::Label^ LabelPais;
	private: System::Windows::Forms::Label^ LabelReferencia;
	private: System::Windows::Forms::Label^ LabelColonia;
	private: System::Windows::Forms::Label^ LabelEstado;
	private: System::Windows::Forms::Label^ LabelNoInt;
	private: System::Windows::Forms::Label^ LabelCalle;
	private: System::Windows::Forms::Label^ LabelRazon;
	private: System::Windows::Forms::Label^ LabelRegimen;
	private: System::Windows::Forms::Label^ LabelNoCuenta;
	private: System::Windows::Forms::Label^ LabelLocalidad;
	private: System::Windows::Forms::Label^ LabelMunicipio;
	private: System::Windows::Forms::Label^ LabelCP;
	private: System::Windows::Forms::Label^ LabelNoExt;
	private: System::Windows::Forms::Label^ LabelAlias;
	private: System::Windows::Forms::Label^ LabelRFCProveedor;

	private: System::Windows::Forms::ComboBox^ TxtCFDI;
	private: System::Windows::Forms::TextBox^ TxtPais;
	private: System::Windows::Forms::TextBox^ TxtReferencia;
	private: System::Windows::Forms::TextBox^ TxtColonia;
	private: System::Windows::Forms::TextBox^ TxtEstado;
	private: System::Windows::Forms::TextBox^ TxtNoInt;
	private: System::Windows::Forms::TextBox^ TxtCalle;
	private: System::Windows::Forms::TextBox^ TxtRazon;
	private: System::Windows::Forms::TextBox^ TxtRegimen;
	private: System::Windows::Forms::TextBox^ TxtNoCuenta;
	private: System::Windows::Forms::TextBox^ TxtLocalidad;
	private: System::Windows::Forms::TextBox^ TxtMuncipio;
	private: System::Windows::Forms::TextBox^ TxtCP;
	private: System::Windows::Forms::TextBox^ TxtNoExt;
	private: System::Windows::Forms::TextBox^ TxtAlias;
	private: System::Windows::Forms::TextBox^ TxtRFCCliente;
	private: System::Windows::Forms::Label^ TituloProveedores;
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
			this->LabelTel2 = (gcnew System::Windows::Forms::Label());
			this->LabelCargo = (gcnew System::Windows::Forms::Label());
			this->LabelCorreo = (gcnew System::Windows::Forms::Label());
			this->LabelTel1 = (gcnew System::Windows::Forms::Label());
			this->LabelNombre = (gcnew System::Windows::Forms::Label());
			this->TxtTel2 = (gcnew System::Windows::Forms::TextBox());
			this->TxtCargo = (gcnew System::Windows::Forms::TextBox());
			this->TxtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->TxtTel1 = (gcnew System::Windows::Forms::TextBox());
			this->TxtNombre = (gcnew System::Windows::Forms::TextBox());
			this->TituloDatos = (gcnew System::Windows::Forms::Label());
			this->LabelCFDI = (gcnew System::Windows::Forms::Label());
			this->LabelPais = (gcnew System::Windows::Forms::Label());
			this->LabelReferencia = (gcnew System::Windows::Forms::Label());
			this->LabelColonia = (gcnew System::Windows::Forms::Label());
			this->LabelEstado = (gcnew System::Windows::Forms::Label());
			this->LabelNoInt = (gcnew System::Windows::Forms::Label());
			this->LabelCalle = (gcnew System::Windows::Forms::Label());
			this->LabelRazon = (gcnew System::Windows::Forms::Label());
			this->LabelRegimen = (gcnew System::Windows::Forms::Label());
			this->LabelNoCuenta = (gcnew System::Windows::Forms::Label());
			this->LabelLocalidad = (gcnew System::Windows::Forms::Label());
			this->LabelMunicipio = (gcnew System::Windows::Forms::Label());
			this->LabelCP = (gcnew System::Windows::Forms::Label());
			this->LabelNoExt = (gcnew System::Windows::Forms::Label());
			this->LabelAlias = (gcnew System::Windows::Forms::Label());
			this->LabelRFCProveedor = (gcnew System::Windows::Forms::Label());
			this->TxtCFDI = (gcnew System::Windows::Forms::ComboBox());
			this->TxtPais = (gcnew System::Windows::Forms::TextBox());
			this->TxtReferencia = (gcnew System::Windows::Forms::TextBox());
			this->TxtColonia = (gcnew System::Windows::Forms::TextBox());
			this->TxtEstado = (gcnew System::Windows::Forms::TextBox());
			this->TxtNoInt = (gcnew System::Windows::Forms::TextBox());
			this->TxtCalle = (gcnew System::Windows::Forms::TextBox());
			this->TxtRazon = (gcnew System::Windows::Forms::TextBox());
			this->TxtRegimen = (gcnew System::Windows::Forms::TextBox());
			this->TxtNoCuenta = (gcnew System::Windows::Forms::TextBox());
			this->TxtLocalidad = (gcnew System::Windows::Forms::TextBox());
			this->TxtMuncipio = (gcnew System::Windows::Forms::TextBox());
			this->TxtCP = (gcnew System::Windows::Forms::TextBox());
			this->TxtNoExt = (gcnew System::Windows::Forms::TextBox());
			this->TxtAlias = (gcnew System::Windows::Forms::TextBox());
			this->TxtRFCCliente = (gcnew System::Windows::Forms::TextBox());
			this->TituloProveedores = (gcnew System::Windows::Forms::Label());
			this->BTNEnviar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelTel2
			// 
			this->LabelTel2->AutoSize = true;
			this->LabelTel2->Location = System::Drawing::Point(384, 322);
			this->LabelTel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelTel2->Name = L"LabelTel2";
			this->LabelTel2->Size = System::Drawing::Size(58, 13);
			this->LabelTel2->TabIndex = 88;
			this->LabelTel2->Text = L"Teléfono 2";
			this->LabelTel2->Click += gcnew System::EventHandler(this, &Proveedores::LabelTel2_Click);
			// 
			// LabelCargo
			// 
			this->LabelCargo->AutoSize = true;
			this->LabelCargo->Location = System::Drawing::Point(370, 297);
			this->LabelCargo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCargo->Name = L"LabelCargo";
			this->LabelCargo->Size = System::Drawing::Size(73, 13);
			this->LabelCargo->TabIndex = 87;
			this->LabelCargo->Text = L"Cargo/Puesto";
			this->LabelCargo->Click += gcnew System::EventHandler(this, &Proveedores::LabelCargo_Click);
			// 
			// LabelCorreo
			// 
			this->LabelCorreo->AutoSize = true;
			this->LabelCorreo->Location = System::Drawing::Point(26, 342);
			this->LabelCorreo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCorreo->Name = L"LabelCorreo";
			this->LabelCorreo->Size = System::Drawing::Size(98, 13);
			this->LabelCorreo->TabIndex = 86;
			this->LabelCorreo->Text = L"Correo Electronico*";
			this->LabelCorreo->Click += gcnew System::EventHandler(this, &Proveedores::LabelCorreo_Click);
			// 
			// LabelTel1
			// 
			this->LabelTel1->AutoSize = true;
			this->LabelTel1->Location = System::Drawing::Point(65, 319);
			this->LabelTel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelTel1->Name = L"LabelTel1";
			this->LabelTel1->Size = System::Drawing::Size(58, 13);
			this->LabelTel1->TabIndex = 85;
			this->LabelTel1->Text = L"Teléfono 1";
			this->LabelTel1->Click += gcnew System::EventHandler(this, &Proveedores::LabelTel1_Click);
			// 
			// LabelNombre
			// 
			this->LabelNombre->AutoSize = true;
			this->LabelNombre->Location = System::Drawing::Point(76, 297);
			this->LabelNombre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNombre->Name = L"LabelNombre";
			this->LabelNombre->Size = System::Drawing::Size(44, 13);
			this->LabelNombre->TabIndex = 84;
			this->LabelNombre->Text = L"Nombre";
			this->LabelNombre->Click += gcnew System::EventHandler(this, &Proveedores::LabelNombre_Click);
			// 
			// TxtTel2
			// 
			this->TxtTel2->Location = System::Drawing::Point(442, 317);
			this->TxtTel2->Margin = System::Windows::Forms::Padding(2);
			this->TxtTel2->Name = L"TxtTel2";
			this->TxtTel2->Size = System::Drawing::Size(168, 20);
			this->TxtTel2->TabIndex = 83;
			this->TxtTel2->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtTel2_TextChanged);
			// 
			// TxtCargo
			// 
			this->TxtCargo->Location = System::Drawing::Point(442, 294);
			this->TxtCargo->Margin = System::Windows::Forms::Padding(2);
			this->TxtCargo->Name = L"TxtCargo";
			this->TxtCargo->Size = System::Drawing::Size(168, 20);
			this->TxtCargo->TabIndex = 82;
			this->TxtCargo->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtCargo_TextChanged);
			// 
			// TxtCorreo
			// 
			this->TxtCorreo->Location = System::Drawing::Point(123, 337);
			this->TxtCorreo->Margin = System::Windows::Forms::Padding(2);
			this->TxtCorreo->Name = L"TxtCorreo";
			this->TxtCorreo->Size = System::Drawing::Size(168, 20);
			this->TxtCorreo->TabIndex = 81;
			this->TxtCorreo->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtCorreo_TextChanged);
			// 
			// TxtTel1
			// 
			this->TxtTel1->Location = System::Drawing::Point(123, 314);
			this->TxtTel1->Margin = System::Windows::Forms::Padding(2);
			this->TxtTel1->Name = L"TxtTel1";
			this->TxtTel1->Size = System::Drawing::Size(168, 20);
			this->TxtTel1->TabIndex = 80;
			this->TxtTel1->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtTel1_TextChanged);
			// 
			// TxtNombre
			// 
			this->TxtNombre->Location = System::Drawing::Point(123, 292);
			this->TxtNombre->Margin = System::Windows::Forms::Padding(2);
			this->TxtNombre->Name = L"TxtNombre";
			this->TxtNombre->Size = System::Drawing::Size(168, 20);
			this->TxtNombre->TabIndex = 79;
			this->TxtNombre->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtNombre_TextChanged);
			// 
			// TituloDatos
			// 
			this->TituloDatos->AutoSize = true;
			this->TituloDatos->Font = (gcnew System::Drawing::Font(L"Open Sans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TituloDatos->Location = System::Drawing::Point(261, 246);
			this->TituloDatos->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TituloDatos->Name = L"TituloDatos";
			this->TituloDatos->Size = System::Drawing::Size(201, 30);
			this->TituloDatos->TabIndex = 78;
			this->TituloDatos->Text = L"Datos de Contacto";
			this->TituloDatos->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->TituloDatos->Click += gcnew System::EventHandler(this, &Proveedores::TituloDatos_Click);
			// 
			// LabelCFDI
			// 
			this->LabelCFDI->AutoSize = true;
			this->LabelCFDI->Location = System::Drawing::Point(368, 216);
			this->LabelCFDI->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCFDI->Name = L"LabelCFDI";
			this->LabelCFDI->Size = System::Drawing::Size(74, 13);
			this->LabelCFDI->TabIndex = 77;
			this->LabelCFDI->Text = L"Uso del CFDI*";
			this->LabelCFDI->Click += gcnew System::EventHandler(this, &Proveedores::LabelCFDI_Click);
			// 
			// LabelPais
			// 
			this->LabelPais->AutoSize = true;
			this->LabelPais->Location = System::Drawing::Point(412, 192);
			this->LabelPais->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelPais->Name = L"LabelPais";
			this->LabelPais->Size = System::Drawing::Size(29, 13);
			this->LabelPais->TabIndex = 76;
			this->LabelPais->Text = L"País";
			this->LabelPais->Click += gcnew System::EventHandler(this, &Proveedores::LabelPais_Click);
			// 
			// LabelReferencia
			// 
			this->LabelReferencia->AutoSize = true;
			this->LabelReferencia->Location = System::Drawing::Point(382, 169);
			this->LabelReferencia->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelReferencia->Name = L"LabelReferencia";
			this->LabelReferencia->Size = System::Drawing::Size(59, 13);
			this->LabelReferencia->TabIndex = 75;
			this->LabelReferencia->Text = L"Referencia";
			this->LabelReferencia->Click += gcnew System::EventHandler(this, &Proveedores::LabelReferencia_Click);
			// 
			// LabelColonia
			// 
			this->LabelColonia->AutoSize = true;
			this->LabelColonia->Location = System::Drawing::Point(398, 146);
			this->LabelColonia->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelColonia->Name = L"LabelColonia";
			this->LabelColonia->Size = System::Drawing::Size(42, 13);
			this->LabelColonia->TabIndex = 74;
			this->LabelColonia->Text = L"Colonia";
			this->LabelColonia->Click += gcnew System::EventHandler(this, &Proveedores::LabelColonia_Click);
			// 
			// LabelEstado
			// 
			this->LabelEstado->AutoSize = true;
			this->LabelEstado->Location = System::Drawing::Point(400, 124);
			this->LabelEstado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelEstado->Name = L"LabelEstado";
			this->LabelEstado->Size = System::Drawing::Size(40, 13);
			this->LabelEstado->TabIndex = 73;
			this->LabelEstado->Text = L"Estado";
			this->LabelEstado->Click += gcnew System::EventHandler(this, &Proveedores::LabelEstado_Click);
			// 
			// LabelNoInt
			// 
			this->LabelNoInt->AutoSize = true;
			this->LabelNoInt->Location = System::Drawing::Point(384, 101);
			this->LabelNoInt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNoInt->Name = L"LabelNoInt";
			this->LabelNoInt->Size = System::Drawing::Size(59, 13);
			this->LabelNoInt->TabIndex = 72;
			this->LabelNoInt->Text = L"No. Interior";
			this->LabelNoInt->Click += gcnew System::EventHandler(this, &Proveedores::LabelNoInt_Click);
			// 
			// LabelCalle
			// 
			this->LabelCalle->AutoSize = true;
			this->LabelCalle->Location = System::Drawing::Point(409, 78);
			this->LabelCalle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCalle->Name = L"LabelCalle";
			this->LabelCalle->Size = System::Drawing::Size(30, 13);
			this->LabelCalle->TabIndex = 71;
			this->LabelCalle->Text = L"Calle";
			this->LabelCalle->Click += gcnew System::EventHandler(this, &Proveedores::LabelCalle_Click);
			// 
			// LabelRazon
			// 
			this->LabelRazon->AutoSize = true;
			this->LabelRazon->Location = System::Drawing::Point(368, 55);
			this->LabelRazon->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelRazon->Name = L"LabelRazon";
			this->LabelRazon->Size = System::Drawing::Size(74, 13);
			this->LabelRazon->TabIndex = 70;
			this->LabelRazon->Text = L"Rázon Social*";
			this->LabelRazon->Click += gcnew System::EventHandler(this, &Proveedores::LabelRazon_Click);
			// 
			// LabelRegimen
			// 
			this->LabelRegimen->AutoSize = true;
			this->LabelRegimen->Location = System::Drawing::Point(39, 214);
			this->LabelRegimen->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelRegimen->Name = L"LabelRegimen";
			this->LabelRegimen->Size = System::Drawing::Size(83, 13);
			this->LabelRegimen->TabIndex = 69;
			this->LabelRegimen->Text = L"Régimen Fiscal*";
			this->LabelRegimen->Click += gcnew System::EventHandler(this, &Proveedores::LabelRegimen_Click);
			// 
			// LabelNoCuenta
			// 
			this->LabelNoCuenta->AutoSize = true;
			this->LabelNoCuenta->Location = System::Drawing::Point(56, 192);
			this->LabelNoCuenta->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNoCuenta->Name = L"LabelNoCuenta";
			this->LabelNoCuenta->Size = System::Drawing::Size(69, 13);
			this->LabelNoCuenta->TabIndex = 68;
			this->LabelNoCuenta->Text = L"Num. Cuenta";
			this->LabelNoCuenta->Click += gcnew System::EventHandler(this, &Proveedores::LabelNoCuenta_Click);
			// 
			// LabelLocalidad
			// 
			this->LabelLocalidad->AutoSize = true;
			this->LabelLocalidad->Location = System::Drawing::Point(68, 169);
			this->LabelLocalidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelLocalidad->Name = L"LabelLocalidad";
			this->LabelLocalidad->Size = System::Drawing::Size(53, 13);
			this->LabelLocalidad->TabIndex = 67;
			this->LabelLocalidad->Text = L"Localidad";
			this->LabelLocalidad->Click += gcnew System::EventHandler(this, &Proveedores::LabelLocalidad_Click);
			// 
			// LabelMunicipio
			// 
			this->LabelMunicipio->AutoSize = true;
			this->LabelMunicipio->Location = System::Drawing::Point(70, 146);
			this->LabelMunicipio->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelMunicipio->Name = L"LabelMunicipio";
			this->LabelMunicipio->Size = System::Drawing::Size(52, 13);
			this->LabelMunicipio->TabIndex = 66;
			this->LabelMunicipio->Text = L"Municipio";
			this->LabelMunicipio->Click += gcnew System::EventHandler(this, &Proveedores::LabelMunicipio_Click);
			// 
			// LabelCP
			// 
			this->LabelCP->AutoSize = true;
			this->LabelCP->Location = System::Drawing::Point(92, 124);
			this->LabelCP->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCP->Name = L"LabelCP";
			this->LabelCP->Size = System::Drawing::Size(31, 13);
			this->LabelCP->TabIndex = 65;
			this->LabelCP->Text = L"C.P.*";
			this->LabelCP->Click += gcnew System::EventHandler(this, &Proveedores::LabelCP_Click);
			// 
			// LabelNoExt
			// 
			this->LabelNoExt->AutoSize = true;
			this->LabelNoExt->Location = System::Drawing::Point(62, 101);
			this->LabelNoExt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNoExt->Name = L"LabelNoExt";
			this->LabelNoExt->Size = System::Drawing::Size(62, 13);
			this->LabelNoExt->TabIndex = 64;
			this->LabelNoExt->Text = L"No. Exterior";
			this->LabelNoExt->Click += gcnew System::EventHandler(this, &Proveedores::LabelNoExt_Click);
			// 
			// LabelAlias
			// 
			this->LabelAlias->AutoSize = true;
			this->LabelAlias->Location = System::Drawing::Point(91, 78);
			this->LabelAlias->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelAlias->Name = L"LabelAlias";
			this->LabelAlias->Size = System::Drawing::Size(29, 13);
			this->LabelAlias->TabIndex = 63;
			this->LabelAlias->Text = L"Alias";
			this->LabelAlias->Click += gcnew System::EventHandler(this, &Proveedores::LabelAlias_Click);
			// 
			// LabelRFCProveedor
			// 
			this->LabelRFCProveedor->AutoSize = true;
			this->LabelRFCProveedor->Location = System::Drawing::Point(39, 55);
			this->LabelRFCProveedor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelRFCProveedor->Name = L"LabelRFCProveedor";
			this->LabelRFCProveedor->Size = System::Drawing::Size(84, 13);
			this->LabelRFCProveedor->TabIndex = 62;
			this->LabelRFCProveedor->Text = L"RFC Proveedor*";
			this->LabelRFCProveedor->Click += gcnew System::EventHandler(this, &Proveedores::LabelRFCCliente_Click);
			// 
			// TxtCFDI
			// 
			this->TxtCFDI->FormattingEnabled = true;
			this->TxtCFDI->Location = System::Drawing::Point(442, 210);
			this->TxtCFDI->Margin = System::Windows::Forms::Padding(2);
			this->TxtCFDI->Name = L"TxtCFDI";
			this->TxtCFDI->Size = System::Drawing::Size(247, 21);
			this->TxtCFDI->TabIndex = 61;
			this->TxtCFDI->Text = L"Uso que dará a las facturas el receptor del CFDI";
			this->TxtCFDI->SelectedIndexChanged += gcnew System::EventHandler(this, &Proveedores::TxtCFDI_SelectedIndexChanged);
			// 
			// TxtPais
			// 
			this->TxtPais->Location = System::Drawing::Point(442, 187);
			this->TxtPais->Margin = System::Windows::Forms::Padding(2);
			this->TxtPais->Name = L"TxtPais";
			this->TxtPais->Size = System::Drawing::Size(168, 20);
			this->TxtPais->TabIndex = 60;
			this->TxtPais->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtPais_TextChanged);
			// 
			// TxtReferencia
			// 
			this->TxtReferencia->Location = System::Drawing::Point(442, 164);
			this->TxtReferencia->Margin = System::Windows::Forms::Padding(2);
			this->TxtReferencia->Name = L"TxtReferencia";
			this->TxtReferencia->Size = System::Drawing::Size(168, 20);
			this->TxtReferencia->TabIndex = 59;
			this->TxtReferencia->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtReferencia_TextChanged);
			// 
			// TxtColonia
			// 
			this->TxtColonia->Location = System::Drawing::Point(442, 141);
			this->TxtColonia->Margin = System::Windows::Forms::Padding(2);
			this->TxtColonia->Name = L"TxtColonia";
			this->TxtColonia->Size = System::Drawing::Size(168, 20);
			this->TxtColonia->TabIndex = 58;
			this->TxtColonia->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtColonia_TextChanged);
			// 
			// TxtEstado
			// 
			this->TxtEstado->Location = System::Drawing::Point(442, 119);
			this->TxtEstado->Margin = System::Windows::Forms::Padding(2);
			this->TxtEstado->Name = L"TxtEstado";
			this->TxtEstado->Size = System::Drawing::Size(168, 20);
			this->TxtEstado->TabIndex = 57;
			this->TxtEstado->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtEstado_TextChanged);
			// 
			// TxtNoInt
			// 
			this->TxtNoInt->Location = System::Drawing::Point(442, 96);
			this->TxtNoInt->Margin = System::Windows::Forms::Padding(2);
			this->TxtNoInt->Name = L"TxtNoInt";
			this->TxtNoInt->Size = System::Drawing::Size(168, 20);
			this->TxtNoInt->TabIndex = 56;
			this->TxtNoInt->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtNoInt_TextChanged);
			// 
			// TxtCalle
			// 
			this->TxtCalle->Location = System::Drawing::Point(442, 73);
			this->TxtCalle->Margin = System::Windows::Forms::Padding(2);
			this->TxtCalle->Name = L"TxtCalle";
			this->TxtCalle->Size = System::Drawing::Size(168, 20);
			this->TxtCalle->TabIndex = 55;
			this->TxtCalle->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtCalle_TextChanged);
			// 
			// TxtRazon
			// 
			this->TxtRazon->Location = System::Drawing::Point(442, 50);
			this->TxtRazon->Margin = System::Windows::Forms::Padding(2);
			this->TxtRazon->Name = L"TxtRazon";
			this->TxtRazon->Size = System::Drawing::Size(168, 20);
			this->TxtRazon->TabIndex = 54;
			this->TxtRazon->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtRazon_TextChanged);
			// 
			// TxtRegimen
			// 
			this->TxtRegimen->Location = System::Drawing::Point(123, 210);
			this->TxtRegimen->Margin = System::Windows::Forms::Padding(2);
			this->TxtRegimen->Name = L"TxtRegimen";
			this->TxtRegimen->Size = System::Drawing::Size(168, 20);
			this->TxtRegimen->TabIndex = 53;
			this->TxtRegimen->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtRegimen_TextChanged);
			// 
			// TxtNoCuenta
			// 
			this->TxtNoCuenta->Location = System::Drawing::Point(123, 187);
			this->TxtNoCuenta->Margin = System::Windows::Forms::Padding(2);
			this->TxtNoCuenta->Name = L"TxtNoCuenta";
			this->TxtNoCuenta->Size = System::Drawing::Size(168, 20);
			this->TxtNoCuenta->TabIndex = 52;
			this->TxtNoCuenta->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtNoCuenta_TextChanged);
			// 
			// TxtLocalidad
			// 
			this->TxtLocalidad->Location = System::Drawing::Point(123, 164);
			this->TxtLocalidad->Margin = System::Windows::Forms::Padding(2);
			this->TxtLocalidad->Name = L"TxtLocalidad";
			this->TxtLocalidad->Size = System::Drawing::Size(168, 20);
			this->TxtLocalidad->TabIndex = 51;
			this->TxtLocalidad->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtLocalidad_TextChanged);
			// 
			// TxtMuncipio
			// 
			this->TxtMuncipio->Location = System::Drawing::Point(123, 141);
			this->TxtMuncipio->Margin = System::Windows::Forms::Padding(2);
			this->TxtMuncipio->Name = L"TxtMuncipio";
			this->TxtMuncipio->Size = System::Drawing::Size(168, 20);
			this->TxtMuncipio->TabIndex = 50;
			this->TxtMuncipio->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtMuncipio_TextChanged);
			// 
			// TxtCP
			// 
			this->TxtCP->Location = System::Drawing::Point(123, 119);
			this->TxtCP->Margin = System::Windows::Forms::Padding(2);
			this->TxtCP->Name = L"TxtCP";
			this->TxtCP->Size = System::Drawing::Size(168, 20);
			this->TxtCP->TabIndex = 49;
			this->TxtCP->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtCP_TextChanged);
			// 
			// TxtNoExt
			// 
			this->TxtNoExt->Location = System::Drawing::Point(123, 96);
			this->TxtNoExt->Margin = System::Windows::Forms::Padding(2);
			this->TxtNoExt->Name = L"TxtNoExt";
			this->TxtNoExt->Size = System::Drawing::Size(168, 20);
			this->TxtNoExt->TabIndex = 48;
			this->TxtNoExt->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtNoExt_TextChanged);
			// 
			// TxtAlias
			// 
			this->TxtAlias->Location = System::Drawing::Point(123, 73);
			this->TxtAlias->Margin = System::Windows::Forms::Padding(2);
			this->TxtAlias->Name = L"TxtAlias";
			this->TxtAlias->Size = System::Drawing::Size(168, 20);
			this->TxtAlias->TabIndex = 47;
			this->TxtAlias->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtAlias_TextChanged);
			// 
			// TxtRFCCliente
			// 
			this->TxtRFCCliente->Location = System::Drawing::Point(123, 50);
			this->TxtRFCCliente->Margin = System::Windows::Forms::Padding(2);
			this->TxtRFCCliente->Name = L"TxtRFCCliente";
			this->TxtRFCCliente->Size = System::Drawing::Size(168, 20);
			this->TxtRFCCliente->TabIndex = 46;
			this->TxtRFCCliente->TextChanged += gcnew System::EventHandler(this, &Proveedores::TxtRFCCliente_TextChanged);
			// 
			// TituloProveedores
			// 
			this->TituloProveedores->AutoSize = true;
			this->TituloProveedores->Font = (gcnew System::Drawing::Font(L"Open Sans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TituloProveedores->Location = System::Drawing::Point(286, 6);
			this->TituloProveedores->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TituloProveedores->Name = L"TituloProveedores";
			this->TituloProveedores->Size = System::Drawing::Size(140, 30);
			this->TituloProveedores->TabIndex = 45;
			this->TituloProveedores->Text = L"Proveedores";
			this->TituloProveedores->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->TituloProveedores->Click += gcnew System::EventHandler(this, &Proveedores::TituloCliente_Click);
			// 
			// BTNEnviar
			// 
			this->BTNEnviar->BackColor = System::Drawing::SystemColors::Window;
			this->BTNEnviar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNEnviar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNEnviar->Location = System::Drawing::Point(292, 372);
			this->BTNEnviar->Margin = System::Windows::Forms::Padding(2);
			this->BTNEnviar->Name = L"BTNEnviar";
			this->BTNEnviar->Size = System::Drawing::Size(112, 36);
			this->BTNEnviar->TabIndex = 89;
			this->BTNEnviar->Text = L"Enviar";
			this->BTNEnviar->UseMnemonic = false;
			this->BTNEnviar->UseVisualStyleBackColor = false;
			this->BTNEnviar->Click += gcnew System::EventHandler(this, &Proveedores::BTNEnviar_Click);
			// 
			// Proveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(746, 425);
			this->Controls->Add(this->BTNEnviar);
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
			this->Controls->Add(this->LabelRFCProveedor);
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
			this->Controls->Add(this->TituloProveedores);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Proveedores";
			this->Text = L"Proveedores";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TituloCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelCargo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelCorreo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelTel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelNombre_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtTel2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtCargo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtCorreo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtTel1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TituloDatos_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelCFDI_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelPais_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelReferencia_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelColonia_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelEstado_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelNoInt_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelCalle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelRazon_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelRegimen_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelNoCuenta_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelLocalidad_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelMunicipio_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelCP_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelNoExt_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelAlias_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelRFCCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtCFDI_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtPais_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtReferencia_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtColonia_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtEstado_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtNoInt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtCalle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtRazon_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtRegimen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtNoCuenta_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtLocalidad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtMuncipio_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtCP_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtNoExt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtAlias_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void LabelTel2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TxtRFCCliente_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BTNEnviar_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
