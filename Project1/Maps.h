#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Maps
	/// </summary>
	public ref class Maps : public System::Windows::Forms::Form
	{
	public:
		Maps(void)
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
		~Maps()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Maps::typeid));
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1099, 829);
			this->webBrowser1->TabIndex = 0;
			// 
			// Maps
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1099, 829);
			this->Controls->Add(this->webBrowser1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Maps";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Maps";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Maps::Maps_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Maps::Maps_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Maps_Load(System::Object^  sender, System::EventArgs^  e) {
		this->webBrowser1->Navigate("https://www.google.com/maps/search/Labrary/@52.0930959,23.6858628,14z");  // открытие в webBrowser выбранный сайт 
		MaximizeBox = false;       // Запрет раскрытия формы на весь экран

	}
	private: System::Void Maps_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		Hide();     // Скрытие формы при закрытии 
	}
	};
}
