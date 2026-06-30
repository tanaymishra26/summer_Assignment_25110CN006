#include <iostream>
using namespace std;

struct Product
{
    string name;
    int quantity;
    float price;
};

void getProductDetails(Product products[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for product " << i + 1 << endl;
        cout << "Name: ";
        cin >> products[i].name;
        cout << "Quantity: ";
        cin >> products[i].quantity;
        cout << "Price: ";
        cin >> products[i].price;
    }
}

void displayProductDetails(Product products[], int n)
{
    cout << "\n----- Product Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << products[i].name << endl;
        cout << "Quantity: " << products[i].quantity << endl;
        cout << "Price: " << products[i].price << endl;
        cout << endl;
    }
}

float calculateTotalValue(Product products[], int n)
{
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        total = total + (products[i].quantity * products[i].price);
    }
    return total;
}

int main()
{
    int n = 3;
    Product products[3];

    getProductDetails(products, n);
    displayProductDetails(products, n);

    float totalValue = calculateTotalValue(products, n);
    cout << "Total Value of All Products: " << totalValue << endl;

    return 0;
}
