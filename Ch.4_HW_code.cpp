#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Define variables
    int adultTickets;
    int childTickets;
    int snackChoice;
    int snackAmount;

    double snackPrice;
    double subtotal;
    double tax;
    double total;
   
    //Print menu
    cout << "Welcome to the Movie Snack Bar!" << endl;
    cout << endl;

    cout << "Ticket Prices:" << endl;
    cout << "Adult Ticket: $12.00" << endl;
    cout << "Child Ticket: $7.00" << endl;
    cout << endl;

    cout << "Snacks:" << endl;
    cout << "1. Small Popcorn ($4.50)" << endl;
    cout << "2. Large Popcorn ($6.00)" << endl;
    cout << "3. Soft Drink ($3.00)" << endl;
    cout << endl;
    
    //Determine the amount of tickets, snacks, and drinks
    cout << "Enter number of adult tickets: ";
    cin >> adultTickets;

    cout << "Enter number of child tickets: ";
    cin >> childTickets;

    cout << "Choose a snack (1-3): ";
    cin >> snackChoice;

    cout << "Enter number of this snack: ";
    cin >> snackAmount;

    // Determine the snack price
    if (snackChoice == 1)
    {
        snackPrice = 4.50;
    }
    else if (snackChoice == 2)
    {
        snackPrice = 6.00;
    }
    else
    {
        snackPrice = 3.00;
    }

    // Calculate the subtotal
    subtotal = (adultTickets * 12.00) +
               (childTickets * 7.00) +
               (snackAmount * snackPrice);

    // Calculate tax
    tax = subtotal * 0.08;

    // Calculate total
    total = subtotal + tax;

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}