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
	//����� ������ ������ ��� ����������
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("�������� ���� ������ ��� ����������!", "��������!");
		return;
	}
	//������ ������ ��������� ������
	int index = dataGridView1->SelectedRows[0]->Index;

	//��������� ������
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr){
		MessageBox::Show("�� ��� ������ �������!", "��������!");
		return;
	}

	//��������� ������
	String^ Posit = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ Name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ quantity_of_score = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	
	
	//������������ � ��
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";//������ �����������
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ ��
	dbConnection->Open();//��������� ����������
	String^ query = "INSERT INTO [table_kurs] VALUES(" + Posit + ", '" + Name + "', " + quantity_of_score + ")";//������
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	
	
	//��������� ������
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("������ ���������� �������!", "������!");
	else
		MessageBox::Show("������ ���������!", "������!");
	
	//��������� ��
	dbConnection->Close();
	return System::Void();
}

System::Void Databasekursik::MyForm::but_down_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->Rows->Clear();
	//������������ � ��
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";//������ �����������
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ ��
	dbConnection->Open();//��������� ����������
	String^ query = "SELECT * FROM [table_kurs]";//������
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();//��������� ������

	//��������� ������
	if (dbReader->HasRows == false) {
		MessageBox::Show("������ ���������� ������!", "������!");
	}
	else {
		//�������� ������ � ������� �����
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["Posit"], dbReader["Name"], dbReader["quantity_of_score"]);
		}
	}

	//��������� ����e�����
	dbReader->Close();
	dbConnection->Close();
	return System::Void();
}

System::Void Databasekursik::MyForm::but_dell_Click(System::Object^ sender, System::EventArgs^ e)
{
	//����� ������ ������ ��� ����������
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("�������� ���� ������ ��� ����������!", "��������!");
		return;
	}
	//������ ������ ��������� ������
	int index = dataGridView1->SelectedRows[0]->Index;

	//��������� ������
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr)
		{
		MessageBox::Show("�� ��� ������ �������!", "��������!");
		return;
	}

	//��������� ������
	String^ Posit = dataGridView1->Rows[index]->Cells[0]->Value->ToString();


	//������������ � ��
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";//������ �����������
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ ��
	dbConnection->Open();//��������� ����������
	String^ query = "DELETE FROM [table_kurs] WHERE Posit= " + Posit;//������
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	//��������� ������
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("������ ���������� �������!", "������!");
	else
		MessageBox::Show("������ �������!", "������!");

	//��������� ��
	dbConnection->Close();
	return System::Void();
}

System::Void Databasekursik::MyForm::but_upd_Click(System::Object^ sender, System::EventArgs^ e)
{
	//����� ������ ������ ��� ����������
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("�������� ���� ������ ��� ����������!", "��������!");
		return;
	}
	//������ ������ ��������� ������
	int index = dataGridView1->SelectedRows[0]->Index;

	//��������� ������
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr) {
		MessageBox::Show("�� ��� ������ �������!", "��������!");
		return;
	}

	//��������� ������
	String^ Posit = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ Name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ quantity_of_score = dataGridView1->Rows[index]->Cells[2]->Value->ToString();


	//������������ � ��
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=Database.mdb";//������ �����������
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	//��������� ������ ��
	dbConnection->Open();//��������� ����������
	String^ query = "UPDATE [table_kurs] SET Name = '" + Name + "', quantity_of_score = "+ quantity_of_score +" WHERE Posit= " + Posit;//������
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	//��������� ������
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("������ ���������� �������!", "������!");
	else
		MessageBox::Show("������ ��������!", "������!");

	//��������� ��
	dbConnection->Close();
	return System::Void();
}

System::Void Databasekursik::MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Databasekursik::MyForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("��� ��������� ������� ��� ������������ � ������ ������ � �++","��������!");
	return System::Void();
}
