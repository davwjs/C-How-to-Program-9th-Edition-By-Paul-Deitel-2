#include <iostream>
using namespace std;

int main() {
    double rate, hours, pay;
    cout << "Enter the hours and rate: ";
    cin >> hours >> rate;
    
    if(hours > 40.00 && hours <= 50.00)
        pay = (hours - 40 * (rate * 1.5));
    else if(hours > 50)
        pay = hours * (rate * 2);
    else
        pay = hours * rate;
    
    cout << "The pay is: $" << pay << endl;
}
