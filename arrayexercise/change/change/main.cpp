#include <iostream>
using namespace std;

int main() {
    int denoms[] = {50, 25, 10, 5, 1};
    int change[sizeof(denoms)/sizeof(denoms[0])];
    int amount;
    
    cout << "Enter the amount: ";
    cin >> amount;
    
    for(int i = 0; i < sizeof(denoms)/sizeof(denoms[0]); i++) {
        change[i] = amount / denoms[i];
        amount = amount % denoms[i];
    }
    
    cout << "The changes are " << endl;
    for(int i = 0; i < sizeof(denoms)/sizeof(denoms[0]); i++) {
        cout << denoms[i] << " : " << change[i] << endl;
    }
    
    return 0;
}
