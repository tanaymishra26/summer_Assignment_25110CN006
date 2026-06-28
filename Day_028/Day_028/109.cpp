#include <iostream>
using namespace std;

struct Book
{
    int bookId;
    string title;
    string author;
};

int main()
{
    int n = 3;
    Book books[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for book " << i + 1 << endl;
        cout << "Book ID: ";
        cin >> books[i].bookId;
        cout << "Title: ";
        cin >> books[i].title;
        cout << "Author: ";
        cin >> books[i].author;
    }

    cout << "\n----- Library Records -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Book ID: " << books[i].bookId << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << endl;
    }

    return 0;
}
