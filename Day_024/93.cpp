#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() == str2.length() &&
        (str1 + str1).find(str2) != string::npos) {
        cout << "String is a rotation." << endl;
    } else {
        cout << "String is not a rotation." << endl;
    }

    return 0;
}
