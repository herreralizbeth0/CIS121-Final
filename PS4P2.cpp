#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string item;
    int quantity;
    double unitPrice, extendedPrice;
    
    cout << "Enter item (A or B): ";
    cin >> item;
    
    cout << "Enter quantity: ";
    cin >> quantity;
    
    if (item == "A" || item == "a") {
        unitPrice = 10.00;
    } else {
        unitPrice = 20.00;
    }
    
    extendedPrice = quantity * unitPrice;
    
    cout << fixed << setprecision(2);
    cout << "\nItem: " << item << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Extended Price: $" << extendedPrice << endl;
    
    return 0;
}
