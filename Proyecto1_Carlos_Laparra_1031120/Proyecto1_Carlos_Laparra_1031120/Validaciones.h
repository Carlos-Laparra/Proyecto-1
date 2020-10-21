#include"ModoDeJuego.h"
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
	/// Resumen de Validaciones
	/// </summary>
	public ref class Validaciones : public System::Windows::Forms::Form
	{
	public :	
		static int pilas;
		array<String^>^ archivoColumna;
		static int capacidad;
	private: System::Windows::Forms::Button^ btn_Validar;
	public:		
		Validaciones(void)
		{		
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Validaciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lbl_Titulo;
	private: System::Windows::Forms::Label^ lbl_cantidad;
	private: System::Windows::Forms::Label^ lbl_Capacidad;
	private: System::Windows::Forms::TextBox^ txt_Cantidad;
	private: System::Windows::Forms::TextBox^ txt_Capacidad;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ ofd_txt;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Validaciones::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_Titulo = (gcnew System::Windows::Forms::Label());
			this->lbl_cantidad = (gcnew System::Windows::Forms::Label());
			this->lbl_Capacidad = (gcnew System::Windows::Forms::Label());
			this->txt_Cantidad = (gcnew System::Windows::Forms::TextBox());
			this->txt_Capacidad = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ofd_txt = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_Validar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Maroon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(286, 439);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Siguiente";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Validaciones::button1_Click);
			// 
			// lbl_Titulo
			// 
			this->lbl_Titulo->AutoSize = true;
			this->lbl_Titulo->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Titulo->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Titulo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Titulo->Location = System::Drawing::Point(297, 9);
			this->lbl_Titulo->Name = L"lbl_Titulo";
			this->lbl_Titulo->Size = System::Drawing::Size(209, 44);
			this->lbl_Titulo->TabIndex = 1;
			this->lbl_Titulo->Text = L"Validaciones";
			// 
			// lbl_cantidad
			// 
			this->lbl_cantidad->AutoSize = true;
			this->lbl_cantidad->BackColor = System::Drawing::Color::Transparent;
			this->lbl_cantidad->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_cantidad->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_cantidad->Location = System::Drawing::Point(12, 64);
			this->lbl_cantidad->Name = L"lbl_cantidad";
			this->lbl_cantidad->Size = System::Drawing::Size(313, 62);
			this->lbl_cantidad->TabIndex = 2;
			this->lbl_cantidad->Text = L"-Ingrese la cantidad de pilas \r\nque desea tener";
			// 
			// lbl_Capacidad
			// 
			this->lbl_Capacidad->AutoSize = true;
			this->lbl_Capacidad->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Capacidad->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_Capacidad->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Capacidad->Location = System::Drawing::Point(12, 147);
			this->lbl_Capacidad->Name = L"lbl_Capacidad";
			this->lbl_Capacidad->Size = System::Drawing::Size(302, 62);
			this->lbl_Capacidad->TabIndex = 3;
			this->lbl_Capacidad->Text = L"-Ingrese la capacidad de las\r\npilas \r\n";
			// 
			// txt_Cantidad
			// 
			this->txt_Cantidad->Location = System::Drawing::Point(456, 79);
			this->txt_Cantidad->Name = L"txt_Cantidad";
			this->txt_Cantidad->Size = System::Drawing::Size(157, 26);
			this->txt_Cantidad->TabIndex = 4;
			this->txt_Cantidad->TextChanged += gcnew System::EventHandler(this, &Validaciones::txt_Cantidad_TextChanged);
			// 
			// txt_Capacidad
			// 
			this->txt_Capacidad->Location = System::Drawing::Point(456, 162);
			this->txt_Capacidad->Name = L"txt_Capacidad";
			this->txt_Capacidad->Size = System::Drawing::Size(157, 26);
			this->txt_Capacidad->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(8, 318);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"-Exportar el archivo de texto\r\n";
			this->label1->Visible = false;
			// 
			// ofd_txt
			// 
			this->ofd_txt->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Maroon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(456, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 43);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Importar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Validaciones::button2_Click);
			// 
			// btn_Validar
			// 
			this->btn_Validar->BackColor = System::Drawing::Color::Maroon;
			this->btn_Validar->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Validar->ForeColor = System::Drawing::Color::Transparent;
			this->btn_Validar->Location = System::Drawing::Point(286, 242);
			this->btn_Validar->Name = L"btn_Validar";
			this->btn_Validar->Size = System::Drawing::Size(167, 46);
			this->btn_Validar->TabIndex = 8;
			this->btn_Validar->Text = L"Validar datos";
			this->btn_Validar->UseVisualStyleBackColor = false;
			this->btn_Validar->Click += gcnew System::EventHandler(this, &Validaciones::btn_Validar_Click);
			// 
			// Validaciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(755, 524);
			this->Controls->Add(this->btn_Validar);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_Capacidad);
			this->Controls->Add(this->txt_Cantidad);
			this->Controls->Add(this->lbl_Capacidad);
			this->Controls->Add(this->lbl_cantidad);
			this->Controls->Add(this->lbl_Titulo);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Validaciones";
			this->Text = L"Validaciones";
			this->Load += gcnew System::EventHandler(this, &Validaciones::Validaciones_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*Se hacen todas las validaciones necesarias para que el txt pueda ser funcional en el juego y no presentar errores
		Errores que validan:		
		1. Que no hayan mas listas ni menos de las permitidas
		2. Que la capacidad no sea negativa
		3. Que si elige cierta cantidad de listas, que la cantidad de colores que ingresa no la sobrepasen
		4. Que si ingresa cierta capacidad para las listas, que los valores que ingrese ya sea de una misma pila o de un mismo color no lo sobrepasen
		5. Que no ingrese mas "X" de las necesarias
		6. Que no ingrese una letra o caracter que no haya sido definido
		*/
	private: System::Void Validaciones_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		ModoDeJuego::c1 = capacidad;
		ModoDeJuego::p1 = pilas;
		ModoDeJuego::d1 = archivoColumna;
		ModoDeJuego^ form = gcnew ModoDeJuego();
		form->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ofd_txt->Filter = "Archivos separados por coma (txt) | *.txt";
		ofd_txt->FileName = "";
		bool letra_que_no_es = true;
		int conta = 0;
		String^ valor_letra;
		int cont = 0;
		if (ofd_txt->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			array<String^>^ archivoLineas = File::ReadAllLines(ofd_txt->FileName);

			if (archivoLineas->Length > 0) {
				archivoColumna = archivoLineas[0]->Split(',');
				if (archivoLineas->Length == 1) {
					for (int i = 0; i < archivoColumna->Length; i++) {
						valor_letra = archivoColumna[i];
						if (valor_letra == "x" || valor_letra == "X") {
							cont++;
							conta = 0;
						}
						else if(valor_letra=="B" || valor_letra =="Z" || valor_letra=="W" || valor_letra == "R" || valor_letra == "Y" || valor_letra == "G" || valor_letra == "P" || valor_letra == "N")
						{
							conta++;							
						}
						else {
							letra_que_no_es = false;
						}
					}
					if (cont < pilas) {
						if (letra_que_no_es == false) {
							MessageBox::Show("El archivo de texto contiene letras que no son permitidas, favor modificar", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);	
							button1->Visible = false;							
						}
						else {
							if (Comprobar_Cantidad_Letras(archivoColumna, pilas) == false) {
								MessageBox::Show("Está ingresando más colores que grupos disponibles, modificar o el archivo de texto o los grupos a crear", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
								button1->Visible = false;
							}
							else {
								if (Comprobar_Letras(archivoColumna, capacidad) == false) {
									MessageBox::Show("Está Ingresando más colores del mismo color que la capacidad de la lista, modificar el archivo de texto o la capacidad de las listas", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
									button1->Visible = false;
								}
								else {
									if (Cierto(conta, capacidad) == false) {
										button1->Visible = false;
										MessageBox::Show("Está ingresando más colores que la capacidad en la pila, modificar el archivo de texto o la capacidad de las listas", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
									}
									else {
										button1->Visible = true;
									}
								}
							}
						}
					}
					else {
						MessageBox::Show("El archivo de texto contiene más 'x' de las permitidas", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						button1->Visible = false;
					}					
				}
				else {
					MessageBox::Show("El archivo de texto contiene más lineas de las esperadas", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					button1->Visible = false;
				}
			}
			else{
				MessageBox::Show("El archivo de texto no tiene los caractéres suficientes.", "Alerta", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				button1->Visible = false;
			}
		}
		else {
			MessageBox::Show("No eligió ningún archivo","Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
			button1->Visible = false;
		}
	}
private: System::Void txt_Cantidad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_Validar_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		pilas = Convert::ToInt32(txt_Cantidad->Text);
		capacidad = Convert::ToInt32(txt_Capacidad->Text);
		if(pilas>1){
			if (pilas < 9 && pilas>0) {
				label1->Visible = true;
				button2->Visible = true;
			}
			else {
				MessageBox::Show("La cantidad de grupos ingresados supera el límite de lo posible, ingrese un valor entre 2 y 8","Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				label1->Visible = false;
				button2->Visible = false;
			}
		}
		else {
			MessageBox::Show("La capacidad de cada grupo debe ser mayor a 0","Advertencia",MessageBoxButtons::OK,MessageBoxIcon::Warning);
			label1->Visible = false;
			button2->Visible = false;
		}	
	}
	catch(Exception^ e){
		MessageBox::Show("Hay errores, ingrese nuevamente los datos","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		label1->Visible = false;
		button2->Visible = false;
	}
}
	   //Se refiere a que si la capacidad de la pila es de 4 no hayan 5 diferentes letras
	   bool Comprobar_Cantidad_Letras(array<String^>^ doc, int pil) {
		   int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0;
		   String^ letra;
		   for (int i = 0; i < doc->Length; i++) {
			   letra = doc[i];
			   if (letra == "B") {
				   c1 = 1;
			   }
			   else if (letra == "Z") {
				   c2 = 1;
			   }
			   else if (letra == "W") {
				   c3 = 1;
			   }
			   else if (letra == "R") {
				   c4 = 1;
			   }
			   else if (letra == "Y") {
				   c5 = 1;
			   }
			   else if (letra == "G") {
				   c6 = 1;
			   }
			   else if (letra == "P") {
				   c7 = 1;
			   }
			   else if (letra == "N") {
				   c8 = 1;
			   }
		   }
		   int resultado = c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8;
		   if (resultado > pil) {
			   return false;
		   }
		   else {
			   return true;
		   }
	   }
	   //Si aprueba el método anterior pasa a este, que es para que una misma letra no supere la capacidad de la lista
	   bool Comprobar_Letras(array<String^>^ docc, int capp) {
		   int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0;
		   String^ letra;
		   for (int i = 0; i < docc->Length; i++) {
			   letra = docc[i];
			   if (letra == "B") {
				   c1++;	
				   if (Cierto(c1, capp)==false) {
					   return false;
				   }
			   }
			   if (letra == "Z") {
				   c2++;
				   if (Cierto(c2, capp) == false) {
					   return false;
				   }
			   }
			   if (letra == "W") {
				   c3++;
				   if (Cierto(c3, capp) == false) {
					   return false;
				   }
			   }
			   if (letra == "R") {
				   c4++;
				   if (Cierto(c4, capp) == false) {
					   return false;
				   }
			   }
			   if (letra == "Y") {
				   c5++;
				   if (Cierto(c5, capp) == false) {
					   return false;
				   }
			   }
			   if (letra == "G") {
				   c6++;
				   if (Cierto(c6, capp) == false) {
					   return false;
				   }
			   }
			   if (letra == "P") {
				   c7++;
				   if (Cierto(c7, capp) == false) {
					   return false;
				   }
			   }
			   if (letra == "N") {
				   c8++;
				   if (Cierto(c8, capp) == false) {
					   return false;
				   }
			   }
		   }
		   return true;
	   }
	   bool Cierto(int c, int cap) {
		   if (c > cap) {
			   return false;
		   }
		   else {
			   return true;
		   }
	   }
};
}
