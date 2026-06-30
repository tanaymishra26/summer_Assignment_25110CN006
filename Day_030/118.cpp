#include <iostream>
using namespace std;

struct Book
{
    string title;
    string author;
    bool isAvailable;
};

int main()
{
    int n = 3;
    Book books[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for book " << i + 1 << endl;
        cout << "Title: ";
        cin >> books[i].title;
        cout << "Author: ";
        cin >> books[i].author;
        books[i].isAvailable = true;
    }

    cout << "\n----- Library Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        if (books[i].isAvailable == true)
        {
            cout << "Status: Available" << endl;
        }
        else
        {
            cout << "Status: Issued" << endl;
        }
        cout << endl;
    }

    return 0;
}
