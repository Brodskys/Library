#pragma once
#include "MyForm1.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;
	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->ImageLocation = L"C:\\Users\\User\\Desktop\\Project1\\Image\\giphy.gif";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(402, 289);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(249, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ѕиблиотека";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(402, 287);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Int32 timeCounter;  //тип timeCounter
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		timeCounter = 0; // начальное значение 
		timer1->Interval = 2500;       // врем€ таймера 
		timer1->Enabled = true;
	
		  
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		
			++timeCounter; // +1 к времени таймера 
			Hide();     // закрытие формы 
			
			MyForm1 ^form = gcnew MyForm1();  
			form->Show();          // открытие новой формы 
			timer1->Enabled = false;
			notifyIcon1->Visible = false;
	}

};
}
