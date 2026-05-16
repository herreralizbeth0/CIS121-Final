#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int quantity;
    double price, extendedPrice, discount, discountedPrice;
    double totalDiscountedPrices = 0.0;
    
    cout << fixed << setprecision(2);
    cout << "Entered quantity and price (Ctrl+Z to stop): " << endl;

    while (cin >> quantity >> price) {
        extendedPrice = quantity * price;
        
        if (quantity > 1000)
            discount = extendedPrice * 0.10;
        else
            discount = 0.0;
        
        discountedPrice = extendedPrice - discount;
        totalDiscountedPrices += discountedPrice;
        
        cout << "Quantity: " << quantity
        << " Price: $" << price
        << " Extended Price: $" << extendedPrice
        << " Discount: $" << discount
        << " Discounted Price: $" << discountedPrice << endl;
    }
    
    cout << "Total of discounted prices: $" << totalDiscountedPrices << endl;
    
    return 0;
}
