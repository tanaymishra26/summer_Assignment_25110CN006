#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    }

    bool found = false;
    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << "First non-repeating character: " << ch << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}
