#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
#include "Admin.h"
#include "Help1.h"
#include "Help3.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 
	using namespace System::Data::OleDb;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::IO::Ports;


	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{

	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ToolTip^  toolTip1;






	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataColumn^  dataColumn1;
	private: System::Data::DataColumn^  dataColumn2;
	private: System::Data::DataColumn^  dataColumn3;
	private: System::Data::DataColumn^  dataColumn4;
	private: System::Data::DataColumn^  dataColumn5;
	private: System::Data::DataColumn^  dataColumn6;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	public: System::Data::OleDb::OleDbConnection^ oleDbConnection1;
	private:

	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::Button^  button3;


































	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(95, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(251, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Вход в систему";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(12, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Имя пользователя";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 108);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(12, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Пароль";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(17, 177);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(103, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Скрыть пароль";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox1_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(152, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm1::textBox2_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(43, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 48);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Вход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FloralWhite;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(241, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 48);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Регистрация";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(6) {
				this->dataColumn1, this->dataColumn2,
					this->dataColumn3, this->dataColumn4, this->dataColumn5, this->dataColumn6
			});
			this->dataTable1->TableName = L"People";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"ID";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"Login";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"Pass";
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"FIO";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"Adres";
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"ID PASSPORT";
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Login",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"Login", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Login",
							System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"Login", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Pass",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"Pass", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Pass",
									System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"Pass", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_FIO",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
										L"FIO", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_FIO",
											System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
											static_cast<System::Byte>(0), L"FIO", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ID_PASSPORT",
												System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
												L"ID PASSPORT", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID_PASSPORT",
													System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
													static_cast<System::Byte>(0), L"ID PASSPORT", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source= |DataDirectory|\Database.mdb";
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(13) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Login",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Login")), (gcnew System::Data::OleDb::OleDbParameter(L"Pass", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Pass")), (gcnew System::Data::OleDb::OleDbParameter(L"FIO", System::Data::OleDb::OleDbType::VarWChar, 0, L"FIO")), (gcnew System::Data::OleDb::OleDbParameter(L"ID_PASSPORT",
							System::Data::OleDb::OleDbType::VarWChar, 0, L"ID PASSPORT")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
								static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Login",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
									L"Login", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Login",
										System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
										static_cast<System::Byte>(0), L"Login", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Pass",
											System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
											L"Pass", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Pass",
												System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
												static_cast<System::Byte>(0), L"Pass", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_FIO",
													System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
													L"FIO", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_FIO",
														System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
														static_cast<System::Byte>(0), L"FIO", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ID_PASSPORT",
															System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
															L"ID PASSPORT", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID_PASSPORT",
																System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
																static_cast<System::Byte>(0), L"ID PASSPORT", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `People` (`Login`, `Pass`, `FIO`, `ID PASSPORT`) VALUES (\?, \?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Login",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Login")), (gcnew System::Data::OleDb::OleDbParameter(L"Pass", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Pass")), (gcnew System::Data::OleDb::OleDbParameter(L"FIO", System::Data::OleDb::OleDbType::VarWChar, 0, L"FIO")), (gcnew System::Data::OleDb::OleDbParameter(L"ID_PASSPORT",
							System::Data::OleDb::OleDbType::VarWChar, 0, L"ID PASSPORT"))
			});
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        People.*\r\nFROM            People";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {
				(gcnew System::Data::Common::DataColumnMapping(L"ID",
					L"ID")), (gcnew System::Data::Common::DataColumnMapping(L"Login", L"Login")), (gcnew System::Data::Common::DataColumnMapping(L"Pass",
						L"Pass")), (gcnew System::Data::Common::DataColumnMapping(L"FIO", L"FIO")), (gcnew System::Data::Common::DataColumnMapping(L"ID PASSPORT",
							L"ID PASSPORT"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"People", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(363, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Помощь";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(437, 339);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Библиотека";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm1::MyForm1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {

		toolTip1->SetToolTip(textBox1, "Введите\nваш логин");         // Создание сообщения для toolTip
		toolTip1->IsBalloon = true;

		toolTip1->SetToolTip(textBox2, "Введите\nваш пароль"); // Создание сообщения для toolTip
		toolTip1->IsBalloon = true;
		MaximizeBox = false;        // Запрет раскрытия формы на весь экран
	MyForm1::TopMost = true;       // открытие формы поверх других
		

	}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == ',' || e->KeyChar == '.')      // запрет ввода точки и запятой 
		e->Handled = true;
}

private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == ',' || e->KeyChar == '.')  // запрет ввода точки и запятой 
		e->Handled = true;
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox1->Checked) {
		textBox2->PasswordChar = '*';  // замена текста на '*'
	}
	else textBox2->PasswordChar = false;
}
		
private: System::Void MyForm1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	
	Application::Exit();       //закрытие программы при закрытии формы 
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1::TopMost = false;
	MyForm2 ^Form = gcnew MyForm2();  // переход на новую форму 
	Form->Show(); 
	
}
		 
			
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1::TopMost = false;
	for (;;) {
		if (textBox1->Text == "Admin" && textBox2->Text == "1234") {
			Admin^ form = gcnew Admin;
			form->Show();                      // переход на новую форму
			textBox1->Clear();
			textBox2->Clear();
			break; 
		}
		

		OleDbConnection^ con = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source= |DataDirectory|\Database.mdb" );
		OleDbDataAdapter^ sda = gcnew OleDbDataAdapter("Select Count (*) From  People where Login = '" + textBox1->Text + "' and Pass ='" + textBox2->Text + "'", con); // авторизация в системе 
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		if (dt->Rows[0][0]->ToString() == "1") { // если введённые данные есть в бд, то переходит на новую форму        
			
	
			
	MyForm3 ^ fy = gcnew MyForm3();        // переход на новую форму
	fy->Owner = this;

			fy->Show();
			fy->label1->Text = textBox1->Text->ToString();  // вывод логина пользователя на новой фомре 
			       
			MessageBox::Show("Здравствуйте, " + textBox1->Text + "!", "Приветсвите");  // приветсивие пользователя при входе 
			textBox1->Clear();        // очистка textBox
			textBox2->Clear();            // очистка textBox
			break;

		} 
		else
		{  
			MessageBox::Show("Неверное имя пользователя или пароль!", "ОШИБКА",    // если вы не авторизовались, то выводит ошибку 
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Clear();       // очистка textBox
			textBox2->Clear();    // очистка textBox
			break;
		}
	}

}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1::TopMost = false;
	Help1^ fr1 = gcnew Help1();          // переход на новую форму
	fr1->Show();

}


};
}
