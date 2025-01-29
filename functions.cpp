// main.cpp
#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

int main() {
    string str_input;

    // Input Q
    cout << "Input Q: ";
    getline(cin, str_input);
    while (!UserInput(str_input)) {
        cout << "Input Q: ";
        getline(cin, str_input);
    }
    int Q = stoi(str_input);

    // Input P
    cout << "Input P (less than Q): ";
    getline(cin, str_input);
    while (!UserInput(str_input) || stoi(str_input) >= Q) {
        cout << "Input P (less than Q): ";
        getline(cin, str_input);
    }
    int P = stoi(str_input);

    // Calculate remainder and quotient
    int remainder = CalcRemainder(Q, P);
    int quotient = CalcQuotient(Q, P);

    // Output results
    cout << "Remainder of Q / P is " << remainder << endl;
    cout << "Quotient of Q / P is " << quotient << endl;

    return 0;
}