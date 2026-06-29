#include <iostream>
using namespace std;

int main()
{
    string str;
    int choice;

    do
    {
        cout << "\n----- String Operations System -----" << endl;
        cout << "1. Enter String" << endl;
        cout << "2. Display String Length" << endl;
        cout << "3. Convert to Uppercase" << endl;
        cout << "4. Convert to Lowercase" << endl;
        cout << "5. Reverse the String" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "Enter a string: ";
                cin >> str;
                break;
            }
            case 2:
            {
                cout << "Length of string: " << str.length() << endl;
                break;
            }
            case 3:
            {
                string upperStr = str;
                int upperLen = upperStr.length();
                for (int i = 0; i < upperLen; i++)
                {
                    if (upperStr[i] >= 'a' && upperStr[i] <= 'z')
                    {
                        upperStr[i] = upperStr[i] - 32;
                    }
                }
                cout << "Uppercase string: " << upperStr << endl;
                break;
            }
            case 4:
            {
                string lowerStr = str;
                int lowerLen = lowerStr.length();
                for (int i = 0; i < lowerLen; i++)
                {
                    if (lowerStr[i] >= 'A' && lowerStr[i] <= 'Z')
                    {
                        lowerStr[i] = lowerStr[i] + 32;
                    }
                }
                cout << "Lowercase string: " << lowerStr << endl;
                break;
            }
            case 5:
            {
                string reverseStr = str;
                int n = reverseStr.length();
                for (int i = 0; i < n / 2; i++)
                {
                    char temp = reverseStr[i];
                    reverseStr[i] = reverseStr[n - 1 - i];
                    reverseStr[n - 1 - i] = temp;
                }
                cout << "Reversed string: " << reverseStr << endl;
                break;
            }
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
