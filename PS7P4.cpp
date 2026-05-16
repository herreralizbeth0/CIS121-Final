#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    char jobCode;
    double hoursWorked, payRate, pay, overtimeHours, regularPay, overtimePay;
    double totalPay = 0.0;
    int count = 0;
    
    cout << fixed << setprecision(2);
    cout << "Entered last name, job code, and hours worked (Ctrl+Z to stop): " << endl;
    
    while (cin >> lastName >> jobCode >> hoursWorked) {
        if (jobCode == 'L' || jobCode == 'l')
            payRate = 25.0;
        else if (jobCode == 'A' || jobCode == 'a')
            payRate = 30.0;
        else if (jobCode == 'J' || jobCode == 'j')
            payRate = 50.0;
        else
            payRate = 0.0;
        
        if (hoursWorked > 40) {
            overtimeHours = hoursWorked - 40;
            regularPay = 40 * payRate;
            overtimePay = overtimeHours * payRate * 1.5;
            pay = regularPay + overtimePay;
        } else {
            pay = hoursWorked * payRate;
        }
        
        totalPay += pay;
        count ++;
        
        cout << "Last Name: " << lastName
        << " Job Code: " << jobCode
        << " Hours Worked: " << hoursWorked
        << " Pay: $" << pay << endl;
    }
    
    if (count > 0)
        cout << "Average pay: $" << totalPay / count << endl;
    else
        cout << "Average pay: $0.00" << endl;
    
    cout << "Number of entries: " << count << endl;
    
    return 0;
}
