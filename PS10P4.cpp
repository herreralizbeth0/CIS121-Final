#include<iostream>
using namespace std;

void compute(int widgets, float& cost, float& extended_price, float& tax, float& total)
{
    if (widgets >= 10000) cost = 4;
    else if (widgets >= 5000) cost = 5;
    else cost = 10;
    
    extended_price = widgets * cost;
    tax = extended_price * 0.07f;
    total = extended_price + tax;
}

int main ()
{
    int widgets;
    float cost, extended_price, tax, total, sum = 0;
    
    cout << "Enter number of widgets (ctrl+z to stop): ";
    while (cin >> widgets)
    {
        compute(widgets, cost, extended_price, tax, total);
        
        cout << widgets << " " << cost << extended_price << " " << total << endl;
        
        sum += total;
        
        cout << "Enter widgets: ";
    }
    
    cout << "Total orders: " << sum << endl;
    
    return 0;
}


