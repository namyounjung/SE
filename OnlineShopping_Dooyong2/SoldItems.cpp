#include "SoldItems.h"


SoldItems::SoldItems() {
	numSoldItems = 0;
	totalAmount = 0;
	avgSatisfaction = 0;
}



void SoldItems::addSoldItems(Items* Item) {
	soldItemsList[numSoldItems++] = Item;
}



void SoldItems::getMySoldItems(string sid) {
	int num = 0;
	for (int i = 0; i < numSoldItems; i++) {
		if (soldItemsList[i]->getItemSellerID() == sid) {
			MySoldItemsList[num++] = soldItemsList[i];
		}
	}
}



int SoldItems::getMyTotalAmount() {
	int price = 0;
	int soldQuantity = 0;
	for (int i = 0; i < numSoldItems; i++) {
		price = MySoldItemsList[i]->getItemPrice();
		soldQuantity = MySoldItemsList[i]->getItemSoldQuantity();
		totalAmount += price * soldQuantity;
	}

	return totalAmount;
}



int SoldItems::getMyAvgSatisfaction() {
	int satisfaction = 0;
	int soldQuantity = 0;
	int totalSatisfaction = 0;
	int totalQuantity = 0;
	for (int i = 0; i < numSoldItems; i++) {
		satisfaction = MySoldItemsList[i]->getItemSatisfaction();
		soldQuantity = MySoldItemsList[i]->getItemSoldQuantity();
		totalSatisfaction += satisfaction * soldQuantity;
		totalQuantity += MySoldItemsList[i]->getItemSoldQuantity();
	}
	avgSatisfaction = totalSatisfaction / totalQuantity;

	return avgSatisfaction;
}