//
// Created by Isla Lowe on 6/16/24.
//
/**
 * The Person Class contains a Schedule object as a member variable.
 **/

#ifndef SCHEDULE_SIFTER_PERSON_H
#define SCHEDULE_SIFTER_PERSON_H


#include "comparable.h"
#include "schedule.h"
#include <string>
using std::string;

class Person : public Comparable{
    string _name;
    Schedule _schedule;
public:
    Person();
    Person(const string& personName);
    Person(const string& personName, Schedule& personSchedule);
    Person(const Person& rhs);
    const Person& operator=(const Person& rhs);
    virtual ~Person();
    void SetSchedule(Schedule& schedule);
    Schedule GetSchedule(Person& person);
    virtual string ToString()const;
    virtual bool Equals(const Object& rhs)const;
    virtual Object* Clone()const;
    virtual string CompareFreeDays(const Comparable* rhs)const;
    virtual string CompareForSharedFreeTime(const Comparable* rhs, int desiredFreeTimeAmt)const;
};


#endif //SCHEDULE_SIFTER_PERSON_H
