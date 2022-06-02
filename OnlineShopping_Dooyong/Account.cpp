#include "Account.h"



Account::Account() {
	memName = "";
	memRRN = 0;
	memID = "";
	memPW = "";
	memSystemPermission = false;
	loginStatus = false;
}



void Account::createAccount(string name, int rrn, string id, string pw) {
	memName = name;
	memRRN = rrn;
	memID = id;
	memPW = pw;
	memSystemPermission = true;
}



void Account::deleteAccount(string name, int rrn, string id, string pw) {
	memName = "";
	memRRN = 0;
	memID = "";
	memPW = "";
	memSystemPermission = false;
}



void Account::login(string id, string pw) {
	if (memID == id && memPW == pw)
		loginStatus = true;
}



void Account::logout() {
	loginStatus = false;
}