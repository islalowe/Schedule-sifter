//
// Created by Isla Lowe on 6/16/24.

#ifndef SCHEDULE_SIFTER_SCHEDULE_H
#define SCHEDULE_SIFTER_SCHEDULE_H

#include "object.h"
#include "doublyLinkedList.h"
#include <sstream>
using std::stringstream;

class Schedule : public Object {
    //fixme
    //make an array of doubly-linked list pointers - the constructor will make them all nullptr
    DoublyLinkedList* _week[7];
public:
    Schedule();
    virtual ~Schedule();
    virtual DoublyLinkedList* Get(size_t day) const;
    virtual string ToString()const;
    void Clear(int day);
    void BuildScheduleFromInput();

//    vector<TimeInterval> FindCommonFreeTime(const Schedule& other, int minDuration) const;
//    bool HasFullFreeDay(const Schedule& other) const;

    Schedule(const Schedule& other);
};


#endif //SCHEDULE_SIFTER_SCHEDULE_H
