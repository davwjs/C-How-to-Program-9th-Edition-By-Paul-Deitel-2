#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myOutPutFile("File in.dat");

    myOutPutFile << endl << endl << "Introduction" << endl << endl << "Repetition statements are used in C++ programming to change the flow of control." << endl << "Repetition statements allow a programmer to direct the computer to execute a statement or group of statements multiple times. Repetition statements are also called loops." << endl << "In this chapter you will review the while loop, the for loop, and the do while loop." << "These are the three types of repetition statements in the C++ programming language." << endl << "You will also review additional I/O Statements that are often used to control loops as well as additinal C++ operators that are often used in repetition statements.";
}
