#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> names(n);
    for (int i = 0; i < n; i++)
        getline(cin, names[i]);
    sort(names.begin(), names.end());
    for (string s : names)
        cout << s << endl;
    return 0;
}