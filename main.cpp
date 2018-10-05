#include <iostream>
using namespace std;

// Variables
double sales,
       northeastSales = 0,
       southeastSales = 0,
       northwestSales = 0,
       southwestSales = 0;

// Function prompts user for sales amount
double getSales() {
    cout << "What is the division's quarterly sales figure? ";
    cin >> sales;
    while (sales < 0) {
        cout << "Error! The Quarterly sales figure "
                "cannot be less than $0.00\n"
                "Enter a valid amount: ";
        cin >> sales;
    }
}

// Function compares sales amount and prints out the highest
void findHighest() {
    if (northeastSales > southeastSales &&
        northeastSales > northwestSales &&
        northeastSales > southwestSales) {
        cout << "Northeast has the highest sales.\n";
    } else if (southeastSales > northeastSales &&
               southeastSales > northwestSales &&
               southeastSales > southwestSales) {
        cout << "Southeast has the highest sales.\n";
    } else if (northwestSales > northeastSales &&
               northwestSales > southeastSales &&
               northwestSales > southwestSales) {
        cout << "Northwest has the highest sales.\n";
    } else {
        cout << "Southwest has the highest sales.\n";
    }
}

int main() {
    // Northeast Division
    cout << "For the Northeast division:" << endl;
    getSales(); // Calls function getSales()
    northeastSales += sales;

    // Southeast Division
    cout << "For the Southeast division:" << endl;
    getSales(); // Calls function getSales()
    southeastSales += sales;

    // Northwest Division
    cout << "For the Northwest division:" << endl;
    getSales(); // Calls function getSales()
    northwestSales += sales;

    // Southwest Division
    cout << "For the Southwest division:" << endl;
    getSales(); // Calls function getSales()
    southwestSales += sales;

    findHighest(); // Calls function to compare sales figures.

    // All 4 division's sales figures
    cout << "Northeast Sales: $" << northeastSales << endl;
    cout << "Southeast Sales: $" << southeastSales << endl;
    cout << "Northwest Sales: $" << northwestSales << endl;
    cout << "Southwest Sales: $" << southwestSales << endl;
    return 0;
}