#pragma once

#include <iostream>
#include <string>

using namespace std;

class Items
{
private:
	string itemName;
	string itemCompany;
	int itemPrice;
	int itemQuantity;
	int itemSoldQuantity;
	int itemSatisfaction;
	string itemSellerID;

public:
	Items();
	void setItemDetails(string n, string c, int p, int q, string sid);
	string getItemName();
	string getItemCompany();
	int getItemPrice();
	int getItemQuantity();
	int getItemSoldQuantity();
	int getItemSatisfaction();
	string getItemSellerID();
	void updateQuantity();
	void updateSatisfaction(int num);
};