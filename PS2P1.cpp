#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    double unitPrice, extendedPrice;
    
    cout << "Enter quantity: ";
    cin >> quantity;
    
    cout << "Enter unit price: ";
    cin >> unitPrice;
    
    extendedPrice = quantity * unitPrice;
    
    cout << fixed << setprecision(2);
    cout << "Extended price: $" << extendedPrice << endl;
    
    return 0;
}
