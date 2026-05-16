#include<iostream>
using namespace std;

void compute(float weight, int zip, float& weight_charge, float& area_charge, float& postage)
{
    if (weight > 100) weight_charge = weight * 0.02f;
    else if (weight > 50) weight_charge = weight * 0.03f;
    else weight_charge = weight * 0.05f;
    
    if (zip== 60171) area_charge = 2.00f;
    else if (zip == 60172) area_charge = 2.50f;
    else if (zip == 60635) area_charge = 3.00f;
    else area_charge = 5.00f;
    
    postage = weight_charge + area_charge;
}

int main()
{
    float weight, weight_charge, area_charge, postage;
    int zip, count = 0;
    
    cout << "Enter weight (ctrl+z to stop): ";
    while (cin >> weight)
    {
        cout << "Enter zip: ";
        cin >> zip;
        
        compute(weight, zip, weight_charge, area_charge, postage);
        
        cout << weight_charge << " " << area_charge << " " << postage << endl;
        
        count++;
        
        cout << "Enter weight: ";
    }
    
    cout << "Total entries: " << count << endl;
    
    return 0;
}
