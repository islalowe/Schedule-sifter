//
// Created by Isla Lowe on 8/1/24.
//
/**
 * The DoublyLinkedList Class manages a list of TimeInterval Objects for each day.
 * If a person works (or is similarly busy) only one TimeInterval out of the day, the list will only be one node long.
 **/

#ifndef SCHEDULE_SIFTER_DOUBLYLINKEDLIST_H
#define SCHEDULE_SIFTER_DOUBLYLINKEDLIST_H

#include "object.h"
#include "list.h"
#include "timeInterval.h"
#include <string>
using std::string;

class DoublyLinkedList : public List {
protected:
    struct Node{
        Object* data;      // the Object that data will be is a TimeInterval. the * indicates a pointer to the interval
        Node* next;
        Node* previous;
    };
    Node* _head;
    Node* _tail;
    DoublyLinkedList(const DoublyLinkedList& other);
    DoublyLinkedList& operator=(const DoublyLinkedList& rhs);
public:
    DoublyLinkedList();
    virtual ~DoublyLinkedList();
    virtual bool Insert(TimeInterval* element, size_t position);
    virtual TimeInterval* Remove(size_t position);
    virtual Object* Get(size_t position)const;
    virtual string ToString()const;
    virtual void Clear();
};


#endif //SCHEDULE_SIFTER_DOUBLYLINKEDLIST_H
