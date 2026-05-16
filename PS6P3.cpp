#include <iostream>
using namespace std;

int main() {
    int tickets;
    char locationCode;
    double pricePerTicket, totalCost;
    
    cout << "Enter number of tickets: ";
    cin >> tickets;
    
    cout << "Enter location code (H or L): ";
    cin >> locationCode;
    
    if (tickets > 25 || locationCode == 'H')
        pricePerTicket = 30.00;
    else if (tickets > 10 || locationCode == 'L')
        pricePerTicket = 40.00;
    else
        pricePerTicket = 50.00;
    
    totalCost = tickets * pricePerTicket;
    
    cout << "Tickets: " << tickets << endl;
    cout << "Price Per Ticket: $" << pricePerTicket << endl;
    cout << "Total Cost: $" << totalCost << endl;
    
    return 0;
}
