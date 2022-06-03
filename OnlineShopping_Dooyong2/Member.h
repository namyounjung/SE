#pragma once
#include <iostream>
#include "Account.h"

using namespace std;

class Member
{
private:
	Account* memberList[50];
	int numMember;
public:
	Member();
	void addMember(Account* account);
	void subMember(Account* account);
	bool checkMember(Account* account);
	void login(Account* account);
	void logout(Account* account);
};