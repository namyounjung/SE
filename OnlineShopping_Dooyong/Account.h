#pragma once
#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	string memName;
	int memRRN;
	string memID;
	string memPW;
	bool memSystemPermission;
	bool loginStatus;
public:
	Account();
	void createAccount(string name, int rrn, string id, string pw);
	void deleteAccount(string name, int rrn, string id, string pw);
	void login(string id, string pw);
	void logout();
};

