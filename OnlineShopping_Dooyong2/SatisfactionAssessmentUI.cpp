#include "SatisfactionAssessmentUI.h"

SatisfactionAssessmentUI::SatisfactionAssessmentUI() {

}



void SatisfactionAssessmentUI::startInterface() {

}



void SatisfactionAssessmentUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "4.4. 상품 구매만족도 평가" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}