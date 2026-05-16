#include <iostream>
using namespace std;

int main()
{
    
    string lastName;
    double hours, rate, total;
    char jobCode;
    
    cout << "Enter last name: ";
    cin >> lastName;
    
    cout << "Enter hours worked: ";
    cin >> hours;
    
    cout << "Enter job code (E, J, A): ";
    cin >> jobCode;
    
    if (jobCode == 'E')
        rate = 25.00;
    else if (jobCode == 'J')
        rate = 20.00;
    else
        rate = 15.00;
    
    total = hours * rate;
    
    cout << "Employee: " << lastName << endl;
    cout << "Hours: " << hours << endl;
    cout << "Rate: $" << rate << endl;
    cout << "Total Pay: $" << total << endl; 
    
    return 0;
}
