#include"Validaciones.h"
#include"Instrucciones1.h"
#pragma once

namespace Proyecto1CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btn_instrucciones;
	private: System::Windows::Forms::Button^ btn_empezar;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_instrucciones = (gcnew System::Windows::Forms::Button());
			this->btn_empezar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::DarkRed;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(132, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(267, 102);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// btn_instrucciones
			// 
			this->btn_instrucciones->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btn_instrucciones->BackColor = System::Drawing::Color::DarkRed;
			this->btn_instrucciones->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_instrucciones->ForeColor = System::Drawing::Color::Transparent;
			this->btn_instrucciones->Location = System::Drawing::Point(74, 191);
			this->btn_instrucciones->Margin = System::Windows::Forms::Padding(0);
			this->btn_instrucciones->Name = L"btn_instrucciones";
			this->btn_instrucciones->Size = System::Drawing::Size(174, 47);
			this->btn_instrucciones->TabIndex = 1;
			this->btn_instrucciones->Text = L"Instrucciones";
			this->btn_instrucciones->UseVisualStyleBackColor = false;
			this->btn_instrucciones->Click += gcnew System::EventHandler(this, &MyForm::btn_instrucciones_Click);
			// 
			// btn_empezar
			// 
			this->btn_empezar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btn_empezar->BackColor = System::Drawing::Color::DarkRed;
			this->btn_empezar->Font = (gcnew System::Drawing::Font(L"Nobile", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_empezar->ForeColor = System::Drawing::Color::Transparent;
			this->btn_empezar->Location = System::Drawing::Point(303, 191);
			this->btn_empezar->Margin = System::Windows::Forms::Padding(0);
			this->btn_empezar->Name = L"btn_empezar";
			this->btn_empezar->Size = System::Drawing::Size(180, 47);
			this->btn_empezar->TabIndex = 2;
			this->btn_empezar->Text = L"Empezar";
			this->btn_empezar->UseVisualStyleBackColor = false;
			this->btn_empezar->Click += gcnew System::EventHandler(this, &MyForm::btn_empezar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(529, 290);
			this->Controls->Add(this->btn_empezar);
			this->Controls->Add(this->btn_instrucciones);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"ColorMania";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_empezar_Click(System::Object^ sender, System::EventArgs^ e) {
	Validaciones^ form = gcnew Validaciones();
	form->ShowDialog();
}
private: System::Void btn_instrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
	Instrucciones1^ form = gcnew Instrucciones1();
	form->ShowDialog();
}	   
};
}
