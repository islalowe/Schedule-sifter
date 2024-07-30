//
// Created by Isla Lowe on 6/16/24.
//
/**
 * The schedule is 7 days of time intervals that represent hours where a person is busy each day of the week.
 */

#include "schedule.h"


/**
 * Default Constructor
 */
Schedule::Schedule() {
    _tail = nullptr;
    _head = nullptr;
}


/**
 * Copy Constructor
 */
 //fixme
//Schedule::Schedule(const Schedule &other) {
//    _head = nullptr;
//    _tail = nullptr;
//    Node* neo = other._head;
//    while (neo != nullptr) {
//        Object* newData = neo->data->Clone();
//        //fixme
//        this->Insert(newData, this->IndexOf(_tail) + 1);
//        neo = neo->next;
//    }
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
 //fixme
Schedule::~Schedule() {
    this->Clear();
}


//todo
bool Schedule::Insert(Object *element, size_t position) {
    return false;
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
//    for (const auto& interval : interval) {
//        scheduleString << "Start: " << interval->GetStartTime() << ", End: " << interval->GetEndTime() << "\n";
//    }
// or maybe
//    while (current != nullptr) {
//        // Assuming Object has a ToString() method
//        scheduleString << current->data->ToString() << "\n";
//        current = current->next;
//    }
    return scheduleString.str();

}


/**
 * This method returns nothing but deletes all of the nodes and helps the destructor method.
 */
void Schedule::Clear() {
    Node* current = _head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current->data;
        delete current;
        current = nextNode;
    }
    _head = _tail = nullptr;
}