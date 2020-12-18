#include <iostream>
using namespace std;

int main() {
double housing, food, clothing, transportation, education, healthCare, vacation, tax = 0.30, total = 0.00;

cout << "Enter total spending for each category" << endl << "Housing: ";
cin >> housing;
total += housing;
cout << endl << "Food: ";
cin >> food;
total += food;
cout << endl << "clothing: ";
cin >> clothing;
total += clothing;
cout << endl << "transportation: ";
cin >> transportation;
total += transportation;
cout << endl << "education: ";
cin >> education;
total += education;
cout << endl << "healthCare: ";
cin >> healthCare;
total += healthCare;
cout << endl << "vacation: ";
cin >> vacation;
total += vacation;

cout << "Your Fair Tax Would Be: $" << (double)(total * tax) << endl;

return 0;
}
