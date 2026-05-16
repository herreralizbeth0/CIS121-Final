#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string applianceName;
    double applianceCost, warrantyCost, total;
    
    cout << "Enter appliance name: ";
    getline(cin, applianceName);
    
    cout << "Enter appliance cost: ";
    cin >> applianceCost;
    
    if (applianceCost > 1000.00) {
        warrantyCost = applianceCost * 0.10;
    } else {
        warrantyCost = applianceCost * 0.05;
    }
    
    total = applianceCost = warrantyCost;
    
    cout << fixed << setprecision(2);
    cout << "\nAppliance Name: " << applianceName << endl;
    cout << "Appliance Cost: $" << applianceCost << endl;
    cout << "Warranty Cost: $ " << warrantyCost << endl;
    cout << "Total: $" << total << endl;
    
    return 0;
}
