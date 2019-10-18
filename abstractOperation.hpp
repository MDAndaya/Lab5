//
// Created by MDand on 2019-10-18.
//

#ifndef LAB5_ABSTRACTOPERATION_HPP
#define LAB5_ABSTRACTOPERATION_HPP

#include "operation.hpp"


class abstractOperation: public operation {
private:
    char operationType;
public:
    abstractOperation(char type) {
        this->operationType = type;
    }
    char getCode() {
        return operationType;
    }
    virtual ~abstractOperation() {}

};
#endif //LAB5_ABSTRACTOPERATION_HPP
