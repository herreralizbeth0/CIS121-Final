#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getCostPerCredit(char districtCode);
double computeTuition(double creditHours, double costPerCredit);

int main()
{
    string lastName;
    char districtCode;
    double creditHours, costPerCredit, tuitionCost;
    double totalTuition = 0;
    
    cout << fixed << setprecision(2);
    cout << "Enter last name, credit hours, and district code: " << endl;
    
    while (cin >> lastName >> creditHours >> districtCode)
    {
        costPerCredit = getCostPerCredit(districtCode);
        tuitionCost = computeTuition(creditHours, costPerCredit);
        
        cout << lastName << " " << tuitionCost << endl;
        
        cout << "Enter last name, credit hours, and district code: " << endl;
    }
    
    cout << "Total Tuition Cost: " << totalTuition << endl;
    
    return 0;
}

double getCostPerCredit(char districtCode)
{
    if (districtCode == 'I')
        return 250;
    else if (districtCode == 'O')
        return 550;
    else
        return 0;
}

double computeTuition(double creditHours, double costPerCredit)
{
    return creditHours * costPerCredit;
}
