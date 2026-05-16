#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price, discountPercent;
    double discountAmount, discountedPrice;
    
    cout << "Enter item price: ";
    cin >> price;
    
    cout << "Enter discount percent (decimal, like 0.15): ";
    cin >> discountPercent;
    
    discountAmount = price * discountPercent;
    discountedPrice = price - discountAmount;
    
    cout << fixed << setprecision(2);
    cout << "Discount amount: $" << discountAmount << endl;
    cout << "Discounted price: $" << discountedPrice << endl;
    
    return 0;
}
