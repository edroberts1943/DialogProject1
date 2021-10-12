#include "MyForm.h"
#include "Dialog1.h"
#include  "IDD_DIALOG1.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void main(array <String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    DialogProject1::MyForm form;                                              // Change project name as needed.     DO NOT FORGET!
    Application::Run(% form);
}

