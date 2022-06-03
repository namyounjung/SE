#include "InqSoldItemUI.h"

InqSoldItemUI::InqSoldItemUI() {

}



void InqSoldItemUI::startInterface() {

}



void InqSoldItemUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "3.3. 판매 완료 상품 조회" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}