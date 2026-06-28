#include <iostream>
using namespace std;

struct Account
{
    int accountNumber;
    string holderName;
    float balance;
};

int main()
{
    int n = 3;
    Account accounts[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for account " << i + 1 << endl;
        cout << "Account Number: ";
        cin >> accounts[i].accountNumber;
        cout << "Holder Name: ";
        cin >> accounts[i].holderName;
        cout << "Initial Balance: ";
        cin >> accounts[i].balance;
    }

    cout << "\n----- Bank Account Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Account Number: " << accounts[i].accountNumber << endl;
        cout << "Holder Name: " << accounts[i].holderName << endl;
        cout << "Balance: " << accounts[i].balance << endl;
        cout << endl;
    }

    return 0;
}
