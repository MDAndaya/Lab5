//
// Created by MDand on 2019-10-18.
//

#ifndef LAB5_MULTIPLICATIONOPERATION_HPP
#define LAB5_MULTIPLICATIONOPERATION_HPP

#include "abstractOperation.hpp"

class multiplicationOperation: public abstractOperation {
public:
    static const char MULTIPLICATION_CODE = '*';
    multiplicationOperation(): abstractOperation(MULTIPLICATION_CODE) {}
    int perform(int a, int b) override  {
        return a * b;
    }
    virtual ~multiplicationOperation() {}

};

#endif //LAB5_MULTIPLICATIONOPERATION_HPP
