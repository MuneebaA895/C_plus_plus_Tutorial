#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct InventoryItem
{
    int ItemID;
    string description;
    int AvaliableQuantity;
    double price;
};

// Function Prototypes
InventoryItem getItem(InventoryItem);   // Pass by value, return structure
void showItem(InventoryItem);           // Pass by value

int main()
{
    InventoryItem item;

    item = getItem(item);   // receive updated structure
    showItem(item);
    return 0;
}
//************************************************************
// Definition of function getItem. This function uses pass by
// value and returns the updated structure.
//************************************************************
InventoryItem getItem(InventoryItem p)   // Pass by value
{
    cout << "Enter the item ID: ";
    cin >> p.ItemID;

    cout << "Enter the item description: ";
    cin.ignore();
    getline(cin, p.description);

    cout << "Enter the quantity available: ";
    cin >> p.AvaliableQuantity;

    cout << "Enter the item price: ";
    cin >> p.price;
    return p;   // return updated structure
}

//***********************************************************
// Definition of function showItem. This function accepts
// a structure by value and displays its contents.
//***********************************************************

void showItem(InventoryItem p)   // Pass by value
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part Number: " << p.ItemID << endl;
    cout << "Description: " << p.description << endl;
    cout << "Units On Hand: " << p.AvaliableQuantity << endl;
    cout << "Price: $" << p.price << endl;
}
