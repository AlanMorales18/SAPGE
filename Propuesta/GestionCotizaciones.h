#pragma once

namespace Propuesta {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GestionCotizaciones
	/// </summary>
	public ref class GestionCotizaciones : public System::Windows::Forms::Form
	{
	public:
		GestionCotizaciones(void)
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
		~GestionCotizaciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ Tabla2;
	protected:
	private: System::Windows::Forms::TextBox^ TxtTotal;
	private: System::Windows::Forms::TextBox^ TxtIVARetencion;
	private: System::Windows::Forms::TextBox^ TxtIVA;
	private: System::Windows::Forms::Label^ LabelSubtotal;
	private: System::Windows::Forms::Label^ LabelTotal;
	private: System::Windows::Forms::Label^ LabelIVA;
	private: System::Windows::Forms::Label^ LabelVARetencion;
	private: System::Windows::Forms::TextBox^ TxtSubtotal;





	private: System::Windows::Forms::TableLayoutPanel^ Tabla1;
	private: System::Windows::Forms::TextBox^ TxtUnidades;
	private: System::Windows::Forms::TextBox^ TxtCantidad;
	private: System::Windows::Forms::TextBox^ TxtObservaciones;
	private: System::Windows::Forms::TextBox^ TxtDescrpcion;
	private: System::Windows::Forms::Label^ LabelProducto;
	private: System::Windows::Forms::Label^ LabelDescripcion;
	private: System::Windows::Forms::Label^ LabelObservaciones;
	private: System::Windows::Forms::Label^ LabelCantidad;
	private: System::Windows::Forms::Label^ LabelUnidades;
	private: System::Windows::Forms::Label^ LabelPrecio;
	private: System::Windows::Forms::Label^ LabelImpuestos;
	private: System::Windows::Forms::Label^ LabelImpuestosINT;
	private: System::Windows::Forms::TextBox^ TxtProducto;
	private: System::Windows::Forms::TextBox^ TxtPrecio;
	private: System::Windows::Forms::TextBox^ TxtImpuestos;
	private: System::Windows::Forms::TextBox^ TxtImpuestosINT;
	private: System::Windows::Forms::ComboBox^ TxtMoneda;
	private: System::Windows::Forms::CheckBox^ CheckCFDIPublico;
	private: System::Windows::Forms::TextBox^ TxtTerminosPago;
	private: System::Windows::Forms::TextBox^ TxtUsoCFDI;
	private: System::Windows::Forms::TextBox^ TxtFechaCreacion;
	private: System::Windows::Forms::Label^ LabelMoneda;
	private: System::Windows::Forms::Label^ LabelTerminoPago;
	private: System::Windows::Forms::Label^ LabelUsoCFDI;
	private: System::Windows::Forms::Label^ LabelCFDIPublico;
	private: System::Windows::Forms::Label^ LabelFechaCreacion;
	private: System::Windows::Forms::Button^ BTNBuscar;
	private: System::Windows::Forms::TextBox^ TxtBuscarCliente;
	private: System::Windows::Forms::Label^ LabelBuscar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ BTNGuardar;
	private: System::Windows::Forms::Label^ TituloCliente;

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
			this->Tabla2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TxtTotal = (gcnew System::Windows::Forms::TextBox());
			this->TxtIVA = (gcnew System::Windows::Forms::TextBox());
			this->LabelSubtotal = (gcnew System::Windows::Forms::Label());
			this->LabelTotal = (gcnew System::Windows::Forms::Label());
			this->LabelIVA = (gcnew System::Windows::Forms::Label());
			this->LabelVARetencion = (gcnew System::Windows::Forms::Label());
			this->TxtSubtotal = (gcnew System::Windows::Forms::TextBox());
			this->TxtIVARetencion = (gcnew System::Windows::Forms::TextBox());
			this->Tabla1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TxtUnidades = (gcnew System::Windows::Forms::TextBox());
			this->TxtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->TxtObservaciones = (gcnew System::Windows::Forms::TextBox());
			this->TxtDescrpcion = (gcnew System::Windows::Forms::TextBox());
			this->LabelProducto = (gcnew System::Windows::Forms::Label());
			this->LabelDescripcion = (gcnew System::Windows::Forms::Label());
			this->LabelObservaciones = (gcnew System::Windows::Forms::Label());
			this->LabelCantidad = (gcnew System::Windows::Forms::Label());
			this->LabelUnidades = (gcnew System::Windows::Forms::Label());
			this->LabelPrecio = (gcnew System::Windows::Forms::Label());
			this->LabelImpuestos = (gcnew System::Windows::Forms::Label());
			this->LabelImpuestosINT = (gcnew System::Windows::Forms::Label());
			this->TxtProducto = (gcnew System::Windows::Forms::TextBox());
			this->TxtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->TxtImpuestos = (gcnew System::Windows::Forms::TextBox());
			this->TxtImpuestosINT = (gcnew System::Windows::Forms::TextBox());
			this->TxtMoneda = (gcnew System::Windows::Forms::ComboBox());
			this->CheckCFDIPublico = (gcnew System::Windows::Forms::CheckBox());
			this->TxtTerminosPago = (gcnew System::Windows::Forms::TextBox());
			this->TxtUsoCFDI = (gcnew System::Windows::Forms::TextBox());
			this->TxtFechaCreacion = (gcnew System::Windows::Forms::TextBox());
			this->LabelMoneda = (gcnew System::Windows::Forms::Label());
			this->LabelTerminoPago = (gcnew System::Windows::Forms::Label());
			this->LabelUsoCFDI = (gcnew System::Windows::Forms::Label());
			this->LabelCFDIPublico = (gcnew System::Windows::Forms::Label());
			this->LabelFechaCreacion = (gcnew System::Windows::Forms::Label());
			this->BTNBuscar = (gcnew System::Windows::Forms::Button());
			this->TxtBuscarCliente = (gcnew System::Windows::Forms::TextBox());
			this->LabelBuscar = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BTNGuardar = (gcnew System::Windows::Forms::Button());
			this->TituloCliente = (gcnew System::Windows::Forms::Label());
			this->Tabla2->SuspendLayout();
			this->Tabla1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Tabla2
			// 
			this->Tabla2->ColumnCount = 2;
			this->Tabla2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->Tabla2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->Tabla2->Controls->Add(this->TxtTotal, 1, 3);
			this->Tabla2->Controls->Add(this->TxtIVA, 1, 1);
			this->Tabla2->Controls->Add(this->LabelSubtotal, 0, 0);
			this->Tabla2->Controls->Add(this->LabelTotal, 0, 3);
			this->Tabla2->Controls->Add(this->LabelIVA, 0, 1);
			this->Tabla2->Controls->Add(this->LabelVARetencion, 0, 2);
			this->Tabla2->Controls->Add(this->TxtSubtotal, 1, 0);
			this->Tabla2->Controls->Add(this->TxtIVARetencion, 1, 2);
			this->Tabla2->Location = System::Drawing::Point(561, 501);
			this->Tabla2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Tabla2->Name = L"Tabla2";
			this->Tabla2->RowCount = 4;
			this->Tabla2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->Tabla2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->Tabla2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->Tabla2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->Tabla2->Size = System::Drawing::Size(299, 144);
			this->Tabla2->TabIndex = 46;
			// 
			// TxtTotal
			// 
			this->TxtTotal->Location = System::Drawing::Point(153, 112);
			this->TxtTotal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtTotal->Multiline = true;
			this->TxtTotal->Name = L"TxtTotal";
			this->TxtTotal->Size = System::Drawing::Size(140, 27);
			this->TxtTotal->TabIndex = 29;
			// 
			// TxtIVA
			// 
			this->TxtIVA->Location = System::Drawing::Point(153, 40);
			this->TxtIVA->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtIVA->Multiline = true;
			this->TxtIVA->Name = L"TxtIVA";
			this->TxtIVA->Size = System::Drawing::Size(140, 27);
			this->TxtIVA->TabIndex = 27;
			// 
			// LabelSubtotal
			// 
			this->LabelSubtotal->AutoSize = true;
			this->LabelSubtotal->Location = System::Drawing::Point(4, 0);
			this->LabelSubtotal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelSubtotal->Name = L"LabelSubtotal";
			this->LabelSubtotal->Size = System::Drawing::Size(62, 16);
			this->LabelSubtotal->TabIndex = 22;
			this->LabelSubtotal->Text = L"Subtotal: ";
			// 
			// LabelTotal
			// 
			this->LabelTotal->AutoSize = true;
			this->LabelTotal->Location = System::Drawing::Point(4, 108);
			this->LabelTotal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelTotal->Name = L"LabelTotal";
			this->LabelTotal->Size = System::Drawing::Size(44, 16);
			this->LabelTotal->TabIndex = 25;
			this->LabelTotal->Text = L"Total: ";
			// 
			// LabelIVA
			// 
			this->LabelIVA->AutoSize = true;
			this->LabelIVA->Location = System::Drawing::Point(4, 36);
			this->LabelIVA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelIVA->Name = L"LabelIVA";
			this->LabelIVA->Size = System::Drawing::Size(63, 16);
			this->LabelIVA->TabIndex = 23;
			this->LabelIVA->Text = L"IVA 16%: ";
			// 
			// LabelVARetencion
			// 
			this->LabelVARetencion->AutoSize = true;
			this->LabelVARetencion->Location = System::Drawing::Point(4, 72);
			this->LabelVARetencion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelVARetencion->Name = L"LabelVARetencion";
			this->LabelVARetencion->Size = System::Drawing::Size(120, 16);
			this->LabelVARetencion->TabIndex = 24;
			this->LabelVARetencion->Text = L"IVA Retencion 4%: ";
			// 
			// TxtSubtotal
			// 
			this->TxtSubtotal->Location = System::Drawing::Point(153, 4);
			this->TxtSubtotal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtSubtotal->Multiline = true;
			this->TxtSubtotal->Name = L"TxtSubtotal";
			this->TxtSubtotal->Size = System::Drawing::Size(140, 27);
			this->TxtSubtotal->TabIndex = 26;
			// 
			// TxtIVARetencion
			// 
			this->TxtIVARetencion->Location = System::Drawing::Point(153, 76);
			this->TxtIVARetencion->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtIVARetencion->Multiline = true;
			this->TxtIVARetencion->Name = L"TxtIVARetencion";
			this->TxtIVARetencion->Size = System::Drawing::Size(140, 27);
			this->TxtIVARetencion->TabIndex = 28;
			// 
			// Tabla1
			// 
			this->Tabla1->ColumnCount = 8;
			this->Tabla1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->Tabla1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->Tabla1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->Tabla1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->Tabla1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->Tabla1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->Tabla1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->Tabla1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F)));
			this->Tabla1->Controls->Add(this->TxtUnidades, 4, 1);
			this->Tabla1->Controls->Add(this->TxtCantidad, 3, 1);
			this->Tabla1->Controls->Add(this->TxtObservaciones, 2, 1);
			this->Tabla1->Controls->Add(this->TxtDescrpcion, 1, 1);
			this->Tabla1->Controls->Add(this->LabelProducto, 0, 0);
			this->Tabla1->Controls->Add(this->LabelDescripcion, 1, 0);
			this->Tabla1->Controls->Add(this->LabelObservaciones, 2, 0);
			this->Tabla1->Controls->Add(this->LabelCantidad, 3, 0);
			this->Tabla1->Controls->Add(this->LabelUnidades, 4, 0);
			this->Tabla1->Controls->Add(this->LabelPrecio, 5, 0);
			this->Tabla1->Controls->Add(this->LabelImpuestos, 6, 0);
			this->Tabla1->Controls->Add(this->LabelImpuestosINT, 7, 0);
			this->Tabla1->Controls->Add(this->TxtProducto, 0, 1);
			this->Tabla1->Controls->Add(this->TxtPrecio, 5, 1);
			this->Tabla1->Controls->Add(this->TxtImpuestos, 6, 1);
			this->Tabla1->Controls->Add(this->TxtImpuestosINT, 7, 1);
			this->Tabla1->Location = System::Drawing::Point(56, 244);
			this->Tabla1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Tabla1->Name = L"Tabla1";
			this->Tabla1->RowCount = 2;
			this->Tabla1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20.12987F)));
			this->Tabla1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 79.87013F)));
			this->Tabla1->Size = System::Drawing::Size(1011, 190);
			this->Tabla1->TabIndex = 39;
			// 
			// TxtUnidades
			// 
			this->TxtUnidades->Location = System::Drawing::Point(508, 42);
			this->TxtUnidades->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtUnidades->Multiline = true;
			this->TxtUnidades->Name = L"TxtUnidades";
			this->TxtUnidades->Size = System::Drawing::Size(116, 143);
			this->TxtUnidades->TabIndex = 22;
			// 
			// TxtCantidad
			// 
			this->TxtCantidad->Location = System::Drawing::Point(382, 42);
			this->TxtCantidad->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtCantidad->Multiline = true;
			this->TxtCantidad->Name = L"TxtCantidad";
			this->TxtCantidad->Size = System::Drawing::Size(116, 143);
			this->TxtCantidad->TabIndex = 22;
			// 
			// TxtObservaciones
			// 
			this->TxtObservaciones->Location = System::Drawing::Point(256, 42);
			this->TxtObservaciones->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtObservaciones->Multiline = true;
			this->TxtObservaciones->Name = L"TxtObservaciones";
			this->TxtObservaciones->Size = System::Drawing::Size(116, 143);
			this->TxtObservaciones->TabIndex = 22;
			// 
			// TxtDescrpcion
			// 
			this->TxtDescrpcion->Location = System::Drawing::Point(130, 42);
			this->TxtDescrpcion->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtDescrpcion->Multiline = true;
			this->TxtDescrpcion->Name = L"TxtDescrpcion";
			this->TxtDescrpcion->Size = System::Drawing::Size(116, 143);
			this->TxtDescrpcion->TabIndex = 22;
			// 
			// LabelProducto
			// 
			this->LabelProducto->AutoSize = true;
			this->LabelProducto->Location = System::Drawing::Point(4, 0);
			this->LabelProducto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelProducto->Name = L"LabelProducto";
			this->LabelProducto->Size = System::Drawing::Size(61, 16);
			this->LabelProducto->TabIndex = 13;
			this->LabelProducto->Text = L"Producto";
			// 
			// LabelDescripcion
			// 
			this->LabelDescripcion->AutoSize = true;
			this->LabelDescripcion->Location = System::Drawing::Point(130, 0);
			this->LabelDescripcion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelDescripcion->Name = L"LabelDescripcion";
			this->LabelDescripcion->Size = System::Drawing::Size(79, 16);
			this->LabelDescripcion->TabIndex = 14;
			this->LabelDescripcion->Text = L"Descripcion";
			// 
			// LabelObservaciones
			// 
			this->LabelObservaciones->AutoSize = true;
			this->LabelObservaciones->Location = System::Drawing::Point(256, 0);
			this->LabelObservaciones->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelObservaciones->Name = L"LabelObservaciones";
			this->LabelObservaciones->Size = System::Drawing::Size(99, 16);
			this->LabelObservaciones->TabIndex = 15;
			this->LabelObservaciones->Text = L"Observaciones";
			// 
			// LabelCantidad
			// 
			this->LabelCantidad->AutoSize = true;
			this->LabelCantidad->Location = System::Drawing::Point(382, 0);
			this->LabelCantidad->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelCantidad->Name = L"LabelCantidad";
			this->LabelCantidad->Size = System::Drawing::Size(61, 16);
			this->LabelCantidad->TabIndex = 16;
			this->LabelCantidad->Text = L"Cantidad";
			// 
			// LabelUnidades
			// 
			this->LabelUnidades->AutoSize = true;
			this->LabelUnidades->Location = System::Drawing::Point(508, 0);
			this->LabelUnidades->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelUnidades->Name = L"LabelUnidades";
			this->LabelUnidades->Size = System::Drawing::Size(66, 16);
			this->LabelUnidades->TabIndex = 17;
			this->LabelUnidades->Text = L"Unidades";
			// 
			// LabelPrecio
			// 
			this->LabelPrecio->AutoSize = true;
			this->LabelPrecio->Location = System::Drawing::Point(634, 0);
			this->LabelPrecio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelPrecio->Name = L"LabelPrecio";
			this->LabelPrecio->Size = System::Drawing::Size(95, 16);
			this->LabelPrecio->TabIndex = 18;
			this->LabelPrecio->Text = L"Precio Unitario";
			// 
			// LabelImpuestos
			// 
			this->LabelImpuestos->AutoSize = true;
			this->LabelImpuestos->Location = System::Drawing::Point(760, 0);
			this->LabelImpuestos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelImpuestos->Name = L"LabelImpuestos";
			this->LabelImpuestos->Size = System::Drawing::Size(69, 16);
			this->LabelImpuestos->TabIndex = 19;
			this->LabelImpuestos->Text = L"Impuestos";
			// 
			// LabelImpuestosINT
			// 
			this->LabelImpuestosINT->AutoSize = true;
			this->LabelImpuestosINT->Location = System::Drawing::Point(886, 0);
			this->LabelImpuestosINT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelImpuestosINT->Name = L"LabelImpuestosINT";
			this->LabelImpuestosINT->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LabelImpuestosINT->Size = System::Drawing::Size(75, 32);
			this->LabelImpuestosINT->TabIndex = 20;
			this->LabelImpuestosINT->Text = L"Impuestos  Internos";
			// 
			// TxtProducto
			// 
			this->TxtProducto->Location = System::Drawing::Point(4, 42);
			this->TxtProducto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtProducto->Multiline = true;
			this->TxtProducto->Name = L"TxtProducto";
			this->TxtProducto->Size = System::Drawing::Size(116, 143);
			this->TxtProducto->TabIndex = 21;
			// 
			// TxtPrecio
			// 
			this->TxtPrecio->Location = System::Drawing::Point(634, 42);
			this->TxtPrecio->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtPrecio->Multiline = true;
			this->TxtPrecio->Name = L"TxtPrecio";
			this->TxtPrecio->Size = System::Drawing::Size(116, 143);
			this->TxtPrecio->TabIndex = 23;
			// 
			// TxtImpuestos
			// 
			this->TxtImpuestos->Location = System::Drawing::Point(760, 42);
			this->TxtImpuestos->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtImpuestos->Multiline = true;
			this->TxtImpuestos->Name = L"TxtImpuestos";
			this->TxtImpuestos->Size = System::Drawing::Size(116, 143);
			this->TxtImpuestos->TabIndex = 24;
			// 
			// TxtImpuestosINT
			// 
			this->TxtImpuestosINT->Location = System::Drawing::Point(886, 42);
			this->TxtImpuestosINT->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtImpuestosINT->Multiline = true;
			this->TxtImpuestosINT->Name = L"TxtImpuestosINT";
			this->TxtImpuestosINT->Size = System::Drawing::Size(121, 143);
			this->TxtImpuestosINT->TabIndex = 25;
			// 
			// TxtMoneda
			// 
			this->TxtMoneda->FormattingEnabled = true;
			this->TxtMoneda->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"USD", L"MX", L"EUR", L"CAD" });
			this->TxtMoneda->Location = System::Drawing::Point(265, 620);
			this->TxtMoneda->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtMoneda->Name = L"TxtMoneda";
			this->TxtMoneda->Size = System::Drawing::Size(212, 24);
			this->TxtMoneda->TabIndex = 38;
			// 
			// CheckCFDIPublico
			// 
			this->CheckCFDIPublico->AutoSize = true;
			this->CheckCFDIPublico->Location = System::Drawing::Point(267, 533);
			this->CheckCFDIPublico->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->CheckCFDIPublico->Name = L"CheckCFDIPublico";
			this->CheckCFDIPublico->Size = System::Drawing::Size(18, 17);
			this->CheckCFDIPublico->TabIndex = 37;
			this->CheckCFDIPublico->UseVisualStyleBackColor = true;
			// 
			// TxtTerminosPago
			// 
			this->TxtTerminosPago->Location = System::Drawing::Point(267, 588);
			this->TxtTerminosPago->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtTerminosPago->Name = L"TxtTerminosPago";
			this->TxtTerminosPago->Size = System::Drawing::Size(212, 22);
			this->TxtTerminosPago->TabIndex = 36;
			// 
			// TxtUsoCFDI
			// 
			this->TxtUsoCFDI->Location = System::Drawing::Point(267, 556);
			this->TxtUsoCFDI->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtUsoCFDI->Name = L"TxtUsoCFDI";
			this->TxtUsoCFDI->Size = System::Drawing::Size(212, 22);
			this->TxtUsoCFDI->TabIndex = 35;
			// 
			// TxtFechaCreacion
			// 
			this->TxtFechaCreacion->Location = System::Drawing::Point(267, 492);
			this->TxtFechaCreacion->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtFechaCreacion->Name = L"TxtFechaCreacion";
			this->TxtFechaCreacion->Size = System::Drawing::Size(212, 22);
			this->TxtFechaCreacion->TabIndex = 34;
			// 
			// LabelMoneda
			// 
			this->LabelMoneda->AutoSize = true;
			this->LabelMoneda->Location = System::Drawing::Point(188, 629);
			this->LabelMoneda->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelMoneda->Name = L"LabelMoneda";
			this->LabelMoneda->Size = System::Drawing::Size(63, 16);
			this->LabelMoneda->TabIndex = 33;
			this->LabelMoneda->Text = L"Moneda: ";
			// 
			// LabelTerminoPago
			// 
			this->LabelTerminoPago->AutoSize = true;
			this->LabelTerminoPago->Location = System::Drawing::Point(125, 597);
			this->LabelTerminoPago->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelTerminoPago->Name = L"LabelTerminoPago";
			this->LabelTerminoPago->Size = System::Drawing::Size(125, 16);
			this->LabelTerminoPago->TabIndex = 32;
			this->LabelTerminoPago->Text = L"Terminos de Pago: ";
			// 
			// LabelUsoCFDI
			// 
			this->LabelUsoCFDI->AutoSize = true;
			this->LabelUsoCFDI->Location = System::Drawing::Point(159, 565);
			this->LabelUsoCFDI->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelUsoCFDI->Name = L"LabelUsoCFDI";
			this->LabelUsoCFDI->Size = System::Drawing::Size(90, 16);
			this->LabelUsoCFDI->TabIndex = 31;
			this->LabelUsoCFDI->Text = L"Uso de CFDI: ";
			// 
			// LabelCFDIPublico
			// 
			this->LabelCFDIPublico->AutoSize = true;
			this->LabelCFDIPublico->Location = System::Drawing::Point(56, 533);
			this->LabelCFDIPublico->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelCFDIPublico->Name = L"LabelCFDIPublico";
			this->LabelCFDIPublico->Size = System::Drawing::Size(188, 16);
			this->LabelCFDIPublico->TabIndex = 30;
			this->LabelCFDIPublico->Text = L"CFDI para publico en general: ";
			// 
			// LabelFechaCreacion
			// 
			this->LabelFechaCreacion->AutoSize = true;
			this->LabelFechaCreacion->Location = System::Drawing::Point(120, 501);
			this->LabelFechaCreacion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelFechaCreacion->Name = L"LabelFechaCreacion";
			this->LabelFechaCreacion->Size = System::Drawing::Size(127, 16);
			this->LabelFechaCreacion->TabIndex = 29;
			this->LabelFechaCreacion->Text = L"Fecha de Creacion: ";
			// 
			// BTNBuscar
			// 
			this->BTNBuscar->Location = System::Drawing::Point(728, 143);
			this->BTNBuscar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BTNBuscar->Name = L"BTNBuscar";
			this->BTNBuscar->Size = System::Drawing::Size(100, 28);
			this->BTNBuscar->TabIndex = 96;
			this->BTNBuscar->Text = L"Buscar";
			this->BTNBuscar->UseVisualStyleBackColor = true;
			// 
			// TxtBuscarCliente
			// 
			this->TxtBuscarCliente->Location = System::Drawing::Point(452, 140);
			this->TxtBuscarCliente->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->TxtBuscarCliente->Name = L"TxtBuscarCliente";
			this->TxtBuscarCliente->Size = System::Drawing::Size(244, 22);
			this->TxtBuscarCliente->TabIndex = 95;
			// 
			// LabelBuscar
			// 
			this->LabelBuscar->AutoSize = true;
			this->LabelBuscar->Location = System::Drawing::Point(229, 149);
			this->LabelBuscar->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LabelBuscar->Name = L"LabelBuscar";
			this->LabelBuscar->Size = System::Drawing::Size(200, 16);
			this->LabelBuscar->TabIndex = 94;
			this->LabelBuscar->Text = L"Numero de Cotizacion a buscar: ";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(993, 578);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 37);
			this->button1->TabIndex = 98;
			this->button1->Text = L"Borrar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// BTNGuardar
			// 
			this->BTNGuardar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTNGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTNGuardar->Location = System::Drawing::Point(993, 523);
			this->BTNGuardar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BTNGuardar->Name = L"BTNGuardar";
			this->BTNGuardar->Size = System::Drawing::Size(121, 37);
			this->BTNGuardar->TabIndex = 97;
			this->BTNGuardar->Text = L"Guardar";
			this->BTNGuardar->UseVisualStyleBackColor = true;
			// 
			// TituloCliente
			// 
			this->TituloCliente->AutoSize = true;
			this->TituloCliente->Font = (gcnew System::Drawing::Font(L"Open Sans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TituloCliente->Location = System::Drawing::Point(433, 11);
			this->TituloCliente->Name = L"TituloCliente";
			this->TituloCliente->Size = System::Drawing::Size(328, 38);
			this->TituloCliente->TabIndex = 99;
			this->TituloCliente->Text = L"Gestion de Cotizaciones";
			this->TituloCliente->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// GestionCotizaciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(1167, 706);
			this->Controls->Add(this->TituloCliente);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BTNGuardar);
			this->Controls->Add(this->BTNBuscar);
			this->Controls->Add(this->TxtBuscarCliente);
			this->Controls->Add(this->LabelBuscar);
			this->Controls->Add(this->Tabla2);
			this->Controls->Add(this->Tabla1);
			this->Controls->Add(this->TxtMoneda);
			this->Controls->Add(this->CheckCFDIPublico);
			this->Controls->Add(this->TxtTerminosPago);
			this->Controls->Add(this->TxtUsoCFDI);
			this->Controls->Add(this->TxtFechaCreacion);
			this->Controls->Add(this->LabelMoneda);
			this->Controls->Add(this->LabelTerminoPago);
			this->Controls->Add(this->LabelUsoCFDI);
			this->Controls->Add(this->LabelCFDIPublico);
			this->Controls->Add(this->LabelFechaCreacion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"GestionCotizaciones";
			this->Text = L"GestionCotizaciones";
			this->Tabla2->ResumeLayout(false);
			this->Tabla2->PerformLayout();
			this->Tabla1->ResumeLayout(false);
			this->Tabla1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
