//
// Created by Isla Lowe on 6/16/24.
//
/**
 * The Person Class contains a Schedule object as a member variable.
 **/

#include "person.h"


/**
 * Constructor
 */
Person::Person(const string& personName) {
    _name = personName;
}


/**
 * Copy Constructor
 */
Person::Person(const Person &rhs) {
    _name = rhs._name;
}


/**
 * Copy Assignment Operator
 */
const Person &Person::operator=(const Person &rhs) {
    if (this == &rhs) {
        // Checking for self-assignment
        return *this;
    }
    _name = rhs._name;
    //fixme use a setter for _schedule or make _schedule public
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
    return false;
}


//Object* Person::Clone()const {
//
//}


/**
 * Returns a string representation of all of the days off in the given week
 * that the current object and rhs have in common.
 * @param rhs: The comparable Person whose Schedule will be compared against that of the current object
 **/
string Person::CompareFreeDays(const Comparable* rhs)const {
    return "";
}

/**
 * Returns a string representation of all of the days off in the given week
 * in which the current object and rhs Person both have coinciding free time in the amount specified in the parameter.
 * @param rhs: The comparable Person whose Schedule will be compared against that of the current object
 * @param desiredFreeTimeAmt: an int value representing the size of coinciding time intervals, in number of hours,
 * that will be searched for in both Persons schedules.
 **/
string Person::CompareForSharedFreeTime(const Comparable* rhs, int desiredFreeTimeAmt)const {
    return "";
}