#include <iostream>
using namespace std;

int main(){
    int score;
    char grade = '\0';
    
    cout << "Enter your score: ";
    cin >> score;
    
    switch (score / 10) {
        case 9: case 10:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
            grade = 'F';
            break;
        default:
            cout << "score is out of range" << endl;
            exit(1);
    }
    cout << "your score is " << score << " and your grade is " << grade << endl;
    
    return 0;
}
