//
// Created by MDand on 2019-10-18.
//

#ifndef LAB5_SUBTRACTIONOPERATION_HPP
#define LAB5_SUBTRACTIONOPERATION_HPP

#include "abstractOperation.hpp"

class subtractionOperation: public abstractOperation {
public:
    static const char SUBTRACTION_CODE = '-';
    subtractionOperation(): abstractOperation(SUBTRACTION_CODE) {}
    int perform(int a, int b) override  {
        return a - b;
    }
    virtual ~subtractionOperation() {}

};

#endif //LAB5_SUBTRACTIONOPERATION_HPP
