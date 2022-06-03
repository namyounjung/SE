#pragma once
#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	string memName;
	string memRRN;
	string memID;
	string memPW;
	bool memSystemPermission;

public:
	Account();
	void createAccount(string name, string rrn, string id, string pw);
	void deleteAccount(string name, string rrn, string id, string pw);
	bool checkAccount(string id, string pw);
	bool loginStatus;
	string getMemName();
	string getMemRRN();
	string getMemID();
	string getMemPW();
};

