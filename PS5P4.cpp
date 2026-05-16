#include <iostream>
using namespace std;

int main()
{
    double salary, rate, tax;
    
    cout << "Enter annual salary: ";
    cin >> salary;
    
    if (salary > 100000)
        rate = .40;
    else if (salary >= 50000)
        rate = .35;
    else
        rate = .25;
    
    tax = salary * rate;
    
    cout << "Salary: $" << salary << endl;
    cout << "Tax Rate: " << rate * 100 << "%" << endl;
    cout << "Tax Amount: $" << tax << endl;
    
    return 0;
}
