#include <iostream>
using namespace std;

int main() {
    int add(int, int); // function prototype
    int x = 10, y = 20, s;
    s = add(x, y); // calling the function
    //s = x + y;
    cout << "The sum of " << x << " + " << y << " = " << s << endl;
    
    return 0;
}
int add(int a, int b) { // header
    //int sum;
    //sum = a + b;
    //return sum;
    return (a + b);
}
