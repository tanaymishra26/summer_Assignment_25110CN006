#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n)
{
    int temp = n;
    int digits = 0;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int n;
    cin >> n;

    if (armstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}