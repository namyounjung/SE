#include "SignUp.h"

SignUp::SignUp(string name, string rrn, string id, string pw) {
	Account* newAccount = new Account();
	newAccount->createAccount(name, rrn, id, pw);

	SignUpUI* ui = new SignUpUI();
	ui->outputResult(newAccount);
}