#include <iostream>
using namespace std;

int main()
{
    int num, reverse = 0, r, n;
    cin >> num;
    n = num;
    while (n > 0)
    {
        r = n % 10;
        reverse = reverse * 10 + r;
        n /= 10;
    }
    if (reverse == num)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }

    return 0;
}