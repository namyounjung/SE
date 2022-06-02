#include <iostream>
#include "project1.h"
using namespace std;

string user_name[];
string user_SSN[];
string user_ID[];
string user_PW[];

string currentID;

void LogInUI::startInterface() {
	cout << "로그인 화면" << endl;
}

void LogInUI::inputIDandPW(string ID, string PW) {
	LogIn logIn;
	logIn.inputIDandPW(ID, PW);
}

void LogIn::inputIDandPW(string ID, string PW) {
	if (checkIDandPW(ID, PW)) {
		cout << ID << PW << endl;
		// fprintf(out_fp, "%s %s\n", ID, PW);
		currentID = ID;
	}
	else {
		// 로그인 실패
	}
}

bool LogIn::checkIDandPW(string ID, string PW) {
	if (true) // 아이디 중복 체크
		return true;
	else
		return false;
}

void LogOutUI::startInterface() {
	cout << "로그아웃 화면" << endl;
}

void LogOutUI::logout() {
	LogOut logout;
	logout.logout();
}

void LogOut::logout() {
	// logout!
	cout << currentID << endl;
	// fprintf(out_fp, "%s\n", currentID);
	currentID = "";
}

void SignUpUI::startInterface() {
	cout << "회원가입 화면" << endl;
}

void SignUpUI::inputForm(string name, string SSN, string ID, string PW) {
	SignUp signup;
	signup.inputForm(name, SSN, ID, PW);
}

void SignUp::inputForm(string name, string SSN, string ID, string PW) {
	if (checkForm(ID)) {
		// createAccount 호출
		cout << name << SSN << ID << PW << endl;
		// fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
	}
	else {
		cout << "아이디 중복됨(계정 생성 불가)" << endl;
	}
}

void SignUpUI::confirmForm() {
	SignUp signup;
	signup.confirmForm();
}

void SignUp::confirmForm() {
	// createAccount 호출
}

bool SignUp::checkForm(string ID) {
	if (true) // 아이디 중복 체크
		return true;
	else
		return false;
}

void SignOutUI::startInterface() {
	cout << "회원탈퇴 화면" << endl;
}

void SignOutUI::confirmForm() {
	SignOut signout;
	signout.confirmForm();
}

void SignOut::confirmForm() {
	// deleteAccount 호출
	// fprintf(out_fp, "  ?????????  \n", ????  );
	// 과제파일에 회원탈퇴에 관한 출력예시 없음
}