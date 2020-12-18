#include <iostream>
using namespace std;

int main() {
    int min, max, avg, n, value;
    cout << "Enter the number of values n" << endl;
    cin >> n;
    cout << "read the first value and put it into max" << endl;
    cin >> max;
    avg = min = max;
    for (int i = 1; i < n; i++) {
        cout << "Enter a value" << endl;
        cin >> value;
        if(value < min)
            min = value;
        if(value > max)
            max = value;
        avg += value;
    }
    cout << "The smallest value is " << min << endl;
    cout << "The largest value is " << max << endl;
    cout << "The average of the values is " << (float)avg / n << endl;
    
    return 0;
 }
