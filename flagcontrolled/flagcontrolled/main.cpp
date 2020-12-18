//flag controlled loop
#include <iostream>
using namespace std;

int main() {
    bool flag = true;
    int x;
    while (flag) {
        cout << "Enter the value for x" << endl;
        cin >> x;
        if(x == 5)
            flag = false;
        cout << "x = " << x << endl;
    }
    return 0;
}
