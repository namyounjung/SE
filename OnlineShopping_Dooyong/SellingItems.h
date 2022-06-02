#pragma once
#include "Items.h"

class SellingItems :
    public Items
{
private:
    Items* sellingItemsList[50];
    Items* MySellingItemsList[30];
    int numSellingItems;

public:
    SellingItems();
    void addSellingItems(Items* Item);
    void getMySellingItems(string sid);
    Items* toSoldItems();
};

