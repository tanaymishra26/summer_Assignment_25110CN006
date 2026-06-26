#include <iostream>
using namespace std;
int main()
{
    int balance = 5000, choice, amt;
    cout << "1.Check Balance\n2.Deposit\n3.Withdraw\nEnter choice: ";
    cin >> choice;
    if (choice == 1)
        cout << "Balance = " << balance;
    else if (choice == 2)
    {
        cin >> amt;
        balance += amt;
        cout << "Balance = " << balance;
    }
    else if (choice == 3)
    {
        cin >> amt;
        if (amt <= balance)
        {
            balance -= amt;
            cout << "Balance = " << balance;
        }
        else
            cout << "Insufficient balance";
    }
    else
        cout << "Invalid choice";
    return 0;
}