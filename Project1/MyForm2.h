
#pragma once
//#include "MyForm1.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox5;














	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolTip^  toolTip1;








	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataColumn^  dataColumn1;
	private: System::Data::DataColumn^  dataColumn2;
	private: System::Data::DataColumn^  dataColumn3;
	private: System::Data::DataColumn^  dataColumn4;
	private: System::Data::DataColumn^  dataColumn5;

























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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label2->Location = System::Drawing::Point(21, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 18);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Логин";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 20);
			this->textBox1->TabIndex = 20;
			this->textBox1->Tag = L"";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox1_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label5->Location = System::Drawing::Point(21, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 18);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Пароль";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(22, 116);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(113, 20);
			this->textBox2->TabIndex = 22;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label3->Location = System::Drawing::Point(21, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 18);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Ф.И.О";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(22, 183);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(160, 20);
			this->textBox3->TabIndex = 24;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox3_KeyPress);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(72, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 48);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Зарегистрироваться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(172, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 18);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Номер паспорта ";
			// 
			// textBox5
			// 
			this->textBox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox5->Location = System::Drawing::Point(175, 52);
			this->textBox5->MaxLength = 9;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 29;
			this->textBox5->Text = L"AB";
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox5_KeyPress);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        People.*\r\nFROM            People";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source= |DataDirectory|\Database.mdb";
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
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
				this->dataColumn1, this->dataColumn2,
					this->dataColumn3, this->dataColumn4, this->dataColumn5
			});
			this->dataTable1->TableName = L"Table1";
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
			this->dataColumn5->ColumnName = L"ID PASSPORT";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(312, 307);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Библиотека";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm2::MyForm2_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		Hide();      // Скрытие формы при закрытии 
		
	}
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
		toolTip1->SetToolTip(textBox5, "7 цифр после AB ");          // Создание сообщения для toolTip
		toolTip1->IsBalloon = true;

		
		MaximizeBox = false;   // Запрет раскрытия формы на весь экран



	}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == ',' || e->KeyChar == '.')       // запрет ввода точки и запятой 
		e->Handled = true;
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == ',' || e->KeyChar == '.')          // запрет ввода точки и запятой 
		e->Handled = true;

}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= (char)48) && (e->KeyChar <= (char)57) || (e->KeyChar >= (char)65) && (e->KeyChar <= (char)90) || (e->KeyChar >= (char)97) && (e->KeyChar <= (char)122) || e->KeyChar == ',' || e->KeyChar == '.') // запрет ввода анг. букв, цифр и точски с запятой
		e->Handled = true;
}
 
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48) || (e->KeyChar > (char)58)) {      // запрет ввода букв
		e->Handled = true;
	}

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	
	OleDbConnection^ con = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source= |DataDirectory|\Database.mdb");
	OleDbDataAdapter^ sda = gcnew OleDbDataAdapter("Select Count (*) From  People where Login = '" + textBox1->Text + "' or FIO ='" + textBox3->Text + "'", con); // проверка на повторяющийся логин 
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);

		if (dt->Rows[0][0]->ToString() == "1" || (String::IsNullOrWhiteSpace(textBox1->Text) || String::IsNullOrWhiteSpace(textBox2->Text) || String::IsNullOrWhiteSpace(textBox3->Text)  || String::IsNullOrWhiteSpace(textBox5->Text))) { // если логин уже есть или один из textBox пуст, то вывод ошибки 
			MessageBox::Show("Такой пользователь уже существует \n или вы не заполнили все строки", "ОШИБКА",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {

			dataTable1->Rows->Add(1, textBox1->Text, textBox2->Text, textBox3->Text, textBox5->Text); // добавление нового пользователя 
			oleDbDataAdapter1->Update(dataSet1->Tables[0]);  // сохранение данных 
			Hide(); // скрытие формы 
			
		}
	
	

}
};
}

  



