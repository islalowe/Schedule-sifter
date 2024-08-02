//
// Created by Isla Lowe on 6/16/24.
//
/**
 * The Schedule class manages an array of 7 days of DoublyLinkedList Objects, one for each day of the week.
 * Each DoublyLinkedList contains a number of TimeIntervals representing the hours worked by a person on that day.
 * The default constructor should make an empty schedule for the Person.
 */

#include "schedule.h"


/**
 * Constructor
 **/
 //todo *?*?*?*?*?*
Schedule::Schedule() {
    for (int i = 0; i < 7; ++i) {
        _week[i] = nullptr;
    }
}


/**
 * Destructor
 **/
Schedule::~Schedule() {
    for (int i = 0; i < 7; ++i) {
        delete _week[i];
    }
}


/**
 * Returns a Time Interval of being busy for a given day (position in the list)
 **/
 DoublyLinkedList* Schedule::Get(size_t day) const {
     if (day < 7) {
         return _week[day];
     }
     return nullptr;
 }


/**
 * Returns a string representation of the schedule for the week
 **/
string Schedule::ToString() const {
    stringstream scheduleString;
    for (int i = 0; i < 7; ++i) {
        scheduleString << "Day " << i << ": " << _week[i]->ToString() << std::endl;
    }
    return scheduleString.str();
}

/**
 * Clears the doubly-linked list of TimeIntervals for a given day
 **/
void Schedule::Clear(int day) {
    if (day < 7) {
        _week[day]->Clear();
    }
}
