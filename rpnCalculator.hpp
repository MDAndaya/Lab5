//
// Created by MDand on 2019-10-18.
//

#ifndef LAB5_RPNCALCULATOR_HPP
#define LAB5_RPNCALCULATOR_HPP

#include <stack>
#include "additionOperation.hpp"
#include "subtractionOperation.hpp"
#include "multiplicationOperation.hpp"
#include "divisionOperation.hpp"

using namespace std;

class rpnCalculator {
private:
    int result;
    stack<int> stack;
    operation* operationType(char c);
    void perform(operation& operation);
};

#endif //LAB5_RPNCALCULATOR_HPP

