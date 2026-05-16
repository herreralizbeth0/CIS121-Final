#include<iostream>
using namespace std;

void compute(float quantity, float price, float& total, float& tax, float& total_order)
{
    total = quantity * price;
    tax = total * 0.07f;
    total_order = total + tax;
}

int main()
{
    float quantity, price, total, tax, total_order;
    float sum_total = 0, sum_tax = 0;
    
    cout << "Enter quantity (ctrl+z to stop): ";
    while (cin >> quantity)
    {
        
        cout << "Enter price: ";
        cin >> price;
        
        compute(quantity, price, total, tax, total_order);
        
        cout << total << " " << total_order << endl;
        
        sum_total += total_order;
        sum_tax += tax;
        
        cout << "Enter quantity: ";
    }
    
    cout << "Total of all orders: " << sum_total << endl;
    cout << "Total tax: " << sum_tax << endl;
    
    return 0;
}
