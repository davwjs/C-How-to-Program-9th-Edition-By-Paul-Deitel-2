#include <iostream>
using namespace std;

int main() {
    int heads = 0, tails = 0;
    int flip();
    
    for(int i = 0; i < 100; i++){
        flip();
        if(flip() == 1) {
            cout << "heads" << endl;
            heads++;
        }
        else {
            cout << "tails" << endl;
            tails++;
        }
    }
    
    cout << "The total number of heads are: " << heads << endl;
    cout << "The total number of tails are: " << tails << endl;
}
int flip(){
    return rand()%2;
}
