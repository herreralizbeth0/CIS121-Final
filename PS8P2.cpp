#include <iostream>
#include <string>
using namespace std;

double calcPay(char jobCode, double hoursWorked)
{
    double rate = 0;
    double pay;
    
    if (jobCode == 'L' )
        rate = 25;
    else if (jobCode == 'A' )
        rate = 30;
    else if (jobCode == 'J' )
        rate = 50;
    
    if (hoursWorked > 40)
        pay = (40 * rate) + ((hoursWorked - 40) * rate * 1.5);
    else
        pay = hoursWorked * rate;
    return pay;
}
int main()
{
    string lastName;
    char jobCode;
    double hoursWorked, pay;
    double totalPay = 0;
    double averagePay = 0;
    int count = 0;
    
    cout << "Enter last name, job code, and hours worked: " << endl;
    cout << "Press Ctrl+Z to stop." << endl;
    
    while (cin >> lastName >> jobCode >> hoursWorked)
    {
        pay = calcPay(jobCode, hoursWorked);
        
        cout << "Last Name: " << lastName << endl;
        cout << "Pay: $" << pay << endl;
        
        totalPay = totalPay + pay;
        count++;
    }
    
    if (count > 0)
        averagePay = totalPay / count;
    
    cout << "Average Pay: $" << averagePay << endl;
    cout << "Number of entries: " << count << endl;
    
    return 0;
}
