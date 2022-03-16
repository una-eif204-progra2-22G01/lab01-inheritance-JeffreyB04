//
// Created by jeffry on 16/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H
#include <iostream>
#include <sstream>
using namespace std;
class Base {
public:
    virtual ~Base();

    Base();

    virtual void doSomething();
};


#endif //LAB01_INHERITANCE_BASE_H
