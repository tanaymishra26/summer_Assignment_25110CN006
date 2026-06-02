#include <iostream>
using namespace std;

int main()
{
    int n, reverse = 0, r;
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        reverse = reverse*10 + r;
        n /= 10;
    }
    cout << reverse;

    return 0;
}