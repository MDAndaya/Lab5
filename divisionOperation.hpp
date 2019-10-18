//
// Created by MDand on 2019-10-18.
//

#ifndef LAB5_DIVISIONOPERATION_HPP
#define LAB5_DIVISIONOPERATION_HPP

#include "abstractOperation.hpp"

class divisionOperation: public abstractOperation {
public:
    static const char DIVISION_CODE = '/';
    divisionOperation(): abstractOperation(DIVISION_CODE) {};
    virtual int perform(int a, int b) override  {
        return a / b;
    }
    virtual ~divisionOperation() {}

};

#endif //LAB5_DIVISIONOPERATION_HPP
