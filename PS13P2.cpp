#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

struct employee
{
    string firstname;
    string lastname;
    float hours;
    float rate;
    float grosspay;
};

float compute_grosspay(float hours, float rate)
{
    float grosspay;
    
    if (hours > 40)
        grosspay = (40 * rate) + ((hours - 40)) * rate * 1.5;
    else
        grosspay = hours * rate;
    
    return grosspay;
}

int main()
{
    vector<employee> employees;
    employee temp;
    int n, i;
    
    cout << "Enter number of employees to process: ";
    cin >> n;
    
    for (i = 0; i < n; i++)
    {
        cout << "Enter employee first name: ";
        cin >> temp.firstname;
        
        cout << "Enter employee last name: ";
        cin >> temp.lastname;
        
        cout << "Enter hours worked: ";
        cin >> temp.hours;
        
        cout << "Enter hourly rate: ";
        cin >> temp.rate;
        
        temp.grosspay = compute_grosspay(temp.hours, temp.rate);
        
        employees.push_back(temp);
    }
    
    cout << setprecision(2) << fixed;
    
    cout << endl << "Display Employee Information" << endl;
    
    for (i = 0; i < employees.size(); i++)
    {
        cout << "First Name: " << employees[i].firstname << endl;
        cout << "Last Name:  " << employees[i].lastname << endl;
        cout << "Hours:      " << employees[i].hours << endl;
        cout << "Rate:      $" << employees[i].rate << endl;
        cout << "Gross Pay: $" << employees[i].grosspay << endl;
        cout << endl;
    }
    
    return 0;
}
