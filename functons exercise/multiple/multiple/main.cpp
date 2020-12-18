#include <iostream>
using namespace std;

int main() {
    int x, y;
    bool multiple(int, int);
    
    cout << "Enter two integers: ";
    cin >> x >> y;
    
    if(multiple(x, y))
        cout << x << " is multiple of " << y << endl;
    else
        cout << x << " is not multiple of " << y << endl;
}
bool multiple (int x, int y){
    return !(x % y);
}
