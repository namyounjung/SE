#include "StatisticSoldItemUI.h"

StatisticSoldItemUI::StatisticSoldItemUI() {

}



void StatisticSoldItemUI::startInterface() {

}



void StatisticSoldItemUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "5.1. �Ǹ� ��ǰ ���" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}