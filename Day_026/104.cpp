#include <iostream>
using namespace std;
int main()
{
    int score = 0, ans;
    cout << "1. Capital of India?\n1.Delhi 2.Mumbai\n";
    cin >> ans;
    if (ans == 1)
        score++;
    cout << "2. 5+5=?\n1.8 2.10\n";
    cin >> ans;
    if (ans == 2)
        score++;
    cout << "3. C++ is a?\n1.Language 2.Browser\n";
    cin >> ans;
    if (ans == 1)
        score++;
    cout << "Score = " << score << "/3";
    return 0;
}