#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

float comp_biweekly(float salary)
{
    float biweekly;
    
    biweekly = salary / 26.0f;
    
    return biweekly;
}

int main()
{
    string lname;
    float salary, biweekly;
    float totalSalary = 0.0f, avgSalary;
    int count = 0;
    ifstream infile;
    
    infile.open("empl.txt");
    
    while (infile >> lname >> salary)
    {
        biweekly = comp_biweekly(salary);
        
        cout << fixed << setprecision(2);
        cout << endl;
        cout << lname << endl;
        cout << "Annual Salary:   " << setw(10) << salary << endl;
        cout << "Bi-weekly Pay:   " << setw(10) << biweekly << endl;
        
        totalSalary = totalSalary + salary;
        count = count +1;
    }
    
    avgSalary = totalSalary / count;
    
    cout << endl;
    cout << "Sum of annual salary: " << setw(10) << totalSalary << endl;
    cout << "Count of employees:   " << setw(10) << count << endl;
    cout << "Average salary:       " << setw(10) << avgSalary << endl;
    
    infile.close();
    return 0;
}
