#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computeBattingAverage(double hits, double atBats);

int main()
{
    string lastName;
    double hits, atBats, battingAverage;
    int count = 0;
    
    cout << fixed << setprecision(3);
    cout << "Enter last name, hits, and at bats: " << endl;
    
    while (cin >> lastName >> hits >> atBats)
    {
        battingAverage = computeBattingAverage(hits, atBats);
        
        cout << lastName << " " << battingAverage << endl;
        
        count = count + 1;
        
        cout << "Enter last name, hits, and at bats: " << endl;
    }
    
    cout << "Player Count: " << count << endl;
    
    return 0;
}

double computeBattingAverage(double hits, double atBats)
{
    if (atBats == 0)
        return 0;
    else
        return hits / atBats;
}
