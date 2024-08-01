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
protected:
    struct Node{
        TimeInterval* data;           //this is the time
        Node* next;
        Node* previous;
    };
    Node* _head;
    Node* _tail;
    Node* head[7];                   // 0: Sunday, 1: Monday, ..., 6: Saturday
    Node* tail[7];

    Schedule& operator=(const Schedule& rhs);
public:
    Schedule();
    virtual ~Schedule();
    bool Insert(TimeInterval* interval, int day);
    virtual int IndexOf(const Object* element)const;
    virtual Object* Remove(size_t position);
    virtual Object* Get(size_t position)const;
    virtual string ToString()const;
    void Clear(int day);

//    vector<TimeInterval> FindCommonFreeTime(const Schedule& other, int minDuration) const;
//    bool HasFullFreeDay(const Schedule& other) const;

    Schedule(const Schedule& other);
};


#endif //SCHEDULE_SIFTER_SCHEDULE_H
