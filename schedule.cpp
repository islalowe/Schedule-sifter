//
// Created by Isla Lowe on 6/16/24.
//
/**
 * The Schedule class manages an array of 7 days of DoublyLinkedList Objects, one for each day of the week.
 * Each DoublyLinkedList contains a number of TimeIntervals representing the hours worked by a person on that day.
 * The default constructor should make an empty schedule for the Person.
 */

#include "schedule.h"


/**
 * Constructor
 **/
 //todo *?*?*?*?*?*
Schedule::Schedule() {
    for (int i = 0; i < 7; ++i) {
        _week[i] = nullptr;
    }
}


/**
 * Destructor
 **/
Schedule::~Schedule() {
    for (int i = 0; i < 7; ++i) {
        delete _week[i];
    }
}


/**
 * Returns a Time Interval of being busy for a given day (position in the list)
 **/
 DoublyLinkedList* Schedule::Get(size_t day) const {
     if (day < 7) {
         return _week[day];
     }
     return nullptr;
 }


/**
 * Returns a string representation of the schedule for the week
 **/
string Schedule::ToString() const {
    stringstream scheduleString;
    for (int i = 0; i < 7; ++i) {
        scheduleString << "Day " << i << ": " << _week[i]->ToString() << std::endl;
    }
    return scheduleString.str();
}


/**
 * Clears the doubly-linked list of TimeIntervals for a given day
 **/
void Schedule::Clear(int day) {
    if (day < 7) {
        _week[day]->Clear();
    }
}


/**
 * Builds a schedule based on user input.
 */
void Schedule::BuildScheduleFromInput() {
    const string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string day;
    for (size_t i = 0; i < 7; i++) {
        day = days[i];
        char works;
        cout << "Does this person work on " << day << "? (y/n): ";
        cin >> works;
        int startTime, endTime;

        while (works == 'y' || works == 'Y') {
            TimeInterval interval;

            cout << "What time do they start work on " << day << "? (24hr format: HHMM-HHMM): ";
            cin >> startTime;
            cout << "What time do they end work on " << day << "? (24hr format: HHMM-HHMM): ";
            cin >> endTime;
            interval.SetStartTime(startTime);
            interval.SetEndTime(endTime);

            //Insert this time interval into the doubly linked list for the day
            _week[i]->Insert(&interval, _week[i]->Size());

            cout << "Does this person work again on " << day << "? (y/n): ";
            cin >> works;
        }
    }
}
