#include "RegItemUI.h"

RegItemUI::RegItemUI() {

}



void RegItemUI::startInterface() {

}



void RegItemUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "3.1. 판매 의류 등록" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}