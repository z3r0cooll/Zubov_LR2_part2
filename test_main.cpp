// test.cpp
#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "functions.h"
#include <string>

using namespace cute;
using namespace std;

void testUserInput_Valid() {
    string str = "123";
    bool expected = true;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Invalid() {
    string str = "abc";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Empty() {
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testCalcRemainder() {
    int Q = 10;
    int P = 3;
    int expected = 1;
    int actual = CalcRemainder(Q, P);
    ASSERT_EQUAL(expected, actual);
}

void testCalcQuotient() {
    int Q = 10;
    int P = 3;
    int expected = 3;
    int actual = CalcQuotient(Q, P);
    ASSERT_EQUAL(expected, actual);
}

int main() {
    suite s;
    s.push_back(CUTE(testUserInput_Valid));
    s.push_back(CUTE(testUserInput_Invalid));
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testCalcRemainder));
    s.push_back(CUTE(testCalcQuotient));
    ide_listener<> listener;
    makeRunner(listener)(s, "All Tests");
    return 0;
}