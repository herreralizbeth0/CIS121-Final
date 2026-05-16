#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mealTotal = 0.0, tip = 0.0, totalWithTip = 0.0;
    
    cout << "Enter meal total: ";
    cin >> mealTotal;
    
    tip = mealTotal * 0.15;
    totalWithTip = mealTotal + tip;
    
    cout << fixed << setprecision(2);
    cout << "Meal total: $" << mealTotal << endl;
    cout << "Tip (15%): $" << tip << endl;
    cout << "Total with tip: $" << totalWithTip << endl;
    
    return 0;
}
