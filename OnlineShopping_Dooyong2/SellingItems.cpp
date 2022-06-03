#include "SellingItems.h"



SellingItems::SellingItems() {
	numSellingItems = 0;
}



void SellingItems::addSellingItems(Items* Item) {
	sellingItemsList[numSellingItems++] = Item;
}



void SellingItems::getMySellingItems(string sid) {
	int num = 0;
	for (int i = 0; i < numSellingItems; i++) {
		if (sellingItemsList[i]->getItemSellerID() == sid) {
			MySellingItemsList[num++] = sellingItemsList[i];
		}
	}
}



Items* SellingItems::toSoldItems() {
	Items* Item = NULL;
	int index = 0;

	for (int i = 0; i < numSellingItems; i++) {
		if (sellingItemsList[i]->getItemQuantity() == 0) {
			Item = sellingItemsList[i];
			index = i;
			break;
		}
	}

	for (int k = index; k < numSellingItems; k++) {
		sellingItemsList[k] = sellingItemsList[k + 1];
	}
	numSellingItems--;

	return Item;
}