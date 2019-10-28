#pragma once
#include<iostream>


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Xml;
	using namespace  System::Collections::Generic;
	using namespace  System::Text;
	/// <summary>  
	/// Сводка для Admin  
	/// </summary>

	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
























































































	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::BindingNavigator^  bindingNavigator1;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorAddNewItem;

	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorDeleteItem;




	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator1;


	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator2;
	private: System::Windows::Forms::ToolStripTextBox^  TextBox1;

	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;







private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;

private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
private: System::Windows::Forms::ToolStripTextBox^  bindingNavigatorPositionItem;
private: System::Windows::Forms::ToolStripButton^  ToolStripButton;

private: System::Windows::Forms::DataGridViewTextBoxColumn^  iDDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  авторDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  книгаDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  жанрDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  колвоКнигDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  оЧёмDataGridViewTextBoxColumn;









private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;

















private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand2;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand2;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand2;
private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand2;
private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter2;
























private: System::Windows::Forms::DataGridViewTextBoxColumn^  iDDataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  loginDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  passDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fIODataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  adresDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  iDPASSPORTDataGridViewTextBoxColumn;










private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand3;
private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand3;
private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter3;














private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;












private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand;
private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand;







private: System::Data::DataSet^  dataSet2;
private: System::Data::DataTable^  dataTable2;
private: System::Data::DataColumn^  dataColumn6;
private: System::Data::DataColumn^  dataColumn7;
private: System::Data::DataColumn^  dataColumn8;
private: System::Data::DataColumn^  dataColumn9;
private: System::Data::DataColumn^  dataColumn10;
private: System::Data::DataColumn^  dataColumn11;
private: System::Data::DataSet^  dataSet3;
private: System::Data::DataTable^  dataTable3;
private: System::Data::DataColumn^  dataColumn12;
private: System::Data::DataColumn^  dataColumn13;
private: System::Data::DataColumn^  dataColumn14;
private: System::Data::DataColumn^  dataColumn15;
private: System::Data::DataColumn^  dataColumn16;
private: System::Windows::Forms::DataGridView^  dataGridView1;





private: System::Windows::Forms::DataGridView^  dataGridView2;






private: System::Windows::Forms::DataGridView^  dataGridView3;





private: System::Windows::Forms::DataGridView^  dataGridView4;





private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;










private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  ктоВзялDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  взятаяКнигаDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  датаВзятияDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  датаВозвратаDataGridViewTextBoxColumn;





private: System::Data::DataSet^  dataSet1;
private: System::Data::DataTable^  dataTable1;
private: System::Data::DataColumn^  dataColumn1;
private: System::Data::DataColumn^  dataColumn2;
private: System::Data::DataColumn^  dataColumn3;
private: System::Data::DataColumn^  dataColumn4;
private: System::Data::DataColumn^  dataColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;






























































































































































































































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->TextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter2 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter3 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbDeleteCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand = (gcnew System::Data::OleDb::OleDbCommand());
			this->dataSet2 = (gcnew System::Data::DataSet());
			this->dataTable2 = (gcnew System::Data::DataTable());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			this->dataColumn8 = (gcnew System::Data::DataColumn());
			this->dataColumn9 = (gcnew System::Data::DataColumn());
			this->dataColumn10 = (gcnew System::Data::DataColumn());
			this->dataColumn11 = (gcnew System::Data::DataColumn());
			this->dataSet3 = (gcnew System::Data::DataSet());
			this->dataTable3 = (gcnew System::Data::DataTable());
			this->dataColumn12 = (gcnew System::Data::DataColumn());
			this->dataColumn13 = (gcnew System::Data::DataColumn());
			this->dataColumn14 = (gcnew System::Data::DataColumn());
			this->dataColumn15 = (gcnew System::Data::DataColumn());
			this->dataColumn16 = (gcnew System::Data::DataColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ктоВзялDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->взятаяКнигаDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->датаВзятияDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->датаВозвратаDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// bindingSource1
			// 
			this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &Admin::bindingSource1_CurrentChanged);
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
			this->bindingNavigator1->BindingSource = this->bindingSource1;
			this->bindingNavigator1->CountItem = nullptr;
			this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->bindingNavigatorPositionItem,
					this->bindingNavigatorSeparator1, this->bindingNavigatorSeparator2, this->bindingNavigatorDeleteItem, this->bindingNavigatorAddNewItem,
					this->TextBox1, this->toolStripButton1, this->ToolStripButton
			});
			this->bindingNavigator1->Location = System::Drawing::Point(0, 0);
			this->bindingNavigator1->MoveFirstItem = nullptr;
			this->bindingNavigator1->MoveLastItem = nullptr;
			this->bindingNavigator1->MoveNextItem = nullptr;
			this->bindingNavigator1->MovePreviousItem = nullptr;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(679, 25);
			this->bindingNavigator1->TabIndex = 22;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			// 
			// bindingNavigatorAddNewItem
			// 
			this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
			this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
			this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorAddNewItem->Text = L"Добавить";
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorDeleteItem->Text = L"Удалить";
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"Положение";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 23);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"Текущее положение";
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// TextBox1
			// 
			this->TextBox1->Name = L"TextBox1";
			this->TextBox1->Size = System::Drawing::Size(100, 25);
			this->TextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Admin::TextBox1_KeyPress);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Admin::toolStripButton1_Click_1);
			// 
			// ToolStripButton
			// 
			this->ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolStripButton.Image")));
			this->ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolStripButton->Name = L"ToolStripButton";
			this->ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ToolStripButton->Text = L"&Сохранить";
			this->ToolStripButton->Click += gcnew System::EventHandler(this, &Admin::ToolStripButton_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(402, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(493, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Обновить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click_2);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(275, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 25;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Admin::comboBox1_SelectedIndexChanged_1);
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        [ID PASSPORT], FIO, Pass, Login, ID\r\nFROM            People";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=|DataDirectory|\Database.mdb";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `People` (`ID PASSPORT`, `FIO`, `Pass`, `Login`) VALUES (\?, \?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"ID_PASSPORT",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"ID PASSPORT")), (gcnew System::Data::OleDb::OleDbParameter(L"FIO", System::Data::OleDb::OleDbType::VarWChar,
						0, L"FIO")), (gcnew System::Data::OleDb::OleDbParameter(L"Pass", System::Data::OleDb::OleDbType::VarWChar, 0, L"Pass")), (gcnew System::Data::OleDb::OleDbParameter(L"Login",
							System::Data::OleDb::OleDbType::VarWChar, 0, L"Login"))
			});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(13) {
				(gcnew System::Data::OleDb::OleDbParameter(L"ID_PASSPORT",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"ID PASSPORT")), (gcnew System::Data::OleDb::OleDbParameter(L"FIO", System::Data::OleDb::OleDbType::VarWChar,
						0, L"FIO")), (gcnew System::Data::OleDb::OleDbParameter(L"Pass", System::Data::OleDb::OleDbType::VarWChar, 0, L"Pass")), (gcnew System::Data::OleDb::OleDbParameter(L"Login",
							System::Data::OleDb::OleDbType::VarWChar, 0, L"Login")), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ID_PASSPORT",
								System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
								L"ID PASSPORT", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID_PASSPORT",
									System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
									static_cast<System::Byte>(0), L"ID PASSPORT", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_FIO",
										System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
										L"FIO", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_FIO",
											System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
											static_cast<System::Byte>(0), L"FIO", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Pass",
												System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
												L"Pass", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Pass",
													System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
													static_cast<System::Byte>(0), L"Pass", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Login",
														System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
														L"Login", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Login",
															System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
															static_cast<System::Byte>(0), L"Login", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID",
																System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
																static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_ID_PASSPORT",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
					L"ID PASSPORT", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID_PASSPORT",
						System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
						static_cast<System::Byte>(0), L"ID PASSPORT", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_FIO",
							System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
							L"FIO", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_FIO",
								System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
								static_cast<System::Byte>(0), L"FIO", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Pass",
									System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
									L"Pass", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Pass",
										System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
										static_cast<System::Byte>(0), L"Pass", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Login",
											System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
											L"Login", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Login",
												System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
												static_cast<System::Byte>(0), L"Login", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID",
													System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
													static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {
				(gcnew System::Data::Common::DataColumnMapping(L"ID PASSPORT",
					L"ID PASSPORT")), (gcnew System::Data::Common::DataColumnMapping(L"FIO", L"FIO")), (gcnew System::Data::Common::DataColumnMapping(L"Pass",
						L"Pass")), (gcnew System::Data::Common::DataColumnMapping(L"Login", L"Login")), (gcnew System::Data::Common::DataColumnMapping(L"ID",
							L"ID"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"People", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// oleDbSelectCommand2
			// 
			this->oleDbSelectCommand2->CommandText = L"SELECT        Books.*\r\nFROM            Books";
			this->oleDbSelectCommand2->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand2
			// 
			this->oleDbInsertCommand2->CommandText = L"INSERT INTO `Books` (`Автор`, `Книга`, `Жанр`, `Кол-во книг`, `О чём`) VALUES (\?,"
				L" \?, \?, \?, \?)";
			this->oleDbInsertCommand2->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Автор",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Автор")), (gcnew System::Data::OleDb::OleDbParameter(L"Книга", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Книга")), (gcnew System::Data::OleDb::OleDbParameter(L"Жанр", System::Data::OleDb::OleDbType::VarWChar, 0, L"Жанр")), (gcnew System::Data::OleDb::OleDbParameter(L"Кол-во_книг",
							System::Data::OleDb::OleDbType::VarWChar, 0, L"Кол-во книг")), (gcnew System::Data::OleDb::OleDbParameter(L"О_чём", System::Data::OleDb::OleDbType::LongVarWChar,
								0, L"О чём"))
			});
			// 
			// oleDbUpdateCommand2
			// 
			this->oleDbUpdateCommand2->CommandText = resources->GetString(L"oleDbUpdateCommand2.CommandText");
			this->oleDbUpdateCommand2->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(14) {
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
			// oleDbDeleteCommand2
			// 
			this->oleDbDeleteCommand2->CommandText = resources->GetString(L"oleDbDeleteCommand2.CommandText");
			this->oleDbDeleteCommand2->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(9) {
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
			// oleDbDataAdapter2
			// 
			this->oleDbDataAdapter2->DeleteCommand = this->oleDbDeleteCommand2;
			this->oleDbDataAdapter2->InsertCommand = this->oleDbInsertCommand2;
			this->oleDbDataAdapter2->SelectCommand = this->oleDbSelectCommand2;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__2 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {
				(gcnew System::Data::Common::DataColumnMapping(L"ID",
					L"ID")), (gcnew System::Data::Common::DataColumnMapping(L"Автор", L"Автор")), (gcnew System::Data::Common::DataColumnMapping(L"Книга",
						L"Книга")), (gcnew System::Data::Common::DataColumnMapping(L"Жанр", L"Жанр")), (gcnew System::Data::Common::DataColumnMapping(L"Кол-во книг",
							L"Кол-во книг")), (gcnew System::Data::Common::DataColumnMapping(L"О чём", L"О чём"))
			};
			this->oleDbDataAdapter2->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"Books", __mcTemp__2))
			});
			this->oleDbDataAdapter2->UpdateCommand = this->oleDbUpdateCommand2;
			// 
			// oleDbSelectCommand3
			// 
			this->oleDbSelectCommand3->CommandText = L"SELECT        Books2.*\r\nFROM            Books2";
			this->oleDbSelectCommand3->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand3
			// 
			this->oleDbInsertCommand3->CommandText = L"INSERT INTO `Books2` (`Кто взял`, `Взятая книга`, `Дата взятия`, `Дата возврата`)"
				L" VALUES (\?, \?, \?, \?)";
			this->oleDbInsertCommand3->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(4) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Кто_взял",
					System::Data::OleDb::OleDbType::VarWChar, 0, L"Кто взял")), (gcnew System::Data::OleDb::OleDbParameter(L"Взятая_книга", System::Data::OleDb::OleDbType::VarWChar,
						0, L"Взятая книга")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_взятия", System::Data::OleDb::OleDbType::Date, 0,
							L"Дата взятия")), (gcnew System::Data::OleDb::OleDbParameter(L"Дата_возврата", System::Data::OleDb::OleDbType::Date, 0, L"Дата возврата"))
			});
			// 
			// oleDbDataAdapter3
			// 
			this->oleDbDataAdapter3->DeleteCommand = this->oleDbDeleteCommand;
			this->oleDbDataAdapter3->InsertCommand = this->oleDbInsertCommand3;
			this->oleDbDataAdapter3->SelectCommand = this->oleDbSelectCommand3;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__3 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {
				(gcnew System::Data::Common::DataColumnMapping(L"ID",
					L"ID")), (gcnew System::Data::Common::DataColumnMapping(L"Кто взял", L"Кто взял")), (gcnew System::Data::Common::DataColumnMapping(L"Взятая книга",
						L"Взятая книга")), (gcnew System::Data::Common::DataColumnMapping(L"Дата взятия", L"Дата взятия")), (gcnew System::Data::Common::DataColumnMapping(L"Дата возврата",
							L"Дата возврата"))
			};
			this->oleDbDataAdapter3->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"Books2", __mcTemp__3))
			});
			this->oleDbDataAdapter3->UpdateCommand = this->oleDbUpdateCommand;
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
			this->dataTable2->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(6) {
				this->dataColumn6, this->dataColumn7,
					this->dataColumn8, this->dataColumn9, this->dataColumn10, this->dataColumn11
			});
			this->dataTable2->TableName = L"Table1";
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"ID";
			// 
			// dataColumn7
			// 
			this->dataColumn7->ColumnName = L"Автор";
			// 
			// dataColumn8
			// 
			this->dataColumn8->ColumnName = L"Книга";
			// 
			// dataColumn9
			// 
			this->dataColumn9->ColumnName = L"Жанр";
			// 
			// dataColumn10
			// 
			this->dataColumn10->ColumnName = L"Кол-во книг";
			// 
			// dataColumn11
			// 
			this->dataColumn11->ColumnName = L"О чём";
			// 
			// dataSet3
			// 
			this->dataSet3->DataSetName = L"NewDataSet";
			this->dataSet3->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable3 });
			// 
			// dataTable3
			// 
			this->dataTable3->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(5) {
				this->dataColumn12, this->dataColumn13,
					this->dataColumn14, this->dataColumn15, this->dataColumn16
			});
			this->dataTable3->TableName = L"Table1";
			// 
			// dataColumn12
			// 
			this->dataColumn12->ColumnName = L"ID";
			// 
			// dataColumn13
			// 
			this->dataColumn13->ColumnName = L"Кто взял";
			// 
			// dataColumn14
			// 
			this->dataColumn14->ColumnName = L"Взятая книга";
			// 
			// dataColumn15
			// 
			this->dataColumn15->ColumnName = L"Дата взятия";
			// 
			// dataColumn16
			// 
			this->dataColumn16->ColumnName = L"Дата возврата";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->ктоВзялDataGridViewTextBoxColumn, this->взятаяКнигаDataGridViewTextBoxColumn, this->датаВзятияDataGridViewTextBoxColumn,
					this->датаВозвратаDataGridViewTextBoxColumn
			});
			this->dataGridView1->DataMember = L"Table1";
			this->dataGridView1->DataSource = this->dataSet3;
			this->dataGridView1->Location = System::Drawing::Point(12, 50);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(655, 398);
			this->dataGridView1->TabIndex = 26;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->DataPropertyName = L"ID";
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 40;
			// 
			// ктоВзялDataGridViewTextBoxColumn
			// 
			this->ктоВзялDataGridViewTextBoxColumn->DataPropertyName = L"Кто взял";
			this->ктоВзялDataGridViewTextBoxColumn->HeaderText = L"Кто взял";
			this->ктоВзялDataGridViewTextBoxColumn->Name = L"ктоВзялDataGridViewTextBoxColumn";
			this->ктоВзялDataGridViewTextBoxColumn->Width = 130;
			// 
			// взятаяКнигаDataGridViewTextBoxColumn
			// 
			this->взятаяКнигаDataGridViewTextBoxColumn->DataPropertyName = L"Взятая книга";
			this->взятаяКнигаDataGridViewTextBoxColumn->HeaderText = L"Взятая книга";
			this->взятаяКнигаDataGridViewTextBoxColumn->Name = L"взятаяКнигаDataGridViewTextBoxColumn";
			this->взятаяКнигаDataGridViewTextBoxColumn->Width = 206;
			// 
			// датаВзятияDataGridViewTextBoxColumn
			// 
			this->датаВзятияDataGridViewTextBoxColumn->DataPropertyName = L"Дата взятия";
			this->датаВзятияDataGridViewTextBoxColumn->HeaderText = L"Дата взятия";
			this->датаВзятияDataGridViewTextBoxColumn->Name = L"датаВзятияDataGridViewTextBoxColumn";
			this->датаВзятияDataGridViewTextBoxColumn->Width = 115;
			// 
			// датаВозвратаDataGridViewTextBoxColumn
			// 
			this->датаВозвратаDataGridViewTextBoxColumn->DataPropertyName = L"Дата возврата";
			this->датаВозвратаDataGridViewTextBoxColumn->HeaderText = L"Дата возврата";
			this->датаВозвратаDataGridViewTextBoxColumn->Name = L"датаВозвратаDataGridViewTextBoxColumn";
			this->датаВозвратаDataGridViewTextBoxColumn->Width = 120;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoGenerateColumns = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12,
					this->dataGridViewTextBoxColumn13
			});
			this->dataGridView2->DataMember = L"Table1";
			this->dataGridView2->DataSource = this->dataSet2;
			this->dataGridView2->Location = System::Drawing::Point(12, 50);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(655, 398);
			this->dataGridView2->TabIndex = 27;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->DataPropertyName = L"ID";
			this->dataGridViewTextBoxColumn8->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 40;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->DataPropertyName = L"Автор";
			this->dataGridViewTextBoxColumn9->HeaderText = L"Автор";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 120;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->DataPropertyName = L"Книга";
			this->dataGridViewTextBoxColumn10->HeaderText = L"Книга";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 130;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->DataPropertyName = L"Жанр";
			this->dataGridViewTextBoxColumn11->HeaderText = L"Жанр";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 85;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->DataPropertyName = L"Кол-во книг";
			this->dataGridViewTextBoxColumn12->HeaderText = L"Кол-во книг";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 55;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->DataPropertyName = L"О чём";
			this->dataGridViewTextBoxColumn13->HeaderText = L"О чём";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 165;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoGenerateColumns = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn14,
					this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18
			});
			this->dataGridView3->DataMember = L"Table1";
			this->dataGridView3->DataSource = this->dataSet1;
			this->dataGridView3->Location = System::Drawing::Point(12, 50);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(655, 398);
			this->dataGridView3->TabIndex = 28;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->DataPropertyName = L"ID";
			this->dataGridViewTextBoxColumn14->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 40;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->DataPropertyName = L"Login";
			this->dataGridViewTextBoxColumn15->HeaderText = L"Login";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 153;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->DataPropertyName = L"Pass";
			this->dataGridViewTextBoxColumn16->HeaderText = L"Pass";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 140;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->DataPropertyName = L"FIO";
			this->dataGridViewTextBoxColumn17->HeaderText = L"FIO";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Width = 120;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->DataPropertyName = L"ID PASSPORT";
			this->dataGridViewTextBoxColumn18->HeaderText = L"ID PASSPORT";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Width = 142;
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
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(12, 50);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(655, 398);
			this->dataGridView4->TabIndex = 29;
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(679, 506);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bindingNavigator1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Admin::Admin_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Admin_Load(System::Object^  sender, System::EventArgs^  e) {
 		comboBox1->Items->Add("People"); //
		comboBox1->Items->Add("Books");  // Создание кнопок для comboBox
		comboBox1->Items->Add("Books2"); //
		oleDbDataAdapter2->Fill(dataTable2); //
		oleDbDataAdapter1->Fill(dataTable1); // показ информации из таблиц 
		oleDbDataAdapter3->Fill(dataTable3); //
		dataGridView1->Hide(); //
		dataGridView2->Hide(); // Скрытие dataGridView
		dataGridView3->Hide(); //
		MaximizeBox = false; // Запрет раскрытия формы на весь экран
	}

	private: System::Void Admin_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		Hide(); // Скрытие формы при закрытии 
	}

	private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox1->SelectedIndex == 0) {                        //
			this->bindingSource1->DataMember = L"Table1";           
			this->bindingSource1->DataSource = this->dataSet1;      
			
		}
		if (comboBox1->SelectedIndex == 1) {                        
			this->bindingSource1->DataMember = L"Table1";                 // изменения источника данных bindingSource при скроллинге comboBox
			this->bindingSource1->DataSource = this->dataSet2;
		
		}
		if (comboBox1->SelectedIndex == 2) {
			this->bindingSource1->DataMember = L"Table1";
			this->bindingSource1->DataSource = this->dataSet3;
			
		}                                                         //
	}
	private: System::Void toolStripButton1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		for (;;) {
			if (String::IsNullOrWhiteSpace(TextBox1->Text)) {      // выход из цикла, если TextBox пуст 
				break;
			}
			if (comboBox1->SelectedIndex == 0) {                           //         
				for (int i = 0; i < dataGridView3->RowCount; i++)
				{

					dataGridView3->Rows[i]->Selected = true;
					dataGridView3->Rows[i]->Selected = false;
					for (int j = 0; j < dataGridView3->ColumnCount; j++)
						if (dataGridView3->Rows[i]->Cells[j]->Value != nullptr) {
							if (dataGridView3->Rows[i]->Cells[j]->Value->ToString()->Contains(TextBox1->Text) && TextBox1->Text)    // поиск в бд 
							{
								dataGridView3->Rows[i]->Selected = true;

								break;

							}

						}

				}                                                          //
				TextBox1->Clear();      // удаление текста из TextBox

			}
			if (comboBox1->SelectedIndex == 1) {                                       //
				for (int i = 0; i < dataGridView2->RowCount; i++)
				{

					dataGridView2->Rows[i]->Selected = false;
					for (int j = 0; j < dataGridView2->ColumnCount; j++)
						if (dataGridView2->Rows[i]->Cells[j]->Value != nullptr) {
							if (dataGridView2->Rows[i]->Cells[j]->Value->ToString()->Contains(TextBox1->Text) && TextBox1->Text)       // поиск в бд 
							{
								dataGridView2->Rows[i]->Selected = true;
								break;

							}
						}

				}                                                                    // 
				TextBox1->Clear();                 // удаление текста из TextBox
			}

			if (comboBox1->SelectedIndex == 2) {                       //
				for (int i = 0; i < dataGridView1->RowCount; i++)
				{

					dataGridView1->Rows[i]->Selected = false;
					for (int j = 0; j < dataGridView1->ColumnCount; j++)
						if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr) {
							if (dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Contains(TextBox1->Text) && TextBox1->Text)       // поиск в бд 
							{
								dataGridView1->Rows[i]->Selected = true;
								break;

							}
						}

				}                              //
				TextBox1->Clear();            // удаление текста из TextBox
			}


		}
	}


private: System::Void TextBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if (comboBox1->SelectedIndex == 1) {                          //

		if ((e->KeyChar >= (char)48) && (e->KeyChar <= (char)57))      // если выбран  dataGridView с книгами, в TextBox нельзя вводить цифры 
			e->Handled = true;
	}                     //
	else
	{

	}
}


private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	oleDbDataAdapter1->Update(dataSet1->Tables[0]);   //
	oleDbDataAdapter2->Update(dataSet2->Tables[0]);   // Сохранение данных в бд 
	oleDbDataAdapter3->Update(dataSet3->Tables[0]);   //
}
private: System::Void button2_Click_2(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex == 0) {      //
		this->dataTable1->Clear();                   
		this->oleDbDataAdapter1->Fill(dataTable1);      //обновление бд 
		dataGridView3->DataSource = nullptr;
		dataGridView3->DataSource = this->dataTable1;

	}                                        //   
	if (comboBox1->SelectedIndex == 1) {        //     
		this->dataTable2->Clear();
		this->oleDbDataAdapter2->Fill(dataTable2);             //обновление бд 
		dataGridView2->DataSource = nullptr;
		dataGridView2->DataSource = this->dataTable2;

	}                                             //
	if (comboBox1->SelectedIndex == 2) {                   //
		this->dataTable3->Clear();
		this->oleDbDataAdapter3->Fill(dataTable3);              //обновление бд 
		dataGridView1->DataSource = nullptr;
		dataGridView1->DataSource = this->dataTable3;

	}                                                      // 
}
private: System::Void toolStripComboBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex == 0) {  
		dataGridView1->Hide();
		dataGridView2->Hide();             
		dataGridView3->Show();             // скрытие всех dataGridView и открытие dataGridView3
		dataGridView4->Hide();

	}

	if (comboBox1->SelectedIndex == 1) {
		dataGridView1->Hide();
		dataGridView2->Show();                              // скрытие всех dataGridView и открытие dataGridView2
		dataGridView3->Hide();
		dataGridView4->Hide();
	}
	if (comboBox1->SelectedIndex == 2) {
		dataGridView1->Show();                      // скрытие всех dataGridView и открытие dataGridView1
		dataGridView2->Hide();
		dataGridView3->Hide();
		dataGridView4->Hide();
	}
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex == 0) {
		dataGridView1->Hide();
		dataGridView2->Hide();
		dataGridView3->Show();                    // скрытие всех dataGridView и открытие dataGridView3
		dataGridView4->Hide();

	}

	if (comboBox1->SelectedIndex == 1) {
		dataGridView1->Hide();
		dataGridView2->Show();                            // скрытие всех dataGridView и открытие dataGridView2
		dataGridView3->Hide();
		dataGridView4->Hide();
	}
	if (comboBox1->SelectedIndex == 2) {
		dataGridView1->Show();                       // скрытие всех dataGridView и открытие dataGridView1
		dataGridView2->Hide();
		dataGridView3->Hide();
		dataGridView4->Hide();
	}
}

private: System::Void ToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Stream^ myStream;

	saveFileDialog1->Filter = "txt files (*.txt)|*.txt";                                                         //
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (comboBox1->SelectedIndex == 0){
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
			{
				StreamWriter^ myWritet = gcnew StreamWriter(myStream);
				try
				{
					for (int i = 0; i < dataGridView3->RowCount; i++)
					{
						for (int j = 0; j < dataGridView3->ColumnCount; j++)
						{
							myWritet->Write(dataGridView3->Rows[i]->Cells[j]->Value->ToString() + " | ");         //Сохранение таблицы в .txt файл 
						}
						myWritet->WriteLine();
					}

				}
				catch (Exception^ ex)
				{

				}
				finally
				{
					myWritet->Close();
				}

				myStream->Close();
			}
		}                                                                                                     //
}

	if (comboBox1->SelectedIndex == 1) {                                                           //
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
			{
				StreamWriter^ myWritet = gcnew StreamWriter(myStream);
				try
				{
					for (int i = 0; i < dataGridView2->RowCount; i++)
					{
						for (int j = 0; j < dataGridView2->ColumnCount; j++)
						{
							myWritet->Write(dataGridView2->Rows[i]->Cells[j]->Value->ToString() + " | ");                     //Сохранение таблицы в .txt файл 
						}
						myWritet->WriteLine();
					}

				}
				catch (Exception^ ex)
				{

				}
				finally
				{
					myWritet->Close();
				}

				myStream->Close();
			}
		}
	}                                                                                             //
	 
	if (comboBox1->SelectedIndex == 2) {														//
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
			{
				StreamWriter^ myWritet = gcnew StreamWriter(myStream);
				try
				{
					for (int i = 0; i < dataGridView1->RowCount; i++)
					{
						for (int j = 0; j < dataGridView1->ColumnCount; j++)
						{
							myWritet->Write(dataGridView1->Rows[i]->Cells[j]->Value->ToString() + " | ");            //Сохранение таблицы в .txt файл 
						}
						myWritet->WriteLine();
					}

				}
				catch (Exception^ ex)
				{

				}
				finally
				{
					myWritet->Close();
				}

				myStream->Close();
			}
		}
	}																	//

}

};
}


