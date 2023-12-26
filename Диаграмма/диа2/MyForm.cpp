#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    диа2::MyForm form;
    Application::Run(% form);
}

System::Void диа2::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void диа2::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
