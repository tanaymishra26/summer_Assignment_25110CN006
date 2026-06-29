#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int size = 0;
    int choice;

    do
    {
        cout << "\n----- Array Operations System -----" << endl;
        cout << "1. Enter Array Elements" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Find Sum of Elements" << endl;
        cout << "4. Find Largest Element" << endl;
        cout << "5. Find Smallest Element" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "Enter size of array (max 20): ";
                cin >> size;
                for (int i = 0; i < size; i++)
                {
                    cout << "Enter element " << i + 1 << ": ";
                    cin >> arr[i];
                }
                break;
            }
            case 2:
            {
                cout << "Array elements: ";
                for (int i = 0; i < size; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            }
            case 3:
            {
                int sum = 0;
                for (int i = 0; i < size; i++)
                {
                    sum = sum + arr[i];
                }
                cout << "Sum of elements: " << sum << endl;
                break;
            }
            case 4:
            {
                int largest = arr[0];
                for (int i = 1; i < size; i++)
                {
                    if (arr[i] > largest)
                    {
                        largest = arr[i];
                    }
                }
                cout << "Largest element: " << largest << endl;
                break;
            }
            case 5:
            {
                int smallest = arr[0];
                for (int i = 1; i < size; i++)
                {
                    if (arr[i] < smallest)
                    {
                        smallest = arr[i];
                    }
                }
                cout << "Smallest element: " << smallest << endl;
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
