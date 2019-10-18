#include <iostream>
#include "rpnCalculator.hpp"

int main() {
    std::cout << "Enter your formula:\n";
    std::string formula;
    std::getline(std::cin, formula);
    std::cout << "You entered " << formula << std::endl;
    rpnCalculator calculator;
    int result = calculator.processForm(formula);
    std::cout << "The result is:\n";
    std::cout << result << std::endl;
    return 0;
}