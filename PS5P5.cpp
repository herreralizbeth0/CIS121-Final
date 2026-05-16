#include <iostream>
using namespace std;

int main()
{
    double weight, rate, total;
    
    cout << "Enter weight: ";
    cin >> weight;
    
    if (weight >= 100)
        rate = .50;
    else if (weight >= 30)
        rate = .25;
    else if (weight >= 20)
        rate = .20;
    else
        rate = .10;
    
    total = weight * rate;
    
    cout << "Weight: " << weight << endl;
    cout << "Rate: $" << rate << endl;
    cout << "Total Paid: $" << total << endl;
    
    return 0;
}
