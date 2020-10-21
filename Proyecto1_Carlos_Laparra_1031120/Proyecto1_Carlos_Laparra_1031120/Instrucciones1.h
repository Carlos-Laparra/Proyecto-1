#include"Validaciones.h"
#pragma once

namespace Proyecto1CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Instrucciones
	/// </summary>
	public ref class Instrucciones1 : public System::Windows::Forms::Form
	{
	public:
		Instrucciones1(void)
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
		~Instrucciones1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_instrucciones;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ lbl_;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_Regresar;
	private: System::Windows::Forms::RichTextBox^ rtxt_Instrucciones;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Instrucciones1::typeid));
			this->lbl_instrucciones = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_ = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_Regresar = (gcnew System::Windows::Forms::Button());
			this->rtxt_Instrucciones = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_instrucciones
			// 
			this->lbl_instrucciones->AutoSize = true;
			this->lbl_instrucciones->BackColor = System::Drawing::Color::Transparent;
			this->lbl_instrucciones->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_instrucciones->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_instrucciones->Location = System::Drawing::Point(12, 9);
			this->lbl_instrucciones->Name = L"lbl_instrucciones";
			this->lbl_instrucciones->Size = System::Drawing::Size(224, 44);
			this->lbl_instrucciones->TabIndex = 0;
			this->lbl_instrucciones->Text = L"Instrucciones";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(522, 144);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(191, 102);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(464, 358);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(439, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// lbl_
			// 
			this->lbl_->AutoSize = true;
			this->lbl_->BackColor = System::Drawing::Color::Transparent;
			this->lbl_->Font = (gcnew System::Drawing::Font(L"Nobile", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_->Location = System::Drawing::Point(665, 50);
			this->lbl_->Name = L"lbl_";
			this->lbl_->Size = System::Drawing::Size(157, 44);
			this->lbl_->TabIndex = 4;
			this->lbl_->Text = L"Ejemplos";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(777, 144);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(191, 102);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(529, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Entrada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(771, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 31);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Salida";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(599, 324);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 31);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Entrada de texto";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(476, 467);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(427, 48);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(575, 433);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 31);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Salida de texto";
			// 
			// btn_Regresar
			// 
			this->btn_Regresar->BackColor = System::Drawing::Color::Maroon;
			this->btn_Regresar->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Regresar->ForeColor = System::Drawing::Color::Transparent;
			this->btn_Regresar->Location = System::Drawing::Point(476, 564);
			this->btn_Regresar->Name = L"btn_Regresar";
			this->btn_Regresar->Size = System::Drawing::Size(297, 45);
			this->btn_Regresar->TabIndex = 11;
			this->btn_Regresar->Text = L"!Crear tablero¡";
			this->btn_Regresar->UseVisualStyleBackColor = false;
			this->btn_Regresar->Click += gcnew System::EventHandler(this, &Instrucciones1::btn_Regresar_Click);
			// 
			// rtxt_Instrucciones
			// 
			this->rtxt_Instrucciones->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->rtxt_Instrucciones->ForeColor = System::Drawing::SystemColors::InfoText;
			this->rtxt_Instrucciones->Location = System::Drawing::Point(3, 50);
			this->rtxt_Instrucciones->Name = L"rtxt_Instrucciones";
			this->rtxt_Instrucciones->Size = System::Drawing::Size(433, 559);
			this->rtxt_Instrucciones->TabIndex = 1;
			this->rtxt_Instrucciones->Text = resources->GetString(L"rtxt_Instrucciones.Text");
			this->rtxt_Instrucciones->TextChanged += gcnew System::EventHandler(this, &Instrucciones1::rtxt_Instrucciones_TextChanged);
			// 
			// Instrucciones1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(992, 621);
			this->Controls->Add(this->btn_Regresar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->lbl_);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->rtxt_Instrucciones);
			this->Controls->Add(this->lbl_instrucciones);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Instrucciones1";
			this->Text = L"Instrucciones";
			this->Load += gcnew System::EventHandler(this, &Instrucciones1::Instrucciones1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_Regresar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		Validaciones^ form = gcnew Validaciones();		
		form->ShowDialog();		
	}
private: System::Void rtxt_Instrucciones_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Instrucciones1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
