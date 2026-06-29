#include <iostream>
using namespace std;

struct Item
{
    int itemId;
    string itemName;
    int quantity;
    float price;
};

int main()
{
    int n = 3;
    Item items[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for item " << i + 1 << endl;
        cout << "Item ID: ";
        cin >> items[i].itemId;
        cout << "Item Name: ";
        cin >> items[i].itemName;
        cout << "Quantity: ";
        cin >> items[i].quantity;
        cout << "Price: ";
        cin >> items[i].price;
    }

    cout << "\n----- Inventory Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Item ID: " << items[i].itemId << endl;
        cout << "Item Name: " << items[i].itemName << endl;
        cout << "Quantity: " << items[i].quantity << endl;
        cout << "Price: " << items[i].price << endl;
        cout << "Total Value: " << items[i].quantity * items[i].price << endl;
        cout << endl;
    }

    return 0;
}
