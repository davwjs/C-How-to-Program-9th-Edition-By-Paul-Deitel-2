#include <iostream>
using namespace std;

int main() {
    double salary, baseTax, incomeTax, percentOfExcess;
    
    cout << "Enter your salary: ";
    cin >> salary;
    
    if(salary >= 0.00 && salary <= 1499.99) {
        baseTax = 0.00;
        percentOfExcess = 0.15;
        incomeTax = salary * percentOfExcess + baseTax;
    }
    else if(salary >= 1500.00 && salary <= 2999.99) {
        baseTax = 225.00;
        percentOfExcess = 0.16;
        incomeTax = (salary - 1500.00) * percentOfExcess + baseTax;
    }
    else if(salary >= 3000.00 && salary <= 4999.99) {
        baseTax = 465.00;
        percentOfExcess = 0.18;
        incomeTax = (salary - 3000.00) * percentOfExcess + baseTax;
    }
    else if(salary >= 5000.00 && salary <= 7999.99) {
        baseTax = 825.00;
        percentOfExcess = 0.20;
        incomeTax = (salary - 5000.00) * percentOfExcess + baseTax;
    }
    else if(salary >= 8000.00 && salary <= 9999.99) {
        baseTax = 985.00;
        percentOfExcess = 0.25;
        incomeTax = (salary - 8000.00) * percentOfExcess + baseTax;
    }
    else
        cout << "The salary is invalid.";
    cout << "The income tax is: " << incomeTax << endl;
    
    return 0;
}
