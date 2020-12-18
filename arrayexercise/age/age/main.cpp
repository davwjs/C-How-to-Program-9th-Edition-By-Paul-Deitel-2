#include <iostream>
using namespace std;

int main() {
    int age[6];
    
    for(int i = 0; i < 6; i++){
        cout << "Enter your friend's age: ";
        cin >> age[i];
    }
    for(int i = 0; i < 6; i++){
        cout << "My friend's age is: " << age[i] << endl;
    }
    return 0;
}
