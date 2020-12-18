#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    int integer_power(int, int);
    
    cout << "Enter integers for base and exponent: ";
    cin >> base >> exponent;
        
    cout << "The result is: " << integer_power(base, exponent) << endl;
    
}
int integer_power(int b, int e) {
    int result = 1;
    
    for(int i = 1; i <= e; i++){
        result *= b;
    }
    
    return result;
}
