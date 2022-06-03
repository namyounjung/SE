#include "InqSellItemUI.h"

InqSellItemUI::InqSellItemUI() {

}



void InqSellItemUI::startInterface() {

}



void InqSellItemUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "3.2. 등록 상품 조회" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}