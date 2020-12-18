#include <iostream>
using namespace std;

int main() {
    int x = 0;
    bool even(int);
    
    while(even(x) == true) {
        cout << "Enter a number: ";
        cin >> x;
        
        even(x);
        if(even(x) == true)
            cout << x << " is an even number." << endl;
        else
            cout << x << " is not an even number." << endl;
    }
}
bool even(int x) {
    if(x % 2 == 0)
        return true;
    else
        return false;
}
