#include "InqSoldItemUI.h"

InqSoldItemUI::InqSoldItemUI() {

}



void InqSoldItemUI::startInterface() {

}



void InqSoldItemUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}