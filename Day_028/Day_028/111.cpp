#include <iostream>
using namespace std;

struct Ticket
{
    int ticketId;
    string passengerName;
    string destination;
};

int main()
{
    int n = 3;
    Ticket tickets[3];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for ticket " << i + 1 << endl;
        cout << "Ticket ID: ";
        cin >> tickets[i].ticketId;
        cout << "Passenger Name: ";
        cin >> tickets[i].passengerName;
        cout << "Destination: ";
        cin >> tickets[i].destination;
    }

    cout << "\n----- Ticket Bookings -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Ticket ID: " << tickets[i].ticketId << endl;
        cout << "Passenger Name: " << tickets[i].passengerName << endl;
        cout << "Destination: " << tickets[i].destination << endl;
        cout << endl;
    }

    return 0;
}
