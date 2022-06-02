#pragma once
#include "Items.h"

class MyPurchasedItems :
    public Items
{
private:
    Items* MyPurchasedItemsList[30];
    int numPurchasedItems;
    int MyItemSatisfaction;
public:
    MyPurchasedItems();
    void addPurchasedItems(Items* Item);
    void assessmentSatisfaction(string n, int num);
};

