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
#include <string>
using std::string;

class DoubleLinkedList : public List {
protected:
    struct Node{
        Object* data;
        Node* next;
        Node* previous;
    };
    Node* _head;
    Node* _tail;
    DoubleLinkedList(const DoubleLinkedList& other);
    DoubleLinkedList& operator=(const DoubleLinkedList& rhs);
public:
    DoubleLinkedList();
    virtual ~DoubleLinkedList();
    virtual bool Insert(Object* element, size_t position);
    virtual int IndexOf(const Object* element)const;
    virtual Object* Remove(size_t position);
    virtual Object* Get(size_t position)const;
    virtual string ToString()const;
    virtual void Clear();

};


#endif //SCHEDULE_SIFTER_DOUBLYLINKEDLIST_H
