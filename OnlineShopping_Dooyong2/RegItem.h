#pragma once
#include <iostream>
#include <string>

using namespace std;

class RegItem
{
private:
	string itemName;
	string itemCompany;
	int itemPrice;
	int itemQuantity;
public:
	RegItem(string itemName, string itemCompany, int itemPrice, int itemQuantity);
};

