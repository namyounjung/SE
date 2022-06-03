#include "SignUpUI.h"

SignUpUI::SignUpUI() {

}



void SignUpUI::startInterface() {

}



void SignUpUI::outputResult(Account* account) {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);
	string name = account->getMemName();
	string rrn = account->getMemRRN();
	string id = account->getMemID();
	string pw = account->getMemPW();

	fout << "1.1. 회원가입" << endl;
	fout << "> " << name << ' ' << rrn << ' ' << id << ' ' << pw << endl;

	if (fout.is_open() == true) fout.close();
}