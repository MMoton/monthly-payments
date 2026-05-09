//
//  main.cpp
//  monthly payments
//
//  Created by Maya Moton on 4/27/26.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double loan, annual, monthly, payment, totalPaid, interestPaid;
    int numPayments;

    // Input
    cout << "Loan Amount: ";
    cin >> loan;

    cout << "Annual Interest Rate (%): ";
    cin >> annual;

    cout << "Number of Payments: ";
    cin >> numPayments;

    // Convert annual rate to monthly decimal
    monthly = (annual / 100) / 12;

    // Calculate monthly payment
    payment = (monthly * pow(1 + monthly, numPayments)) /
              (pow(1 + monthly, numPayments) - 1) * loan;

    // Totals
    totalPaid = payment * numPayments;
    interestPaid = totalPaid - loan;

    // Output formatting
    cout << fixed << setprecision(2);

    cout << "\nLoan Amount:        $" << loan << endl;
    cout << "Monthly Interest Rate: " << monthly * 100 << "%" << endl;
    cout << "Number of Payments: " << numPayments << endl;
    cout << "Monthly Payment:    $" << payment << endl;
    cout << "Amount Paid Back:   $" << totalPaid << endl;
    cout << "Interest Paid:      $" << interestPaid << endl;

    return 0;
}


