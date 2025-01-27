#include <iostream>
#include "functions.h"

int main() {
    std::vector<int> data = inputData();
    int sum = computeSum(data);
    std::cout << "Sum of elements: " << sum << std::endl;
    return 0;
}