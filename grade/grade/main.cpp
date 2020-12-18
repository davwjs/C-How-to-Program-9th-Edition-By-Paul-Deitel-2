#include <iostream>
using namespace std;

int main(){
    int score;
    char grade;
    
    cout << "Enter your score: ";
    cin >> score;
    
    if(score > 0 && score < 50)
        grade = 'F';
    else if(score < 67)
        grade = 'D';
    else if(score < 77)
        grade = 'C';
    else if(score < 87)
        grade = 'B';
    else if(score <= 100)
        grade = 'A';
    else
        cout << "score is out of range" << endl;
    cout << "Your score is " << score << " and your grade is " << grade << endl;
    
    return 0;
}
