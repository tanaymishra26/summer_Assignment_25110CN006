#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    set<int> s;

    for (int x : arr1)
        s.insert(x);

    for (int x : arr2)
        s.insert(x);

    cout << "Union: ";
    for (int x : s)
        cout << x << " ";

    return 0;
}