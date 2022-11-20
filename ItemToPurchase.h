#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase { //this creates a class for the users shopping cart
public:
    void SetName(string userName);
    string GetName() const;
    void SetPrice(int userPrice);
    int GetPrice() const;
    void SetQuantity(int userQuantity);
    int GetQuantity() const;
    void SetDescription(string userDesc);
    string GetDescription() const;
    void PrintItemsCost();
    void PrintItemsDescription();
    ItemToPurchase(string itemName = "none" , string itemDesc = "none" , int itemPrice = 0 , int itemQuantity = 0);
    
private:
    string itemName;
    string itemDesc;
    int itemPrice;
    int itemQuantity;
    };
#endif
