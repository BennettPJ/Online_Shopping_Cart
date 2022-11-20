#include <iostream>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

string ShoppingCart::GetCustomerName() const{
    return customerName;
}

string ShoppingCart::GetDate() const{
    return currDate;
}

int ShoppingCart::GetNumItemsInCart() const{
    int i;
    int tot = 0;

    for(i = 0; i < (int) cartItems.size(); ++i){
        tot += cartItems.at(i).GetQuantity();
    }
    
    return tot;
}

int ShoppingCart::GetCostOfCart() const{
    int i;
    int price = 0;

    for(i = 0; i < (int) cartItems.size(); ++i){
        price += cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity();
    }

    return price;
}

void ShoppingCart::PrintTotal(){
    int i;

    if(cartItems.size() > 0){
        for(i = 0; i < (int) cartItems.size(); ++i){
            cartItems.at(i).PrintItemsCost();
        }
    }
    else{
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
}

void ShoppingCart::PrintDescriptions(){
    int i;

    for(i = 0; i < (int) cartItems.size(); ++i){
        cartItems.at(i).PrintItemsDescription();
        }
    }

void ShoppingCart::AddItem(ItemToPurchase item){
    cartItems.push_back(item);
}


void ShoppingCart::RemoveItem(string item){
int i;

for(i = 0; i < (int) cartItems.size(); ++i){
    if(cartItems.at(i).GetName() == item){
        cartItems.erase(cartItems.begin() +i);
        return;
    }

}
cout << "Item not found in cart. Nothing removed." << endl;

}
    

void ShoppingCart::ModItem(string item , int quant){
     int i;
     
    for(i = 0; i < (int) cartItems.size(); ++i){
        if(cartItems.at(i).GetName() == item) {
            cartItems.at(i).SetQuantity(quant);
        }
    }
    cout << "Item not found in cart. Nothing modified." << endl;
}

ShoppingCart::ShoppingCart(string customerNamei, string currDatei){
    customerName = customerNamei;
    currDate = currDatei;
}



