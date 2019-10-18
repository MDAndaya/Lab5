//
// Created by MDand on 2019-10-18.
//
#ifndef LAB5_ADDITIONOPERATION_HPP
#define LAB5_ADDITIONOPERATION_HPP

#include "abstractOperation.hpp"

class additionOperation: public abstractOperation {
public:
    static const char ADDITION_CODE = '+';
    additionOperation(): abstractOperation(ADDITION_CODE) {}
    virtual int perform(int a, int b) override {
        return a + b;
    }
    virtual ~additionOperation() {}
};

#endif //LAB5_ADDITIONOPERATION_HPP
