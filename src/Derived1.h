//
// Created by jeffry on 16/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H
#include "Base.h"

class Derived1 : public Base{
public:
    Derived1();

    virtual ~Derived1();

    virtual void doSomething();
};


#endif //LAB01_INHERITANCE_DERIVED1_H
