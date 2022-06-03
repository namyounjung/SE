#include "Items.h"



Items::Items() {
	itemName = "";
	itemCompany = "";
	itemPrice = 0;
	itemQuantity = 0;
	itemSoldQuantity = 0;
	itemSatisfaction = 0;
	itemSellerID = "";
}

void Items::setItemDetails(string n, string c, int p, int q, string sid) {
	itemName = n;
	itemCompany = c;
	itemPrice = p;
	itemQuantity = q;
	itemSellerID = sid;
}



string Items::getItemName() {
	return itemName;
}



string Items::getItemCompany() {
	return itemCompany;
}



int Items::getItemPrice() {
	return itemPrice;
}



int Items::getItemQuantity() {
	return itemQuantity;
}



int Items::getItemSoldQuantity() {
	return itemSoldQuantity;
}



int Items::getItemSatisfaction() {
	return itemSatisfaction;
}



string Items::getItemSellerID() {
	return itemSellerID;
}



void Items::updateQuantity() {
	itemQuantity--;
	itemSoldQuantity++;
}



void Items::updateSatisfaction(int num) {
	int totalSatisfaction = itemSoldQuantity * itemSatisfaction + num;
	itemSatisfaction = totalSatisfaction / itemSoldQuantity;
}