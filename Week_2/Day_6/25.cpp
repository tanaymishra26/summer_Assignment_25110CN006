#include <iostream>
using namespace std;

int main()
{
    int x, n , a;
    cin >> x >> n;

    a = 1;

    for (int i = 1; i <= n; i++)
    {
        a *= x;
    }

    cout << a;

    return 0;
}