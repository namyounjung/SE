#include "LoginUI.h"

LoginUI::LoginUI() {

}



void LoginUI::startInterface() {

}



void LoginUI::outputResult(Account* account) {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);
	string id = account->getMemID();
	string pw = account->getMemPW();

	fout << "2.1. ·Î±×ÀÎ" << endl;
	fout << "> " << id << ' ' << pw << endl;

	if (fout.is_open() == true) fout.close();
}