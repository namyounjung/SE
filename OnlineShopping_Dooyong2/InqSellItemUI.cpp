#include "InqSellItemUI.h"

InqSellItemUI::InqSellItemUI() {

}



void InqSellItemUI::startInterface() {

}



void InqSellItemUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "3.2. ��� ��ǰ ��ȸ" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}