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

    char maxChar = '\0';
    int maxCount = 0;

    for (auto &entry : freq) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            maxChar = entry.first;
        }
    }

    if (maxChar != '\0')
        cout << "Maximum occurring character: " << maxChar
             << " (appears " << maxCount << " times)" << endl;

    return 0;
}
