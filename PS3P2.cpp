#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double stockPrice = 0.0, value = 0.0;
    int quantity = 0;
    
    cout << "Enter current stock price: ";
    cin >> stockPrice;
    
    cout << "Enter quantity of stock: ";
    cin >> quantity;
    
    value = stockPrice * quantity;
    
    cout << fixed << setprecision(2);
    cout << "Current stock value: $" << value << endl;
    
    return 0;
}
