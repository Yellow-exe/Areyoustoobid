#include <ctime>
#include <cstdlib>
#include <windows.h>
#pragma once
int posNum;
int newposNum;
int click = 0;
int noclick = 0;


namespace Areyoustoobid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;












	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(99, 27);
			this->label1->MaximumSize = System::Drawing::Size(600, 300);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcum";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Click here";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"No";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &MyForm::button2_MouseEnter);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(242, 167);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Are you stupid";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		click++;
		if (click == 1) {
			label1->Text = "Are you stupid?";
			button1->Text = "Yes";
			button1 -> Location = System::Drawing::Point(130, 91);
			button2->Location = System::Drawing::Point(40, 91);
			button2->Visible = true;
		}
		if (click == 2) {
			label1->Text = "I knew it :3";
			button1->Visible = false;
			button2->Visible = false;
		}
	}
	private: System::Void button2_MouseEnter(System::Object ^ sender, System::EventArgs ^ e) {

		again:
		srand(time(NULL));
		newposNum = rand() % 5;
		if (posNum == newposNum) {
			goto again;
		}
		else {
			posNum = newposNum;
			noclick++;
		}
		if (posNum == 1) {button2->Location = System::Drawing::Point(10, 80);}
		if (posNum == 2) {button2->Location = System::Drawing::Point(80, 37);}
		if (posNum == 3) {button2->Location = System::Drawing::Point(20, 98);}
		if (posNum == 4) {button2->Location = System::Drawing::Point(15, 17);}
		if (posNum == 5) {button2->Location = System::Drawing::Point(90, 100);}
		if (noclick >3) {
			button2->Text = "Bye";
			button2->Location = System::Drawing::Point(12, 109);
		}
		if (noclick > 4) {
			button2->Visible = false;
		}
		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		again:
		srand(time(NULL));
		newposNum = rand() % 5;
		if (posNum == newposNum) {
			goto again;
		}
		else {
			posNum = newposNum;
			noclick++;
		}
		if (posNum == 1) { button2->Location = System::Drawing::Point(10, 80); }
		if (posNum == 2) { button2->Location = System::Drawing::Point(80, 37); }
		if (posNum == 3) { button2->Location = System::Drawing::Point(6, 27); }
		if (posNum == 4) { button2->Location = System::Drawing::Point(15, 17); }
		if (posNum == 5) { button2->Location = System::Drawing::Point(90, 100); }
		if (noclick > 3) {
			button2->Text = "Bye";
			button2->Location = System::Drawing::Point(12, 109);
		}
		if (noclick > 4) {
			button2->Visible = false;
		}
	}
	
};
}
