//
// Created by MDand on 2019-10-18.
//
#include <sstream>
#include "rpnCalculator.hpp"

operation* rpnCalculator::operationType(char operation) {
    switch(operation) {
        case additionOperation::ADDITION_CODE:
            return new additionOperation;
            break;
        case subtractionOperation::SUBTRACTION_CODE:
            return new subtractionOperation;
            break;
        case multiplicationOperation::MULTIPLICATION_CODE:
            return new multiplicationOperation;
            break;
        case divisionOperation::DIVISION_CODE:
            return new divisionOperation;
            break;
    }
}

void rpnCalculator::perform(operation* o) {
    int a = stack.top();
    stack.pop();
    int b = stack.top();
    stack.pop();

    result = o->perform(b, a);
    stack.push(result);
}

int rpnCalculator::processForm(string formula) {
    istringstream iss(formula);
    string operand;
    while (iss >> operand) {
        istringstream iss2(operand);
        int i;
        if (iss2 >> i)
            stack.push(i);
        else perform(operationType(operand[0]));
    }
    return result;
}