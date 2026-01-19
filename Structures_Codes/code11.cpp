#include<iostream>
#include<string>
using namespace std;

struct MenuItem {
    string itemName;
    string drinkcategory;
    double priceItem;
};

int main(){
    MenuItem menu[4];
    // Taking menu item details as input
    for(int i = 0; i < 4; i++){
        cout << "Enter details for item " << (i + 1) << ":\n";
        cout << "Item Name: ";
        cin.ignore(); // Use this to avoid errors with getline
        getline(cin, menu[i].itemName);
        cout << "Drink Category: ";
        cin >> menu[i].drinkcategory;
        cout << "Price: ";
        cin >> menu[i].priceItem;
    }

    // Displaying menu item details
    cout << "\n...........Menu Details...........:\n";
    for(int i = 0; i < 4; i++){
        cout << "Item " << (i + 1) <<endl;
        cout << "Name: " << menu[i].itemName <<endl;
        cout << "Category: " << menu[i].drinkcategory <<endl;
        cout << "Price: Rs " << menu[i].priceItem <<endl;
    }
}