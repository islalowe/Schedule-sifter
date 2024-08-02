//
// Created by Isla Lowe on 6/16/24.
// Object is a general base class
//

#ifndef SCHEDULE_SIFTER_OBJECT_H
#define SCHEDULE_SIFTER_OBJECT_H

#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;

class Object{

public:
    Object();
    virtual ~Object();
    virtual string ToString()const;
    virtual bool Equals(const Object& rhs)const;
    virtual Object* Clone()const;

};


#endif //SCHEDULE_SIFTER_OBJECT_H
