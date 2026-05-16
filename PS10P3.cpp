#include<iostream>
using namespace std;

void compute(float hours, float aid, float& tuition, float& owed)
{
    tuition = hours * 250;
    owed = tuition - aid;
}

int main()
{
    string lname;
    float hours, aid, tuition, owed;
    float total = 0;
    int count = 0;
    
    cout << "Enter last name (ctrl+z to stop): ";
    while (cin >> lname)
    {
        cout << "Enter hours and aid: ";
        cin >> hours >> aid;
        
        compute (hours, aid, tuition, owed);
        
        cout << lname << " " << tuition << " " << owed << endl;
        
        total += owed;
        count++;
        
        cout << "Enter last name: ";
    }
    
    cout << "Total owed: " << total << endl;
    cout << "Average owed: " << total / count << endl;
    
    return 0;
}
