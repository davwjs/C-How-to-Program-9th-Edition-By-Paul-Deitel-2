#include <iostream>
using namespace std;

int main() {
    int numberOfStudents;
    double grade, totalGrade = 0.0;
    double quality_points(double, int);
    
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    for(int i = 1; i <=  numberOfStudents; i++) {
        cout << "Enter the grade of each student: ";
        cin >> grade;
        totalGrade += grade;
    }
    
    cout << "The average of the grade is: " << totalGrade/numberOfStudents << endl;
    cout << quality_points(totalGrade, numberOfStudents) << endl;
    
}
double quality_points(double tG, int nOS) {
    double average = tG/nOS;
    if(average < 60)
        return 0;
    else if (average >= 60 && average <= 69)
        return 1;
    else if (average >= 70 && average <= 79)
        return 2;
    else if (average >= 80 && average <= 89)
        return 3;
    else
        return 4;
}
