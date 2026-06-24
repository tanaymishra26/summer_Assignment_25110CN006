#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    string str, result = "";
    unordered_set<char> seen;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (seen.find(ch) == seen.end()) {
            result += ch;
            seen.insert(ch);
        }
    }

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
