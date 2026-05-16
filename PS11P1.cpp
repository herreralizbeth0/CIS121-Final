#include<iostream>
#include<iomanip>
#include <fstream>
#include<string>
using namespace std;

float comp_save_tax(float msrp, float saleprice, float & tax)
{
    float savings;
    
    savings = msrp - saleprice;
    tax = saleprice * 0.07f;
    
    return savings;
}

int main()
{
    string make, model;
    float msrp, saleprice, savings, tax, totalSavings = 0.0f;
    ifstream infile;
    
    infile.open("auto.txt");
    
    
    while (infile >> make >> model >> msrp >> saleprice)
    {
        savings = comp_save_tax(msrp, saleprice, tax);
        
        cout << fixed << setprecision(2);
        cout << endl;
        cout << make << " " << model << endl;
        cout << "MSRP:         " << setw(10) << msrp << endl;
        cout << "Sales Price:  " << setw(10) << saleprice << endl;
        cout << "Savings:      " << setw(10) << savings << endl;
        cout << "Sales Tax:    " << setw(10) << tax << endl;
        
        totalSavings = totalSavings + savings;
    }
    
    cout << endl;
    cout << "Sum of savings: " << setw(10) << totalSavings << endl;
    
    infile.close();
    return 0;
}
