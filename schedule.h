//
// Created by Isla Lowe on 6/16/24.

#ifndef SCHEDULE_SIFTER_SCHEDULE_H
#define SCHEDULE_SIFTER_SCHEDULE_H

#include "object.h"
#include "list.h"
#include "doublyLinkedList.h"
#include <sstream>
using std::stringstream;

class Schedule : public Object {
    // An array of doubly-linked list pointers - the constructor will make them all nullptr
    DoublyLinkedList* _week[7]{};
public:
    Schedule();
    Schedule(const Schedule &other);
    ~Schedule() override;
    virtual DoublyLinkedList* Get(size_t day) const;
    string ToString()const override;
    void Clear(int day);
    void BuildScheduleFromInput();

    //vector<TimeInterval> FindCommonFreeTime(const Schedule& other, int minDuration) const;
    //vector<string> ListFullFreeDays(const Schedule& other) const;
};


#endif //SCHEDULE_SIFTER_SCHEDULE_H
