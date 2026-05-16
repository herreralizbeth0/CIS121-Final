#include <iostream>
#include <string>

using namespace std;

// Base class
class Employee
{
protected:
    string name;
    double salary;

public:
    Employee(string n, double s)
    {
        name = n;
        salary = s;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }

    // regular employee bonus
    virtual double bonus()
    {
        return salary * 0.10;
    }
};

// Derived class
class Manager : public Employee
{
public:
    Manager(string n, double s) : Employee(n, s)
    {
    }

    // long term bonus method
    double Long_Term_Bonus()
    {
        return salary * 0.50;
    }

    // override bonus method
    double bonus() override
    {
        return salary * 0.50;
    }

    void showManager()
    {
        displayInfo();

        cout << "Manager Bonus: $" << bonus() << endl;
        cout << "Long Term Bonus: $" << Long_Term_Bonus() << endl;
    }
};

int main()
{
    // object with data
    Manager m1("Liz", 75000);

    // display everything
    m1.showManager();

    return 0;
}
