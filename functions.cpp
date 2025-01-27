#include "functions.h"
#include <sstream>
#include <iostream>

std::vector<int> input_data(const std::string& prompt) {
    std::vector<int> numbers;
    std::string line;
    
    std::cout << prompt;
    std::getline(std::cin, line);
    
    std::stringstream ss(line);
    int number;
    while (ss >> number) {
        numbers.push_back(number);
    }
    
    return numbers;
}

int sum(const std::vector<int>& numbers) {
    int total = 0;
    for (int num : numbers) {
        total += num;
    }
    return total;
}