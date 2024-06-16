//
// Created by Isla Lowe on 6/16/24.
//

#ifndef SCHEDULE_SIFTER_SCHEDULE_H
#define SCHEDULE_SIFTER_SCHEDULE_H


#include "object.h"
#include "list.h"

class Schedule : public List {
protected:
    struct Node{
        Object* data;           //this is the time
        Node* next;
        Node* previous;
    };
    Node* _head;
    Node* _tail;
    Schedule(const Schedule& other);
    Schedule& operator=(const Schedule& rhs);
public:
    Schedule();
    virtual ~Schedule();
    virtual bool Insert(Object* element, size_t position);
    virtual int IndexOf(const Object* element)const;
    virtual Object* Remove(size_t position);
    virtual Object* Get(size_t position)const;
    virtual string ToString()const;
    virtual void Clear();
};


#endif //SCHEDULE_SIFTER_SCHEDULE_H
