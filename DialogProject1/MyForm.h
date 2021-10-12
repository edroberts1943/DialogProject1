//10/12/21  Edward B. Roberts PE
//
//This project compiles and runs properly in Visual Studio 2019. It is an experimental project to utilize a second windows form as a dialog.
//
//It is, however, not correct.  When '#include "MyForm11.h"  ' is put in this file, the code from MyForm11.h is apparently NOT included.
//To make this project compile and execute, I manually coppied the code from MyForm11.h and inserted it in this file as indicated below.
//
//Until this was done, MyForm11 on line 159 was undefined.




#pragma once

namespace DialogProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
////////////////////////////////////////////////////    Begin code copied from MyForm11.h
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		MyForm11(void)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(309, 152);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 340);
			this->Controls->Add(this->monthCalendar1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);

		}
#pragma endregion
	};


////////////////////////////////////////////////// End of code copied from MyForm11.h
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
	private: System::Windows::Forms::Button^ buttonOpenDialog;
	
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonOpenDialog = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonOpenDialog
			// 
			this->buttonOpenDialog->Location = System::Drawing::Point(543, 201);
			this->buttonOpenDialog->Name = L"buttonOpenDialog";
			this->buttonOpenDialog->Size = System::Drawing::Size(236, 58);
			this->buttonOpenDialog->TabIndex = 0;
			this->buttonOpenDialog->Text = L"Open Dialog";
			this->buttonOpenDialog->UseVisualStyleBackColor = true;
			this->buttonOpenDialog->Click += gcnew System::EventHandler(this, &MyForm::buttonOpenDialog_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1171, 523);
			this->Controls->Add(this->buttonOpenDialog);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void buttonOpenDialog_Click(System::Object^ sender, System::EventArgs^ e) {
		//The Open Dialog Button was clicked.
		MyForm11 dlg;
		dlg.ShowDialog();



	
	}
	};
}
