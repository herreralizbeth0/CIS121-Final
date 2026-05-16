#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    double hours, payRate, grossPay;
    
    cout << "Enter last name: ";
    cin >> lastName;
    
    cout << "Enter hours: ";
    cin >> hours;
    
    cout << "Enter pay rate: ";
    cin >> payRate;
    
    grossPay = hours * payRate;
    
    cout << fixed << setprecision(2);
    cout << lastName << " gross pay: $" << grossPay << endl;
    
    return 0;
}
