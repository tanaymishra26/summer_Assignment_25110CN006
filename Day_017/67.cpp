#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    set<int> s(arr1, arr1 + 4);

    cout << "Intersection: ";
    for (int x : arr2) {
        if (s.count(x))
            cout << x << " ";
    }

    return 0;
}