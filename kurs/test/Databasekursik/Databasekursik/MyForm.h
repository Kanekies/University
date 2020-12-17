#pragma once

namespace Databasekursik {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ действиеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обновитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;

	private: System::Windows::Forms::Button^ but_down;
	private: System::Windows::Forms::Button^ but_add;
	private: System::Windows::Forms::Button^ but_dell;
	private: System::Windows::Forms::Button^ but_upd;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обновитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->but_down = (gcnew System::Windows::Forms::Button());
			this->but_add = (gcnew System::Windows::Forms::Button());
			this->but_dell = (gcnew System::Windows::Forms::Button());
			this->but_upd = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->действиеToolStripMenuItem,
					this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(681, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действиеToolStripMenuItem
			// 
			this->действиеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->загрузитьToolStripMenuItem,
					this->добавитьToolStripMenuItem, this->удалитьToolStripMenuItem, this->обновитьToolStripMenuItem
			});
			this->действиеToolStripMenuItem->Name = L"действиеToolStripMenuItem";
			this->действиеToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->действиеToolStripMenuItem->Text = L"Действие";
			// 
			// загрузитьToolStripMenuItem
			// 
			this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->загрузитьToolStripMenuItem->Text = L"Загрузить";
			// 
			// добавитьToolStripMenuItem
			// 
			this->добавитьToolStripMenuItem->Name = L"добавитьToolStripMenuItem";
			this->добавитьToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->добавитьToolStripMenuItem->Text = L"Добавить";
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			// 
			// обновитьToolStripMenuItem
			// 
			this->обновитьToolStripMenuItem->Name = L"обновитьToolStripMenuItem";
			this->обновитьToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->обновитьToolStripMenuItem->Text = L"Обновить";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem });
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem
			// 
			this->этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem->Name = L"этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem";
			this->этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem->Size = System::Drawing::Size(441, 22);
			this->этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem->Text = L"Эта программа создана для ознакомления с базами данных в С++";
			this->этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// but_down
			// 
			this->but_down->Location = System::Drawing::Point(8, 13);
			this->but_down->Name = L"but_down";
			this->but_down->Size = System::Drawing::Size(144, 47);
			this->but_down->TabIndex = 1;
			this->but_down->Text = L"Загрузить";
			this->but_down->UseVisualStyleBackColor = true;
			this->but_down->Click += gcnew System::EventHandler(this, &MyForm::but_down_Click);
			// 
			// but_add
			// 
			this->but_add->Location = System::Drawing::Point(8, 80);
			this->but_add->Name = L"but_add";
			this->but_add->Size = System::Drawing::Size(144, 47);
			this->but_add->TabIndex = 2;
			this->but_add->Text = L"Добавить";
			this->but_add->UseVisualStyleBackColor = true;
			this->but_add->Click += gcnew System::EventHandler(this, &MyForm::but_add_Click);
			// 
			// but_dell
			// 
			this->but_dell->Location = System::Drawing::Point(8, 133);
			this->but_dell->Name = L"but_dell";
			this->but_dell->Size = System::Drawing::Size(144, 47);
			this->but_dell->TabIndex = 3;
			this->but_dell->Text = L"Удалить";
			this->but_dell->UseVisualStyleBackColor = true;
			this->but_dell->Click += gcnew System::EventHandler(this, &MyForm::but_dell_Click);
			// 
			// but_upd
			// 
			this->but_upd->Location = System::Drawing::Point(8, 197);
			this->but_upd->Name = L"but_upd";
			this->but_upd->Size = System::Drawing::Size(144, 47);
			this->but_upd->TabIndex = 4;
			this->but_upd->Text = L"Обновить";
			this->but_upd->UseVisualStyleBackColor = true;
			this->but_upd->Click += gcnew System::EventHandler(this, &MyForm::but_upd_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(23, 107);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(404, 224);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Рейтинг";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Имя";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Количество очков";
			this->Column3->Name = L"Column3";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->but_upd);
			this->groupBox1->Controls->Add(this->but_dell);
			this->groupBox1->Controls->Add(this->but_add);
			this->groupBox1->Controls->Add(this->but_down);
			this->groupBox1->Location = System::Drawing::Point(460, 88);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(174, 274);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Действия программы";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 361);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(697, 400);
			this->MinimumSize = System::Drawing::Size(697, 400);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"database zmeiki";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void этаПрограммаСозданаДляОзнакомленияСToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void but_add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void but_down_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void but_dell_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void but_upd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
