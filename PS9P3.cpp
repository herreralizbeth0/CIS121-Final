#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computerMPG(double milesTraveled, double gallonsUsed);
double computeGasCost(double gallonsUsed);

int main()
{
    string destinationCity;
    double milesTraveled, gallonsUsed, mpg, gasCost;
    double totalGasCost = 0;
    
    cout << fixed << setprecision(2);
    cout << "Enter destination city, miles travaled, and gallons used: " << endl;
    
    while (cin >> destinationCity >> milesTraveled >> gallonsUsed)
    {
        mpg = computerMPG(milesTraveled, gallonsUsed);
        gasCost = computeGasCost(gallonsUsed);
        
        cout << destinationCity << " " << mpg << " " << gasCost << endl;
        
        totalGasCost = totalGasCost + gasCost;
        
        cout << "Enter destination city, miles travaled, and gallons used: " << endl;
    }
    
    cout << "Total Gas Cost: " << totalGasCost << endl;
    
    return 0;
}

double computerMPG(double milesTraveled, double gallonsUsed)
{
    if (gallonsUsed == 0)
        return 0;
    else
        return milesTraveled / gallonsUsed;
}

double computeGasCost(double gallonsUsed)
{
    return gallonsUsed * 3.50;
}
