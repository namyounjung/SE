#pragma once
#include <iostream>
#include <string>
#include "Account.h"
#include "Member.h"
#include "SignUpUI.h"

using namespace std;

// �α��� ��Ʈ�� Ŭ����
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