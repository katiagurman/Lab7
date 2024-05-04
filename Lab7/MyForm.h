#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>

namespace Lab7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(4, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(535, 360);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(527, 331);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(154, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Визначити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(389, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Гурман Катерина Ігорівна";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(27, 160);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(389, 88);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(459, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(527, 331);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(90, 94);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(310, 22);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"bhdrabbka";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(175, 161);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Замінити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(537, 362);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fullName = textBox1->Text;
	array<String^>^ parts = fullName->Split(' ');

	int surnameLength = parts[0]->Length;
	int nameLength = parts[1]->Length;
	int patronymicLength = parts[2]->Length;
	int totalLength = fullName->Length;

	richTextBox1->Text = "Довжина прізвища: " + surnameLength + "\n";
	richTextBox1->AppendText("Довжина імені: " + nameLength + "\n");
	richTextBox1->AppendText("Довжина по батькові: " + patronymicLength + "\n");
	richTextBox1->AppendText("Загальна довжина рядка: " + totalLength + "\n");

	String^ surname = parts[0];
	String^ initials = parts[1]->Substring(0, 1) + ". " + parts[2]->Substring(0, 1) + ". ";

	richTextBox1->AppendText("Прізвище з ініціалами: " + surname + " " + initials + "\n");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ inputText = textBox2->Text;
	std::string inputStr = msclr::interop::marshal_as<std::string>(inputText);
	for (size_t i = 0; i < inputStr.length(); ++i) {
		if (inputStr[i] == 'b') {
			inputStr[i] = 'c';
		}
	}
	textBox2->Text = gcnew String(inputStr.c_str());
}
};
}
