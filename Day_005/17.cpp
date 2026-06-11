#include <iostream>
using namespace std;
int main()
{
    int n, num = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            num = num + i;
        }
    }
    if (n == num)
    {
        cout << "perfect number";
    }
    else
    {
        cout << "not a perfect number";
    }
    return 0;
}