#include <iostream>
using namespace std;
int main()
{
    int n, a, r, factorial = 1, sn = 0;
    cin >> n;
    a = n;
    while (a > 0)
    {
        r = a % 10;
        for (int i = r; i > 0; i--)
        {
            factorial = factorial * i;
        }
        sn = sn + factorial;
        factorial = 1;
        a = a / 10;
    }
    if (sn == n)
        cout << "strong number";
    else
    {
        cout << "not a strong number";
    }
    return 0;
}