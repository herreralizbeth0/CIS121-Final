#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double purchasePrice = 0.0, currentPrice = 0.0, changePercent = 0.0;
    
    cout << "Enter purchase price: ";
    cin >> purchasePrice;
    
    cout << "Enter current price: ";
    cin >> currentPrice;
    
    if (purchasePrice == 0.0) {
        cout << "Error: Purchase price cannot be 0 (division by zero)." << endl;
    }
    
    changePercent = ((currentPrice - purchasePrice) / purchasePrice) * 100.0;
    
    cout << fixed << setprecision(2);
    
    if (changePercent > 0) {
        cout << "Percentage increase: " << changePercent << "%" << endl;
    } else if (changePercent < 0) {
        cout << "Percentage decrease: " << changePercent << "%" << endl;
    } else {
        cout << "No change: " << changePercent << "%" << endl;
    }
    
    return 0;
    
}
