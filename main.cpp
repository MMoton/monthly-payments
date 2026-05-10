/*
Code File Name: Chapter3Exercise3.cpp
Programmer: Maya Moton
Due Date: 03/15/2026
*/

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

// anual rate to decimal
    monthly = (annual / 100) / 12;

// monthly payment calculation
    payment = (monthly * pow(1 + monthly, numPayments)) /(pow(1 + monthly, numPayments) - 1) * loan;
    
    totalPaid = payment * numPayments;
    interestPaid = totalPaid - loan;

    cout << fixed << setprecision(2);
//final display
    cout << "\nLoan Amount:        $" << loan << endl;
    cout << "Monthly Interest Rate: " << monthly * 100 << "%" << endl;
    cout << "Number of Payments: " << numPayments << endl;
    cout << "Monthly Payment:    $" << payment << endl;
    cout << "Amount Paid Back:   $" << totalPaid << endl;
    cout << "Interest Paid:      $" << interestPaid << endl;

    return 0;
}


