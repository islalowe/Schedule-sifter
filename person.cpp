//
// Created by Isla Lowe on 6/16/24.
//
/**
 * The Person Class contains a Schedule object as a member variable.
 **/

#include "person.h"


/**
 * Default Constructor.
 */
Person::Person() {
    _name = "no name";
    //make an empty schedule for creating a new person who doesn't have one set up yet
    Schedule newSchedule;
    //the schedule constructor makes an empty one by default
    _schedule = newSchedule;
}


/**
 * Constructor with one parameter.
 */
Person::Person(const string& personName) {
    _name = personName;
    //make an empty schedule for creating a new person who doesn't have one set up yet
    Schedule newSchedule;
    //the schedule constructor makes an empty one by default
    _schedule = newSchedule;
}


/**
 * Constructor with parameters.
 * @param personName: a string value that will be set as the _name data member of the Person object.
 * @param personSchedule: a schedule object that will be set as the _schedule data member of the Person.
 */
Person::Person(const string& personName, Schedule& personSchedule) {
    _name = personName;
    _schedule = personSchedule;
}


/**
 * Copy Constructor
 */
Person::Person(const Person &rhs) {
    _name = rhs._name;
    _schedule = rhs._schedule;
}


/**
 * Copy Assignment Operator
 */
const Person& Person::operator=(const Person &rhs) {
    if (this == &rhs) {
        // Checking for self-assignment
        return *this;
    }
    _name = rhs._name;
    _schedule = rhs._schedule;
    return *this;
}


/**
 * Destructor - doesn't do anything, no memory is dynamically allocated
 */
Person::~Person() {
}


/**
 * Setter to assign a Schedule to a Person;
 */
void Person::SetSchedule(Schedule& schedule) {
    _schedule = schedule;
}


/**
 * Getter to return the schedule of a person.
 */
Schedule Person::GetSchedule(Person& person) {
    return _schedule;
}


/**
 * Returns a string representation of the current Person object's name and schedule.
 */
string Person::ToString() const {
    stringstream personInfo;
    personInfo << "Name: " << _name << ", Schedule: ";
    //this should call the ToString that returns the start and end times, from the Schedule class
    personInfo << _schedule.ToString() << std::endl;
    return personInfo.str();
}

/**
 *
 */
 //todo --> I don't know if this is useful yet
bool Person::Equals(const Object& rhs)const {
    return false;
}


Object* Person::Clone()const {
    return new Person(*this);
}


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


/**
 * Builds a schedule for the person.
 */
void Person::BuildPersonSchedule() {
    _schedule.BuildScheduleFromInput();
}