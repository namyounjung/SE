#include "Account.h"



Account::Account() {
	memName = "";
	memRRN = "";
	memID = "";
	memPW = "";
	memSystemPermission = false;
	loginStatus = false;
}



void Account::createAccount(string name, string rrn, string id, string pw) {
	memName = name;
	memRRN = rrn;
	memID = id;
	memPW = pw;
	memSystemPermission = true;
}



void Account::deleteAccount(string name, string rrn, string id, string pw) {
	memName = "";
	memRRN = "";
	memID = "";
	memPW = "";
	memSystemPermission = false;
}



bool Account::checkAccount(string id, string pw) {
	bool check = false;

	if (memID == id && memPW == pw)
		check = true;

	return check;
}



string Account::getMemName() {
	return memName;
}



string Account::getMemRRN() {
	return memRRN;
}



string Account::getMemID() {
	return memID;
}



string Account::getMemPW() {
	return memPW;
}