#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
[STAThread]

int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Databasekursik::MyForm form;
	Application::Run(% form);
}

System::Void Databasekursik::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Databasekursik::MyForm::groupBox1_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Databasekursik::MyForm::but_add_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Выбор нужной строки для добавления
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("Выберите одну строку для дабавления!", "Внимание!");
		return;
	}
	//Узнаем индекс выбранной строки
	int index = dataGridView1->SelectedRows[0]->Index;

	//Проверяем данные
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr){
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	//Считываем данные
	String^ Posit = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ Name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ quantity_of_score = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	
	
	//Подключаемся к БД
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";//строка подключения
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//Выполняем запрос БД
	dbConnection->Open();//открываем соеденение
	String^ query = "INSERT INTO [table_kurs] VALUES(" + Posit + ", '" + Name + "', " + quantity_of_score + ")";//запрос
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	
	
	//Выполняем запрос
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные добавлены!", "Готово!");
	
	//Закрываем БД
	dbConnection->Close();
	return System::Void();
}

System::Void Databasekursik::MyForm::but_down_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->Rows->Clear();
	//Подключаемся к БД
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";//строка подключения
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//Выполняем запрос БД
	dbConnection->Open();//открываем соеденение
	String^ query = "SELECT * FROM [table_kurs]";//запрос
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();//считываем данные

	//Проверяем данные
	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка считывания данных!", "Ошибка!");
	}
	else {
		//Заполним данные в таблицу формы
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["Posit"], dbReader["Name"], dbReader["quantity_of_score"]);
		}
	}

	//Закрываем соедeнение
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void Databasekursik::MyForm::but_dell_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Выбор нужной строки для добавления
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("Выберите одну строку для дабавления!", "Внимание!");
		return;
	}
	//Узнаем индекс выбранной строки
	int index = dataGridView1->SelectedRows[0]->Index;

	//Проверяем данные
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr)
		{
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	//Считываем данные
	String^ Posit = dataGridView1->Rows[index]->Cells[0]->Value->ToString();


	//Подключаемся к БД
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";//строка подключения
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//Выполняем запрос БД
	dbConnection->Open();//открываем соеденение
	String^ query = "DELETE FROM [table_kurs] WHERE Posit= " + Posit;//запрос
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	//Выполняем запрос
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные удалены!", "Готово!");

	//Закрываем БД
	dbConnection->Close();
	return System::Void();
}

System::Void Databasekursik::MyForm::but_upd_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Выбор нужной строки для добавления
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("Выберите одну строку для дабавления!", "Внимание!");
		return;
	}
	//Узнаем индекс выбранной строки
	int index = dataGridView1->SelectedRows[0]->Index;

	//Проверяем данные
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr) {
		MessageBox::Show("Не все данные введены!", "Внимание!");
		return;
	}

	//Считываем данные
	String^ Posit = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ Name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ quantity_of_score = dataGridView1->Rows[index]->Cells[2]->Value->ToString();


	//Подключаемся к БД
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";//строка подключения
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//Выполняем запрос БД
	dbConnection->Open();//открываем соеденение
	String^ query = "UPDATE [table_kurs] SET Name = '" + Name + "', quantity_of_score = "+ quantity_of_score +" WHERE Posit= " + Posit;//запрос
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	//Выполняем запрос
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка!");
	else
		MessageBox::Show("Данные изменены!", "Готово!");

	//Закрываем БД
	dbConnection->Close();
	return System::Void();
}

System::Void Databasekursik::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Databasekursik::MyForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Эта программа создана для ознакомления с базами данных в С++","Внимание!");
	return System::Void();
}
