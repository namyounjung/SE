#include "RegItemUI.h"

RegItemUI::RegItemUI() {

}



void RegItemUI::startInterface() {

}



void RegItemUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "3.1. �Ǹ� �Ƿ� ���" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}