#include "MyPurchasedItems.h"

MyPurchasedItems::MyPurchasedItems() {
	numPurchasedItems = 0;
	MyItemSatisfaction = 0;
}



void MyPurchasedItems::addPurchasedItems(Items* Item) {
	MyPurchasedItemsList[numPurchasedItems++] = Item;
	MyPurchasedItemsList[numPurchasedItems]->updateQuantity();
}



void MyPurchasedItems::assessmentSatisfaction(string n, int num) {
	int num = 0;
	for (int i = 0; i < numPurchasedItems; i++) {
		if (MyPurchasedItemsList[i]->getItemName() == n) {
			MyItemSatisfaction = num;
			MyPurchasedItemsList[i]->updateSatisfaction(num);
			break;
		}
	}
}