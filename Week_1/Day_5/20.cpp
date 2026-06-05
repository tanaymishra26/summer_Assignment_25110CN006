#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 1)
    {
        cout << "No prime factor";
        return 0;
    }
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            bool isprime = 1;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isprime = 0;
                    break;
                }
            }
            if (isprime == 1)
            {
                cout << i;
                return 0;
            }
        }
    }

    return 0;
}