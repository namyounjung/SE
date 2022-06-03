#include "PurchaseUI.h"

PurchaseUI::PurchaseUI() {

}



void PurchaseUI::startInterface() {

}



void PurchaseUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "4.2. 상품 구매" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}