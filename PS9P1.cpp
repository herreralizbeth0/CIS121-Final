#include <iostream>
#include <iomanip>
using namespace std;

double computeTotal(double quantity, double price);
double computeDiscountTotal(double total);

int main()
{
    double quantity, price, total, discountTotal;
    double sumTotal = 0, sumDiscountTotal = 0;
    
    cout << fixed << setprecision(2);
    cout << "Enter quantity and price: " << endl;
    
    while (cin >> quantity >> price)
    {
        total = computeTotal(quantity, price);
        discountTotal = computeDiscountTotal(total);
        
        cout << "Total " << total << endl;
        
        sumTotal = sumTotal + total;
        sumDiscountTotal = sumDiscountTotal + discountTotal;
        
        cout << "Enter quantity and price: " << endl;
    }
    
    cout << "Sum Total: " << sumTotal << endl;
    cout << "Sum Discount Total: " << sumDiscountTotal << endl;
    
    return 0;
}

double computeTotal(double quantity, double price)
{
    return quantity * price;
}
double computeDiscountTotal(double total)
{
    double discount, discountTotal;
    
    if (total > 10000)
        discount = total * .10;
    else
        discount = total * .05;
    
    discountTotal = total - discount;
    return discountTotal;
}
