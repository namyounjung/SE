#pragma once
#include <iostream>
#include <string>
#include "Account.h"
#include "Member.h"
#include "SignUpUI.h"

using namespace std;

// 로그인 컨트롤 클래스
class SignUp
{
private:
	string name;
	string rrn;
	string id;
	string pw;
public:
	SignUp(string name, string rrn, string id, string pw);
};