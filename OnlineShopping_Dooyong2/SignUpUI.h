#pragma once
#include <iostream>
#include <fstream>
#include "Account.h"

using namespace std;

#define OUTPUT_FILE_NAME "output.txt"

class SignUpUI
{
private:
public:
	SignUpUI();
	void startInterface();
	void outputResult(Account* account);
};

