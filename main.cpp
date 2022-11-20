//
//  main.cpp
//  P1P2_final
//
//  Created by Bennett Jackson on 9/17/22.
//

//FIXME: Consturctors

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"


void oputCart(ShoppingCart& cart){

    cout << "OUTPUT SHOPPING CART" << endl << cart.GetCustomerName() << "'s Shopping Cart - " << cart.GetDate() << endl;
    cout << "Number of Items: " << cart.GetNumItemsInCart() << endl << endl;

    cart.PrintTotal();
    cout << endl << "Total: $" << cart.GetCostOfCart()<< endl << endl;
}

void itemDescrip(ShoppingCart& cart){
    
    cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl << cart.GetCustomerName() << "'s Shopping Cart - " << cart.GetDate() << endl << endl;
    cout << "Item Descriptions" << endl;
    
    cart.PrintDescriptions();
    cout << endl;
}

void addItemToCart(ShoppingCart& cart){
    ItemToPurchase item;
    string userIName;
    int userIPrice;
    int userIQ;
    string userIDesc;
    
    cout << "ADD ITEM TO CART" << endl;
    
    cin.ignore();

    cout << "Enter the item name:" << endl;
    getline(cin, userIName);
    item.SetName(userIName);
    
    
    cout << "Enter the item description:" << endl;
    getline(cin, userIDesc);
    item.SetDescription(userIDesc);
    
    
    cout << "Enter the item price:" << endl;
    cin >> userIPrice;
    item.SetPrice(userIPrice);
        
    cout << "Enter the item quantity:" << endl << endl;
    cin >> userIQ;
    item.SetQuantity(userIQ);
    
    cart.AddItem(item);
}

void removeItemFromCart(ShoppingCart& cart){
    string itemRem;
    
    cin.ignore();
    cout << "REMOVE ITEM FROM CART" << endl << "Enter name of item to remove:" << endl;
    getline(cin, itemRem);
    
    cart.RemoveItem(itemRem);
    cout << endl;
}

void changeQ(ShoppingCart& cart){
    string itemQ;
    int newq;
    
    cin.ignore();
    cout << "CHANGE ITEM QUANTITY" << endl << "Enter the item name:" << endl;
    getline(cin, itemQ);
    cout << "Enter the new quantity:" << endl;
    cin >> newq;
    cart.ModItem(itemQ , newq);
    
    cout << endl;
}


void PrintMenu(){
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
}

void ExecuteMenu(char inp , ShoppingCart& cart){

switch(inp){
    case 'a':
        addItemToCart(cart);
        break;
    case 'd':
        removeItemFromCart(cart);
        break;
    case 'c':
        changeQ(cart);
        break;
    case 'i':
        itemDescrip(cart);
        break;
    case 'o':
        oputCart(cart);
        break;
    case 'q':
        break;
}

}


int main(void) {
    
    string userName;
    string userDate;
    char userInp = '\0';
    
    cout << "Enter customer's name:" << endl;
    getline(cin, userName);
    cout << "Enter today's date:" << endl;
    getline(cin, userDate);
    
    ShoppingCart cart(userName, userDate);
    

    cout << endl<< "Customer name: " << userName << endl << "Today's date: " << userDate << endl << endl;
    
    
    while(userInp != 'q'){
        //cin.ignore();
if(userInp == 'q'){
            break;
        }
        PrintMenu();
        cout << endl <<  "Choose an option:";
         cin >> userInp;
    
         cout << endl;

      
         if ((userInp != 'a') || (userInp != 'd') || (userInp != 'c') || (userInp != 'i') || (userInp != 'o') || (userInp != 'q')){
            while((userInp != 'a') && (userInp != 'd') && (userInp != 'c') && (userInp != 'i') && (userInp != 'o') && (userInp != 'q')){
                cout << "Choose an option:" << endl;
                cin.ignore();
                cin >> userInp;
            }
        }

        ExecuteMenu(userInp , cart);
    }
    
    
    return 0;
}





