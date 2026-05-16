#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

float comp_extprice(float quantity, float price)
{
    float extprice;
    
    extprice = quantity * price;
    
    return extprice;
}

int main()
{
    string item;
    float quantity, price, extprice;
    float total = 0.0f, tax, totalReceipt;
    ifstream infile;
    
    infile.open("grocery.txt");
    
    while (infile >> item >> quantity >> price)
    {
        extprice = comp_extprice(quantity, price);
        
        cout << fixed << setprecision(2);
        cout << endl;
        cout << item << endl;
        cout << "Quantity:       " << setw(8) << quantity << endl;
        cout << "Cost per item:  " << setw(8) << price << endl;
        cout << "Extended price: " << setw(9) << extprice << endl;
        
        total = total + extprice;
    }
    
    tax = total * 0.07f;
    totalReceipt = total + tax;
    
    cout << endl;
    cout << "Sum of extended price: " << setw(8) << total << endl;
    cout << "Tax:                   " << setw(8) << tax << endl;
    cout << "Total receipt:         " << setw(8) << totalReceipt << endl;
    
    infile.close();
    return 0;
}
