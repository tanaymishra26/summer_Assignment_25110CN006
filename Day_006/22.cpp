#include <iostream>
using namespace std;

int main()
{
    int b,d,dec,p;
    cin >> b;

    dec = 0;
    p = 1;

    while (b > 0)
    {
        d = b % 10;
        dec += d * p;
        p *= 2;
        b /= 10;
    }

    cout << dec;

    return 0;
}