#include <iostream>
using namespace std;

int main() {
    char equipmentCode, dayCode;
    double rentalCost;
    
    cout << "Enter equipment code (A, B, C): ";
    cin >> equipmentCode;
    
    cout << "Enter day code (F or H): ";
    cin >> dayCode;
    
    if (equipmentCode == 'A' && dayCode == 'F')
        rentalCost = 10.00;
    else if (equipmentCode == 'A' && dayCode == 'H')
        rentalCost = 15.00;
    else if (equipmentCode == 'B' && dayCode == 'F')
        rentalCost = 20.00;
    else if (equipmentCode == 'B' && dayCode == 'H')
        rentalCost = 35.00;
    else if (equipmentCode == 'C' && dayCode == 'H')
        rentalCost = 40.00;
    else if (equipmentCode == 'C' && dayCode == 'F')
        rentalCost = 45.00;
    else
        rentalCost = 50.00;
    
    cout << "Rental Cost: $" << rentalCost << endl;
    
    return 0;
}
