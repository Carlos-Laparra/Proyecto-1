#include"PantallaPrincipal.h"
#pragma once

namespace Proyecto1CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModoDeJuego
	/// </summary>
	public ref class ModoDeJuego : public System::Windows::Forms::Form
	{
	public:
		static bool modo;
		static int pila_cola;
		static int dificultad;
		static int p1;
		static int c1;
		static array<String^>^ d1;
		static int contador_de_dificultad;
		ModoDeJuego(void)
		{			
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModoDeJuego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Tablero;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ lbl_Modalidad;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ lbl_ordenar;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ lbl_Modo;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModoDeJuego::typeid));
			this->btn_Tablero = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Modalidad = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_ordenar = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_Modo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_Tablero
			// 
			this->btn_Tablero->BackColor = System::Drawing::Color::Maroon;
			this->btn_Tablero->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Tablero->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Tablero->Location = System::Drawing::Point(175, 353);
			this->btn_Tablero->Name = L"btn_Tablero";
			this->btn_Tablero->Size = System::Drawing::Size(185, 48);
			this->btn_Tablero->TabIndex = 15;
			this->btn_Tablero->Text = L"Ir al tablero";
			this->btn_Tablero->UseVisualStyleBackColor = false;
			this->btn_Tablero->Visible = false;
			this->btn_Tablero->Click += gcnew System::EventHandler(this, &ModoDeJuego::btn_Tablero_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Fácil", L"Medio", L"Difícil" });
			this->comboBox3->Location = System::Drawing::Point(20, 277);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(143, 28);
			this->comboBox3->TabIndex = 14;
			this->comboBox3->Visible = false;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &ModoDeJuego::comboBox3_SelectedIndexChanged);
			// 
			// lbl_Modalidad
			// 
			this->lbl_Modalidad->AutoSize = true;
			this->lbl_Modalidad->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Modalidad->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Modalidad->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Modalidad->Location = System::Drawing::Point(12, 217);
			this->lbl_Modalidad->Name = L"lbl_Modalidad";
			this->lbl_Modalidad->Size = System::Drawing::Size(275, 44);
			this->lbl_Modalidad->TabIndex = 13;
			this->lbl_Modalidad->Text = L"Elija la dificultad";
			this->lbl_Modalidad->Visible = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pila", L"Cola" });
			this->comboBox2->Location = System::Drawing::Point(20, 170);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(143, 28);
			this->comboBox2->TabIndex = 12;
			this->comboBox2->Visible = false;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &ModoDeJuego::comboBox2_SelectedIndexChanged);
			// 
			// lbl_ordenar
			// 
			this->lbl_ordenar->AutoSize = true;
			this->lbl_ordenar->BackColor = System::Drawing::Color::Transparent;
			this->lbl_ordenar->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ordenar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_ordenar->Location = System::Drawing::Point(12, 136);
			this->lbl_ordenar->Name = L"lbl_ordenar";
			this->lbl_ordenar->Size = System::Drawing::Size(281, 31);
			this->lbl_ordenar->TabIndex = 11;
			this->lbl_ordenar->Text = L"Elija la manera de ordenar";
			this->lbl_ordenar->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Modo con pausas", L"Modo sin pausas" });
			this->comboBox1->Location = System::Drawing::Point(20, 78);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(143, 28);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ModoDeJuego::comboBox1_SelectedIndexChanged);
			// 
			// lbl_Modo
			// 
			this->lbl_Modo->AutoSize = true;
			this->lbl_Modo->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Modo->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Modo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Modo->Location = System::Drawing::Point(12, 18);
			this->lbl_Modo->Name = L"lbl_Modo";
			this->lbl_Modo->Size = System::Drawing::Size(348, 44);
			this->lbl_Modo->TabIndex = 9;
			this->lbl_Modo->Text = L"Elija el modo de juego";
			// 
			// ModoDeJuego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(519, 437);
			this->Controls->Add(this->btn_Tablero);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->lbl_Modalidad);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->lbl_ordenar);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lbl_Modo);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ModoDeJuego";
			this->Text = L"ModoDeJuego";
			this->Load += gcnew System::EventHandler(this, &ModoDeJuego::ModoDeJuego_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int v1, v2, v3;
		//Botón que manda al form del juego
	private: System::Void btn_Tablero_Click(System::Object^ sender, System::EventArgs^ e) {
		//Manda las variables que se guardan en el form al otro form para que puedan ser usadas
		PantallaPrincipal::pilas1 = p1;
		PantallaPrincipal::capacidad1 = c1;
		PantallaPrincipal::datos = d1;
		PantallaPrincipal::modoP = modo;
		PantallaPrincipal::pila_o_colaP = pila_cola;
		PantallaPrincipal::dificultadP = dificultad;
		PantallaPrincipal::contador_dificultad = contador_de_dificultad;
		PantallaPrincipal^ form = gcnew PantallaPrincipal();
		form->ShowDialog();
	}
private: System::Void ModoDeJuego_Load(System::Object^ sender, System::EventArgs^ e) {	
}
	   //Se elige el modo de juego
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {	
	v1 = comboBox1->SelectedIndex;
	v2 = comboBox2->SelectedIndex;
	v3 = comboBox3->SelectedIndex;
	if (v1 == 0) {
		btn_Tablero->Visible = false;
		modo = true;
		pila_cola = 0;
		lbl_ordenar->Visible = false;
		comboBox2->Visible = false;
		lbl_Modalidad->Visible = true;
		comboBox3->Visible = true;
		
	}
	else {
		btn_Tablero->Visible = false;
		modo = false;
		lbl_Modalidad->Visible = false;
		comboBox3->Visible = false;
		lbl_ordenar->Visible = true;
		comboBox2->Visible = true;
	}
}
	   int dificultad_m(int v) {
		   if (v == 0) {
			   dificultad = 1;
			   contador_de_dificultad = 100000;
			   return dificultad;
		   }
		   else if (v == 1) {
			   dificultad = 2;
			   contador_de_dificultad = 50;
			   return dificultad;
		   }
		   else if (v == 2) {
			   dificultad = 3;
			   contador_de_dificultad = 25;
			   return dificultad;
		   }
	   }
	//Se elige, si fuera necesario, la manera de ordenar
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	v2 = comboBox2->SelectedIndex;
	if (v2 == 0) {
		btn_Tablero->Visible = true;
		pila_cola = 1;
		lbl_Modalidad->Visible = false;
		comboBox3->Visible = false;
	}
	else if (v2 == 1) {
		btn_Tablero->Visible = true;
		pila_cola = 2;
		lbl_Modalidad->Visible = false;
		comboBox3->Visible = false;
	}
}
	   //Se elige la dificultad
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	v3 = comboBox3->SelectedIndex;
	dificultad = dificultad_m(v3);
	btn_Tablero->Visible = true;
}
};
}
