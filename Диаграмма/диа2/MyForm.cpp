#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ���2::MyForm form;
    Application::Run(% form);
}

System::Void ���2::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void ���2::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
