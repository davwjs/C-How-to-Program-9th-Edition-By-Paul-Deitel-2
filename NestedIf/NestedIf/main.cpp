#include <iostream>
using namespace std;

int main() {
    int pollutionIndex;
    
    cout << "Enter your city pollution index: ";
    cin >> pollutionIndex;
    
    if(pollutionIndex >= 35 && pollutionIndex < 60)
        cout << "Unpleasant" << endl;
    else if(pollutionIndex >= 60)
        cout << "Health Hazard" << endl;
    else
        cout << "Pleasant" << endl;
    
    return 0;
}
