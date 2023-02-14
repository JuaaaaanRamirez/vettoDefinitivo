#include "pch.h"
#include "LoginFirstForm.h"
#include "LoginForm.h"
#include "SalesMainForm.h"

System::Void SalesView::LoginFirstForm::btnLoguin_Click(System::Object^ sender, System::EventArgs^ e)
{
    LoginForm^ login = gcnew LoginForm(SalesMainForm::instance);
    login->ShowDialog();
    this->Close();
}
