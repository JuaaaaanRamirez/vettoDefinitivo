#include "pch.h"
#include "LoginFirstForm.h"
#include "LoginForm.h"
#include "SalesMainForm.h"

System::Void SalesView::LoginFirstForm::btnLoguin_Click(System::Object^ sender, System::EventArgs^ e)
{
    SalesMainForm^ SalesMain = gcnew SalesMainForm();
    LoginForm^ login = gcnew LoginForm(SalesMain);
    login->ShowDialog();
}
