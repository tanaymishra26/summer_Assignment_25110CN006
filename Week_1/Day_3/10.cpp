#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int isprime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
            cout << i << endl;
    }

    return 0;
}