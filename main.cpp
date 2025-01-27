#include <iostream>
#include "functions.h"

int main() {
    std::string prompt = "Введите числа через пробел: ";
    std::vector<int> data = input_data(prompt);
    
    int result = sum(data);
    std::cout << "Сумма чисел: " << result << std::endl;

    return 0;
}