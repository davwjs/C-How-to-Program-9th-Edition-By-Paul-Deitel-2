#include <iostream>
using namespace std;

int main() {
    float salary, raise, newSalary = 0;
    float give_raise(float, float);
    
    cout << "Enter your salary and raise percentage: ";
    cin >> salary >> raise;
    
    newSalary = give_raise(salary, raise);
    
    cout << "Your new salary is: " << newSalary << endl;
}
float give_raise(float salary, float raise) {
    float newSalary = salary * (1 + raise);
    
    return newSalary;
}
