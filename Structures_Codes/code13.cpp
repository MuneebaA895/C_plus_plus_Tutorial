#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct InventoryItem
{
    int ItemID;
    string description;
    int AvailableQuantity;
    double price;
};

// Function Prototypes
void getItem(InventoryItem&);        // Pass by reference
void showItem(const InventoryItem&); // Pass by const reference

int main()
{
    InventoryItem item;

    getItem(item);     // structure passed by reference
    showItem(item);    // structure passed by const reference

    return 0;
}

//************************************************************
// Definition of function getItem. This function receives
// a structure by reference and stores user input directly.
//************************************************************

void getItem(InventoryItem &p)
{
    cout << "Enter the item ID: ";
    cin >> p.ItemID;

    cout << "Enter the item description: ";
    cin.ignore();
    getline(cin, p.description);

    cout << "Enter the quantity available: ";
    cin >> p.AvailableQuantity;

    cout << "Enter the item price: ";
    cin >> p.price;
}

//***********************************************************
// Definition of function showItem. This function receives
// a structure by constant reference so it cannot be modified.
//***********************************************************

void showItem(const InventoryItem &p)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Item ID: " << p.ItemID << endl;
    cout << "Description: " << p.description << endl;
    cout << "Units Available: " << p.AvailableQuantity << endl;
    cout << "Price: $" << p.price << endl;
}
