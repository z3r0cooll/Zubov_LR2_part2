///
#ifndef unctions.h
#define unctions.h

#include <string>

// Function to check if the input is a valid integer
bool UserInput(const std::string& input) {
    if (input.empty()) return false;
    try {
        std::stoi(input);
        return true;
    } catch (...) {
        return false;
    }
}

// Function to calculate the remainder of Q divided by P
int CalcRemainder(int Q, int P) {
    return Q % P;
}

// Function to calculate the quotient of Q divided by P
int CalcQuotient(int Q, int P) {
    return Q / P;
}

#endif // 