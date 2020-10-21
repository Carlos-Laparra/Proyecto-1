#include"Lista.h"
#pragma once

namespace Proyecto1CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de PantallaPrincipal
	/// </summary>
	public ref class PantallaPrincipal : public System::Windows::Forms::Form
	{
	public:
		Lista* listaC1;
		Lista* listaC2;
		Lista* listaC3;
		Lista* listaC4;
		Lista* listaC5;
		Lista* listaC6;
		Lista* listaC7;
		Lista* listaC8;
		Lista* ListaGeneral;
		static int capacidad1;
		static int pilas1;	
		static bool modoP;
		static int pila_o_colaP;
		static int dificultadP;
		static int contador_dificultad;
	private: System::Windows::Forms::DataGridView^ dgv_Tablero;
	private: System::Windows::Forms::Label^ lbl_Modo;
	private: System::Windows::Forms::Label^ lblModo;
	private: System::Windows::Forms::Label^ lbl_Ordenamiento;
	private: System::Windows::Forms::Label^ lblOrdenamiento;
	private: System::Windows::Forms::Label^ lbl_Dificultad;
	private: System::Windows::Forms::Label^ lblDificultad;
	private: System::Windows::Forms::ComboBox^ cb_Destino;

	private: System::Windows::Forms::ComboBox^ cb_Eleccion;
	private: System::Windows::Forms::ComboBox^ cb_Elegir_Pila_o_Cola;
	private: System::Windows::Forms::Button^ btn_Pasos;
	private: System::Windows::Forms::SaveFileDialog^ sfd_Pasos;
	private: System::Windows::Forms::Button^ btn_TXT_ordenado;
	private: System::Windows::Forms::SaveFileDialog^ sfd_TXT;

	public:
		static array<String^>^ datos;
		PantallaPrincipal(void)
		{			
			InitializeComponent();	
			listaC1 = new Lista();
			listaC1->conta = 0;
			listaC1->start = nullptr;
			listaC1->end = nullptr;
			listaC2 = new Lista();
			listaC2->conta = 0;
			listaC2->start = nullptr;
			listaC2->end = nullptr;
			listaC3 = new Lista();
			listaC3->conta = 0;
			listaC3->start = nullptr;
			listaC3->end = nullptr;
			listaC4 = new Lista();
			listaC4->conta = 0;
			listaC4->start = nullptr;
			listaC4->end = nullptr;
			listaC5 = new Lista();
			listaC5->conta = 0;
			listaC5->start = nullptr;
			listaC5->end = nullptr;
			listaC6 = new Lista();
			listaC6->conta = 0;
			listaC6->start = nullptr;
			listaC6->end = nullptr;
			listaC7 = new Lista();
			listaC7->conta = 0;
			listaC7->start = nullptr;
			listaC7->end = nullptr;
			listaC8 = new Lista();
			listaC8->conta = 0;
			listaC8->start = nullptr;
			listaC8->end = nullptr;
			ListaGeneral = new Lista();
			ListaGeneral->conta = 0;
			ListaGeneral->start = nullptr;
			ListaGeneral->end = nullptr;
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PantallaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PantallaPrincipal::typeid));
			this->dgv_Tablero = (gcnew System::Windows::Forms::DataGridView());
			this->lbl_Modo = (gcnew System::Windows::Forms::Label());
			this->lblModo = (gcnew System::Windows::Forms::Label());
			this->lbl_Ordenamiento = (gcnew System::Windows::Forms::Label());
			this->lblOrdenamiento = (gcnew System::Windows::Forms::Label());
			this->lbl_Dificultad = (gcnew System::Windows::Forms::Label());
			this->lblDificultad = (gcnew System::Windows::Forms::Label());
			this->cb_Destino = (gcnew System::Windows::Forms::ComboBox());
			this->cb_Eleccion = (gcnew System::Windows::Forms::ComboBox());
			this->cb_Elegir_Pila_o_Cola = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Pasos = (gcnew System::Windows::Forms::Button());
			this->sfd_Pasos = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btn_TXT_ordenado = (gcnew System::Windows::Forms::Button());
			this->sfd_TXT = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Tablero))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_Tablero
			// 
			this->dgv_Tablero->AllowUserToAddRows = false;
			this->dgv_Tablero->AllowUserToDeleteRows = false;
			this->dgv_Tablero->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv_Tablero->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->dgv_Tablero->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Tablero->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgv_Tablero->DefaultCellStyle = dataGridViewCellStyle1;
			this->dgv_Tablero->Enabled = false;
			this->dgv_Tablero->Location = System::Drawing::Point(422, 12);
			this->dgv_Tablero->Name = L"dgv_Tablero";
			this->dgv_Tablero->ReadOnly = true;
			this->dgv_Tablero->RowHeadersVisible = false;
			this->dgv_Tablero->RowHeadersWidth = 62;
			this->dgv_Tablero->RowTemplate->Height = 28;
			this->dgv_Tablero->ShowEditingIcon = false;
			this->dgv_Tablero->Size = System::Drawing::Size(658, 606);
			this->dgv_Tablero->TabIndex = 0;
			// 
			// lbl_Modo
			// 
			this->lbl_Modo->AutoSize = true;
			this->lbl_Modo->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Modo->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Modo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Modo->Location = System::Drawing::Point(33, 12);
			this->lbl_Modo->Name = L"lbl_Modo";
			this->lbl_Modo->Size = System::Drawing::Size(328, 44);
			this->lbl_Modo->TabIndex = 14;
			this->lbl_Modo->Text = L"El modo de juego es:";
			// 
			// lblModo
			// 
			this->lblModo->AutoSize = true;
			this->lblModo->BackColor = System::Drawing::Color::Transparent;
			this->lblModo->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblModo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblModo->Location = System::Drawing::Point(56, 66);
			this->lblModo->Name = L"lblModo";
			this->lblModo->Size = System::Drawing::Size(0, 44);
			this->lblModo->TabIndex = 15;
			// 
			// lbl_Ordenamiento
			// 
			this->lbl_Ordenamiento->AutoSize = true;
			this->lbl_Ordenamiento->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Ordenamiento->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Ordenamiento->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Ordenamiento->Location = System::Drawing::Point(23, 123);
			this->lbl_Ordenamiento->Name = L"lbl_Ordenamiento";
			this->lbl_Ordenamiento->Size = System::Drawing::Size(363, 44);
			this->lbl_Ordenamiento->TabIndex = 16;
			this->lbl_Ordenamiento->Text = L"El modo de ordenar es:";
			this->lbl_Ordenamiento->Visible = false;
			// 
			// lblOrdenamiento
			// 
			this->lblOrdenamiento->AutoSize = true;
			this->lblOrdenamiento->BackColor = System::Drawing::Color::Transparent;
			this->lblOrdenamiento->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOrdenamiento->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblOrdenamiento->Location = System::Drawing::Point(124, 176);
			this->lblOrdenamiento->Name = L"lblOrdenamiento";
			this->lblOrdenamiento->Size = System::Drawing::Size(0, 44);
			this->lblOrdenamiento->TabIndex = 17;
			this->lblOrdenamiento->Visible = false;
			// 
			// lbl_Dificultad
			// 
			this->lbl_Dificultad->AutoSize = true;
			this->lbl_Dificultad->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Dificultad->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Dificultad->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Dificultad->Location = System::Drawing::Point(12, 248);
			this->lbl_Dificultad->Name = L"lbl_Dificultad";
			this->lbl_Dificultad->Size = System::Drawing::Size(404, 44);
			this->lbl_Dificultad->TabIndex = 18;
			this->lbl_Dificultad->Text = L"La dificultad del juego es:";
			// 
			// lblDificultad
			// 
			this->lblDificultad->AutoSize = true;
			this->lblDificultad->BackColor = System::Drawing::Color::Transparent;
			this->lblDificultad->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDificultad->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblDificultad->Location = System::Drawing::Point(124, 292);
			this->lblDificultad->Name = L"lblDificultad";
			this->lblDificultad->Size = System::Drawing::Size(0, 44);
			this->lblDificultad->TabIndex = 19;
			// 
			// cb_Destino
			// 
			this->cb_Destino->FormattingEnabled = true;
			this->cb_Destino->Location = System::Drawing::Point(214, 465);
			this->cb_Destino->Name = L"cb_Destino";
			this->cb_Destino->Size = System::Drawing::Size(147, 28);
			this->cb_Destino->TabIndex = 20;
			this->cb_Destino->Visible = false;
			this->cb_Destino->SelectedIndexChanged += gcnew System::EventHandler(this, &PantallaPrincipal::cb_Destino_SelectedIndexChanged);
			// 
			// cb_Eleccion
			// 
			this->cb_Eleccion->FormattingEnabled = true;
			this->cb_Eleccion->Location = System::Drawing::Point(31, 465);
			this->cb_Eleccion->Name = L"cb_Eleccion";
			this->cb_Eleccion->Size = System::Drawing::Size(147, 28);
			this->cb_Eleccion->TabIndex = 21;
			this->cb_Eleccion->Visible = false;
			this->cb_Eleccion->SelectedIndexChanged += gcnew System::EventHandler(this, &PantallaPrincipal::cb_Eleccion_SelectedIndexChanged);
			// 
			// cb_Elegir_Pila_o_Cola
			// 
			this->cb_Elegir_Pila_o_Cola->FormattingEnabled = true;
			this->cb_Elegir_Pila_o_Cola->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pila", L"Cola" });
			this->cb_Elegir_Pila_o_Cola->Location = System::Drawing::Point(107, 381);
			this->cb_Elegir_Pila_o_Cola->Name = L"cb_Elegir_Pila_o_Cola";
			this->cb_Elegir_Pila_o_Cola->Size = System::Drawing::Size(147, 28);
			this->cb_Elegir_Pila_o_Cola->TabIndex = 22;
			this->cb_Elegir_Pila_o_Cola->Visible = false;
			this->cb_Elegir_Pila_o_Cola->SelectedIndexChanged += gcnew System::EventHandler(this, &PantallaPrincipal::cb_Elegir_Pila_o_Cola_SelectedIndexChanged);
			// 
			// btn_Pasos
			// 
			this->btn_Pasos->BackColor = System::Drawing::Color::Maroon;
			this->btn_Pasos->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Pasos->ForeColor = System::Drawing::Color::Transparent;
			this->btn_Pasos->Location = System::Drawing::Point(82, 572);
			this->btn_Pasos->Name = L"btn_Pasos";
			this->btn_Pasos->Size = System::Drawing::Size(254, 46);
			this->btn_Pasos->TabIndex = 23;
			this->btn_Pasos->Text = L"Descargar pasos";
			this->btn_Pasos->UseVisualStyleBackColor = false;
			this->btn_Pasos->Visible = false;
			this->btn_Pasos->Click += gcnew System::EventHandler(this, &PantallaPrincipal::btn_Pasos_Click);
			// 
			// btn_TXT_ordenado
			// 
			this->btn_TXT_ordenado->BackColor = System::Drawing::Color::Maroon;
			this->btn_TXT_ordenado->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_TXT_ordenado->ForeColor = System::Drawing::Color::Transparent;
			this->btn_TXT_ordenado->Location = System::Drawing::Point(64, 634);
			this->btn_TXT_ordenado->Name = L"btn_TXT_ordenado";
			this->btn_TXT_ordenado->Size = System::Drawing::Size(292, 46);
			this->btn_TXT_ordenado->TabIndex = 24;
			this->btn_TXT_ordenado->Text = L"Guardar Partida";
			this->btn_TXT_ordenado->UseVisualStyleBackColor = false;
			this->btn_TXT_ordenado->Click += gcnew System::EventHandler(this, &PantallaPrincipal::btn_TXT_ordenado_Click);
			// 
			// PantallaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1093, 692);
			this->Controls->Add(this->btn_TXT_ordenado);
			this->Controls->Add(this->btn_Pasos);
			this->Controls->Add(this->cb_Elegir_Pila_o_Cola);
			this->Controls->Add(this->cb_Eleccion);
			this->Controls->Add(this->cb_Destino);
			this->Controls->Add(this->lblDificultad);
			this->Controls->Add(this->lbl_Dificultad);
			this->Controls->Add(this->lblOrdenamiento);
			this->Controls->Add(this->lbl_Ordenamiento);
			this->Controls->Add(this->lblModo);
			this->Controls->Add(this->lbl_Modo);
			this->Controls->Add(this->dgv_Tablero);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PantallaPrincipal";
			this->Text = L"PantallaPrincipal";
			this->Load += gcnew System::EventHandler(this, &PantallaPrincipal::PantallaPrincipal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Tablero))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Variables a usar que necesariamente deben ser públicas 
		bool victoria = false;
		int conta = 0;
		int valor, valor_obtenido, valor_cBE,valor_cbD;
		int contador, contador_de_pasos_normal = 0;
		String^ pasos="";
		String^ pasos1="";
		
//TODOS LOS MÉTODOS QUE SE REALIZAN EN ESTA PARTE ES SI SE JUEGA CON PAUSAS
	//Form principal donde se carga la pantalla		
	private: System::Void PantallaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
		//Deja preparado el tablero para que esté listo para usarse		
		Crear_Matriz();
		Pintar_Matriz_P();
		//Hace las validaciones necesarias para decidir que aparecerá en la pantalla
		if (modoP == true) {						
			cb_Elegir_Pila_o_Cola->Visible = true;
			lblModo->Text = "Juego con pausas";
			ordenamiento(pila_o_colaP);
			for (int i = 0; i < pilas1; i++) {
				cb_Eleccion->Items->Add("Lista "+(i+1));
				cb_Destino->Items->Add("Lista " + (i + 1));
			}
		}
		else {			
			lblModo->Text = "Juego sin pausas";
			ordenamiento(pila_o_colaP);		
			Ordenamiento_Sin_Pausas();
			lblDificultad->Visible = false;
			lbl_Dificultad->Visible = false;
		}
	}		
	//Combo box de donde elige el grupo
	private: System::Void cb_Eleccion_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//Dependiendo de lo que seleccione en el combo box elegirá de que pila obtendrá la variable
		valor_cBE = cb_Eleccion->SelectedIndex;
		//Si es pila hace la validación necesaria y obtiene el valor del final, primero verifica que no esté vacía la lista. Además oculta lo necesario para no crear problemas
		if (pila_o_colaP == 1) {
			if (valor_cBE == 0) {
				if (listaC1->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC1->GetValueAtEnd();
					listaC1->ExtractAtEnd();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 1) {
				if (listaC2->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC2->GetValueAtEnd();
					listaC2->ExtractAtEnd();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 2) {
				if (listaC3->isEmpty()){
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC3->GetValueAtEnd();
					listaC3->ExtractAtEnd();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 3) {
				if (listaC4->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC4->GetValueAtEnd();
					listaC4->ExtractAtEnd();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 4) {
				if (listaC5->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC5->GetValueAtEnd();
					listaC5->ExtractAtEnd();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 5) {
				if (listaC6->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC6->GetValueAtEnd();
					listaC6->ExtractAtEnd();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 6) {
				if (listaC7->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC7->GetValueAtEnd();
					listaC7->ExtractAtEnd();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 7) {
				if (listaC8->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC8->GetValueAtEnd();
					listaC8->ExtractAtEnd();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
		}
		//Actúa de la misma manera pero obtiene el valor del principio, ya que estaría en modo cola
		else if (pila_o_colaP == 2) {
			if (valor_cBE == 0) {
				if (listaC1->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC1->GetValueAtStart();
					listaC1->ExtractAtStart();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 1) {
				if (listaC2->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC2->GetValueAtStart();
					listaC2->ExtractAtStart();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 2) {
				if (listaC3->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC3->GetValueAtStart();
					listaC3->ExtractAtStart();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 3) {
				if(listaC4->isEmpty()){
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC4->GetValueAtStart();
					listaC4->ExtractAtStart();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 4) {
				if(listaC5->isEmpty()){
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC5->GetValueAtStart();
					listaC5->ExtractAtStart();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 5) {
				if (listaC6->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC6->GetValueAtStart();
					listaC6->ExtractAtStart();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 6) {
				if (listaC7->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC7->GetValueAtStart();
					listaC7->ExtractAtStart();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
			else if (valor_cBE == 7) {
				if (listaC8->isEmpty()) {
					MessageBox::Show("No puede extraer de este grupo, está vacio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else {
					valor = listaC8->GetValueAtStart();
					listaC8->ExtractAtStart();
					cb_Eleccion->Visible = false;
					cb_Destino->Visible = true;
				}
			}
		}
	}
	//Combo box de a donde quiere mandar el valor elegido
	private: System::Void cb_Destino_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//Dependiendo de lo que seleccione del combo box determinará en que lista insertar el valor, valida que no sobrepase la capacidad de la pila, y verifica la cantidad de tiros que lleva así como si gana o no 
		valor_cbD = cb_Destino->SelectedIndex;
			if (valor_cbD == 0) {
				if (listaC1->Total() < capacidad1) {
					listaC1->InsertAtEnd(valor);
					Pintar_Matriz_N();
					contador_dificultad--;	
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
					total_de_tiros(contador_dificultad);
					if (verificar_ganador() == true) {
						cb_Destino->Visible = false;
						cb_Eleccion->Visible = false;
						cb_Elegir_Pila_o_Cola->Visible = false;
						MessageBox::Show("Ganador","Felicidades", MessageBoxButtons::OK,MessageBoxIcon::Information);
						btn_Pasos->Visible = true;
						btn_TXT_ordenado->Text = "Guardar TXT ordenado";
					}
				}
				else {
					MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
				}
			}
			else if (valor_cbD == 1) {
				if (listaC2->conta < capacidad1) {
					listaC2->InsertAtEnd(valor);
					Pintar_Matriz_N();
					contador_dificultad--;
					total_de_tiros(contador_dificultad);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
					if (verificar_ganador() == true) {
						cb_Destino->Visible = false;
						cb_Eleccion->Visible = false;
						cb_Elegir_Pila_o_Cola->Visible = false;
						MessageBox::Show("Ganador", "Felicidades", MessageBoxButtons::OK, MessageBoxIcon::Information);
						btn_Pasos->Visible = true;
						btn_TXT_ordenado->Text = "Guardar TXT ordenado";
					}
				}
				else {
					MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
				}
			}
			else if (valor_cbD == 2) {
				if (listaC3->Total() < capacidad1) {
					listaC3->InsertAtEnd(valor);
					Pintar_Matriz_N();
					contador_dificultad--;
					total_de_tiros(contador_dificultad);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
					if (verificar_ganador() == true) {
						MessageBox::Show("Ganador");
						cb_Destino->Visible = false;
						cb_Eleccion->Visible = false;
						cb_Elegir_Pila_o_Cola->Visible = false;
						MessageBox::Show("Ganador", "Felicidades", MessageBoxButtons::OK, MessageBoxIcon::Information);
						btn_Pasos->Visible = true;
						btn_TXT_ordenado->Text = "Guardar TXT ordenado";
					}
				}
				else {
					MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
				}
			}
			else if (valor_cbD == 3) {
				if (listaC4->Total() < capacidad1) {
					listaC4->InsertAtEnd(valor);
					Pintar_Matriz_N();
					contador_dificultad--;
					total_de_tiros(contador_dificultad);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
					if (verificar_ganador() == true) {
						cb_Destino->Visible = false;
						cb_Eleccion->Visible = false;
						cb_Elegir_Pila_o_Cola->Visible = false;
						MessageBox::Show("Ganador", "Felicidades", MessageBoxButtons::OK, MessageBoxIcon::Information);
						btn_Pasos->Visible = true;
						btn_TXT_ordenado->Text = "Guardar TXT ordenado";
					}
				}
				else {
					MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
				}
			}
			else if (valor_cbD == 4) {
				if (listaC5->Total() < capacidad1) {
					listaC5->InsertAtEnd(valor);
					Pintar_Matriz_N();
					contador_dificultad--;
					total_de_tiros(contador_dificultad);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
					if (verificar_ganador() == true) {
						cb_Destino->Visible = false;
						cb_Eleccion->Visible = false;
						cb_Elegir_Pila_o_Cola->Visible = false;
						MessageBox::Show("Ganador", "Felicidades", MessageBoxButtons::OK, MessageBoxIcon::Information);
						btn_Pasos->Visible = true;
						btn_TXT_ordenado->Text = "Guardar TXT ordenado";
					}
				}
				else {
					MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
				}
			}
			else if (valor_cbD == 5) {
				if (listaC6->Total() < capacidad1) {
					listaC6->InsertAtEnd(valor);
					Pintar_Matriz_N();
					contador_dificultad--;
					total_de_tiros(contador_dificultad);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
					if (verificar_ganador() == true) {
						cb_Destino->Visible = false;
						cb_Eleccion->Visible = false;
						cb_Elegir_Pila_o_Cola->Visible = false;
						MessageBox::Show("Ganador", "Felicidades", MessageBoxButtons::OK, MessageBoxIcon::Information);
						btn_Pasos->Visible = true;
						btn_TXT_ordenado->Text = "Guardar TXT ordenado";
					}
				}
				else {
					MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
				}
			}
			else if (valor_cbD == 6) {
				if (listaC7->Total() < capacidad1) {
					listaC7->InsertAtEnd(valor);
					Pintar_Matriz_N();
					contador_dificultad--;
					total_de_tiros(contador_dificultad);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
					if (verificar_ganador() == true) {
						cb_Destino->Visible = false;
						cb_Eleccion->Visible = false;
						cb_Elegir_Pila_o_Cola->Visible = false;
						MessageBox::Show("Ganador", "Felicidades", MessageBoxButtons::OK, MessageBoxIcon::Information);
						btn_Pasos->Visible = true;
						btn_TXT_ordenado->Text = "Guardar TXT ordenado";
					}
				}
				else {
					MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
				}
			}
			else if (valor_cbD == 7) {
				if (listaC8->Total() < capacidad1) {
					listaC8->InsertAtEnd(valor);
					Pintar_Matriz_N();
					contador_dificultad--;
					total_de_tiros(contador_dificultad);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
					if (verificar_ganador() == true) {
						cb_Destino->Visible = false;
						cb_Eleccion->Visible = false;
						cb_Elegir_Pila_o_Cola->Visible = false;
						MessageBox::Show("Ganador", "Felicidades", MessageBoxButtons::OK, MessageBoxIcon::Information);
						btn_Pasos->Visible = true;
						btn_TXT_ordenado->Text = "Guardar TXT ordenado";
					}
				}
				else {
					MessageBox::Show("Ya no puede ingresar datos en este grupo", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					cb_Eleccion->Visible = true;
					cb_Destino->Visible = false;
				}
			}
	}
	//Combo box donde decide si juega en modo pila o en modo cola
	private: System::Void cb_Elegir_Pila_o_Cola_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//Elige la manera de ordenar, si pila o cola
		if (cb_Elegir_Pila_o_Cola->SelectedIndex == 0) {
			cb_Eleccion->Visible = true;
			pila_o_colaP = 1;
			lbl_Ordenamiento->Visible = true;
			lblOrdenamiento->Visible = true;
			lblOrdenamiento->Text = "Pila";
		}
		else if (cb_Elegir_Pila_o_Cola->SelectedIndex == 1) {
			cb_Eleccion->Visible = true;
			pila_o_colaP = 2;
			lbl_Ordenamiento->Visible = true;
			lblOrdenamiento->Visible = true;
			lblOrdenamiento->Text = "Cola";
		}
	}
	//Botón que muestra los pasos que se llevaron a cabo
	private: System::Void btn_Pasos_Click(System::Object^ sender, System::EventArgs^ e) {
		//Cuando el usuario termine tendrá la oprtunidad de guardar los pasos que realizó, obtenidos en otro método
			sfd_Pasos->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			if (sfd_Pasos->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				File::WriteAllText(sfd_Pasos->FileName, pasos);
				MessageBox::Show("Archivo guardado exitosamente", "Guardado", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("No se exportó el archivo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		
	}
	//Botón que guarda la partida y la muestra cuando ya ha ganado
	private: System::Void btn_TXT_ordenado_Click(System::Object^ sender, System::EventArgs^ e) {
		//Tiene dos opciones, si el usuario quiere guardar la partida descargará un txt de como deberá subirlo en otra ocasión, y si ha ganado descargará un txt ya ordenado
		pasos1 = "";
		sfd_TXT->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		if (sfd_TXT->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			for (int i = 0; i < pilas1; i++) {
				for (int m = capacidad1-1; m >=0; m--) {
					if (dgv_Tablero->Rows[m]->Cells[i]->Style->BackColor == Color::Black) {
						pasos1 += "B,";
					}
					else if (dgv_Tablero->Rows[m]->Cells[i]->Style->BackColor == Color::Blue) {
						pasos1 += "Z,";
					}
					else if (dgv_Tablero->Rows[m]->Cells[i]->Style->BackColor == Color::Gray) {
						pasos1 += "W,";
					}
					else if (dgv_Tablero->Rows[m]->Cells[i]->Style->BackColor == Color::Red) {
						pasos1 += "R,";
					}
					else if (dgv_Tablero->Rows[m]->Cells[i]->Style->BackColor == Color::Yellow) {
						pasos1 += "Y,";
					}
					else if (dgv_Tablero->Rows[m]->Cells[i]->Style->BackColor == Color::Green) {
						pasos1 += "G,";
					}
					else if (dgv_Tablero->Rows[m]->Cells[i]->Style->BackColor == Color::Purple) {
						pasos1 += "P,";
					}
					else if (dgv_Tablero->Rows[m]->Cells[i]->Style->BackColor == Color::DarkBlue) {
						pasos1 += "N,";
					}
				}
				if (i == (pilas1 - 1)) {

				}
				else {
					pasos1 += "X,";
				}
			}
			File::WriteAllText(sfd_TXT->FileName, pasos1->Substring(0,pasos1->Length-1));
			MessageBox::Show("Archivo guardado exitosamente", "Guardado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se exportó el archivo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
		   //Método que crea la matriz
		   void Crear_Matriz() {
			   //Se crea en base a la capacidad de lo ingresado por el usuario anteriormente
			   for (int i = 0; i < pilas1; i++) {
				   //Se crea una columna
				   DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				   nuevacolumna->Width = 50;

				   //Se le agrega el tipo de columna que será
				   DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				   nuevacolumna->CellTemplate = cellTemplate;

				   //Se agrega la columna al Datagrid
				   dgv_Tablero->Columns->Add(nuevacolumna);
			   }
			   for (int i = 0; i < capacidad1; i++) {
				   dgv_Tablero->Rows->Add();
			   }
		   }
		   //Método que define la dificultad del juego
		   void dificultad(int numero) {
			   //Se obtiene a partir de lo ingresado por el usuario anteriormente
			   if (numero == 1) {
				   lblDificultad->Text = "Fácil";
			   }
			   else if (numero == 2) {
				   lblDificultad->Text = "Medio";
			   }
			   else if (numero == 3) {
				   lblDificultad->Text = "Difícil";
			   }
		   }
		   //Método que pinta el datagrid y llena las listas
		   void Pintar_Matriz_P() {
			   //Crea la matriz inicial dependiendo de la letra, utilizando contadores para hacerlo de manera correcta, así mismo va llenando las listas con números
			   int contador = 0, c1 = capacidad1 - 1, c2 = capacidad1 - 1, c3 = capacidad1 - 1, c4 = capacidad1 - 1, c5 = capacidad1 - 1, c6 = capacidad1 - 1, c7 = capacidad1 - 1, c8 = capacidad1 - 1;
			   String^ letra;
			   for (size_t i = 0; i < datos->Length; i++) {
				   letra = datos[i];
				   if (letra == "B") {
					   if (contador == 0) {
						   listaC1->InsertAtEnd(1);
						   ListaGeneral->InsertAtEnd(1);
						   dgv_Tablero->Rows[c1]->Cells[0]->Style->BackColor = Color::Black;
						   c1--;

					   }
					   else if (contador == 1) {
						   listaC2->InsertAtEnd(1);
						   ListaGeneral->InsertAtEnd(1);
						   dgv_Tablero->Rows[c2]->Cells[1]->Style->BackColor = Color::Black;
						   c2--;
					   }
					   else if (contador == 2) {
						   listaC3->InsertAtEnd(1);
						   ListaGeneral->InsertAtEnd(1);
						   dgv_Tablero->Rows[c3]->Cells[2]->Style->BackColor = Color::Black;
						   c3--;
					   }
					   else if (contador == 3) {
						   listaC4->InsertAtEnd(1);
						   ListaGeneral->InsertAtEnd(1);
						   dgv_Tablero->Rows[c4]->Cells[3]->Style->BackColor = Color::Black;
						   c4--;
					   }
					   else if (contador == 4) {
						   listaC5->InsertAtEnd(1);
						   ListaGeneral->InsertAtEnd(1);
						   dgv_Tablero->Rows[c5]->Cells[4]->Style->BackColor = Color::Black;
						   c5--;
					   }
					   else if (contador == 5) {
						   listaC6->InsertAtEnd(1);
						   ListaGeneral->InsertAtEnd(1);
						   dgv_Tablero->Rows[c6]->Cells[5]->Style->BackColor = Color::Black;
						   c6--;
					   }
					   else if (contador == 6) {
						   listaC7->InsertAtEnd(1);
						   ListaGeneral->InsertAtEnd(1);
						   dgv_Tablero->Rows[c7]->Cells[6]->Style->BackColor = Color::Black;
						   c7--;
					   }
					   else if (contador == 7) {
						   listaC8->InsertAtEnd(1);
						   ListaGeneral->InsertAtEnd(1);
						   dgv_Tablero->Rows[c8]->Cells[7]->Style->BackColor = Color::Black;
						   c8--;
					   }
				   }
				   else if (letra == "Z") {
					   if (contador == 0) {
						   listaC1->InsertAtEnd(2);
						   ListaGeneral->InsertAtEnd(2);
						   dgv_Tablero->Rows[c1]->Cells[0]->Style->BackColor = Color::Blue;
						   c1--;
					   }
					   else if (contador == 1) {
						   listaC2->InsertAtEnd(2);
						   ListaGeneral->InsertAtEnd(2);
						   dgv_Tablero->Rows[c2]->Cells[1]->Style->BackColor = Color::Blue;
						   c2--;
					   }
					   else if (contador == 2) {
						   listaC3->InsertAtEnd(2);
						   ListaGeneral->InsertAtEnd(2);
						   dgv_Tablero->Rows[c3]->Cells[2]->Style->BackColor = Color::Blue;
						   c3--;
					   }
					   else if (contador == 3) {
						   listaC4->InsertAtEnd(2);
						   ListaGeneral->InsertAtEnd(2);
						   dgv_Tablero->Rows[c4]->Cells[3]->Style->BackColor = Color::Blue;
						   c4--;
					   }
					   else if (contador == 4) {
						   listaC5->InsertAtEnd(2);
						   ListaGeneral->InsertAtEnd(2);
						   dgv_Tablero->Rows[c5]->Cells[4]->Style->BackColor = Color::Blue;
						   c5--;
					   }
					   else if (contador == 5) {
						   listaC6->InsertAtEnd(2);
						   ListaGeneral->InsertAtEnd(2);
						   dgv_Tablero->Rows[c6]->Cells[5]->Style->BackColor = Color::Blue;
						   c6--;
					   }
					   else if (contador == 6) {
						   listaC7->InsertAtEnd(2);
						   ListaGeneral->InsertAtEnd(2);
						   dgv_Tablero->Rows[c7]->Cells[6]->Style->BackColor = Color::Blue;
						   c7--;
					   }
					   else if (contador == 7) {
						   listaC8->InsertAtEnd(2);
						   ListaGeneral->InsertAtEnd(2);
						   dgv_Tablero->Rows[c8]->Cells[7]->Style->BackColor = Color::Blue;
						   c8--;
					   }
				   }
				   else if (letra == "W") {
					   if (contador == 0) {
						   listaC1->InsertAtEnd(3);
						   ListaGeneral->InsertAtEnd(3);
						   dgv_Tablero->Rows[c1]->Cells[0]->Style->BackColor = Color::Gray;
						   c1--;
					   }
					   else if (contador == 1) {
						   listaC2->InsertAtEnd(3);
						   ListaGeneral->InsertAtEnd(3);
						   dgv_Tablero->Rows[c2]->Cells[1]->Style->BackColor = Color::Gray;
						   c2--;
					   }
					   else if (contador == 2) {
						   listaC3->InsertAtEnd(3);
						   ListaGeneral->InsertAtEnd(3);
						   dgv_Tablero->Rows[c3]->Cells[2]->Style->BackColor = Color::Gray;
						   c3--;
					   }
					   else if (contador == 3) {
						   listaC4->InsertAtEnd(3);
						   ListaGeneral->InsertAtEnd(3);
						   dgv_Tablero->Rows[c4]->Cells[3]->Style->BackColor = Color::Gray;
						   c4--;
					   }
					   else if (contador == 4) {
						   listaC5->InsertAtEnd(3);
						   ListaGeneral->InsertAtEnd(3);
						   dgv_Tablero->Rows[c5]->Cells[4]->Style->BackColor = Color::Gray;
						   c5--;
					   }
					   else if (contador == 5) {
						   listaC6->InsertAtEnd(3);
						   ListaGeneral->InsertAtEnd(3);
						   dgv_Tablero->Rows[c6]->Cells[5]->Style->BackColor = Color::Gray;
						   c6--;
					   }
					   else if (contador == 6) {
						   listaC7->InsertAtEnd(3);
						   ListaGeneral->InsertAtEnd(3);
						   dgv_Tablero->Rows[c7]->Cells[6]->Style->BackColor = Color::Gray;
						   c7--;
					   }
					   else if (contador == 7) {
						   listaC8->InsertAtEnd(3);
						   ListaGeneral->InsertAtEnd(3);
						   dgv_Tablero->Rows[c8]->Cells[7]->Style->BackColor = Color::Gray;
						   c8--;
					   }
				   }
				   else if (letra == "R") {
					   if (contador == 0) {
						   listaC1->InsertAtEnd(4);
						   ListaGeneral->InsertAtEnd(4);
						   dgv_Tablero->Rows[c1]->Cells[0]->Style->BackColor = Color::Red;
						   c1--;
					   }
					   else if (contador == 1) {
						   listaC2->InsertAtEnd(4);
						   ListaGeneral->InsertAtEnd(4);
						   dgv_Tablero->Rows[c2]->Cells[1]->Style->BackColor = Color::Red;
						   c2--;
					   }
					   else if (contador == 2) {
						   listaC3->InsertAtEnd(4);
						   ListaGeneral->InsertAtEnd(4);
						   dgv_Tablero->Rows[c3]->Cells[2]->Style->BackColor = Color::Red;
						   c3--;
					   }
					   else if (contador == 3) {
						   listaC4->InsertAtEnd(4);
						   ListaGeneral->InsertAtEnd(4);
						   dgv_Tablero->Rows[c4]->Cells[3]->Style->BackColor = Color::Red;
						   c4--;
					   }
					   else if (contador == 4) {
						   listaC5->InsertAtEnd(4);
						   ListaGeneral->InsertAtEnd(4);
						   dgv_Tablero->Rows[c5]->Cells[4]->Style->BackColor = Color::Red;
						   c5--;
					   }
					   else if (contador == 5) {
						   listaC6->InsertAtEnd(4);
						   ListaGeneral->InsertAtEnd(4);
						   dgv_Tablero->Rows[c6]->Cells[5]->Style->BackColor = Color::Red;
						   c6--;
					   }
					   else if (contador == 6) {
						   listaC7->InsertAtEnd(4);
						   ListaGeneral->InsertAtEnd(4);
						   dgv_Tablero->Rows[c7]->Cells[6]->Style->BackColor = Color::Red;
						   c7--;
					   }
					   else if (contador == 7) {
						   listaC8->InsertAtEnd(4);
						   ListaGeneral->InsertAtEnd(4);
						   dgv_Tablero->Rows[c8]->Cells[7]->Style->BackColor = Color::Red;
						   c8--;
					   }
				   }
				   else if (letra == "Y") {
					   if (contador == 0) {
						   listaC1->InsertAtEnd(5);
						   ListaGeneral->InsertAtEnd(5);
						   dgv_Tablero->Rows[c1]->Cells[0]->Style->BackColor = Color::Yellow;
						   c1--;
					   }
					   else if (contador == 1) {
						   listaC2->InsertAtEnd(5);
						   ListaGeneral->InsertAtEnd(5);
						   dgv_Tablero->Rows[c2]->Cells[1]->Style->BackColor = Color::Yellow;
						   c2--;
					   }
					   else if (contador == 2) {
						   listaC3->InsertAtEnd(5);
						   ListaGeneral->InsertAtEnd(5);
						   dgv_Tablero->Rows[c3]->Cells[2]->Style->BackColor = Color::Yellow;
						   c3--;
					   }
					   else if (contador == 3) {
						   listaC4->InsertAtEnd(5);
						   ListaGeneral->InsertAtEnd(5);
						   dgv_Tablero->Rows[c4]->Cells[3]->Style->BackColor = Color::Yellow;
						   c4--;
					   }
					   else if (contador == 4) {
						   listaC5->InsertAtEnd(5);
						   ListaGeneral->InsertAtEnd(5);
						   dgv_Tablero->Rows[c5]->Cells[4]->Style->BackColor = Color::Yellow;
						   c5--;
					   }
					   else if (contador == 5) {
						   listaC6->InsertAtEnd(5);
						   ListaGeneral->InsertAtEnd(5);
						   dgv_Tablero->Rows[c6]->Cells[5]->Style->BackColor = Color::Yellow;
						   c6--;
					   }
					   else if (contador == 6) {
						   listaC7->InsertAtEnd(5);
						   ListaGeneral->InsertAtEnd(5);
						   dgv_Tablero->Rows[c7]->Cells[6]->Style->BackColor = Color::Yellow;
						   c7--;
					   }
					   else if (contador == 7) {
						   listaC8->InsertAtEnd(5);
						   ListaGeneral->InsertAtEnd(5);
						   dgv_Tablero->Rows[c8]->Cells[7]->Style->BackColor = Color::Yellow;
						   c8--;
					   }
				   }
				   else if (letra == "G") {
					   if (contador == 0) {
						   listaC1->InsertAtEnd(6);
						   ListaGeneral->InsertAtEnd(6);
						   dgv_Tablero->Rows[c1]->Cells[0]->Style->BackColor = Color::Green;
						   c1--;
					   }
					   else if (contador == 1) {
						   listaC2->InsertAtEnd(6);
						   ListaGeneral->InsertAtEnd(6);
						   dgv_Tablero->Rows[c2]->Cells[1]->Style->BackColor = Color::Green;
						   c2--;
					   }
					   else if (contador == 2) {
						   listaC3->InsertAtEnd(6);
						   ListaGeneral->InsertAtEnd(6);
						   dgv_Tablero->Rows[c3]->Cells[2]->Style->BackColor = Color::Green;
						   c3--;
					   }
					   else if (contador == 3) {
						   listaC4->InsertAtEnd(6);
						   ListaGeneral->InsertAtEnd(6);
						   dgv_Tablero->Rows[c4]->Cells[3]->Style->BackColor = Color::Green;
						   c4--;
					   }
					   else if (contador == 4) {
						   listaC5->InsertAtEnd(6);
						   ListaGeneral->InsertAtEnd(6);
						   dgv_Tablero->Rows[c5]->Cells[4]->Style->BackColor = Color::Green;
						   c5--;
					   }
					   else if (contador == 5) {
						   listaC6->InsertAtEnd(6);
						   ListaGeneral->InsertAtEnd(6);
						   dgv_Tablero->Rows[c6]->Cells[5]->Style->BackColor = Color::Green;
						   c6--;
					   }
					   else if (contador == 6) {
						   listaC7->InsertAtEnd(6);
						   ListaGeneral->InsertAtEnd(6);
						   dgv_Tablero->Rows[c7]->Cells[6]->Style->BackColor = Color::Green;
						   c7--;
					   }
					   else if (contador == 7) {
						   listaC8->InsertAtEnd(6);
						   ListaGeneral->InsertAtEnd(6);
						   dgv_Tablero->Rows[c8]->Cells[7]->Style->BackColor = Color::Green;
						   c8--;
					   }
				   }
				   else if (letra == "P") {
					   if (contador == 0) {
						   listaC1->InsertAtEnd(7);
						   ListaGeneral->InsertAtEnd(7);
						   dgv_Tablero->Rows[c1]->Cells[0]->Style->BackColor = Color::Purple;
						   c1--;
					   }
					   else if (contador == 1) {
						   listaC2->InsertAtEnd(7);
						   ListaGeneral->InsertAtEnd(7);
						   dgv_Tablero->Rows[c2]->Cells[1]->Style->BackColor = Color::Purple;
						   c2--;
					   }
					   else if (contador == 2) {
						   listaC3->InsertAtEnd(7);
						   ListaGeneral->InsertAtEnd(7);
						   dgv_Tablero->Rows[c3]->Cells[2]->Style->BackColor = Color::Purple;
						   c3--;
					   }
					   else if (contador == 3) {
						   listaC4->InsertAtEnd(7);
						   ListaGeneral->InsertAtEnd(7);
						   dgv_Tablero->Rows[c4]->Cells[3]->Style->BackColor = Color::Purple;
						   c4--;
					   }
					   else if (contador == 4) {
						   listaC5->InsertAtEnd(7);
						   ListaGeneral->InsertAtEnd(7);
						   dgv_Tablero->Rows[c5]->Cells[4]->Style->BackColor = Color::Purple;
						   c5--;
					   }
					   else if (contador == 5) {
						   listaC6->InsertAtEnd(7);
						   ListaGeneral->InsertAtEnd(7);
						   dgv_Tablero->Rows[c6]->Cells[5]->Style->BackColor = Color::Purple;
						   c6--;
					   }
					   else if (contador == 6) {
						   listaC7->InsertAtEnd(7);
						   ListaGeneral->InsertAtEnd(7);
						   dgv_Tablero->Rows[c7]->Cells[6]->Style->BackColor = Color::Purple;
						   c7--;
					   }
					   else if (contador == 7) {
						   listaC8->InsertAtEnd(7);
						   ListaGeneral->InsertAtEnd(7);
						   dgv_Tablero->Rows[c8]->Cells[7]->Style->BackColor = Color::Purple;
						   c8--;
					   }
				   }
				   else if (letra == "N") {
					   if (contador == 0) {
						   listaC1->InsertAtEnd(8);
						   ListaGeneral->InsertAtEnd(8);
						   dgv_Tablero->Rows[c1]->Cells[0]->Style->BackColor = Color::DarkBlue;
						   c1--;
					   }
					   else if (contador == 1) {
						   listaC2->InsertAtEnd(8);
						   ListaGeneral->InsertAtEnd(8);
						   dgv_Tablero->Rows[c2]->Cells[1]->Style->BackColor = Color::DarkBlue;
						   c2--;
					   }
					   else if (contador == 2) {
						   listaC3->InsertAtEnd(8);
						   ListaGeneral->InsertAtEnd(8);
						   dgv_Tablero->Rows[c3]->Cells[2]->Style->BackColor = Color::DarkBlue;
						   c3--;
					   }
					   else if (contador == 3) {
						   listaC4->InsertAtEnd(8);
						   ListaGeneral->InsertAtEnd(8);
						   dgv_Tablero->Rows[c4]->Cells[3]->Style->BackColor = Color::DarkBlue;
						   c4--;
					   }
					   else if (contador == 4) {
						   listaC5->InsertAtEnd(8);
						   ListaGeneral->InsertAtEnd(8);
						   dgv_Tablero->Rows[c5]->Cells[4]->Style->BackColor = Color::DarkBlue;
						   c5--;
					   }
					   else if (contador == 5) {
						   listaC6->InsertAtEnd(8);
						   ListaGeneral->InsertAtEnd(8);
						   dgv_Tablero->Rows[c6]->Cells[5]->Style->BackColor = Color::DarkBlue;
						   c6--;
					   }
					   else if (contador == 6) {
						   listaC7->InsertAtEnd(8);
						   ListaGeneral->InsertAtEnd(8);
						   dgv_Tablero->Rows[c7]->Cells[6]->Style->BackColor = Color::DarkBlue;
						   c7--;
					   }
					   else if (contador == 7) {
						   listaC8->InsertAtEnd(8);
						   ListaGeneral->InsertAtEnd(8);
						   dgv_Tablero->Rows[c8]->Cells[7]->Style->BackColor = Color::DarkBlue;
						   c8--;
					   }
				   }
				   else if (letra == "X" || letra == "x") {
					   contador++;
				   }
			   }
		   }
		   //Método que define que tipo de ordenamiento se va a llevar a cabo
		   void ordenamiento(int numero) {
			   //Muestra el ordenamiento en base a lo elegido anteriormente y en base a lo que vaya eligiendo durante el juego
			   if (numero == 1) {
				   lbl_Ordenamiento->Visible = true;
				   lblOrdenamiento->Visible = true;
				   lblOrdenamiento->Text = "Pila";
				   dificultad(dificultadP);
			   }
			   else if (numero == 2) {
				   lbl_Ordenamiento->Visible = true;
				   lblOrdenamiento->Visible = true;
				   lblOrdenamiento->Text = "Cola";
				   dificultad(dificultadP);
			   }
			   else {
				   lbl_Ordenamiento->Visible = false;
				   lblOrdenamiento->Visible = false;
				   dificultad(dificultadP);
			   }
		   }
		   //Método que verifica cuantos tiros ha hecho
		   void total_de_tiros(int conta) {
			   //Verifica que no se haya pasado de la cantidad de tiros, dependiendo del nivel, obtenido anteriormente
			   if (conta == 0) {
				   MessageBox::Show("Te has quedado sin movimientos, se reiniciará el juego", "Perdiste :(", MessageBoxButtons::OK, MessageBoxIcon::Stop);
				   Application::Restart();
			   }
			   contador_de_pasos_normal++;
		   }		
		   //Método que recorre las listas antes de pintarlas
		   void Pintar_Matriz_N() {
			   //Recorre las listas dependiendo de la cantidad de la cantidad que haya de las mismas, verificando posición por posición y luego los manda a otro método para que vuelva a pintar el datagrid
			   for (int i = 0; i < pilas1; i++) {
				   int contadoor = capacidad1 - 1;
				   int otro_contador = 0;
				   int contaN = 0;
				   if (i == 0) {
					   contador = listaC1->Total();
					   for (int a1 = (capacidad1 - 1); a1 >= 0; a1--) {
						   if (contador > a1)
						   {
							   Pintar_Matriz_NP(listaC1->GetValue(otro_contador), i, contadoor);
							   contadoor--;
							   otro_contador++;
						   }
						   else
						   {
							   dgv_Tablero->Rows[contaN]->Cells[i]->Style->BackColor = Color::White;
							   contaN++;
						   }

					   }
				   }
				   else if (i == 1) {
					   contador = listaC2->Total();
					   for (int a2 = (capacidad1 - 1); a2 >= 0; a2--) {
						   if (contador > a2)
						   {
							   Pintar_Matriz_NP(listaC2->GetValue(otro_contador), i, contadoor);
							   contadoor--;
							   otro_contador++;
						   }
						   else
						   {
							   dgv_Tablero->Rows[contaN]->Cells[i]->Style->BackColor = Color::White;
							   contaN++;
						   }

					   }
				   }
				   else if (i == 2) {
					   contador = listaC3->Total();
					   for (int a3 = (capacidad1 - 1); a3 >= 0; a3--) {
						   if (contador > a3)
						   {
							   Pintar_Matriz_NP(listaC3->GetValue(otro_contador), i, contadoor);
							   contadoor--;
							   otro_contador++;
						   }
						   else
						   {
							   dgv_Tablero->Rows[contaN]->Cells[i]->Style->BackColor = Color::White;
							   contaN++;
						   }

					   }
				   }
				   else if (i == 3) {
					   contador = listaC4->Total();
					   for (int a4 = (capacidad1 - 1); a4 >= 0; a4--) {
						   if (contador > a4)
						   {
							   Pintar_Matriz_NP(listaC4->GetValue(otro_contador), i, contadoor);
							   contadoor--;
							   otro_contador++;
						   }
						   else
						   {
							   dgv_Tablero->Rows[contaN]->Cells[i]->Style->BackColor = Color::White;
							   contaN++;
						   }

					   }
				   }
				   else if (i == 4) {
					   contador = listaC5->Total();
					   for (int a5 = (capacidad1 - 1); a5 >= 0; a5--) {
						   if (contador > a5)
						   {
							   Pintar_Matriz_NP(listaC5->GetValue(otro_contador), i, contadoor);
							   contadoor--;
							   otro_contador++;
						   }
						   else
						   {
							   dgv_Tablero->Rows[contaN]->Cells[i]->Style->BackColor = Color::White;
							   contaN;
						   }

					   }
				   }
				   else if (i == 5) {
					   contador = listaC6->Total();
					   for (int a6 = (capacidad1 - 1); a6 >= 0; a6--) {
						   if (contador > a6)
						   {
							   Pintar_Matriz_NP(listaC6->GetValue(otro_contador), i, contadoor);
							   contadoor--;
							   otro_contador++;
						   }
						   else
						   {
							   dgv_Tablero->Rows[contaN]->Cells[i]->Style->BackColor = Color::White;
							   contaN++;
						   }

					   }
				   }
				   else if (i == 6) {
					   contador = listaC7->Total();
					   for (int a7 = (capacidad1 - 1); a7 >= 0; a7--) {
						   if (contador > a7)
						   {
							   Pintar_Matriz_NP(listaC7->GetValue(otro_contador), i, contadoor);
							   contadoor--;
							   otro_contador++;
						   }
						   else
						   {
							   dgv_Tablero->Rows[contaN]->Cells[i]->Style->BackColor = Color::White;
							   contaN++;

						   }

					   }
				   }
				   else if (i == 7) {
					   contador = listaC8->Total();
					   for (int a8 = (capacidad1 - 1); a8 >= 0; a8--) {
						   if (contador > a8)
						   {
							   Pintar_Matriz_NP(listaC8->GetValue(otro_contador), i, contadoor);
							   contadoor--;
							   otro_contador++;
						   }
						   else
						   {
							   dgv_Tablero->Rows[contaN]->Cells[i]->Style->BackColor = Color::White;
							   contaN++;
						   }

					   }
				   }
			   }
			   //Método que guarda los pasos en un string
			   Pasos();
		   }
		   //Método que pinta el datagrid en base a las listas
		   void Pintar_Matriz_NP(int nn, int columna, int fila) {
			   //Dependiendo del número obtenido del método anterior, va a repintar el datagrid nuevamente
			   if (nn == 1) {
				   dgv_Tablero->Rows[fila]->Cells[columna]->Style->BackColor = Color::Black;
			   }
			   else if (nn == 2) {
				   dgv_Tablero->Rows[fila]->Cells[columna]->Style->BackColor = Color::Blue;
			   }
			   else if (nn == 3) {
				   dgv_Tablero->Rows[fila]->Cells[columna]->Style->BackColor = Color::Gray;
			   }
			   else if (nn == 4) {
				   dgv_Tablero->Rows[fila]->Cells[columna]->Style->BackColor = Color::Red;
			   }
			   else if (nn == 5) {
				   dgv_Tablero->Rows[fila]->Cells[columna]->Style->BackColor = Color::Yellow;
			   }
			   else if (nn == 6) {
				   dgv_Tablero->Rows[fila]->Cells[columna]->Style->BackColor = Color::Green;
			   }
			   else if (nn == 7) {
				   dgv_Tablero->Rows[fila]->Cells[columna]->Style->BackColor = Color::Purple;
			   }
			   else if (nn == 8) {
				   dgv_Tablero->Rows[fila]->Cells[columna]->Style->BackColor = Color::DarkBlue;
			   }
		   }
		   //Método que verifica si el jugador ya ha ganado
		   bool verificar_ganador() {
			   //Recorre nuevamente las listas, esta vez comparando los valores posición por posición, si no son iguales se rompe el ciclo
			   for (int i = 0; i <= pilas1; i++) {
				   if (i == pilas1) {
					   return victoria;
					   break;
				   }
				   else if (i == 0) {
					   contador = listaC1->Total();
					   for (int a1 = 0; a1 < contador; a1++) {
						   {
							   if (listaC1->GetValue(a1) == listaC1->GetValueAtEnd()) {
								   victoria = true;
							   }
							   else {
								   victoria = false;
								   break;
							   }
						   }
					   }
					   if (victoria == false) {
						   break;
					   }
				   }
				   else if (i == 1) {
					   contador = listaC2->Total();
					   for (int a2 = 0; a2 < contador; a2++) {
						   {
							   if (listaC2->GetValue(a2) == listaC2->GetValueAtEnd() && listaC2->GetValue(a2) == listaC2->GetValueAtEnd()) {
								   victoria = true;

							   }
							   else {
								   victoria = false;
								   break;
							   }
						   }

					   }
					   if (victoria == false) {
						   break;
					   }
				   }
				   else if (i == 2) {
					   contador = listaC3->Total();
					   for (int a3 = 0; a3 < contador; a3++) {
						   {
							   if (listaC3->GetValue(a3) == listaC3->GetValueAtEnd() && listaC3->GetValue(a3) == listaC3->GetValueAtEnd()) {
								   victoria = true;

							   }
							   else {
								   victoria = false;
								   break;
							   }
						   }

					   }
					   if (victoria == false) {
						   break;
					   }
				   }
				   else if (i == 3) {
					   contador = listaC4->Total();
					   for (int a4 = 0; a4 < contador; a4++) {
						   {
							   if (listaC4->GetValue(a4) == listaC4->GetValueAtEnd() && listaC4->GetValue(a4) == listaC4->GetValueAtEnd()) {
								   victoria = true;

							   }
							   else {
								   victoria = false;
								   break;
							   }
						   }

					   }
					   if (victoria == false) {
						   break;
					   }
				   }
				   else if (i == 4) {
					   contador = listaC5->Total();
					   for (int a5 = 0; a5 < contador; a5++) {
						   {
							   if (listaC5->GetValue(a5) == listaC5->GetValueAtEnd() && listaC5->GetValue(a5) == listaC5->GetValueAtEnd()) {
								   victoria = true;

							   }
							   else {
								   victoria = false;
								   break;
							   }
						   }

					   }
					   if (victoria == false) {
						   break;
					   }
				   }
				   else if (i == 5) {
					   contador = listaC6->Total();
					   for (int a6 = 0; a6 < contador; a6++) {
						   {
							   if (listaC6->GetValue(a6) == listaC6->GetValueAtEnd() && listaC6->GetValue(a6) == listaC6->GetValueAtEnd()) {
								   victoria = true;

							   }
							   else {
								   victoria = false;
								   break;
							   }
						   }

					   }
					   if (victoria == false) {
						   break;
					   }
				   }
				   else if (i == 6) {
					   contador = listaC7->Total();
					   for (int a7 = 0; a7 < contador; a7++) {
						   {
							   if (listaC7->GetValue(a7) == listaC7->GetValueAtEnd() && listaC7->GetValue(a7) == listaC7->GetValueAtEnd()) {
								   victoria = true;

							   }
							   else {
								   victoria = false;
								   break;
							   }
						   }
					   }
					   if (victoria == false) {
						   break;
					   }
				   }
				   else if (i == 7) {
					   contador = listaC8->Total();
					   for (int a8 = 0; a8 < contador; a8++) {
						   {
							   if (listaC8->GetValue(a8) == listaC8->GetValueAtEnd() && listaC8->GetValue(a8) == listaC8->GetValueAtEnd()) {
								   victoria = true;
								   return victoria;

							   }
							   else {
								   victoria = false;
								   break;
							   }
						   }

					   }
					   if (victoria == false) {
						   break;
					   }
				   }
			   }
		   }
		   //Método que va guardando en una variable los pasos y los separa
		   void Pasos() {
			   //Guarda los´pasos y depende del tipo de ordenamiento para imprimir si el movimiento fue pila o cola
			   if (pila_o_colaP == 1) {
				   pasos += "Movimiento: Pila, " + "P(" + (valor_cBE + 1) + ") a " + "P(" + (valor_cbD + 1) + ")" + "\r\n";
			   }
			   else if (pila_o_colaP == 2){
				   pasos += "Movimiento: Cola, " + "P(" + (valor_cBE + 1) + ") a " + "P(" + (valor_cbD + 1) + ")" + "\r\n";
			   }
		   }

//ESTE MÉTODO SE HACE CUANDO EL JUEGO SE HACE SIN NINGUNA PAUSA
		   int p1, p2=0, p3=0, p4 = 0, p5 = 0, p6 = 0, p7 = 0, p8 = 0;
		   int contador_pivotes=1;
		   //Se hace el ordenamiento sin pausas
		   void Ordenamiento_Sin_Pausas() {
			   Definir_Pivotes();
			   Limpiar_Listas();
			   //Recorre la lista general para poder llenar en los espacios correspondientes
			   for (int i = 0; i < ListaGeneral->Total();i++) {
				   if (ListaGeneral->GetValue(i) == p1) {
					   listaC1->InsertAtEnd(p1);
				   }
				   else if (ListaGeneral->GetValue(i) == p2) {
					   listaC2->InsertAtEnd(p2);
				   }
				   else if (ListaGeneral->GetValue(i) == p3) {
					   listaC3->InsertAtEnd(p3);
				   }
				   else if (ListaGeneral->GetValue(i) == p4) {
					   listaC4->InsertAtEnd(p4);
				   }
				   else if (ListaGeneral->GetValue(i) == p5) {
					   listaC5->InsertAtEnd(p5);
				   }
				   else if (ListaGeneral->GetValue(i) == p6) {
					   listaC6->InsertAtEnd(p6);
				   }
				   else if (ListaGeneral->GetValue(i) == p7) {
					   listaC7->InsertAtEnd(p7);
				   }
				   else if (ListaGeneral->GetValue(i) == p8) {
					   listaC8->InsertAtEnd(p8);
				   }
			   }
			   //Pinta la matriz nuevamente
			   Pintar_Matriz_N();
		   }
		   //Se definen pivotes para cada color 
		   void Definir_Pivotes() {
			   //Se define si es cola o pila
			   if (pila_o_colaP == 1) {
				   p1 = ListaGeneral->GetValueAtEnd();
			   }
			   else if (pila_o_colaP == 2) {
				   p1 = ListaGeneral->GetValueAtStart();
			   }
			   for (int i = 0; i < ListaGeneral->Total(); i++) {
				   if (ListaGeneral->GetValue(i) == p1) {

				   }
				   else if (contador_pivotes==1) {
					   p2 = ListaGeneral->GetValue(i);
					   contador_pivotes++;
				   }
				   else if (contador_pivotes == 2) {
					   p3 = ListaGeneral->GetValue(i);
					   contador_pivotes++;
				   }
				   else if (contador_pivotes == 3) {
					   p4 = ListaGeneral->GetValue(i);
					   contador_pivotes++;
				   }
				   else if (contador_pivotes == 4) {
					   p5 = ListaGeneral->GetValue(i);
					   contador_pivotes++;
				   }
				   else if (contador_pivotes == 5) {
					   p6 = ListaGeneral->GetValue(i);
					   contador_pivotes++;
				   }
				   else if (contador_pivotes==6) {
					   p7 = ListaGeneral->GetValue(i);
					   contador_pivotes++;
				   }
				   else if (contador_pivotes == 7) {
					   p8 = ListaGeneral->GetValue(i);
					   contador_pivotes++;
				   }
			   }
		   }
		   //Limpia las listas para no crear o duplicar valores
		   void Limpiar_Listas() {
			   listaC1->Limpiar();
			   listaC2->Limpiar();
			   listaC3->Limpiar();
			   listaC4->Limpiar();
			   listaC5->Limpiar();
			   listaC6->Limpiar();
			   listaC7->Limpiar();
			   listaC8->Limpiar();
		   }		   		   
};
}
