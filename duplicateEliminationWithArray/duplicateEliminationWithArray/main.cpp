#include <iostream>
using namespace std;

int main() {
    const int size = 20;
    int a[size] = { 0 };
    int subscript = 0;
    int duplicate;
    int value;

    cout << "Enter 20 numbers between 10 and 100: " << endl;
    
    for ( int i = 0; i < size;)
    {
        duplicate = 0;
        cin >> value;
        
        if ( value >= 10 && value <= 100 )
        {
            for ( int j = 0; j < subscript; j++ )
            {
                if ( value == a[ j ] )
                {
                    duplicate = 1;
                    break;
                }
            }

            if ( !duplicate )
            {
                a[subscript++ ] = value;
                i++;
            }
            else
                cout << "Duplicate number." << endl;
        }
        else
            cout << "Invalid number." << endl;
    }

    cout << "The nonduplicate values are: " << endl;

    for ( int i = 0; i < size; i++ )
        cout << a[ i ] << endl;
    
    return 0;
}
