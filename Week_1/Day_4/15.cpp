#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, num, r, count = 0, a = 0;
    cin >> num;
    n = num;
    if (n<0)
    {
        cout << "not armstrong";
        return 0;
    }
    if (n==0)
    {
        cout << "armstrong";
        return 0;
    }
    
    while (n > 0)
    {
        n = n / 10;
        count = count + 1;
    }
    n = num;
    while (n > 0)
    {
        r = n % 10;
        a = a + pow(r, count);
        n = n / 10;
    }
    if (a == num)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not armstrong";
    }

    return 0;
}