#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string city;
    double milesTraveled, gallonsUsed, mpg;
    double totalMiles = 0.0;
    int tripCount = 0;
    
    cout << fixed << setprecision(2);
    cout << "Entered destination city, miles traveled, and gallons used (Ctrl+Z to stop): " << endl;
    
    while (cin >> city >> milesTraveled >> gallonsUsed) {
        mpg = milesTraveled / gallonsUsed;
        totalMiles += milesTraveled;
        tripCount++;
        
        cout << "Destination City: " << city
        << " MPG: " << mpg << endl;
    }
    
    cout << "Total miles traveled: " << totalMiles << endl;
    cout << "Number of trips entered: " << tripCount << endl;
    
    return 0;
}
