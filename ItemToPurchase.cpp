#include <iostream>
using namespace std;

#include "ItemToPurchase.h"


void ItemToPurchase::SetName(string userName){ //This sets the items names based on the user input
    itemName = userName;
    }

void ItemToPurchase::SetPrice(int userPrice){ //This sets the items price based on user input
    itemPrice = userPrice;
    }

void ItemToPurchase::SetQuantity(int userQuantity){
    itemQuantity = userQuantity;
    }

void ItemToPurchase::SetDescription(string userDesc){
    itemDesc = userDesc;
    }

string ItemToPurchase::GetName() const{ //This gets the items name
    return itemName;
    }

int ItemToPurchase::GetPrice() const{ //This gets the items price
    return itemPrice;
    }

int ItemToPurchase::GetQuantity() const{
    return itemQuantity;
    }

string ItemToPurchase::GetDescription() const{
    return itemDesc;
    }


void ItemToPurchase::PrintItemsCost(){
    int top;
    
    cout << GetName() << " " << GetQuantity() << " @ $" << GetPrice() << " = ";
    top = GetQuantity() * GetPrice();
    cout << "$" << top << endl;
    }

void ItemToPurchase::PrintItemsDescription(){
    
    cout << GetName() << ": " << GetDescription() << endl;
    }


ItemToPurchase::ItemToPurchase(string itemNamei, string itemDesci, int itemPricei, int itemQuantityi){
    itemName = itemNamei;
    itemDesc = itemDesci;
    itemPrice = itemPricei;
    itemQuantity = itemQuantityi;
}

