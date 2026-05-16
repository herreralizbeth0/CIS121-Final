#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

struct student
{
    string firstname;
    string lastname;
    char districtcode;
    float credits;
    float tuitionbalance;
};

float compute_tuition(char districtcode, float credits)
{
    float tuition;
    
    if (districtcode == 'I')
        tuition = credits * 250.00;
    else
        tuition = credits * 500.00;
    return tuition;
}

void display_students(vector<student> students)
{
    cout << setprecision(2) << fixed;
    
    cout << endl << "Display Student Information" << endl;
    
    for (student s : students)
    {
        cout << "First Name:       " << s.firstname << endl;
        cout << "Last Name:        " << s.lastname << endl;
        cout << "District Code     " << s.districtcode << endl;
        cout << "Credits:          " << s.credits << endl;
        cout << "Tuition Balance: $" << s.tuitionbalance << endl;
        cout << endl;
    }
    
    cout << "Number of Students: " << students.size() << endl;
}

int main()
{
    vector<student> students;
    student temp;
    
    cout << "Enter student first name, ctl+z to stop: ";
    cin >> temp.firstname;
    
    while (!cin.eof())
    {
        cout << "Enter student last name: ";
        cin >> temp.lastname;
        
        cout << "Enter district code I or O: ";
        cin >> temp.districtcode;
        
        cout << "Enter enrolled credit hours: ";
        cin >> temp.credits;
        
        temp.tuitionbalance = compute_tuition(temp.districtcode, temp.credits);
        
        students.push_back(temp);
        
        cout << "Enter student first name, ctl+z to stop: ";
        cin >> temp.firstname;
    }
    
    display_students(students);
    
    return 0;
}
