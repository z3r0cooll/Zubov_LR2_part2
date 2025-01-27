#include <iostream>
#include <sstream>
#include "functions.h"

void testInputData() {
    // Тест 1: Пустой ввод
    {
        std::istringstream input("0");
        std::cin.rdbuf(input.rdbuf());
        std::vector<int> data = inputData();
        if (data.empty()) {
            std::cout << "Test 1 (Empty Input): Passed\n";
        } else {
            std::cout << "Test 1 (Empty Input): Failed\n";
        }
    }

    // Тест 2: Один элемент
    {
        std::istringstream input("5 0");
        std::cin.rdbuf(input.rdbuf());
        std::vector<int> data = inputData();
        if (data.size() == 1 && data[0] == 5) {
            std::cout << "Test 2 (Single Input): Passed\n";
        } else {
            std::cout << "Test 2 (Single Input): Failed\n";
        }
    }

    // Тест 3: Несколько элементов
    {
        std::istringstream input("1 2 3 0");
        std::cin.rdbuf(input.rdbuf());
        std::vector<int> data = inputData();
        if (data.size() == 3 && data[0] == 1 && data[1] == 2 && data[2] == 3) {
            std::cout << "Test 3 (Multiple Inputs): Passed\n";
        } else {
            std::cout << "Test 3 (Multiple Inputs): Failed\n";
        }
    }
}

void testComputeSum() {
    // Тест 1: Пустой вектор
    {
        std::vector<int> data;
        if (computeSum(data) == 0) {
            std::cout << "Test 1 (Empty Vector): Passed\n";
        } else {
            std::cout << "Test 1 (Empty Vector): Failed\n";
        }
    }

    // Тест 2: Один элемент
    {
        std::vector<int> data = {5};
        if (computeSum(data) == 5) {
            std::cout << "Test 2 (Single Element): Passed\n";
        } else {
            std::cout << "Test 2 (Single Element): Failed\n";
        }
    }

    // Тест 3: Несколько элементов
    {
        std::vector<int> data = {1, 2, 3};
        if (computeSum(data) == 6) {
            std::cout << "Test 3 (Multiple Elements): Passed\n";
        } else {
            std::cout << "Test 3 (Multiple Elements): Failed\n";
        }
    }
}

int main() {
    std::cout << "Running inputData tests...\n";
    testInputData();

    std::cout << "\nRunning computeSum tests...\n";
    testComputeSum();

    return 0;
}