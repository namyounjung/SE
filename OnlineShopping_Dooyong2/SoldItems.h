#pragma once
#include "Items.h"

class SoldItems :
    public Items
{
private:
    Items* soldItemsList[50];
    Items* MySoldItemsList[30];
    int numSoldItems;
    int totalAmount;
    int avgSatisfaction;

public:
    SoldItems();
    void addSoldItems(Items* Item);
    void getMySoldItems(string sid);
    int getMyTotalAmount();
    int getMyAvgSatisfaction();
};

