//
// Created by Isla Lowe on 6/16/24.
// This is a doubly-linked list class that is called schedule
//

#ifndef SCHEDULE_SIFTER_SCHEDULE_H
#define SCHEDULE_SIFTER_SCHEDULE_H

#include "object.h"
#include <sstream>
using std::stringstream;

class Schedule : public Object {


public:
    Schedule();
    virtual ~Schedule();
    virtual Object* Get(size_t position)const;
    virtual string ToString()const;
    void Clear(int day);

//    vector<TimeInterval> FindCommonFreeTime(const Schedule& other, int minDuration) const;
//    bool HasFullFreeDay(const Schedule& other) const;

    Schedule(const Schedule& other);
};


#endif //SCHEDULE_SIFTER_SCHEDULE_H
