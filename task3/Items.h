#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

#ifndef UNTITLED4_ITEMS_H
#define UNTITLED4_ITEMS_H

#endif //UNTITLED4_ITEMS_H

using namespace std;

class Items {
public:
	string itemName;
	string itemCompany;
	string itemSellerID;
	int itemPrice;
	int itemQuantity;
	int itemSoldQuantity = 0;
	int itemSatisfaction = 0;
	int rateNum = 0;

	Items();
	Items(string names, string company, string seller, int price, int quantity)
		: itemName(names), itemCompany(company), itemSellerID(seller), itemPrice(price), itemQuantity(quantity) {};

	void setItemDetails(string n, string c, int p, int q, string sid);
	string getItemName();
	string getItemCompany();
	int getItemPrice();
	int getItemQuantity();
	int getItemSoldQuantity();
	int getItemSatisfaction();
	string getItemSellerID();
	void updateQuantity();
	static void showItemInform(Items& item);
	static void showSoldItemInform(Items& item);
	static void showSoldItemStatistic(Items& item);
};
