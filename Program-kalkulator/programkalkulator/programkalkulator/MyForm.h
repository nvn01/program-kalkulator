#pragma once
#include "kalkulator.h"
#include "bubble.h"
#include "sekuensial.h"
namespace programkalkulator {

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
	private: System::Windows::Forms::Panel^ sidebar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ persegi;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ segitiga;
	private: System::Windows::Forms::Label^ label2;








	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label17;


























	private: System::Windows::Forms::Label^ label29;















	private: System::Windows::Forms::Panel^ binary;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label4;



















	protected:

	protected:





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->sidebar = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->persegi = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->segitiga = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->binary = (gcnew System::Windows::Forms::Panel());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->sidebar->SuspendLayout();
			this->panel1->SuspendLayout();
			this->persegi->SuspendLayout();
			this->segitiga->SuspendLayout();
			this->binary->SuspendLayout();
			this->SuspendLayout();
			// 
			// sidebar
			// 
			this->sidebar->Controls->Add(this->button6);
			this->sidebar->Controls->Add(this->button5);
			this->sidebar->Controls->Add(this->button4);
			this->sidebar->Controls->Add(this->button3);
			this->sidebar->Controls->Add(this->button2);
			this->sidebar->Controls->Add(this->panel1);
			this->sidebar->Controls->Add(this->button1);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 0);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Size = System::Drawing::Size(181, 689);
			this->sidebar->TabIndex = 0;
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(3, 439);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(174, 63);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Kalkulator";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(3, 370);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(174, 63);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Sequential Search";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(3, 301);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 63);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Binary Search";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(3, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 63);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Bubble Sort";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(3, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 63);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Luas Segitiga";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label11);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(181, 87);
			this->panel1->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 31.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(165, 63);
			this->label11->TabIndex = 0;
			this->label11->Text = L"+ - x÷";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Luas Persegi";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// persegi
			// 
			this->persegi->Controls->Add(this->button7);
			this->persegi->Controls->Add(this->label14);
			this->persegi->Controls->Add(this->textBox3);
			this->persegi->Controls->Add(this->panel3);
			this->persegi->Controls->Add(this->textBox2);
			this->persegi->Controls->Add(this->label13);
			this->persegi->Controls->Add(this->panel2);
			this->persegi->Controls->Add(this->textBox1);
			this->persegi->Controls->Add(this->label12);
			this->persegi->Controls->Add(this->label1);
			this->persegi->Dock = System::Windows::Forms::DockStyle::Fill;
			this->persegi->Location = System::Drawing::Point(181, 0);
			this->persegi->Name = L"persegi";
			this->persegi->Size = System::Drawing::Size(1056, 689);
			this->persegi->TabIndex = 1;
			this->persegi->Visible = false;
			this->persegi->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::persegi_Paint);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(238, 393);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(166, 54);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Hitung";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(213, 501);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(120, 39);
			this->label14->TabIndex = 8;
			this->label14->Text = L"Hasil =";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(373, 500);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(134, 40);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(359, 336);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(363, 2);
			this->panel3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(359, 295);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(363, 40);
			this->textBox2->TabIndex = 5;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(231, 295);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(105, 39);
			this->label13->TabIndex = 4;
			this->label13->Text = L"SISI =";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(359, 212);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(363, 2);
			this->panel2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(359, 171);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(363, 40);
			this->textBox1->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(231, 171);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(105, 39);
			this->label12->TabIndex = 1;
			this->label12->Text = L"SISI =";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Luas Persegi";
			// 
			// segitiga
			// 
			this->segitiga->Controls->Add(this->button8);
			this->segitiga->Controls->Add(this->label15);
			this->segitiga->Controls->Add(this->textBox4);
			this->segitiga->Controls->Add(this->panel4);
			this->segitiga->Controls->Add(this->textBox5);
			this->segitiga->Controls->Add(this->label16);
			this->segitiga->Controls->Add(this->panel5);
			this->segitiga->Controls->Add(this->textBox6);
			this->segitiga->Controls->Add(this->label17);
			this->segitiga->Controls->Add(this->label2);
			this->segitiga->Dock = System::Windows::Forms::DockStyle::Fill;
			this->segitiga->Location = System::Drawing::Point(181, 0);
			this->segitiga->Name = L"segitiga";
			this->segitiga->Size = System::Drawing::Size(1056, 689);
			this->segitiga->TabIndex = 2;
			this->segitiga->Visible = false;
			this->segitiga->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::segitiga_Paint);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(298, 381);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(166, 54);
			this->button8->TabIndex = 18;
			this->button8->Text = L"Hitung";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(273, 490);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(120, 39);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Hasil =";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(433, 489);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(134, 40);
			this->textBox4->TabIndex = 16;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(419, 325);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(363, 2);
			this->panel4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Control;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(419, 287);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(363, 40);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(263, 284);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(139, 39);
			this->label16->TabIndex = 13;
			this->label16->Text = L"Tinggi =";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel5->Location = System::Drawing::Point(419, 201);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(363, 2);
			this->panel5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Control;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"SF Pro Rounded", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(419, 160);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(363, 40);
			this->textBox6->TabIndex = 11;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(291, 160);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(111, 39);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Alas =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Luas Segitiga";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(223, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(244, 95);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Hello,";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(231, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(319, 44);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Program Kalkulasi";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Silver;
			this->label9->Location = System::Drawing::Point(571, 210);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(422, 44);
			this->label9->TabIndex = 9;
			this->label9->Text = L"untuk menghitung Luas,";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Silver;
			this->label10->Location = System::Drawing::Point(231, 254);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(433, 44);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Sort, Pointer, dan Search.";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(205, 591);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(519, 78);
			this->label29->TabIndex = 11;
			this->label29->Text = L"Tugas Project semseter 3, C++ GUI.\r\nNovandra Anugrah";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm::label29_Click);
			// 
			// binary
			// 
			this->binary->Controls->Add(this->textBox12);
			this->binary->Controls->Add(this->label23);
			this->binary->Controls->Add(this->button11);
			this->binary->Controls->Add(this->textBox13);
			this->binary->Controls->Add(this->label24);
			this->binary->Controls->Add(this->textBox14);
			this->binary->Controls->Add(this->label25);
			this->binary->Controls->Add(this->label4);
			this->binary->Dock = System::Windows::Forms::DockStyle::Fill;
			this->binary->Location = System::Drawing::Point(181, 0);
			this->binary->Name = L"binary";
			this->binary->Size = System::Drawing::Size(1056, 689);
			this->binary->TabIndex = 4;
			this->binary->Visible = false;
			this->binary->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::binary_Paint);
			// 
			// textBox12
			// 
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(467, 268);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(330, 47);
			this->textBox12->TabIndex = 20;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(163, 270);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(282, 39);
			this->label23->TabIndex = 19;
			this->label23->Text = L"Data yang dicari=";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(251, 332);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(165, 58);
			this->button11->TabIndex = 18;
			this->button11->Text = L"Cari";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::Control;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(379, 447);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(513, 40);
			this->textBox13->TabIndex = 17;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(250, 447);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(120, 39);
			this->label24->TabIndex = 16;
			this->label24->Text = L"Hasil =";
			// 
			// textBox14
			// 
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(467, 201);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(330, 47);
			this->textBox14->TabIndex = 15;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"SF Pro Display", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(245, 203);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(202, 39);
			this->label25->TabIndex = 14;
			this->label25->Text = L"Input Data =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(196, 36);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Binary Search";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1237, 689);
			this->Controls->Add(this->segitiga);
			this->Controls->Add(this->persegi);
			this->Controls->Add(this->binary);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->sidebar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->sidebar->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->persegi->ResumeLayout(false);
			this->persegi->PerformLayout();
			this->segitiga->ResumeLayout(false);
			this->segitiga->PerformLayout();
			this->binary->ResumeLayout(false);
			this->binary->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Tutup panel lainnya
	segitiga->Visible = false;
	binary->Visible = false;

	// Tampilkan panel persegi
	persegi->Visible = true;
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Tutup panel lainnya
	persegi->Visible = false;
	binary->Visible = false;

	// Tampilkan panel segitiga
	segitiga->Visible = true;
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	bubble ^ bubbleForm = gcnew bubble;
	bubbleForm->Show();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Tutup panel lainnya
	persegi->Visible = false;
	segitiga->Visible = false;

	// Tampilkan panel binary
	binary->Visible = true;
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	sekuensial^ sekuensialForm = gcnew sekuensial;
	sekuensialForm->Show();
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	kalkulator ^ kalkulatorForm = gcnew kalkulator;
	kalkulatorForm->Show();
}



private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	persegi->Visible = false;
	segitiga->Visible = false;
	binary->Visible = false;

	}


private: System::Void persegi_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	double sisi1 = Convert::ToDouble(textBox1->Text);
	double sisi2 = Convert::ToDouble(textBox2->Text);

	// Hitung luas persegi
	double luasPersegi = sisi1 * sisi2;

	// Tampilkan hasil di TextBox3
	textBox3->Text = Convert::ToString(luasPersegi);
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void segitiga_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	double alas = Convert::ToDouble(textBox6->Text);
	double tinggi = Convert::ToDouble(textBox5->Text);

	// Hitung luas segitiga
	double luasSegitiga = 0.5 * alas * tinggi;

	textBox4->Text = Convert::ToString(luasSegitiga);
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	// Ambil nilai dari TextBox14 dan pecah menjadi array
	String^ inputData = textBox14->Text;
	array<String^>^ dataArr = inputData->Split(',');

	// Konversi array string menjadi array int
	array<int>^ dataArray = gcnew array<int>(dataArr->Length);
	for (int i = 0; i < dataArr->Length; i++) {
		dataArray[i] = Convert::ToInt32(dataArr[i]);
	}

	// Ambil nilai yang ingin dicari dari TextBox12
	int target = Convert::ToInt32(textBox12->Text);

	// Panggil fungsi Binary Search
	int hasilSearch = BinarySearch(dataArray, dataArray->Length, target);

	// Tampilkan hasil di TextBox13
	if (hasilSearch != -1) {
		textBox13->Text = "Data ditemukan di indeks: " + hasilSearch.ToString();
	}
	else {
		textBox13->Text = "Data tidak ditemukan";
	}
}

	   // Fungsi Binary Search
	   int BinarySearch(array<int>^ arr, int n, int target) {
		   int left = 0;
		   int right = n - 1;

		   while (left <= right) {
			   int mid = (left + right) / 2;

			   // Jika nilai tengah sama dengan target, kembalikan indeks
			   if (arr[mid] == target) {
				   return mid;
			   }

			   // Jika target lebih kecil dari nilai tengah, cari di sebelah kiri
			   if (arr[mid] > target) {
				   right = mid - 1;
			   }
			   else {
				   // Jika target lebih besar dari nilai tengah, cari di sebelah kanan
				   left = mid + 1;
			   }
		   }

		   // Jika tidak ditemukan, kembalikan -1
		   return -1;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void bubble_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pointer_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void binary_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void sekuensial_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
