//
// Created by Isla Lowe on 6/16/24.
//

#include "timeInterval.h"

/**
 * Default Constructor
 **/
timeInterval::timeInterval() {
    _busy = false;
    _startTime = 0;
    _endTime = 0;
}


/**
 * Constructor with parameters
 **/
timeInterval::timeInterval(int start, int end) {
    _busy = false;
    _startTime = start;
    _endTime = end;
}


/**
 * Returns a string representation of the time interval
 **/

string timeInterval::ToString()const {
    return "time interval";
}



/**
 * Getter method for the startTime data member
 **/
int timeInterval::GetStartTIme() const {
    return _startTime;
}

/**
 * Getter method for the endTime data member
 **/
int timeInterval::GetEndTIme() const {
    return _endTime;
}

/**
 * Setter method for the startTime data member
 **/
void timeInterval::SetStartTime(int time) {
    _startTime = time;
}

/**
 * Setter method for the endTime data member
 **/
void timeInterval::SetEndTime(int time) {
    _endTime = time;
}

/**
 * Returns true is any of the timeInterval data member of the current object has times in common with
 * the timeInterval data member of the rhs object.
 * @param rhs: the Person object whose timeInterval will be compared against the current object.
 **/
 //fixme: a person has one schedule but that has many time intervals.
 // should look through all 7 or check one day?
 //look through a week of 7 time intervals
bool timeInterval::Overlaps(const timeInterval &rhs) const {
    if ((_startTime < rhs._endTime) && (_endTime > rhs._startTime)) {
        return true;
    }
    return false;
}

/**
 *
 **/
 //fixme should this return an int?
int timeInterval::CompareTo(const Comparable *rhs) const {
    return 0;
}


int timeInterval::Duration() const {
    return _endTime - _startTime;
}
