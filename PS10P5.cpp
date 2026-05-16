#include<iostream>
#include<cmath>
using namespace std;

void compute(float amount, float rate5, float rate10, float& amt5, float & amt10)
{
    amt5 = amount * pow(1 + rate5, 5);
    amt10 = amount * pow(1 + rate10, 10);
}

int main()
{
    float amount, rate5, rate10, amt5, amt10;
    
    cout << "Enter amount (ctrl+z to stop); ";
    while (cin >> amount)
    {
        cout << "Enter 5 year rate and 10 year rate: ";
        cin >> rate5 >> rate10;
        
        compute(amount, rate5, rate10, amt5, amt10);
        
        cout << amount << " " << amt5 << " " << amt10 << endl;
        
        cout << "Enter amount: ";
    }
    
    return 0;
}


