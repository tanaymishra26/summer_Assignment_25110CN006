#include <iostream>
using namespace std;

void reverseNum(int n)
{
    if (n == 0)
        return;

    cout << n % 10;
    reverseNum(n / 10);
}

int main()
{
    int n;
    cin >> n;

    reverseNum(n);

    return 0;
}