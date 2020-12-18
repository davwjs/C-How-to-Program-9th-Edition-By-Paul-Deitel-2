#include <iostream>
using namespace std;

// & address operator
int main() {
    void change(int &, int &); // declaration call by address
    int x = 10, y = 20;
    cout << "before the call" << endl;
    cout << "x = " << x << ",y = " << y << endl;
    change(x, y);
    cout << "after the call" << endl;
    cout << "x = " << x << ",y = " << y << endl;
    
    return 0;
}
//function definition
void change(int &a, int &b) { // header
    int temp = 0;;
    temp = a;
    a = b;
    b = temp;
    cout << "in change" << endl;
    cout << "x = " << a << ",y = " << b << endl;
}
