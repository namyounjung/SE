#include "SearchItemUI.h"

SearchItemUI::SearchItemUI() {

}



void SearchItemUI::startInterface() {

}



void SearchItemUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "4.1. ��ǰ ���� �˻�" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}