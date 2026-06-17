#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {4, 5, 6};

    vector<int> merged;

    for (int x : arr1)
        merged.push_back(x);

    for (int x : arr2)
        merged.push_back(x);

    cout << "Merged Array: ";
    for (int x : merged)
        cout << x << " ";

    return 0;
}