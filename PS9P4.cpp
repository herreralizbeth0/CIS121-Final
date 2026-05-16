#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getPayRate (char jobCode);
double computeGrossPay(double hoursWorked, double payRate);

int main()
{
    string lastName;
    char jobCode;
    double hoursWorked, payRate, grossPay;
    double totalGrossPay = 0;
    
    cout << fixed << setprecision(2);
    cout << "Enter last name, job code, and hours worked: " << endl;
    
    while (cin >> lastName >> jobCode >> hoursWorked)
    {
        payRate = getPayRate(jobCode);
        grossPay = computeGrossPay(hoursWorked, payRate);
        
        cout << lastName << " " << grossPay << endl;
        
        totalGrossPay = totalGrossPay + grossPay;
        
        cout << "Enter last name, job code, and hours worked: " << endl;
    }
    
    cout << "Total Gross Pay: " << totalGrossPay << endl;
    
    return 0;
}

double getPayRate(char jobCode)
{
    if (jobCode == 'L')
        return 25;
    else if (jobCode == 'A')
        return 30;
    else if (jobCode == 'J')
        return 50;
    else
        return 0;
}

double computeGrossPay(double hoursWorked, double payRate)
{
    if (hoursWorked > 40)
        return (40 * payRate) + ((hoursWorked - 40) * payRate * 1.5);
    else
        return hoursWorked * payRate;
}
