#include "SatisfactionAssessmentUI.h"

SatisfactionAssessmentUI::SatisfactionAssessmentUI() {

}



void SatisfactionAssessmentUI::startInterface() {

}



void SatisfactionAssessmentUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "4.4. ��ǰ ���Ÿ����� ��" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}