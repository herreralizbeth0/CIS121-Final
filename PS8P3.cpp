#include <iostream>
#include <string>
using namespace std;

double calcTuition (int credits)
{
    return credits * 250;
}

int main()
{
    string lastName;
    int credits;
    double tuition;
    double totalTuition = 0;
    int count = 0;
    
    cout << "Enter student last name and credits taken: " << endl;
    cout << "Press Ctrl+Z to stop." << endl;
    
    while (cin >> lastName >> credits)
    {
        tuition = calcTuition(credits);
        
        cout << "Last Name: " << lastName << endl;
        cout << "Credits: " << credits << endl;
        cout << "Tuition Owed: $" << tuition << endl;
        
        totalTuition = totalTuition + tuition;
        count++;
    }
    
    cout << "Total Tuition: $" << totalTuition << endl;
    cout << "Number of students: " << count << endl;
    
    return 0;
}
