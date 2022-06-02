#include <iostream>
#include <map>
using namespace std;

#ifndef UNTITLED4_ACCOUNT_H
#define UNTITLED4_ACCOUNT_H

#endif //UNTITLED4_ACCOUNT_H

class Account {
public:
    string memName;
    string memRRN;
    string memID;
    string memPW;
    bool memSystemPermission;
    map<string, int> itemKey;


    Account(string name, string rrn, string id, string pw)
        : memName(name), memRRN(rrn), memID(id), memPW(pw) {};
};
