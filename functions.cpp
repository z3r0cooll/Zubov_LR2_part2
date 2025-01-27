#include "functions.h"
#include <iostream>

std::vector<int> inputData() {
    std::vector<int> data;
    int value;
    std::cout << "Enter numbers (end with 0): ";
    while (std::cin >> value && value != 0) {
        data.push_back(value);
    }
    return data;
}

int computeSum(const std::vector<int>& data) {
    int sum = 0;
    for (int value : data) {
        sum += value;
    }
    return sum;
}