#include <iostream>
using namespace std;

int main() {
    char jobCode;
    double hours, rate = 0.0, grossPay;
    
    cout << "Enter job code (L, J, A): ";
    cin >> jobCode;
    
    cout << "Enter hours worked: ";
    cin >> hours;
    
    if (jobCode == 'L' && hours > 40)
        rate = 50.00;
    else if (jobCode == 'L' && hours <= 40)
        rate = 40.00;
    else if (jobCode == 'J' && hours > 60)
        rate = 100.00;
    else if (jobCode == 'J' && hours <= 60)
        rate = 75.00;
    else if (jobCode == 'A' && hours > 40)
        rate = 25.00;
    else rate = 20.00;
    
    grossPay = hours * rate;
    
    cout << "Rate of Pay: $" << rate << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    
    return 0;
}
