
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int customers;

    cout << "How many customers are ordering? ";
    cin >> customers;

    if (customers <= 0)
    {
        cout << "Invalid number of customers." << endl;
        return 0;
    }

    cin.ignore();

    int smallOrders = 0;
    int mediumOrders = 0;
    int largeOrders = 0;
    int proteinAddOns = 0;

    double totalSales = 0.0;

    for (int i = 1; i <= customers; i++)
    {
        string name;
        int size;
        char protein;
        double price = 0.0;

        cout << "\nCustomer " << i << endl;

        cout << "Enter customer name: ";
        getline(cin, name);

        cout << "Smoothie size (1=Small, 2=Medium, 3=Large): ";
        cin >> size;

        cout << "Add protein? (Y/N): ";
        cin >> protein;

        if (size == 1)
        {
            price = 4.00;
            smallOrders++;
        }
        else if (size == 2)
        {
            price = 5.50;
            mediumOrders++;
        }
        else if (size == 3)
        {
            price = 7.00;
            largeOrders++;
        }

        if (protein == 'Y' || protein == 'y')
        {
            price += 1.50;
            proteinAddOns++;
        }

        totalSales += price;

        cout << "Order for " << name << ": $" << price << endl;

        cin.ignore();
    }

    cout << fixed << setprecision(2);

    cout << "\n--- Smoothie Shop Summary ---" << endl;
    cout << "Small smoothies: " << smallOrders << endl;
    cout << "Medium smoothies: " << mediumOrders << endl;
    cout << "Large smoothies: " << largeOrders << endl;
    cout << "Protein add-ons: " << proteinAddOns << endl;
    cout << "Total sales: $" << totalSales << endl;

    return 0;
}
