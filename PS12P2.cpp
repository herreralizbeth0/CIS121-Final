#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readarrays(string city[], int pop[])
{
    ifstream infile("cities.txt");
    
    for (int i = 0; i < 8; i = i + 1)
    {
        infile >> city[i] >> pop[i];
    }
    
    infile.close();
}

void displayarrays(string city[], int pop[])
{
    for (int i = 0; i < 8; i = i + 1)
    {
        cout << city[i] << " " << pop[i] << endl;
    }
}

int seasearcharrays(string city[], string find)
{
    for (int i = 0; i < 8; i = i + 1)
    {
        if (city[i] == find)
            return i;
    }
    return -1;
}

int main()
{
    string city[8], find;
    int pop[8], loc;
    
    readarrays(city, pop);
    displayarrays(city, pop);
    
    cout << "Enter city name, ctrl+z to stop: ";
    while (cin >> find)
    {
        loc = seasearcharrays(city, find);
        
        if (loc != -1)
            cout << city [loc] << " has a population of " << pop[loc] << endl;
        else
            cout << find << " not found" << endl;
        
        cout << "Enter city name, ctrl+z to stop: ";
    }
    
    cout << "Goodbye. Have a nice day." << endl;
}
