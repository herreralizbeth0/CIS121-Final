#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

float comp_mpg(float gallons, float miles)
{
    float mpg;
    
    mpg = miles / gallons;
    
    return mpg;
}

int main()
{
    float gallons, miles, mpg;
    float totalGallons = 0.0f, totalMiles = 0.0f;
    ifstream infile;
    
    infile.open("trips.txt");
    
    while (infile >> gallons >> miles)
    {
        mpg = comp_mpg(gallons, miles);
        
        cout << fixed << setprecision(2);
        cout << endl;
        cout << "Gallons: " << setw(8) << gallons << endl;
        cout << "Miles:   " << setw(8) << miles << endl;
        cout << "MPG:     " << setw(8) << mpg << endl;
        
        totalGallons = totalGallons + gallons;
        totalMiles = totalMiles + miles;
    }
    
    cout << endl;
    cout << "Sum of gallons: " << setw(8) << totalGallons << endl;
    cout << "Sum of miles:   " << setw(8) << totalMiles << endl;
    
    infile.close();
    return 0;
}
