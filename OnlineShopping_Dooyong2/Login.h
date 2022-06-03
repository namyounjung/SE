#pragma once
#include <iostream>
#include <string>
#include "Account.h"
#include "Member.h"
#include "LoginUI.h"

using namespace std;

class Login
{
private:
	string memID;
	string memPW;
public:
	Login(string memID, string memPW);
};

