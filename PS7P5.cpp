#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string lastName;
    char districtCode;
    int creditHours;
    double rate, tuitionOwed;
    double totalTuition = 0.0;
    int totalCreditHours = 0;
    int studentCount = 0;
    
    cout << fixed << setprecision(2);
    cout << "Enter student last name, credit hours, and district code (Ctrl+Z to stop): " << endl;
    
    while (cin >> lastName >> creditHours >> districtCode) {
        if (districtCode == 'I' || districtCode == 'i')
            rate = 250.0;
        else if (districtCode == 'O' || districtCode == 'o')
            rate = 550.0;
        else
            rate = 0.0;
        
        tuitionOwed = creditHours * rate;
        totalTuition += tuitionOwed;
        totalCreditHours += creditHours;
        studentCount++;
        
        cout << "Student Name: " << lastName
        << " Tuition Owed: $" << tuitionOwed << endl;
    }
    
    cout << "Total tuition: $" << totalTuition << endl;
    cout << "Total credit hours: " << totalCreditHours << endl;
    cout << "Number of students: " << studentCount << endl;
    
    return 0;
}
