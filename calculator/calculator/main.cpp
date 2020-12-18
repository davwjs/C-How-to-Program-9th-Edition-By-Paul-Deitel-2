#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    char op;
    
    cout << "Enter the value for a, operator, and b: ";
    cin >> a >> op >> b;
    
    switch (op) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a * b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            if(b == 0){
                cout << "can not divide by 0" << endl;
                exit(1);
            }
            c = a / b;
            break;
        default:
            cout << "wrong operator" << endl;
            exit(1);
    }
    cout << a << " " << op << " " << b << " = " << c << endl;
    
    return 0;
}
