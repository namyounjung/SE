#include "InqPurchasedItemUI.h"

InqPurchasedItemUI::InqPurchasedItemUI() {

}



void InqPurchasedItemUI::startInterface() {

}



void InqPurchasedItemUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "4.3. ��ǰ ���� ���� ��ȸ" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}