#include <iostream>
#include <string>
using namespace std;

double calcMPG(double miles, double gallons)
{
    return miles / gallons;
}
int main()
{
    string city;
    double miles, gallons, mpg;
    double totalMiles = 0;
    int tripCount = 0;
    
    cout << "Enter city, miles traveled, and gallons used: " << endl;
    cout << "Press Ctrl+Z to stop." << endl;
    
    while (cin >> city >> miles >> gallons)
    {
        mpg = calcMPG(miles, gallons);
        
        cout << "City: " << city << endl;
        cout << "MPG: " << mpg << endl;
        
        totalMiles = totalMiles + miles;
        tripCount++;
    }
    
    cout << "Total miles travaled: " << totalMiles << endl;
    cout << "Number of trips: " << tripCount << endl;
    
    return 0;
    
}
