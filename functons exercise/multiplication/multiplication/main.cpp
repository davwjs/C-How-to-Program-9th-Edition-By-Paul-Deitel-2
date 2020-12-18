#include <iostream>
using namespace std;

int main() {
    int x = rand()%10+1, y = rand()%10+1, result = x*y, answer;
    bool multiplication(int, int);
    
    cout << "How much is " << x << " times " << y << " ?" << endl;

    while(true) {
        cin >> answer;
        multiplication(result, answer);
        if(multiplication(result, answer) == false)
            cout << "No. Please try again." << endl;
        else {
            cout << "Correct!" << endl;
            break;
        }
    }
}
bool multiplication (int r, int a) {
    if(r == a)
        return true;
    else
        return false;
}
