//
// Created by Isla Lowe on 6/16/24.
//

#include "person.h"



Person::Person(const string& personName) {
    _name = personName;
}

Person::Person(const Person &rhs) {
    _name = rhs._name;
}

const Person &Person::operator=(const Person &rhs) {
    if (this == &rhs) {
        // Checking for self-assignment
        return *this;
    }
    _name = rhs._name;
    //fixme use a setter here or make _schedule public
    //_schedule = rhs._schedule; // Assuming Schedule class has a proper assignment operator

    return *this;
}


/**
 * Destructor
 */
Person::~Person() {

}


string Person::ToString() const {
    return Comparable::ToString();
}


bool Person::Equals(const Object& rhs)const {

}


Object* Person::Clone()const {

}


int Person::CompareTo(const Comparable* rhs)const {

}