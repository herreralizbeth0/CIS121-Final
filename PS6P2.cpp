#include <iostream>
using namespace std;

int main() {
    int partNumber, quantity;
    double costPerUnit, totalCost;
    
    cout << "Enter part number: ";
    cin >> partNumber;
    
    cout << "Enter quantity: ";
    cin >> quantity;
    
    if (partNumber == 10 && quantity > 1000)
        costPerUnit = 1.00;
    else if (partNumber == 99 && quantity > 500)
        costPerUnit = 2.00;
    else
        costPerUnit = 5.00;
    
    totalCost = quantity * costPerUnit;
    
    cout << "Part Number: " << partNumber << endl;
    cout << "Cost Per Unit: $" << costPerUnit << endl;
    cout << "Total Cost: $" << totalCost << endl;
    
    return 0;

}
