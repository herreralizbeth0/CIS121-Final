#include <iostream>
using namespace std;

int main ()
{
    
    double pounds, pricePerPound, total;
    
    cout << "Enter pounds: ";
    cin >> pounds;
    
    if (pounds >= 100)
        pricePerPound = 0.10;
    else if (pounds >= 50)
        pricePerPound = 0.25;
    else
        pricePerPound = .50;
    
    total = pounds * pricePerPound;
    
    cout << "Price per pound: $" << pricePerPound << endl;
    cout << "Total: $" << total << endl;
    
    return 0;
}
