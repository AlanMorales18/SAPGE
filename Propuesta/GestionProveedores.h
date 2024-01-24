#pragma once

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GestionProveedores
	/// </summary>
	public ref class GestionProveedores : public System::Windows::Forms::Form
	{
	public:
		GestionProveedores(void)
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
		~GestionProveedores()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
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
			this->BTNBuscar = (gcnew System::Windows::Forms::Button());
			this->TxtBuscarProveedor = (gcnew System::Windows::Forms::TextBox());
			this->LabelBuscar = (gcnew System::Windows::Forms::Label());
			this->BTNBorrar = (gcnew System::Windows::Forms::Button());
			this->BTNGuardar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LabelTel2
			// 
			this->LabelTel2->AutoSize = true;
			this->LabelTel2->Location = System::Drawing::Point(376, 330);
			this->LabelTel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelTel2->Name = L"LabelTel2";
			this->LabelTel2->Size = System::Drawing::Size(58, 13);
			this->LabelTel2->TabIndex = 133;
			this->LabelTel2->Text = L"Teléfono 2";
			// 
			// LabelCargo
			// 
			this->LabelCargo->AutoSize = true;
			this->LabelCargo->Location = System::Drawing::Point(362, 305);
			this->LabelCargo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCargo->Name = L"LabelCargo";
			this->LabelCargo->Size = System::Drawing::Size(73, 13);
			this->LabelCargo->TabIndex = 132;
			this->LabelCargo->Text = L"Cargo/Puesto";
			// 
			// LabelCorreo
			// 
			this->LabelCorreo->AutoSize = true;
			this->LabelCorreo->Location = System::Drawing::Point(18, 350);
			this->LabelCorreo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCorreo->Name = L"LabelCorreo";
			this->LabelCorreo->Size = System::Drawing::Size(98, 13);
			this->LabelCorreo->TabIndex = 131;
			this->LabelCorreo->Text = L"Correo Electronico*";
			// 
			// LabelTel1
			// 
			this->LabelTel1->AutoSize = true;
			this->LabelTel1->Location = System::Drawing::Point(57, 327);
			this->LabelTel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelTel1->Name = L"LabelTel1";
			this->LabelTel1->Size = System::Drawing::Size(58, 13);
			this->LabelTel1->TabIndex = 130;
			this->LabelTel1->Text = L"Teléfono 1";
			// 
			// LabelNombre
			// 
			this->LabelNombre->AutoSize = true;
			this->LabelNombre->Location = System::Drawing::Point(68, 305);
			this->LabelNombre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNombre->Name = L"LabelNombre";
			this->LabelNombre->Size = System::Drawing::Size(44, 13);
			this->LabelNombre->TabIndex = 129;
			this->LabelNombre->Text = L"Nombre";
			// 
			// TxtTel2
			// 
			this->TxtTel2->Location = System::Drawing::Point(434, 325);
			this->TxtTel2->Margin = System::Windows::Forms::Padding(2);
			this->TxtTel2->Name = L"TxtTel2";
			this->TxtTel2->Size = System::Drawing::Size(168, 20);
			this->TxtTel2->TabIndex = 128;
			// 
			// TxtCargo
			// 
			this->TxtCargo->Location = System::Drawing::Point(434, 302);
			this->TxtCargo->Margin = System::Windows::Forms::Padding(2);
			this->TxtCargo->Name = L"TxtCargo";
			this->TxtCargo->Size = System::Drawing::Size(168, 20);
			this->TxtCargo->TabIndex = 127;
			// 
			// TxtCorreo
			// 
			this->TxtCorreo->Location = System::Drawing::Point(115, 345);
			this->TxtCorreo->Margin = System::Windows::Forms::Padding(2);
			this->TxtCorreo->Name = L"TxtCorreo";
			this->TxtCorreo->Size = System::Drawing::Size(168, 20);
			this->TxtCorreo->TabIndex = 126;
			// 
			// TxtTel1
			// 
			this->TxtTel1->Location = System::Drawing::Point(115, 322);
			this->TxtTel1->Margin = System::Windows::Forms::Padding(2);
			this->TxtTel1->Name = L"TxtTel1";
			this->TxtTel1->Size = System::Drawing::Size(168, 20);
			this->TxtTel1->TabIndex = 125;
			// 
			// TxtNombre
			// 
			this->TxtNombre->Location = System::Drawing::Point(115, 300);
			this->TxtNombre->Margin = System::Windows::Forms::Padding(2);
			this->TxtNombre->Name = L"TxtNombre";
			this->TxtNombre->Size = System::Drawing::Size(168, 20);
			this->TxtNombre->TabIndex = 124;
			// 
			// LabelCFDI
			// 
			this->LabelCFDI->AutoSize = true;
			this->LabelCFDI->Location = System::Drawing::Point(360, 281);
			this->LabelCFDI->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCFDI->Name = L"LabelCFDI";
			this->LabelCFDI->Size = System::Drawing::Size(74, 13);
			this->LabelCFDI->TabIndex = 122;
			this->LabelCFDI->Text = L"Uso del CFDI*";
			// 
			// LabelPais
			// 
			this->LabelPais->AutoSize = true;
			this->LabelPais->Location = System::Drawing::Point(404, 257);
			this->LabelPais->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelPais->Name = L"LabelPais";
			this->LabelPais->Size = System::Drawing::Size(29, 13);
			this->LabelPais->TabIndex = 121;
			this->LabelPais->Text = L"País";
			// 
			// LabelReferencia
			// 
			this->LabelReferencia->AutoSize = true;
			this->LabelReferencia->Location = System::Drawing::Point(374, 234);
			this->LabelReferencia->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelReferencia->Name = L"LabelReferencia";
			this->LabelReferencia->Size = System::Drawing::Size(59, 13);
			this->LabelReferencia->TabIndex = 120;
			this->LabelReferencia->Text = L"Referencia";
			// 
			// LabelColonia
			// 
			this->LabelColonia->AutoSize = true;
			this->LabelColonia->Location = System::Drawing::Point(390, 211);
			this->LabelColonia->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelColonia->Name = L"LabelColonia";
			this->LabelColonia->Size = System::Drawing::Size(42, 13);
			this->LabelColonia->TabIndex = 119;
			this->LabelColonia->Text = L"Colonia";
			// 
			// LabelEstado
			// 
			this->LabelEstado->AutoSize = true;
			this->LabelEstado->Location = System::Drawing::Point(392, 189);
			this->LabelEstado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelEstado->Name = L"LabelEstado";
			this->LabelEstado->Size = System::Drawing::Size(40, 13);
			this->LabelEstado->TabIndex = 118;
			this->LabelEstado->Text = L"Estado";
			// 
			// LabelNoInt
			// 
			this->LabelNoInt->AutoSize = true;
			this->LabelNoInt->Location = System::Drawing::Point(376, 166);
			this->LabelNoInt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNoInt->Name = L"LabelNoInt";
			this->LabelNoInt->Size = System::Drawing::Size(59, 13);
			this->LabelNoInt->TabIndex = 117;
			this->LabelNoInt->Text = L"No. Interior";
			// 
			// LabelCalle
			// 
			this->LabelCalle->AutoSize = true;
			this->LabelCalle->Location = System::Drawing::Point(401, 143);
			this->LabelCalle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCalle->Name = L"LabelCalle";
			this->LabelCalle->Size = System::Drawing::Size(30, 13);
			this->LabelCalle->TabIndex = 116;
			this->LabelCalle->Text = L"Calle";
			// 
			// LabelRazon
			// 
			this->LabelRazon->AutoSize = true;
			this->LabelRazon->Location = System::Drawing::Point(360, 120);
			this->LabelRazon->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelRazon->Name = L"LabelRazon";
			this->LabelRazon->Size = System::Drawing::Size(74, 13);
			this->LabelRazon->TabIndex = 115;
			this->LabelRazon->Text = L"Rázon Social*";
			// 
			// LabelRegimen
			// 
			this->LabelRegimen->AutoSize = true;
			this->LabelRegimen->Location = System::Drawing::Point(31, 279);
			this->LabelRegimen->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelRegimen->Name = L"LabelRegimen";
			this->LabelRegimen->Size = System::Drawing::Size(83, 13);
			this->LabelRegimen->TabIndex = 114;
			this->LabelRegimen->Text = L"Régimen Fiscal*";
			// 
			// LabelNoCuenta
			// 
			this->LabelNoCuenta->AutoSize = true;
			this->LabelNoCuenta->Location = System::Drawing::Point(48, 257);
			this->LabelNoCuenta->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNoCuenta->Name = L"LabelNoCuenta";
			this->LabelNoCuenta->Size = System::Drawing::Size(69, 13);
			this->LabelNoCuenta->TabIndex = 113;
			this->LabelNoCuenta->Text = L"Num. Cuenta";
			// 
			// LabelLocalidad
			// 
			this->LabelLocalidad->AutoSize = true;
			this->LabelLocalidad->Location = System::Drawing::Point(60, 234);
			this->LabelLocalidad->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelLocalidad->Name = L"LabelLocalidad";
			this->LabelLocalidad->Size = System::Drawing::Size(53, 13);
			this->LabelLocalidad->TabIndex = 112;
			this->LabelLocalidad->Text = L"Localidad";
			// 
			// LabelMunicipio
			// 
			this->LabelMunicipio->AutoSize = true;
			this->LabelMunicipio->Location = System::Drawing::Point(62, 211);
			this->LabelMunicipio->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelMunicipio->Name = L"LabelMunicipio";
			this->LabelMunicipio->Size = System::Drawing::Size(52, 13);
			this->LabelMunicipio->TabIndex = 111;
			this->LabelMunicipio->Text = L"Municipio";
			// 
			// LabelCP
			// 
			this->LabelCP->AutoSize = true;
			this->LabelCP->Location = System::Drawing::Point(84, 189);
			this->LabelCP->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelCP->Name = L"LabelCP";
			this->LabelCP->Size = System::Drawing::Size(31, 13);
			this->LabelCP->TabIndex = 110;
			this->LabelCP->Text = L"C.P.*";
			// 
			// LabelNoExt
			// 
			this->LabelNoExt->AutoSize = true;
			this->LabelNoExt->Location = System::Drawing::Point(54, 166);
			this->LabelNoExt->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelNoExt->Name = L"LabelNoExt";
			this->LabelNoExt->Size = System::Drawing::Size(62, 13);
			this->LabelNoExt->TabIndex = 109;
			this->LabelNoExt->Text = L"No. Exterior";
			// 
			// LabelAlias
			// 
			this->LabelAlias->AutoSize = true;
			this->LabelAlias->Location = System::Drawing::Point(83, 143);
			this->LabelAlias->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelAlias->Name = L"LabelAlias";
			this->LabelAlias->Size = System::Drawing::Size(29, 13);
			this->LabelAlias->TabIndex = 108;
			this->LabelAlias->Text = L"Alias";
			// 
			// LabelRFCProveedor
			// 
			this->LabelRFCProveedor->AutoSize = true;
			this->LabelRFCProveedor->Location = System::Drawing::Point(31, 120);
			this->LabelRFCProveedor->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->LabelRFCProveedor->Name = L"LabelRFCProveedor";
			this->LabelRFCProveedor->Size = System::Drawing::Size(84, 13);
			this->LabelRFCProveedor->TabIndex = 107;
			this->LabelRFCProveedor->Text = L"RFC Proveedor*";
			// 
			// TxtCFDI
			// 
			this->TxtCFDI->FormattingEnabled = true;
			this->TxtCFDI->Location = System::Drawing::Point(434, 275);
			this->TxtCFDI->Margin = System::Windows::Forms::Padding(2);
			this->TxtCFDI->Name = L"TxtCFDI";
			this->TxtCFDI->Size = System::Drawing::Size(247, 21);
			this->TxtCFDI->TabIndex = 106;
			this->TxtCFDI->Text = L"Uso que dará a las facturas el receptor del CFDI";
			// 
			// TxtPais
			// 
			this->TxtPais->Location = System::Drawing::Point(434, 252);
			this->TxtPais->Margin = System::Windows::Forms::Padding(2);
			this->TxtPais->Name = L"TxtPais";
			this->TxtPais->Size = System::Drawing::Size(168, 20);
			this->TxtPais->TabIndex = 105;
			// 
			// TxtReferencia
			// 
			this->TxtReferencia->Location = System::Drawing::Point(434, 229);
			this->TxtReferencia->Margin = System::Windows::Forms::Padding(2);
			this->TxtReferencia->Name = L"TxtReferencia";
			this->TxtReferencia->Size = System::Drawing::Size(168, 20);
			this->TxtReferencia->TabIndex = 104;
			// 
			// TxtColonia
			// 
			this->TxtColonia->Location = System::Drawing::Point(434, 206);
			this->TxtColonia->Margin = System::Windows::Forms::Padding(2);
			this->TxtColonia->Name = L"TxtColonia";
			this->TxtColonia->Size = System::Drawing::Size(168, 20);
			this->TxtColonia->TabIndex = 103;
			// 
			// TxtEstado
			// 
			this->TxtEstado->Location = System::Drawing::Point(434, 184);
			this->TxtEstado->Margin = System::Windows::Forms::Padding(2);
			this->TxtEstado->Name = L"TxtEstado";
			this->TxtEstado->Size = System::Drawing::Size(168, 20);
			this->TxtEstado->TabIndex = 102;
			// 
			// TxtNoInt
			// 
			this->TxtNoInt->Location = System::Drawing::Point(434, 161);
			this->TxtNoInt->Margin = System::Windows::Forms::Padding(2);
			this->TxtNoInt->Name = L"TxtNoInt";
			this->TxtNoInt->Size = System::Drawing::Size(168, 20);
			this->TxtNoInt->TabIndex = 101;
			// 
			// TxtCalle
			// 
			this->TxtCalle->Location = System::Drawing::Point(434, 138);
			this->TxtCalle->Margin = System::Windows::Forms::Padding(2);
			this->TxtCalle->Name = L"TxtCalle";
			this->TxtCalle->Size = System::Drawing::Size(168, 20);
			this->TxtCalle->TabIndex = 100;
			// 
			// TxtRazon
			// 
			this->TxtRazon->Location = System::Drawing::Point(434, 115);
			this->TxtRazon->Margin = System::Windows::Forms::Padding(2);
			this->TxtRazon->Name = L"TxtRazon";
			this->TxtRazon->Size = System::Drawing::Size(168, 20);
			this->TxtRazon->TabIndex = 99;
			// 
			// TxtRegimen
			// 
			this->TxtRegimen->Location = System::Drawing::Point(115, 275);
			this->TxtRegimen->Margin = System::Windows::Forms::Padding(2);
			this->TxtRegimen->Name = L"TxtRegimen";
			this->TxtRegimen->Size = System::Drawing::Size(168, 20);
			this->TxtRegimen->TabIndex = 98;
			// 
			// TxtNoCuenta
			// 
			this->TxtNoCuenta->Location = System::Drawing::Point(115, 252);
			this->TxtNoCuenta->Margin = System::Windows::Forms::Padding(2);
			this->TxtNoCuenta->Name = L"TxtNoCuenta";
			this->TxtNoCuenta->Size = System::Drawing::Size(168, 20);
			this->TxtNoCuenta->TabIndex = 97;
			// 
			// TxtLocalidad
			// 
			this->TxtLocalidad->Location = System::Drawing::Point(115, 229);
			this->TxtLocalidad->Margin = System::Windows::Forms::Padding(2);
			this->TxtLocalidad->Name = L"TxtLocalidad";
			this->TxtLocalidad->Size = System::Drawing::Size(168, 20);
			this->TxtLocalidad->TabIndex = 96;
			// 
			// TxtMuncipio
			// 
			this->TxtMuncipio->Location = System::Drawing::Point(115, 206);
			this->TxtMuncipio->Margin = System::Windows::Forms::Padding(2);
			this->TxtMuncipio->Name = L"TxtMuncipio";
			this->TxtMuncipio->Size = System::Drawing::Size(168, 20);
			this->TxtMuncipio->TabIndex = 95;
			// 
			// TxtCP
			// 
			this->TxtCP->Location = System::Drawing::Point(115, 184);
			this->TxtCP->Margin = System::Windows::Forms::Padding(2);
			this->TxtCP->Name = L"TxtCP";
			this->TxtCP->Size = System::Drawing::Size(168, 20);
			this->TxtCP->TabIndex = 94;
			// 
			// TxtNoExt
			// 
			this->TxtNoExt->Location = System::Drawing::Point(115, 161);
			this->TxtNoExt->Margin = System::Windows::Forms::Padding(2);
			this->TxtNoExt->Name = L"TxtNoExt";
			this->TxtNoExt->Size = System::Drawing::Size(168, 20);
			this->TxtNoExt->TabIndex = 93;
			// 
			// TxtAlias
			// 
			this->TxtAlias->Location = System::Drawing::Point(115, 138);
			this->TxtAlias->Margin = System::Windows::Forms::Padding(2);
			this->TxtAlias->Name = L"TxtAlias";
			this->TxtAlias->Size = System::Drawing::Size(168, 20);
			this->TxtAlias->TabIndex = 92;
			// 
			// TxtRFCCliente
			// 
			this->TxtRFCCliente->Location = System::Drawing::Point(115, 115);
			this->TxtRFCCliente->Margin = System::Windows::Forms::Padding(2);
			this->TxtRFCCliente->Name = L"TxtRFCCliente";
			this->TxtRFCCliente->Size = System::Drawing::Size(168, 20);
			this->TxtRFCCliente->TabIndex = 91;
			// 
			// TituloProveedores
			// 
			this->TituloProveedores->AutoSize = true;
			this->TituloProveedores->Font = (gcnew System::Drawing::Font(L"Open Sans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TituloProveedores->Location = System::Drawing::Point(225, 9);
			this->TituloProveedores->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TituloProveedores->Name = L"TituloProveedores";
			this->TituloProveedores->Size = System::Drawing::Size(256, 30);
			this->TituloProveedores->TabIndex = 90;
			this->TituloProveedores->Text = L"Gestion de Proveedores";
			this->TituloProveedores->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// BTNBuscar
			// 
			this->BTNBuscar->Location = System::Drawing::Point(474, 54);
			this->BTNBuscar->Name = L"BTNBuscar";
			this->BTNBuscar->Size = System::Drawing::Size(75, 23);
			this->BTNBuscar->TabIndex = 137;
			this->BTNBuscar->Text = L"Buscar";
			this->BTNBuscar->UseVisualStyleBackColor = true;
			// 
			// TxtBuscarProveedor
			// 
			this->TxtBuscarProveedor->Location = System::Drawing::Point(271, 56);
			this->TxtBuscarProveedor->Name = L"TxtBuscarProveedor";
			this->TxtBuscarProveedor->Size = System::Drawing::Size(184, 20);
			this->TxtBuscarProveedor->TabIndex = 136;
			// 
			// LabelBuscar
			// 
			this->LabelBuscar->AutoSize = true;
			this->LabelBuscar->Location = System::Drawing::Point(122, 63);
			this->LabelBuscar->Name = L"LabelBuscar";
			this->LabelBuscar->Size = System::Drawing::Size(143, 13);
			this->LabelBuscar->TabIndex = 135;
			this->LabelBuscar->Text = L"RFC del proveedora buscar: ";
			// 
			// BTNBorrar
			// 
			this->BTNBorrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNBorrar->Location = System::Drawing::Point(251, 379);
			this->BTNBorrar->Margin = System::Windows::Forms::Padding(2);
			this->BTNBorrar->Name = L"BTNBorrar";
			this->BTNBorrar->Size = System::Drawing::Size(91, 30);
			this->BTNBorrar->TabIndex = 139;
			this->BTNBorrar->Text = L"Borrar";
			this->BTNBorrar->UseVisualStyleBackColor = true;
			// 
			// BTNGuardar
			// 
			this->BTNGuardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNGuardar->Location = System::Drawing::Point(363, 379);
			this->BTNGuardar->Margin = System::Windows::Forms::Padding(2);
			this->BTNGuardar->Name = L"BTNGuardar";
			this->BTNGuardar->Size = System::Drawing::Size(91, 30);
			this->BTNGuardar->TabIndex = 138;
			this->BTNGuardar->Text = L"Guardar";
			this->BTNGuardar->UseVisualStyleBackColor = true;
			// 
			// GestionProveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(746, 425);
			this->Controls->Add(this->BTNBorrar);
			this->Controls->Add(this->BTNGuardar);
			this->Controls->Add(this->BTNBuscar);
			this->Controls->Add(this->TxtBuscarProveedor);
			this->Controls->Add(this->LabelBuscar);
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
			this->Name = L"GestionProveedores";
			this->Text = L"GestionProveedores";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
