#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

void comp_tuition(char code, float credits, float &cost, float &tuition, float &fees)
{
    if (code == 'I')
        cost = 250.00f;
    else
        cost = 500.00f;
    
    tuition = credits * cost;
    fees = tuition * 0.10f;
}

int main()
{
    string lname;
    char code;
    float credits, cost, tuition, fees;
    float totalTuition = 0.0f, avgTuition;
    int count = 0;
    ifstream infile;
    
    infile.open("student.txt");
    
    while (infile >> lname >> code >> credits)
    {
        comp_tuition(code, credits, cost, tuition, fees);
        
        cout << fixed << setprecision(2);
        cout << endl;
        cout << lname << endl;
        cout << "Student Code:       " << setw(8) << code << endl;
        cout << "Cost per credit     " << setw(8) << cost << endl;
        cout << "Credits Taken:      " << setw(8) << credits << endl;
        cout << "Tuition Owed:       " << setw(8) << tuition << endl;
        cout << "Course Fees:        " << setw(8) << fees << endl;
        
        totalTuition = totalTuition + tuition;
        count = count +1;
    }
    
    avgTuition = totalTuition / count;
    
    cout << endl;
    cout << "Sum of tuition owed:   " << setw(8) << totalTuition << endl;
    cout << "Number of students:    " << setw(8) << count << endl;
    cout << "Average tuition cost:  " << setw(8) << avgTuition << endl;
    
    infile.close();
    return 0;
}
