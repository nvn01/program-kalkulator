#pragma once

namespace rumuspercobaan {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Windows::Forms;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label5;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->label5);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Controls->Add(this->label2);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(46, 82);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1175, 480);
            this->panel1->TabIndex = 0;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"SF Pro Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(311, 258);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(21, 24);
            this->label5->TabIndex = 7;
            this->label5->Text = L"\?";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::Control;
            this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
            this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"SF Pro Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(220, 187);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(167, 38);
            this->button1->TabIndex = 6;
            this->button1->Text = L"Hitung";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"SF Pro Text", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(315, 239);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(15, 24);
            this->label4->TabIndex = 5;
            this->label4->Text = L" ";
            // ...

            // Lanjutkan dengan kode segitiga

            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
        }
#pragma endregion

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Ambil nilai sisi dari TextBox1 dan TextBox2
        double sisi1 = Convert::ToDouble(textBox1->Text);
        double sisi2 = Convert::ToDouble(textBox2->Text);

        // Hitung luas persegi
        double luasPersegi = sisi1 * sisi2;

        // Tampilkan hasil di Label5
        label5->Text = Convert::ToString(luasPersegi);
    }
    };
}
