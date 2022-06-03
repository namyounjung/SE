#include "LogoutUI.h"

LogoutUI::LogoutUI() {

}



void LogoutUI::startInterface() {

}



void LogoutUI::outputResult() {
	ofstream fout(OUTPUT_FILE_NAME, ios::app);

	fout << "2.2. ·Î±×¾Æ¿ô" << endl;
	fout << ' ' << endl;

	if (fout.is_open() == true) fout.close();
}