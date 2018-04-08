#pragma once
#include "Header.h"

namespace ClockApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Clock ^ cl = gcnew PointHou();
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

	private: System::Windows::Forms::Button^  buttonStop;
	private: System::Windows::Forms::Button^  buttonStartUserClock;
	private: System::Windows::Forms::Button^  buttonStartSystemClock;
	private: System::Windows::Forms::PictureBox^  pictureBoxClock;
	private: System::Windows::Forms::Timer^  MyTimer;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownHours;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMinutes;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownSeconds;
	private: System::Windows::Forms::Label^  labelPrompt;

	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 this->MyTimer = (gcnew System::Windows::Forms::Timer(this->components));
				 this->numericUpDownHours = (gcnew System::Windows::Forms::NumericUpDown());
				 this->numericUpDownMinutes = (gcnew System::Windows::Forms::NumericUpDown());
				 this->numericUpDownSeconds = (gcnew System::Windows::Forms::NumericUpDown());
				 this->labelPrompt = (gcnew System::Windows::Forms::Label());
				 this->buttonStartUserClock = (gcnew System::Windows::Forms::Button());
				 this->buttonStartSystemClock = (gcnew System::Windows::Forms::Button());
				 this->buttonStop = (gcnew System::Windows::Forms::Button());
				 this->pictureBoxClock = (gcnew System::Windows::Forms::PictureBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHours))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMinutes))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSeconds))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxClock))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // buttonStartUserClock
				 // 
				 this->buttonStartUserClock->BackColor = System::Drawing::SystemColors::Control;
				 this->buttonStartUserClock->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->buttonStartUserClock->Location = System::Drawing::Point(331, 101);
				 this->buttonStartUserClock->Name = L"buttonStartUserClock";
				 this->buttonStartUserClock->Size = System::Drawing::Size(303, 49);
				 this->buttonStartUserClock->TabIndex = 4;
				 this->buttonStartUserClock->Text = L"Установить свое время";
				 this->buttonStartUserClock->UseVisualStyleBackColor = false;
				 this->buttonStartUserClock->Click += gcnew System::EventHandler(this, &MyForm::buttonStartUserClock_Click);
				 // 
				 // MyTimer
				 // 
				 this->MyTimer->Tick += gcnew System::EventHandler(this, &MyForm::MyTimer_Tick);
				 // 
				 // numericUpDownHours
				 // 
				 this->numericUpDownHours->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->numericUpDownHours->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
				 this->numericUpDownHours->Location = System::Drawing::Point(331, 64);
				 this->numericUpDownHours->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
				 this->numericUpDownHours->Name = L"numericUpDownHours";
				 this->numericUpDownHours->Size = System::Drawing::Size(71, 31);
				 this->numericUpDownHours->TabIndex = 7;
				 // 
				 // numericUpDownMinutes
				 // 
				 this->numericUpDownMinutes->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->numericUpDownMinutes->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(0)));
				 this->numericUpDownMinutes->Location = System::Drawing::Point(441, 64);
				 this->numericUpDownMinutes->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
				 this->numericUpDownMinutes->Name = L"numericUpDownMinutes";
				 this->numericUpDownMinutes->Size = System::Drawing::Size(82, 31);
				 this->numericUpDownMinutes->TabIndex = 9;
				 // 
				 // numericUpDownSeconds
				 // 
				 this->numericUpDownSeconds->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->numericUpDownSeconds->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->numericUpDownSeconds->Location = System::Drawing::Point(557, 64);
				 this->numericUpDownSeconds->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
				 this->numericUpDownSeconds->Name = L"numericUpDownSeconds";
				 this->numericUpDownSeconds->Size = System::Drawing::Size(77, 31);
				 this->numericUpDownSeconds->TabIndex = 8;
				 // 
				 // labelPrompt
				 // 
				 this->labelPrompt->AutoSize = true;
				 this->labelPrompt->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->labelPrompt->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->labelPrompt->Location = System::Drawing::Point(347, 37);
				 this->labelPrompt->Name = L"labelPrompt";
				 this->labelPrompt->Size = System::Drawing::Size(272, 24);
				 this->labelPrompt->TabIndex = 10;
				 this->labelPrompt->Text = L"Выполните настройку времени";
				 // 
				 // buttonStartSystemClock
				 // 
				 this->buttonStartSystemClock->BackColor = System::Drawing::SystemColors::Control;
				 this->buttonStartSystemClock->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->buttonStartSystemClock->Location = System::Drawing::Point(331, 156);
				 this->buttonStartSystemClock->Name = L"buttonStartSystemClock";
				 this->buttonStartSystemClock->Size = System::Drawing::Size(303, 49);
				 this->buttonStartSystemClock->TabIndex = 11;
				 this->buttonStartSystemClock->Text = L"Установить системное время";
				 this->buttonStartSystemClock->UseVisualStyleBackColor = false;
				 this->buttonStartSystemClock->Click += gcnew System::EventHandler(this, &MyForm::buttonStartSystemClock_Click);
				 // 
				 // buttonStop
				 // 
				 this->buttonStop->BackColor = System::Drawing::SystemColors::Control;
				 this->buttonStop->Location = System::Drawing::Point(331, 211);
				 this->buttonStop->Name = L"buttonStop";
				 this->buttonStop->Size = System::Drawing::Size(303, 44);
				 this->buttonStop->TabIndex = 14;
				 this->buttonStop->Text = L"Остановить";
				 this->buttonStop->UseVisualStyleBackColor = false;
				 this->buttonStop->Click += gcnew System::EventHandler(this, &MyForm::buttonStop_Click);
				 // 
				 // pictureBoxClock
				 // 
				 this->pictureBoxClock->BackColor = System::Drawing::SystemColors::Info;
				 this->pictureBoxClock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxClock.BackgroundImage")));
				 this->pictureBoxClock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->pictureBoxClock->Location = System::Drawing::Point(12, 12);
				 this->pictureBoxClock->Name = L"pictureBoxClock";
				 this->pictureBoxClock->Size = System::Drawing::Size(301, 304);
				 this->pictureBoxClock->TabIndex = 13;
				 this->pictureBoxClock->TabStop = false;
				 this->pictureBoxClock->Visible = false;
				 this->pictureBoxClock->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxClock_Paint_2);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
				 this->BackColor = System::Drawing::SystemColors::ControlLightLight;
				 this->ClientSize = System::Drawing::Size(648, 321);
				 this->Controls->Add(this->buttonStop);
				 this->Controls->Add(this->buttonStartUserClock);
				 this->Controls->Add(this->buttonStartSystemClock);
				 this->Controls->Add(this->pictureBoxClock);
				 this->Controls->Add(this->labelPrompt);
				 this->Controls->Add(this->numericUpDownMinutes);
				 this->Controls->Add(this->numericUpDownSeconds);
				 this->Controls->Add(this->numericUpDownHours);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
				 this->ImeMode = System::Windows::Forms::ImeMode::Disable;
				 this->Name = L"MyForm";
				 this->Text = L"Часы с использованием классов";
				 this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
				 this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHours))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMinutes))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSeconds))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxClock))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }

#pragma endregion


	private: System::Void buttonStartSystemClock_Click(System::Object^  sender, System::EventArgs^  e)
	{
		pictureBoxClock->ResumeLayout();
		MyTimer->Start();
		MyTimer->Interval = 1000;
		cl->get_time();

	}
	private: System::Void buttonStartUserClock_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		pictureBoxClock->Visible = true;
		MyTimer->Enabled = true;
		MyTimer->Interval = 1000;
		cl->Init(Convert::ToInt32(numericUpDownHours->Text), Convert::ToInt32(numericUpDownMinutes->Text), Convert::ToInt32(numericUpDownSeconds->Text));
	}


	private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
	{
		System::Windows::Forms::DialogResult rez = MessageBox::Show("Вы хотите закрыть программу?", "Нужно подтверждение", MessageBoxButtons::YesNoCancel);
		if (rez == ::DialogResult::Yes)
		{
			e->Cancel = false;
		}
		else {

			e->Cancel = true;
		}
	}

	private: System::Void MyTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		pictureBoxClock->Refresh();
	}

	private: System::Void pictureBoxClock_Paint_2(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Pen^ blackPen = gcnew Pen(Color::Black, 3);
		Pen^redPen = gcnew Pen(Color::Red, 1);
		try
		{
			cl->InitUser(Convert::ToInt32(numericUpDownHours->Text), Convert::ToInt32(numericUpDownMinutes->Text), Convert::ToInt32(numericUpDownSeconds->Text));
			e->Graphics->DrawLine(blackPen, 150, 150, cl->get_X(), cl->get_Y());
			Clock  ^pm = gcnew PointMin();
			e->Graphics->DrawLine(blackPen, 150, 150, pm->get_X(), pm->get_Y());
			Clock  ^ps = gcnew PointSec();
			e->Graphics->DrawLine(redPen, 150, 150, ps->get_X(), ps->get_Y());
		}
		catch (...)
		{
			MessageBox::Show("Неверный формат");
		}
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBoxClock->Visible = true;
		pictureBoxClock->Refresh();
		MyTimer->Start();
		MyTimer->Interval = 1000;
		cl->get_time();
	}

	private: System::Void buttonStop_Click(System::Object^  sender, System::EventArgs^  e) {
		cl->Init(0, 0, 0);
		pictureBoxClock->Refresh();
		MyTimer->Stop();
	}

	};
}