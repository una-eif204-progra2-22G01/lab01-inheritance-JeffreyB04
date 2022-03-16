//
// Created by jeffr on 16/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H
#include "Base.h"

class Derived2 : public Base{
public:
    Derived2();

    virtual ~Derived2();

    virtual void doSomething();
};


#endif //LAB01_INHERITANCE_DERIVED2_H
