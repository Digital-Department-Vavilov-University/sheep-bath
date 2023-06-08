#pragma once
#include <cmath>
#include <iostream>
#include <string.h>
#include <uchar.h>

namespace diplom2 {

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
	private: System::Windows::Forms::TextBox^ tubLengthTextBox;
	protected:
	private: System::Windows::Forms::TextBox^ tubWidthTextBox;
	private: System::Windows::Forms::TextBox^ tubDepthTextBox;
	private: System::Windows::Forms::TextBox^ emulsionConcentrationTextBox;
	private: System::Windows::Forms::TextBox^ drugConcentrationTextBox;
	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Button^ calculateButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	protected:

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
			this->tubLengthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tubWidthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tubDepthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->emulsionConcentrationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->drugConcentrationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tubLengthTextBox
			// 
			this->tubLengthTextBox->Location = System::Drawing::Point(256, 34);
			this->tubLengthTextBox->Name = L"tubLengthTextBox";
			this->tubLengthTextBox->Size = System::Drawing::Size(100, 20);
			this->tubLengthTextBox->TabIndex = 0;
			// 
			// tubWidthTextBox
			// 
			this->tubWidthTextBox->Location = System::Drawing::Point(256, 72);
			this->tubWidthTextBox->Name = L"tubWidthTextBox";
			this->tubWidthTextBox->Size = System::Drawing::Size(100, 20);
			this->tubWidthTextBox->TabIndex = 1;
			// 
			// tubDepthTextBox
			// 
			this->tubDepthTextBox->Location = System::Drawing::Point(256, 111);
			this->tubDepthTextBox->Name = L"tubDepthTextBox";
			this->tubDepthTextBox->Size = System::Drawing::Size(100, 20);
			this->tubDepthTextBox->TabIndex = 2;
			// 
			// emulsionConcentrationTextBox
			// 
			this->emulsionConcentrationTextBox->Location = System::Drawing::Point(256, 151);
			this->emulsionConcentrationTextBox->Name = L"emulsionConcentrationTextBox";
			this->emulsionConcentrationTextBox->Size = System::Drawing::Size(100, 20);
			this->emulsionConcentrationTextBox->TabIndex = 3;
			// 
			// drugConcentrationTextBox
			// 
			this->drugConcentrationTextBox->Location = System::Drawing::Point(256, 191);
			this->drugConcentrationTextBox->Name = L"drugConcentrationTextBox";
			this->drugConcentrationTextBox->Size = System::Drawing::Size(100, 20);
			this->drugConcentrationTextBox->TabIndex = 4;
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(17, 16);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(0, 13);
			this->resultLabel->TabIndex = 5;
			this->resultLabel->Click += gcnew System::EventHandler(this, &MyForm::resultLabel_Click);
			// 
			// calculateButton
			// 
			this->calculateButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->calculateButton->Location = System::Drawing::Point(18, 228);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(574, 28);
			this->calculateButton->TabIndex = 6;
			this->calculateButton->Text = L"Расчет";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MyForm::calculateButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Введите длину ванны (м) :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Введите ширину ванны (м) :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Введите глубину ванны (м) :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Введите концентрацию рабочей эмульсии (%) :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Введите концентрацию препарата (%) :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->resultLabel);
			this->groupBox1->Location = System::Drawing::Point(367, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(235, 173);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Результат";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(15, 259);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(524, 78);
			this->label6->TabIndex = 13;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(49, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(498, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Расчет количества препарата для обработки овец методом купки в ваннах различного "
				L"размера";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 346);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->drugConcentrationTextBox);
			this->Controls->Add(this->emulsionConcentrationTextBox);
			this->Controls->Add(this->tubDepthTextBox);
			this->Controls->Add(this->tubWidthTextBox);
			this->Controls->Add(this->tubLengthTextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"3 группа";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// входные значения из текстовых полей
		double tubLength = Convert::ToDouble(tubLengthTextBox->Text);
		double tubWidth = Convert::ToDouble(tubWidthTextBox->Text);
		double tubDepth = Convert::ToDouble(tubDepthTextBox->Text);
		double emulsionConcentration = Convert::ToDouble(emulsionConcentrationTextBox->Text);
		double drugConcentration = Convert::ToDouble(drugConcentrationTextBox->Text);

		// Рассчитать объем ванны
		double bathtubVolume = tubLength * tubWidth * tubDepth;

		// Рассчитать количество препарата
		double preparationAmount = ((emulsionConcentration / 100) * bathtubVolume * 1000 / (drugConcentration / 100));

		// Вывод результата в label
		resultLabel->Text = "количество препарата: " + preparationAmount.ToString() + " литров";
	}private: System::Void resultLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
};
