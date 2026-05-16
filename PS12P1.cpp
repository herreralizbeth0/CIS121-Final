#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readarrays(string fname[], string lname[], double gpa[])
{
    ifstream infile("students.txt");
    
    for (int i= 0; i < 10; i = i + 1)
    {
        infile >> fname[i] >> lname[i] >> gpa[i];
    }
    
    infile.close();
}

void displayarrays(string fname[], string lname[], double gpa[])
{
    for (int i = 0; i < 10; i = i + 1)
    {
        cout << fname[i] << " " << lname[i] << " " << gpa[i] << endl;
    }
}

void reversearrays(string fname[], string lname[], double gpa[])
{
    for (int i = 9; i>= 0; i = i - 1)
    {
        cout << fname[i] << " " << lname[i] << " " << gpa[i] << endl;
    }
}

int main()
{
    string fname[10], lname[10];
    double gpa[10];
    
    readarrays(fname, lname, gpa);
    displayarrays(fname, lname, gpa);
    cout << endl;
    reversearrays(fname, lname, gpa);
    
    return 0;
}



