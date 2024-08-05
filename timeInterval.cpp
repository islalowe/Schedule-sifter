//
// Created by Isla Lowe on 6/16/24.
//
/**
 * The TimeInterval Class is an object that contains the information of a particular block of time during which
 * a person is busy.
 **/

#include "timeInterval.h"


/**
 * Default Constructor
 **/
TimeInterval::TimeInterval() {
    _busy = false;
    _startTime = 0;
    _endTime = 0;
}


/**
 * Constructor with parameters
 **/
TimeInterval::TimeInterval(int start, int end) {
    _busy = false;
    _startTime = start;
    _endTime = end;
}


/**
 * Returns a string representation of the time interval
 **/
string TimeInterval::ToString()const {
    stringstream ssTime;
    ssTime << "Time Interval Start: " << _startTime << ", Time Interval End" << _endTime << std::endl;
    return ssTime.str();
}


/**
 * Getter method for the startTime data member
 **/
int TimeInterval::GetStartTIme() const {
    return _startTime;
}


/**
 * Getter method for the endTime data member
 **/
int TimeInterval::GetEndTIme() const {
    return _endTime;
}


/**
 * Setter method for the startTime data member
 **/
void TimeInterval::SetStartTime(int time) {
    _startTime = time;
}


/**
 * Setter method for the endTime data member
 **/
void TimeInterval::SetEndTime(int time) {
    _endTime = time;
}


/**
 * Returns a deep copy of the object
 **/
TimeInterval* TimeInterval::Clone() const {
    return new TimeInterval(*this);
}


/**
 * Returns a string representation of which days in the coming week on which the given schedules have no TimeIntervals
 **/
 //todo change this eventually to accomodate comparing more schedules at once
string TimeInterval::CompareFreeDays(const Comparable* rhs)const {
    return "Common free days\n";
}


/**
 * Returns a string representation of which times during the coming week that are free for both given schedules
 **/
//todo change this eventually to accomodate comparing more schedules at once
string TimeInterval::CompareForSharedFreeTime(const Comparable* rhs, int desiredFreeTimeAmt)const {
    return "Shared free days\n";
}


/**
 *
 **/
int TimeInterval::Duration() const {
    return _endTime - _startTime;
}
