#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n1, n2, a;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {

        a = i;
        if (a == 0)
        {
            cout << 0 << " ";
        }
        int count = 0;
        while (a > 0)
        {
            a = a / 10;
            count++;
        }
        a = i;
        int r = 0, num = 0;
        while (a > 0)
        {
            r = a % 10;
            num = num + pow(r, count);
            a = a / 10;
        }
        if (num == i)
            cout << i << " ";
    }
    return 0;
}