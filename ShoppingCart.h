#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include "ItemToPurchase.h"
#include <string>
#include <vector>
using namespace std;

class ShoppingCart {
public:
    string GetCustomerName() const;
    string GetDate() const;
    void AddItem(ItemToPurchase item);
    void RemoveItem(string item);
    void ModItem(string item , int quant); //add in
    int GetNumItemsInCart() const;
    int GetCostOfCart() const;
    void PrintTotal();
    void PrintDescriptions();
    ShoppingCart(string customerName = "none", string currDate = "January 1, 2016");

    
private:
    string customerName;
    string currDate;
    vector <ItemToPurchase> cartItems;
    
};
#endif





