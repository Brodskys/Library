#pragma once
#include "Maps.h"
#include "Help1.h"
#include "Help3.h"
#include "pg.h" 
namespace Project1 { 
	    
	using namespace System;
	using namespace System::Collections::Generic; 
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	using namespace std;
	using namespace System::Diagnostics;
	using namespace  System::Text;
	/// <summary> 
	/// Сводка для MyForm3
	/// </summary>

	public ref class MyForm3 : public System::Windows::Forms::Form
	{      

	public: MyForm3(void  )
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataColumn^  dataColumn1;
	private: System::Data::DataColumn^  dataColumn2;
	private: System::Data::DataColumn^  dataColumn3;

	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;




	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::BindingNavigator^  bindingNavigator1;











	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel1;
	private: System::Windows::Forms::ToolStripTextBox^  TextBox1;

	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;






	private: System::Data::DataColumn^  dataColumn5;
	private: System::Data::DataColumn^  dataColumn4;





	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Data::DataColumn^  dataColumn6;








	public: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  оЧёмDataGridViewTextBoxColumn;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  колвоКнигDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  жанрDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  книгаDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  авторDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  iDDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridView^  dataGridView1;












private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand2;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand2;
private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter2;
private: System::Data::DataSet^  dataSet2;
private: System::Data::DataTable^  dataTable2;
private: System::Data::DataColumn^  dataColumn7;
private: System::Data::DataColumn^  dataColumn8;
private: System::Data::DataColumn^  dataColumn9;
private: System::Data::DataColumn^  dataColumn10;
private: System::Data::DataColumn^  dataColumn11;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand;


































































	public:







	public:

	public:

















































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->TextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->оЧёмDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->колвоКнигDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->жанрDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->книгаDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->авторDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->iDDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->oleDbSelectCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter2 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbDeleteCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->dataSet2 = (gcnew System::Data::DataSet());
			this->dataTable2 = (gcnew System::Data::DataTable());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			this->dataColumn8 = (gcnew System::Data::DataColumn());
			this->dataColumn9 = (gcnew System::Data::DataColumn());
			this->dataColumn10 = (gcnew System::Data::DataColumn());
			this->dataColumn11 = (gcnew System::Data::DataColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->BeginInit();
			this->SuspendLayout();
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
					this->dataColumn3, this->dataColumn5, this->dataColumn4, this->dataColumn6
			});
			this->dataTable1->TableName = L"Table1";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"ID";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"Автор";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"Книга";
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"Жанр";
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"Кол-во книг";
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"О чём";
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {
				(gcnew System::Data::Common::DataColumnMapping(L"ID",
					L"ID")), (gcnew System::Data::Common::DataColumnMapping(L"Автор", L"Автор")), (gcnew System::Data::Common::DataColumnMapping(L"Книга",
						L"Книга")), (gcnew System::Data::Common::DataColumnMapping(L"Жанр", L"Жанр")), (gcnew System::Data::Common::DataColumnMapping(L"Кол-во книг",
							L"Кол-во книг")), (gcnew System::Data::Common::DataColumnMapping(L"О чём", L"О чём"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"Books", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Автор",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"Автор", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Автор",
							System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"Автор", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Книга",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"Книга", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Книга",
									System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"Книга", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Жанр",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
										L"Жанр", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Жанр",
											System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
											static_cast<System::Byte>(0), L"Жанр", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Кол-во_книг",
												System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
												L"Кол-во книг", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Кол-во_книг",
													System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
													static_cast<System::Byte>(0), L"Кол-во книг", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source= |DataDirectory|\Database.mdb";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `Books` (`Автор`, `Книга`, `Жанр`, `Кол-во книг`, `О чём`) VALUES (\?,"
				L" \?, \?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Автор",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Автор")), (gcnew System::Data::OleDb::OleDbParameter(L"Книга", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Книга")), (gcnew System::Data::OleDb::OleDbParameter(L"Жанр", System::Data::OleDb::OleDbType::VarWChar, 0, L"Жанр")), (gcnew System::Data::OleDb::OleDbParameter(L"Кол-во_книг",
							System::Data::OleDb::OleDbType::VarWChar, 0, L"Кол-во книг")), (gcnew System::Data::OleDb::OleDbParameter(L"О_чём", System::Data::OleDb::OleDbType::LongVarWChar,
								0, L"О чём"))
			});
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        Books.*\r\nFROM            Books";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(14) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Автор",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Автор")), (gcnew System::Data::OleDb::OleDbParameter(L"Книга", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Книга")), (gcnew System::Data::OleDb::OleDbParameter(L"Жанр", System::Data::OleDb::OleDbType::VarWChar, 0, L"Жанр")), (gcnew System::Data::OleDb::OleDbParameter(L"Кол-во_книг",
							System::Data::OleDb::OleDbType::VarWChar, 0, L"Кол-во книг")), (gcnew System::Data::OleDb::OleDbParameter(L"О_чём", System::Data::OleDb::OleDbType::LongVarWChar,
								0, L"О чём")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
									false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)),
									(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Автор", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
										static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Автор", System::Data::DataRowVersion::Original, true, nullptr)),
										(gcnew System::Data::OleDb::OleDbParameter(L"Original_Автор", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
											false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Автор", System::Data::DataRowVersion::Original, nullptr)),
											(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Книга", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
												static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Книга", System::Data::DataRowVersion::Original, true, nullptr)),
												(gcnew System::Data::OleDb::OleDbParameter(L"Original_Книга", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
													false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Книга", System::Data::DataRowVersion::Original, nullptr)),
													(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Жанр", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
														static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Жанр", System::Data::DataRowVersion::Original, true, nullptr)),
														(gcnew System::Data::OleDb::OleDbParameter(L"Original_Жанр", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
															false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Жанр", System::Data::DataRowVersion::Original, nullptr)),
															(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Кол-во_книг", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
																static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Кол-во книг", System::Data::DataRowVersion::Original, true,
																nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Кол-во_книг", System::Data::OleDb::OleDbType::VarWChar,
																	0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Кол-во книг",
																	System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// bindingSource1
			// 
			this->bindingSource1->DataMember = L"Table1";
			this->bindingSource1->DataSource = this->dataSet1;
			this->bindingSource1->Filter = L"";
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = nullptr;
			this->bindingNavigator1->BindingSource = this->bindingSource1;
			this->bindingNavigator1->CountItem = nullptr;
			this->bindingNavigator1->DeleteItem = nullptr;
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripLabel1,
					this->TextBox1, this->toolStripButton1
			});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
			this->bindingNavigator1->MoveFirstItem = nullptr;
			this->bindingNavigator1->MoveLastItem = nullptr;
			this->bindingNavigator1->MoveNextItem = nullptr;
			this->bindingNavigator1->MovePreviousItem = nullptr;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = nullptr;
			this->bindingNavigator1->Size = System::Drawing::Size(674, 25);
			this->bindingNavigator1->TabIndex = 13;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(40, 22);
			this->toolStripLabel1->Text = L"Автор";
			// 
			// TextBox1
			// 
			this->TextBox1->Name = L"TextBox1";
			this->TextBox1->Size = System::Drawing::Size(100, 25);
			this->TextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm3::TextBox1_KeyPress);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm3::toolStripButton1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(274, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Ближайшая библиотека";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(427, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Справка";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->AllowDrop = true;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"О программе", L"Справка", L"Обратная связь " });
			this->listBox1->Location = System::Drawing::Point(427, 31);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(110, 43);
			this->listBox1->TabIndex = 17;
			this->listBox1->Click += gcnew System::EventHandler(this, &MyForm3::listBox1_Click);
			this->listBox1->MouseLeave += gcnew System::EventHandler(this, &MyForm3::listBox1_MouseLeave);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(184, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Взять книгу ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Работа в программе " });
			this->listBox2->Location = System::Drawing::Point(427, 32);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(110, 17);
			this->listBox2->TabIndex = 19;
			this->listBox2->Click += gcnew System::EventHandler(this, &MyForm3::listBox2_Click);
			this->listBox2->MouseLeave += gcnew System::EventHandler(this, &MyForm3::listBox2_MouseLeave);
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Номер службы поддержски ", L"+8-800-555-35-35",
					L"+375(029)14-88-22-8", L"Почка разработчиков ", L"sobaka@hile.de", L"regerg@mail.com", L"Мы соц. сетях", L"vk.com/baffometi1",
					L"Наш сайт", L"2ch.hk"
			});
			this->listBox3->Location = System::Drawing::Point(427, 32);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(151, 134);
			this->listBox3->TabIndex = 20;
			this->listBox3->Click += gcnew System::EventHandler(this, &MyForm3::listBox3_Click);
			this->listBox3->MouseLeave += gcnew System::EventHandler(this, &MyForm3::listBox3_MouseLeave);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(408, 98);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(254, 148);
			this->richTextBox1->TabIndex = 21;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Leave += gcnew System::EventHandler(this, &MyForm3::richTextBox1_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(575, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 26);
			this->label1->TabIndex = 22;
			this->label1->Text = L"label1";
			// 
			// оЧёмDataGridViewTextBoxColumn
			// 
			this->оЧёмDataGridViewTextBoxColumn->DataPropertyName = L"О чём";
			this->оЧёмDataGridViewTextBoxColumn->HeaderText = L"О чём";
			this->оЧёмDataGridViewTextBoxColumn->Name = L"оЧёмDataGridViewTextBoxColumn";
			this->оЧёмDataGridViewTextBoxColumn->ReadOnly = true;
			// 
			// колвоКнигDataGridViewTextBoxColumn
			// 
			this->колвоКнигDataGridViewTextBoxColumn->DataPropertyName = L"Кол-во книг";
			this->колвоКнигDataGridViewTextBoxColumn->HeaderText = L"Кол-во книг";
			this->колвоКнигDataGridViewTextBoxColumn->Name = L"колвоКнигDataGridViewTextBoxColumn";
			this->колвоКнигDataGridViewTextBoxColumn->ReadOnly = true;
			// 
			// жанрDataGridViewTextBoxColumn
			// 
			this->жанрDataGridViewTextBoxColumn->DataPropertyName = L"Жанр";
			this->жанрDataGridViewTextBoxColumn->HeaderText = L"Жанр";
			this->жанрDataGridViewTextBoxColumn->Name = L"жанрDataGridViewTextBoxColumn";
			this->жанрDataGridViewTextBoxColumn->ReadOnly = true;
			this->жанрDataGridViewTextBoxColumn->Width = 140;
			// 
			// книгаDataGridViewTextBoxColumn
			// 
			this->книгаDataGridViewTextBoxColumn->DataPropertyName = L"Книга";
			this->книгаDataGridViewTextBoxColumn->HeaderText = L"Книга";
			this->книгаDataGridViewTextBoxColumn->Name = L"книгаDataGridViewTextBoxColumn";
			this->книгаDataGridViewTextBoxColumn->ReadOnly = true;
			this->книгаDataGridViewTextBoxColumn->Width = 160;
			// 
			// авторDataGridViewTextBoxColumn
			// 
			this->авторDataGridViewTextBoxColumn->DataPropertyName = L"Автор";
			this->авторDataGridViewTextBoxColumn->HeaderText = L"Автор";
			this->авторDataGridViewTextBoxColumn->Name = L"авторDataGridViewTextBoxColumn";
			this->авторDataGridViewTextBoxColumn->ReadOnly = true;
			this->авторDataGridViewTextBoxColumn->Width = 175;
			// 
			// iDDataGridViewTextBoxColumn
			// 
			this->iDDataGridViewTextBoxColumn->DataPropertyName = L"ID";
			this->iDDataGridViewTextBoxColumn->HeaderText = L"ID";
			this->iDDataGridViewTextBoxColumn->Name = L"iDDataGridViewTextBoxColumn";
			this->iDDataGridViewTextBoxColumn->ReadOnly = true;
			this->iDDataGridViewTextBoxColumn->Width = 40;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->iDDataGridViewTextBoxColumn,
					this->авторDataGridViewTextBoxColumn, this->книгаDataGridViewTextBoxColumn, this->жанрDataGridViewTextBoxColumn, this->колвоКнигDataGridViewTextBoxColumn,
					this->оЧёмDataGridViewTextBoxColumn
			});
			this->dataGridView1->DataMember = L"Table1";
			this->dataGridView1->DataSource = this->dataSet1;
			this->dataGridView1->Location = System::Drawing::Point(13, 98);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(649, 398);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->TabStop = false;
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm3::dataGridView1_CellContentDoubleClick);
			// 
			// oleDbSelectCommand2
			// 
			this->oleDbSelectCommand2->CommandText = L"SELECT        Books2.*\r\nFROM            Books2";
			this->oleDbSelectCommand2->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand2
			// 
			this->oleDbInsertCommand2->CommandText = L"INSERT INTO `Books2` (`Кто взял`, `Взятая книга`, `Дата взятия`, `Дата возврата`)"
				L" VALUES (\?, \?, \?, \?)";
			this->oleDbInsertCommand2->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Кто_взял",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Кто взял")), (gcnew System::Data::OleDb::OleDbParameter(L"Взятая_книга", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Взятая книга")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_взятия", System::Data::OleDb::OleDbType::Date, 0,
							L"Дата взятия")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_возврата", System::Data::OleDb::OleDbType::Date, 0, L"Дата возврата"))
			});
			// 
			// oleDbDataAdapter2
			// 
			this->oleDbDataAdapter2->DeleteCommand = this->oleDbDeleteCommand;
			this->oleDbDataAdapter2->InsertCommand = this->oleDbInsertCommand2;
			this->oleDbDataAdapter2->SelectCommand = this->oleDbSelectCommand2;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__2 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {
				(gcnew System::Data::Common::DataColumnMapping(L"ID",
					L"ID")), (gcnew System::Data::Common::DataColumnMapping(L"Кто взял", L"Кто взял")), (gcnew System::Data::Common::DataColumnMapping(L"Взятая книга",
						L"Взятая книга")), (gcnew System::Data::Common::DataColumnMapping(L"Дата взятия", L"Дата взятия")), (gcnew System::Data::Common::DataColumnMapping(L"Дата возврата",
							L"Дата возврата"))
			};
			this->oleDbDataAdapter2->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"Books2", __mcTemp__2))
			});
			this->oleDbDataAdapter2->UpdateCommand = this->oleDbUpdateCommand;
			// 
			// oleDbDeleteCommand
			// 
			this->oleDbDeleteCommand->CommandText = resources->GetString(L"oleDbDeleteCommand.CommandText");
			this->oleDbDeleteCommand->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Кто_взял",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"Кто взял", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Кто_взял",
							System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"Кто взял", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Взятая_книга",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"Взятая книга", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Взятая_книга",
									System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"Взятая книга", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Дата_взятия",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
										L"Дата взятия", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Дата_взятия",
											System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
											L"Дата взятия", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Дата_возврата",
												System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
												L"Дата возврата", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Дата_возврата",
													System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
													L"Дата возврата", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbUpdateCommand
			// 
			this->oleDbUpdateCommand->CommandText = resources->GetString(L"oleDbUpdateCommand.CommandText");
			this->oleDbUpdateCommand->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(13) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Кто_взял",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Кто взял")), (gcnew System::Data::OleDb::OleDbParameter(L"Взятая_книга", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Взятая книга")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_взятия", System::Data::OleDb::OleDbType::Date, 0,
							L"Дата взятия")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_возврата", System::Data::OleDb::OleDbType::Date, 0, L"Дата возврата")),
							(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
								false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)),
								(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Кто_взял", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
									static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Кто взял", System::Data::DataRowVersion::Original, true, nullptr)),
									(gcnew System::Data::OleDb::OleDbParameter(L"Original_Кто_взял", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
										false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Кто взял", System::Data::DataRowVersion::Original, nullptr)),
										(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Взятая_книга", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
											static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Взятая книга", System::Data::DataRowVersion::Original, true,
											nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Взятая_книга", System::Data::OleDb::OleDbType::VarWChar,
												0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Взятая книга",
												System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Дата_взятия", System::Data::OleDb::OleDbType::Integer,
													0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Дата взятия", System::Data::DataRowVersion::Original,
													true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Дата_взятия", System::Data::OleDb::OleDbType::Date,
														0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Дата взятия",
														System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Дата_возврата", System::Data::OleDb::OleDbType::Integer,
															0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Дата возврата",
															System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Дата_возврата",
																System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
																L"Дата возврата", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// dataSet2
			// 
			this->dataSet2->DataSetName = L"NewDataSet";
			this->dataSet2->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable2 });
			// 
			// dataTable2
			// 
			this->dataTable2->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
				this->dataColumn7, this->dataColumn8,
					this->dataColumn9, this->dataColumn10, this->dataColumn11
			});
			this->dataTable2->TableName = L"Table1";
			// 
			// dataColumn7
			// 
			this->dataColumn7->ColumnName = L"ID";
			// 
			// dataColumn8
			// 
			this->dataColumn8->ColumnName = L"Кто взял";
			// 
			// dataColumn9
			// 
			this->dataColumn9->ColumnName = L"Взятая книга";
			// 
			// dataColumn10
			// 
			this->dataColumn10->ColumnName = L"Дата взятия";
			// 
			// dataColumn11
			// 
			this->dataColumn11->ColumnName = L"Дата возврата";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(674, 520);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bindingNavigator1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Библиотека";
			this->Activated += gcnew System::EventHandler(this, &MyForm3::MyForm3_Activated);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm3::MyForm3_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
		oleDbDataAdapter1->Fill(dataTable1);  // показ информации из таблицы
		dataGridView1->ClearSelection();   // убирает курсор из ячейки dataGridView при запуске
		MaximizeBox = false; // Запрет раскрытия формы на весь экран
		listBox1->Hide(); // скрытие listBox
		listBox2->Hide(); // скрытие listBox
		listBox3->Hide(); // скрытие listBox
		richTextBox1 -> Hide(); // скрытие richTextBox

	
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void MyForm3_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

	Hide();  // Скрытие формы при закрытии 
}

private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {


	for (;;) {
		if (String::IsNullOrWhiteSpace(TextBox1->Text)) { // выход из цикла, если TextBox пуст 
			break;
		}

		else
		{


			for (int i = 0; i < dataGridView1->RowCount; i++)
			{
				dataGridView1->Rows[i]->Selected = false;
				for (int j = 0; j < dataGridView1->ColumnCount; j++)
					if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr)
						if (dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Contains(TextBox1->Text))     // поиск в бд 
						{
							dataGridView1->Rows[i]->Selected = true;
							break;
						}

			}
			break;
		}
		TextBox1->Clear(); // удаление текста из TextBox
	}

}

private: System::Void TextBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= (char)48) && (e->KeyChar <= (char)57))     // запрет ввода цифр 
		e->Handled = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Maps^ form = gcnew Maps;  // переход на новую форму
	form->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Show();  // показывает listBox
}
private: System::Void listBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Hide(); //показывает listBox
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	
		DateTime^ date1 = DateTime::Now;
		



		dataTable2->Rows->Add(1, label1->Text, dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[1]->Value + "  << " + dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[2]->Value + " >> ", date1->ToLongDateString(), date1->AddDays(7)); // записывает в бд информацию о взятой книге 
		oleDbDataAdapter2->Update(dataSet2->Tables[0]); // сохранение  бд 

		dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value = (Convert::ToString(Convert::ToDouble(dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[4]->Value) - 1)); // -1 книга в кол-ве книг 
		oleDbDataAdapter1->Update(dataSet1->Tables[0]); // сохранение  бд 



		MessageBox::Show("Ваша книга будет ждать вас в библиотеке!");// вывод сообщения 
	
}
private: System::Void listBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	

	if (listBox1->SelectedIndex == 0) {
		pg^ fr3 = gcnew pg(); // переход на новую форму
		fr3->Show();
		
	}
	if (listBox1->SelectedIndex == 1) {
		
		listBox2->Show();// показывает listBox

	}
	if (listBox1->SelectedIndex == 2) {
		listBox3->Show();// показывает listBox

	}

	

}
		 
private: System::Void listBox2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	listBox2->Hide(); // скрывает  listBox
}
private: System::Void listBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		Help3^ fr2 = gcnew Help3(); // переход на новую форму
		fr2->Show();
	
}
private: System::Void listBox3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	listBox3->Hide();  // скрывает  listBox
}
private: System::Void listBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listBox3->SelectedIndex == 7) {

		System::Diagnostics::Process::Start("C:\\Program Files\\Internet Explorer\\iexplore.exe", "vk.com/baffometi1");	  // открывает сайт в explore
	}

	if (listBox3->SelectedIndex == 9) {

		System::Diagnostics::Process::Start("C:\\Program Files\\Internet Explorer\\iexplore.exe", "2ch.hk/"); // открывает сайт в explore
	}
}
	private: System::Void dataGridView1_CellContentDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		int currentRow = dataGridView1->CurrentRow->Index;                                         
		if (currentRow == 0) {                                                                 // выводит информацию о книге из бд 
			richTextBox1->Show(); 
			richTextBox1->Text = dataGridView1->Rows[0]->Cells[5]->Value->ToString();
		}
		if (currentRow == 1) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[1]->Cells[5]->Value->ToString();
		}
		if (currentRow == 2) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[2]->Cells[5]->Value->ToString();
}
		if (currentRow == 3) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[3]->Cells[5]->Value->ToString();
				
		}
		if (currentRow == 4) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[4]->Cells[5]->Value->ToString();
				
		}
		if (currentRow == 5) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[5]->Cells[5]->Value->ToString();
			
		}
		if (currentRow == 6) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[6]->Cells[5]->Value->ToString();
			
		}
		if (currentRow == 7) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[7]->Cells[5]->Value->ToString();
		
		}
		if (currentRow == 8) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[8]->Cells[5]->Value->ToString();
		
		}
		if (currentRow == 9) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[9]->Cells[5]->Value->ToString();
			
		}
		if (currentRow == 10) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[10]->Cells[5]->Value->ToString();
			
		}
		if (currentRow == 11) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[11]->Cells[5]->Value->ToString();
		
		}
		if (currentRow == 12) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[12]->Cells[5]->Value->ToString();
		
		}
		if (currentRow == 13) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[13]->Cells[5]->Value->ToString();
		
		}
		if (currentRow == 14) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[14]->Cells[5]->Value->ToString();
			
		}
		if (currentRow == 15) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[15]->Cells[5]->Value->ToString();
		
		}
		if (currentRow == 16) {
			richTextBox1->Show();
			richTextBox1->Text = dataGridView1->Rows[16]->Cells[5]->Value->ToString();
			
		}

	}

private: System::Void richTextBox1_Leave(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->Hide(); // скрытие richTextBox 
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
	
private: System::Void MyForm3_Activated(System::Object^  sender, System::EventArgs^  e) {
	
}
};   
}    
   
  

    

