#include <iostream>
using namespace std;

int main()
{
    int n, prod = 1, r;
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        prod = prod*r;
        n /= 10;
    }
    cout << prod;

    return 0;
}