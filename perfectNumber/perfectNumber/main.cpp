#include <iostream>
using namespace std;

int main() {
    int number;
    bool perfectNumber(int);
    
    cout << "Enter a number: ";
    cin >> number;
    
    if(perfectNumber(number) == true)
        cout << number << " is a perfect number." << endl;
    else
        cout << number << " is not a perfect number." << endl;
}
bool perfectNumber (int n) {
    int sum = 0;
    
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            sum += i;
        cout << i << "\t" << sum << endl;
    }
    
    if(sum == n)
        return true;
    else
        return false;
}
