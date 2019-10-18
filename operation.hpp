//
// Created by MDand on 2019-10-18.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP

class operation {
public:
    virtual char getCode() = 0;
    virtual int perform(int a, int b) = 0;
    virtual ~operation() {}


};
#endif //LAB5_OPERATION_HPP
