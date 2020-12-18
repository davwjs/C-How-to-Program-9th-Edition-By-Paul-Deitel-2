#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the value for x" << endl;
    cin >> x;
    while(x != -1) {
        cout << "x = " << x << endl << "Enter a new value for x "<< endl << "to stop the loop enter -1" << endl;
        cin >> x;
    }
    return 0;
}
