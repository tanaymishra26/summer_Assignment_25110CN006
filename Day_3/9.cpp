#include <iostream>
using namespace std;

int main()
{
    int n, isprime = 1;
    cin >> n;

    if (n <= 1)
        isprime = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            isprime = 0;
    }

    if (isprime == 1)
        cout << "prime number";
    else
        cout << "not a prime number";

    return 0;
}
