//
// Created by MDand on 2019-10-18.
//
#include "rpnCalculator.hpp"

operation* rpnCalculator::operationType(char operation) {
    switch(operation) {
        case additionOperation::ADDITION_CODE:
            additionOperation *a;
            return a;
            break;
        case subtractionOperation::SUBTRACTION_CODE:
            subtractionOperation *s;
            return s;
            break;
        case multiplicationOperation::MULTIPLICATION_CODE:
            multiplicationOperation *m;
            return m;
            break;
        case divisionOperation::DIVISION_CODE:
            divisionOperation *d;
            return d;
            break;
    }
}

void rpnCalculator::perform(operation &operation) {

}