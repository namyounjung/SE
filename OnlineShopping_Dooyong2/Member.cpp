#include "Member.h"



Member::Member() {
	numMember = 0;
}



void Member::addMember(Account* account) {
	memberList[numMember++] = account;
}



void Member::subMember(Account* account) {
	int index = 0;

	for (int i = 0; i < numMember; i++) {
		if (memberList[i] == account) {
			index = i;
			break;
		}
	}

	for (int k = index; k < numMember; k++) {
		memberList[k] = memberList[k + 1];
	}
	numMember--;
}



bool Member::checkMember(Account* account) {
	bool check = false;

	for (int i = 0; i < numMember; i++) {
		if (memberList[i] == account) {
			check = true;
		}
	}

	return check;
}



void Member::login(Account* account) {
	for (int i = 0; i < numMember; i++) {
		if (memberList[i] == account) {
			memberList[i]->loginStatus = true;
		}
	}
}



void Member::logout(Account* account) {
	for (int i = 0; i < numMember; i++) {
		if (memberList[i] == account) {
			memberList[i]->loginStatus = false;
		}
	}
}