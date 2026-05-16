#include<iostream>
using namespace std;

void display_arrays(string makes[], string models[], int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        cout << "Make: " << makes[i] << endl;
        cout << "Model: " << models[i] << endl;
        cout << endl;
    }
}

int main()
{
    string* makes;
    string* models;
    int n, i;
    
    cout << "Enter number of autos to process: ";
    cin >> n;
    
    makes = new string[n];
    models = new string[n];
    
    for (i = 0; i < n; i++)
    {
        cout << "Enter suto make: ";
        cout << makes[i];
        
        cout << "Enter auto model: ";
        cin >> models[i];
    }
    
    cout << endl << "Display Auto Information" << endl;
    display_arrays(makes, models, n);
    
    delete[] makes;
    delete[] models;
    
    return 0;
}
