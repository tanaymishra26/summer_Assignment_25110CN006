#include <iostream>
using namespace std;

struct Contact
{
    string name;
    string phoneNumber;
};

int main()
{
    int n = 3;
    Contact contacts[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for contact " << i + 1 << endl;
        cout << "Name: ";
        cin >> contacts[i].name;
        cout << "Phone Number: ";
        cin >> contacts[i].phoneNumber;
    }

    cout << "\n----- Contact Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << contacts[i].name << endl;
        cout << "Phone Number: " << contacts[i].phoneNumber << endl;
        cout << endl;
    }

    return 0;
}
