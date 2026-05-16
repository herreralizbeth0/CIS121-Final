#include <iostream>
using namespace std;

double getUnitPrice(char productCode)
{
    if (productCode == 'W')
        return 10.0;
    else if (productCode == 'C')
        return 15.0;
    else if (productCode == 'G')
        return 20.0;
    else
        return 0;
}

double getShipping(char productCode)
{
    if (productCode == 'W')
        return 2.0;
    else if (productCode == 'C')
        return 5.0;
    else if (productCode == 'G')
        return 7.0;
    else
        return 0;
}

int main()
{
    char productCode;
    int quantity;
    double unitPrice, shipping, extendedPrice, total;
    double grandTotal = 0;
    
    cout << "Enter product code and quantity: " << endl;
    cout << "Press Ctrl+Z to stop." << endl;
    
    while (cin >> productCode >> quantity)
    {
        unitPrice = getUnitPrice(productCode);
        shipping = getShipping(productCode);
        extendedPrice = quantity * unitPrice;
        total = extendedPrice + shipping;
        
        cout << "Product Code: " << productCode << endl;
        cout << "Unit Price: $" << unitPrice << endl;
        cout << "Shipping: $" << shipping << endl;
        cout << "Extended Price: $" << extendedPrice << endl;
        cout << "Total: $" << total << endl;
    
        grandTotal = grandTotal + total;
    }
    
    cout << "Total of all entries: $" << grandTotal << endl;
    
    return 0;
}
