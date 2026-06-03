#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n1, n2, gcd,lcm;
    cin >> n1 >> n2;
    for (int i = min(n1, n2); i > 0; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    lcm = (n1*n2)/gcd;
    cout<<lcm;
    return 0;
}