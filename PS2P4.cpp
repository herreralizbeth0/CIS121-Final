#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    int credits;
    const double costPerCredit = 250.0;
    const double labFee = 100.0;
    
    double tuition;
    
    cout << "Enter last name: ";
    cin >> lastName;
    
    cout << "Enter credits taken: ";
    cin >>credits;
    
    tuition = credits * costPerCredit + labFee;
    
    cout << fixed << setprecision(2);
    cout << lastName << " tuition: $" << tuition << endl;
    
    return 0;
}
