#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double fixedCosts = 0.0, pricePerUnit = 0.0, costPerUnit = 0.0;
    double contributionMargin = 0.0, breakEvenUnits = 0.0;
    
    cout << "Enter fixed costs: ";
    cin >> fixedCosts;
    
    cout << "Enter price per unit: ";
    cin >> pricePerUnit;
    
    cout << "Enter cost per unit; ";
    cin >> costPerUnit;
    
    contributionMargin = pricePerUnit - costPerUnit;
    
    if (contributionMargin <= 0.0) {
        cout << "Error: Price per unit must be greater than cost per unit." << endl;
        return 0;
    }
        
        breakEvenUnits = fixedCosts / contributionMargin;
        
        cout << fixed << setprecision(2);
        cout << "Break-even point (units); " << breakEvenUnits << endl;
        
        return 0;
}
