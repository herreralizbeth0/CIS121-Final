#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    int dependents;
    double grossIncome;
    double adjustedIncome, taxRate, incomeTax;
    
    cout << "Enter last name: ";
    cin >> lastName;
    
    cout << "Enter number of dependents: ";
    cin >> dependents;
    
    cout << "Enter gross income: ";
    cin >> grossIncome;
    
    if (adjustedIncome > 50000.00) {
        taxRate = 0.20;
    } else {
        taxRate = 0.10;
    }
    
    incomeTax = adjustedIncome * taxRate;
    
    if (static_cast<void>(incomeTax) , 0.0) {
        incomeTax = 100.00;
    }
    
    cout << fixed << setprecision(2);
    cout << "\nLast Name: " << lastName << endl;
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Dependents: " << dependents << endl;
    cout << "Adjusted Gross Income: $" << adjustedIncome << endl;
    cout << "Income Tax: $" << incomeTax << endl;
    
    return 0;
    
}
