//
// Created by Isla Lowe on 6/16/24.
//

#ifndef SCHEDULE_SIFTER_PERSON_H
#define SCHEDULE_SIFTER_PERSON_H


#include "comparable.h"
#include "schedule.h"
#include <string>
using std::string;

class Person : public Comparable{
    char* _name;
    Schedule schedule;
public:
    Person(const string& name, size_t age);
    Person(const Person& person);
    const Person& operator=(const Person& rhs);
    virtual ~Person();
    virtual string ToString()const;
    virtual bool Equals(const Object& rhs)const;
    virtual Object* Clone()const;
    virtual int CompareTo(const Comparable* rhs)const;
};


#endif //SCHEDULE_SIFTER_PERSON_H
