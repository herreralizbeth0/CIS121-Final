#include <iostream>
using namespace std;

int main() {
    int quantity;
    char status;
    double pricePerUnit, extendedPrice, taxAmount, total;
    
    cout << "Enter quantity: ";
    cin >> quantity;
    
    cout << "Enter customer status (A, B, C, D): ";
    cin >> status;
    
    if (quantity > 10000 && status == 'A')
        pricePerUnit = 10.00;
    else if (quantity > 10000 && status == 'B')
        pricePerUnit = 12.00;
    else if (quantity >= 5000 && quantity <= 10000 && status == 'C')
        pricePerUnit = 20.00;
    else if (quantity >= 5000 && quantity <= 10000 && status == 'D')
        pricePerUnit = 22.00;
    else
        pricePerUnit = 30.00;
    
    extendedPrice = quantity * pricePerUnit;
    taxAmount = extendedPrice * 0.07;
    total = extendedPrice + taxAmount;
    
    cout << "Extended Price: $" << extendedPrice << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Total: $" << total << endl;
    
    return 0;
}
