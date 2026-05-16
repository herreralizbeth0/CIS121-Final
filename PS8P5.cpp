#include <iostream>
#include <string>
using namespace std;

double getLabFee(string dept, int courseCode)
{
    if (dept == "CIS" && courseCode == 101)
        return 50.0;
    else if (dept == "CIS" && courseCode == 121)
        return 100.0;
    else if (dept == "MAT" && courseCode == 111)
        return 25.0;
    else if (dept == "MAT" && courseCode == 112)
        return 35.0;
    else if (dept == "ENG" && courseCode == 100)
        return 55.0;
    else
        return 50.0;
}

int main()
{
    string dept;
    int courseCode;
    double labFee;
    double totalFees = 0;
    double averageFee = 0;
    int count = 0;
    
    cout << "Enter department and course code: " << endl;
    cout << "Press Ctrl+Z to stop." << endl;
    
    while (cin >> dept >> courseCode)
    {
        labFee = getLabFee(dept, courseCode);
        
        cout << "Department: " << dept << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Lab Fee: $" << labFee << endl;
        
        totalFees = totalFees + labFee;
        count++;
    }
    
    if (count > 0)
        averageFee = totalFees / count;
    
    cout << "Total Lab Fees: $" << totalFees << endl;
    cout << "Average Lab Fee: $" << averageFee << endl;
    
    return 0;
}
