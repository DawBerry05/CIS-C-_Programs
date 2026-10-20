#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int customers;

    cout << "How many customers are buying tickets? ";
    cin >> customers;

    if (customers <= 0)
    {
        cout << "Invalid number of customers." << endl;
        return 0;
    }

    cin.ignore();

    int childTickets = 0;
    int adultTickets = 0;
    int seniorTickets = 0;
    int popcornOrders = 0;

    double totalSales = 0.0;

    for (int i = 1; i <= customers; i++)
    {
        string name;
        int age;
        char popcorn;
        double price = 0.0;

        cout << "\nCustomer " << i << endl;

        cout << "Enter customer name: ";
        getline(cin, name);

        cout << "Enter customer age: ";
        cin >> age;

        cout << "Buy popcorn? (Y/N): ";
        cin >> popcorn;

        if (age < 13)
        {
            price = 6.00;
            childTickets++;
        }
        else if (age < 65)
        {
            price = 10.00;
            adultTickets++;
        }
        else
        {
            price = 7.00;
            seniorTickets++;
        }

        if (popcorn == 'Y' || popcorn == 'y')
        {
            price += 5.00;
            popcornOrders++;
        }

        totalSales += price;

        cout << "Ticket total for " << name << ": $" << price << endl;

        cin.ignore();
    }

    cout << fixed << setprecision(2);

    cout << "\n--- Movie Theater Summary ---" << endl;
    cout << "Child tickets: " << childTickets << endl;
    cout << "Adult tickets: " << adultTickets << endl;
    cout << "Senior tickets: " << seniorTickets << endl;
    cout << "Popcorn orders: " << popcornOrders << endl;
    cout << "Total sales: $" << totalSales << endl;

    return 0;
}