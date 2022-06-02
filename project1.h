#pragma once
#include <iostream>
using namespace std;

class LogInUI {
public:
	void startInterface();
	void inputIDandPW(string ID, string PW);

};

class LogIn {
public:
	void inputIDandPW(string ID, string PW);
	bool checkIDandPW(string ID, string PW);
};

class LogOutUI {
public:
	void startInterface();
	void logout();
};

class LogOut {
public:
	void logout();
};

class SignUpUI {
public:
	void startInterface();
	void inputForm(string name, string SSN, string ID, string PW);
	void confirmForm();
};

class SignUp {
public:
	void inputForm(string name, string SSN, string ID, string PW);
	void confirmForm();
	bool checkForm(string ID);
};

class SignOutUI {
public:
	void startInterface();
	void confirmForm();
};

class SignOut {
public:
	void confirmForm();
};