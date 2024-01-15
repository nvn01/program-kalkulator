#pragma once

namespace programkalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for kalkulator
	/// </summary>
	public ref class kalkulator : public System::Windows::Forms::Form
	{
	public:
		kalkulator(void){
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~kalkulator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button77;
	private: System::Windows::Forms::Button^ button88;
	private: System::Windows::Forms::Button^ button99;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button00;
	private: System::Windows::Forms::Button^ buttondot;











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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button00 = (gcnew System::Windows::Forms::Button());
			this->buttondot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"SF Pro Light", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(500, 133);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(0, 137);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 110);
			this->button1->TabIndex = 1;
			this->button1->Text = L"⌫";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &kalkulator::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(127, 137);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 110);
			this->button2->TabIndex = 2;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &kalkulator::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(253, 137);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 110);
			this->button3->TabIndex = 3;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &kalkulator::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(379, 137);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 110);
			this->button4->TabIndex = 4;
			this->button4->Text = L"÷";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &kalkulator::EnterOperators);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(379, 247);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 110);
			this->button5->TabIndex = 5;
			this->button5->Text = L"×";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &kalkulator::EnterOperators);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(379, 358);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 110);
			this->button6->TabIndex = 6;
			this->button6->Text = L"−";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &kalkulator::EnterOperators);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(379, 469);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(125, 110);
			this->button7->TabIndex = 7;
			this->button7->Text = L"+";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &kalkulator::EnterOperators);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(379, 580);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(125, 110);
			this->button8->TabIndex = 8;
			this->button8->Text = L"=";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &kalkulator::button8_Click);
			// 
			// button77
			// 
			this->button77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button77->FlatAppearance->BorderSize = 0;
			this->button77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button77->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button77->ForeColor = System::Drawing::Color::White;
			this->button77->Location = System::Drawing::Point(0, 247);
			this->button77->Margin = System::Windows::Forms::Padding(0);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(125, 110);
			this->button77->TabIndex = 9;
			this->button77->Text = L"7";
			this->button77->UseVisualStyleBackColor = false;
			this->button77->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// button88
			// 
			this->button88->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button88->FlatAppearance->BorderSize = 0;
			this->button88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button88->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button88->ForeColor = System::Drawing::Color::White;
			this->button88->Location = System::Drawing::Point(127, 247);
			this->button88->Margin = System::Windows::Forms::Padding(0);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(125, 110);
			this->button88->TabIndex = 10;
			this->button88->Text = L"8";
			this->button88->UseVisualStyleBackColor = false;
			this->button88->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// button99
			// 
			this->button99->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button99->FlatAppearance->BorderSize = 0;
			this->button99->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button99->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button99->ForeColor = System::Drawing::Color::White;
			this->button99->Location = System::Drawing::Point(253, 247);
			this->button99->Margin = System::Windows::Forms::Padding(0);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(125, 110);
			this->button99->TabIndex = 11;
			this->button99->Text = L"9";
			this->button99->UseVisualStyleBackColor = false;
			this->button99->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->ForeColor = System::Drawing::Color::White;
			this->button44->Location = System::Drawing::Point(0, 358);
			this->button44->Margin = System::Windows::Forms::Padding(0);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(125, 110);
			this->button44->TabIndex = 12;
			this->button44->Text = L"4";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button55->FlatAppearance->BorderSize = 0;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->ForeColor = System::Drawing::Color::White;
			this->button55->Location = System::Drawing::Point(127, 358);
			this->button55->Margin = System::Windows::Forms::Padding(0);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(125, 110);
			this->button55->TabIndex = 13;
			this->button55->Text = L"5";
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// button66
			// 
			this->button66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button66->FlatAppearance->BorderSize = 0;
			this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button66->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button66->ForeColor = System::Drawing::Color::White;
			this->button66->Location = System::Drawing::Point(253, 358);
			this->button66->Margin = System::Windows::Forms::Padding(0);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(125, 110);
			this->button66->TabIndex = 14;
			this->button66->Text = L"6";
			this->button66->UseVisualStyleBackColor = false;
			this->button66->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(0, 469);
			this->button11->Margin = System::Windows::Forms::Padding(0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(125, 110);
			this->button11->TabIndex = 15;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(127, 469);
			this->button22->Margin = System::Windows::Forms::Padding(0);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(125, 110);
			this->button22->TabIndex = 16;
			this->button22->Text = L"2";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(253, 469);
			this->button33->Margin = System::Windows::Forms::Padding(0);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(125, 110);
			this->button33->TabIndex = 17;
			this->button33->Text = L"3";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// button00
			// 
			this->button00->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->button00->FlatAppearance->BorderSize = 0;
			this->button00->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button00->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button00->ForeColor = System::Drawing::Color::White;
			this->button00->Location = System::Drawing::Point(0, 580);
			this->button00->Margin = System::Windows::Forms::Padding(0);
			this->button00->Name = L"button00";
			this->button00->Size = System::Drawing::Size(252, 110);
			this->button00->TabIndex = 18;
			this->button00->Text = L"0";
			this->button00->UseVisualStyleBackColor = false;
			this->button00->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			// 
			// buttondot
			// 
			this->buttondot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->buttondot->FlatAppearance->BorderSize = 0;
			this->buttondot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttondot->Font = (gcnew System::Drawing::Font(L"SF Pro Medium", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttondot->ForeColor = System::Drawing::Color::White;
			this->buttondot->Location = System::Drawing::Point(253, 580);
			this->buttondot->Margin = System::Windows::Forms::Padding(0);
			this->buttondot->Name = L"buttondot";
			this->buttondot->Size = System::Drawing::Size(125, 110);
			this->buttondot->TabIndex = 19;
			this->buttondot->Text = L".";
			this->buttondot->UseVisualStyleBackColor = false;
			this->buttondot->Click += gcnew System::EventHandler(this, &kalkulator::buttondot_Click);
			// 
			// kalkulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->ClientSize = System::Drawing::Size(499, 687);
			this->Controls->Add(this->buttondot);
			this->Controls->Add(this->button00);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button66);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button99);
			this->Controls->Add(this->button88);
			this->Controls->Add(this->button77);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(72)));
			this->Name = L"kalkulator";
			this->Text = L"kalkulator";
			this->Load += gcnew System::EventHandler(this, &kalkulator::kalkulator_Load);
			this->Click += gcnew System::EventHandler(this, &kalkulator::EnterNumber);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void kalkulator_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		
		if (textBox1->Text == "0") 
		{
			textBox1->Text == Numbers->Text;
		}
		else
		{
			textBox1->Text = textBox1->Text + Numbers->Text;
		}
	}
	private: System::Void EnterOperators(System::Object^ sender, System::EventArgs^ e) {
		Button^ NumbersOp = safe_cast<Button^>(sender);

		firstDigit = Double::Parse(textBox1->Text);

		textBox1->Text = "";
		operators = NumbersOp->Text;


	}
private: System::Void buttondot_Click(System::Object^ sender, System::EventArgs^ e) {
		
	if (!textBox1->Text->Contains(","))	{
		textBox1->Text = textBox1->Text + ",";
	}
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(textBox1->Text);

	if (operators == "+") {
		result = firstDigit + secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "−") {
		result = firstDigit - secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "÷") {
		result = firstDigit / secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "×") {
		result = firstDigit * secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0) {
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
	}
};
}
