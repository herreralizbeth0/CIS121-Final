#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readarrays(string fname[], string lname[], double salary[])
{
    ifstream infile("empldata.txt");
    
    for (int i = 0; i < 10; i = i + 1)
    {
        infile >> fname[i] >> lname[i] >> salary[i];
    }
    
    infile.close();
}

void displayarrays(string fname[], string lname[], double salary[])
{
    for (int i = 0; i < 10; i = i + 1)
    {
        cout << fname[i] << " " << lname[i] << " " << salary[i] << endl;
    }
}

int seasearcharrays(string lname[], string find)
{
    for (int i = 0; i < 10; i = i + 1)
    {
        if (lname[i] == find)
            return i;
    }
    return -1;
}

int main()
{
    string fname[10], lname[10], find;
    double salary[10];
    int loc;
    
    readarrays(fname, lname, salary);
    displayarrays(fname, lname, salary);
    
    cout << "Enter last name, ctrl+z to stop: ";
    while (cin >> find)
    {
        loc = seasearcharrays(lname, find);
        
        if (loc != -1)
            cout << fname[loc] << " " << lname[loc] << " " << salary[loc] << endl;
        else
            cout << find << " not found" << endl;
        
        cout << "Enter last name, ctrl+z to stop: ";
    }
    
    cout << "Goodbye. Have a nice day." << endl;
}
