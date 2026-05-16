#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    double sum, product, difference;
    
    cout << "Enter first real number: ";
    cin >> n1;
    
    cout << "Enter second real number: ";
    cin >> n2;
    
    sum = n1 + n2;
    product = n1 * n2;
    difference = n1 - n2; // difference = first minus second
    
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
    cout << "Difference = " << difference << endl;
    
    return 0;
}
