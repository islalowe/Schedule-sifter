//
// Created by Isla Lowe on 6/16/24.
//
/**
 * The Schedule class manages an array of 7 days of DoublyLinkedList Objects, one for each day of the week.
 * Each DoublyLinkedList contains a number of TimeIntervals representing the hours worked by a person on that day.
 */

#include "schedule.h"

/**
 * Default Constructor
 * Parent class initializes size to 7
 */
 //todo - make an array
Schedule::Schedule() {

}


/**
 * Copy Constructor
 */
 //fixme
//Schedule::Schedule(const Schedule &other) {
//}


/**
 * Copy Assignment Operator
 */
Schedule &Schedule::operator=(const Schedule &rhs) {
    return *this;
}


/**
 * Destructor
 */
Schedule::~Schedule() {
}


/**
 * Inserts a TimeInterval into a given position.
 * This operation has the following steps:
 * 1. Check if the position is valid
 * 2. Creates a new node and links it to the element
 * 3. If the list is empty, the head and tail point to the new node
 * 4. If the list is not empty but want to insert in position zero
 *    it links the list and updates the head and tail
 * 5. If the position is not zero and the list is not empty, it tra-
 *    verses the list up the element that precedes the element to be
 *    inserted. Links the new node to that position
 * @param element what the client wants to insert into the list
 * @param day the position where the element is to be inserted
 * @return true if it was possible to insert, false otherwise. It will not be able
 * to insert if the position is invalid.
 */
bool Insert(TimeInterval* interval, int day) {
}

//todo
int Schedule::IndexOf(const Object *element) const {
    return 0;
}

//todo
Object* Schedule::Remove(size_t position) {
    return nullptr;
}

//todo
Object* Schedule::Get(size_t position) const {
    return nullptr;
}

//todo
string Schedule::ToString()const {
    stringstream scheduleString;
    return scheduleString.str();

}


/**
 * This method returns nothing but deletes all of the nodes and helps the destructor method.
 */
void Schedule::Clear() {

}