#pragma once

#include <iostream>
#include <vector>
#include <map>
using namespace std;

#ifndef UNTITLED4_ITEMS_H
#define UNTITLED4_ITEMS_H

#endif //UNTITLED4_ITEMS_H

class items {
public:
    string itemName;
    string itemCompany;
    int itemPrice;
    int itemQuantity;
    int itemSoldQuantity;
    int itemSatisfaction;

    items(string names, string company, int price, int quantity)
        : itemName(names), itemCompany(company), itemPrice(price), itemQuantity(quantity) {};


    static void showItemInform(items& item);
    static void showSoldItemInform(items& item);
    static void showSoldItemStatistic(items& item);

};
