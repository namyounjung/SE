#include <iostream>
#include "project1.h"
using namespace std;

string user_name[];
string user_SSN[];
string user_ID[];
string user_PW[];

string currentID;

void LogInUI::startInterface() {
	cout << "�α��� ȭ��" << endl;
}

void LogInUI::inputIDandPW(string ID, string PW) {
	LogIn logIn;
	logIn.inputIDandPW(ID, PW);
}

void LogIn::inputIDandPW(string ID, string PW) {
	if (checkIDandPW(ID, PW)) {
		cout << ID << PW << endl;
		// fprintf(out_fp, "%s %s\n", ID, PW);
		currentID = ID;
	}
	else {
		// �α��� ����
	}
}

bool LogIn::checkIDandPW(string ID, string PW) {
	if (true) // ���̵� �ߺ� üũ
		return true;
	else
		return false;
}

void LogOutUI::startInterface() {
	cout << "�α׾ƿ� ȭ��" << endl;
}

void LogOutUI::logout() {
	LogOut logout;
	logout.logout();
}

void LogOut::logout() {
	// logout!
	cout << currentID << endl;
	// fprintf(out_fp, "%s\n", currentID);
	currentID = "";
}

void SignUpUI::startInterface() {
	cout << "ȸ������ ȭ��" << endl;
}

void SignUpUI::inputForm(string name, string SSN, string ID, string PW) {
	SignUp signup;
	signup.inputForm(name, SSN, ID, PW);
}

void SignUp::inputForm(string name, string SSN, string ID, string PW) {
	if (checkForm(ID)) {
		// createAccount ȣ��
		cout << name << SSN << ID << PW << endl;
		// fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
	}
	else {
		cout << "���̵� �ߺ���(���� ���� �Ұ�)" << endl;
	}
}

void SignUpUI::confirmForm() {
	SignUp signup;
	signup.confirmForm();
}

void SignUp::confirmForm() {
	// createAccount ȣ��
}

bool SignUp::checkForm(string ID) {
	if (true) // ���̵� �ߺ� üũ
		return true;
	else
		return false;
}

void SignOutUI::startInterface() {
	cout << "ȸ��Ż�� ȭ��" << endl;
}

void SignOutUI::confirmForm() {
	SignOut signout;
	signout.confirmForm();
}

void SignOut::confirmForm() {
	// deleteAccount ȣ��
	// fprintf(out_fp, "  ?????????  \n", ????  );
	// �������Ͽ� ȸ��Ż�� ���� ��¿��� ����
}