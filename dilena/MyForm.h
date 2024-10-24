#pragma once

namespace dilena {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(339, 438);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(125, 188);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 55);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(125, 269);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 55);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(52, 432);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 55);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(88, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 33);
			this->label1->TabIndex = 4;
			this->label1->Text = L"a";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(88, 284);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 33);
			this->label2->TabIndex = 5;
			this->label2->Text = L"b";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(55, 387);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 33);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Результат";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(54, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 37);
			this->label4->TabIndex = 7;
			this->label4->Text = L"ctg(x) - (x/4) = 0";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(370, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(176, 50);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Автор\r\nОнищук Олексій";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(572, 521);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// призначення меж
		double a = Convert::ToDouble(textBox1->Text);
		double b = Convert::ToDouble(textBox2->Text);
		// призначення точності 
		double epsilon = 0.001;

		// метод половинного ділення
		double c;
		do
		{
			c = (a + b) / 2; 
			double f_c =  1 /Math::Tan(c) - (c / 4);
			if (f_c * ( 1 /Math::Tan(c) - (c / 4)) < 0)
			{
				b = c;
			}
			else 
			{
				a = c;
			}
		}while (Math::Abs(b - a) > epsilon);
		//виведення результатів
		textBox3->Text = c.ToString();
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
