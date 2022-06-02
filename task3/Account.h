#pragma once
#include <iostream>
#include <map>
#include <vector>
#include "items.h"
using namespace std;

#ifndef UNTITLED4_ACCOUNT_H
#define UNTITLED4_ACCOUNT_H

#endif //UNTITLED4_ACCOUNT_H

class Account {
public:
    //private:
    string memName;
    string memRRN;
    string memID;
    string memPW;
    bool memSystemPermission;
    bool loginStatus;
    vector<int> buyItemsKeys;

    //public: 
    Account(string name, string rrn, string id, string pw)
        : memName(name), memRRN(rrn), memID(id), memPW(pw) {};
    void createAccount(string name, string rrn, string id, string pw);
    void deleteAccount(string name, string rrn, string id, string pw);
    void login(string id, string pw);
    void logout();
};
