#pragma once

namespace ProyectoReticula {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Ingresar_conjunto;
	private: System::Windows::Forms::TextBox^ conjunto;
	private: System::Windows::Forms::TextBox^ relacion;
	protected:

	protected:


	private: System::Windows::Forms::Button^ ingresar_relacion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Ingresar_conjunto = (gcnew System::Windows::Forms::Button());
			this->conjunto = (gcnew System::Windows::Forms::TextBox());
			this->relacion = (gcnew System::Windows::Forms::TextBox());
			this->ingresar_relacion = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Ingresar_conjunto
			// 
			this->Ingresar_conjunto->Location = System::Drawing::Point(324, 39);
			this->Ingresar_conjunto->Name = L"Ingresar_conjunto";
			this->Ingresar_conjunto->Size = System::Drawing::Size(122, 30);
			this->Ingresar_conjunto->TabIndex = 0;
			this->Ingresar_conjunto->Text = L"Ingresar";
			this->Ingresar_conjunto->UseVisualStyleBackColor = true;
			// 
			// conjunto
			// 
			this->conjunto->Location = System::Drawing::Point(91, 45);
			this->conjunto->Name = L"conjunto";
			this->conjunto->Size = System::Drawing::Size(188, 20);
			this->conjunto->TabIndex = 1;
			// 
			// relacion
			// 
			this->relacion->Location = System::Drawing::Point(91, 93);
			this->relacion->Name = L"relacion";
			this->relacion->Size = System::Drawing::Size(188, 20);
			this->relacion->TabIndex = 2;
			// 
			// ingresar_relacion
			// 
			this->ingresar_relacion->Location = System::Drawing::Point(324, 87);
			this->ingresar_relacion->Name = L"ingresar_relacion";
			this->ingresar_relacion->Size = System::Drawing::Size(122, 30);
			this->ingresar_relacion->TabIndex = 3;
			this->ingresar_relacion->Text = L"Ingresar";
			this->ingresar_relacion->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(49, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"A = {";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"R = {";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(283, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"}";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(283, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"}";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(324, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 26);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Random";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 175);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(199, 177);
			this->panel1->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Producto Cartesiano";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(230, 175);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(216, 177);
			this->panel2->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(216, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Matriz Bool";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(841, 439);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ingresar_relacion);
			this->Controls->Add(this->relacion);
			this->Controls->Add(this->conjunto);
			this->Controls->Add(this->Ingresar_conjunto);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
