#include "WithdrawalUI.h"

WithdrawalUI::WithdrawalUI() {

}



void WithdrawalUI::startInterface() {

}



void WithdrawalUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "1.2. ȸ��Ż��" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}