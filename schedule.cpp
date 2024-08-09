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
 * _week is initialized first in a constructor initializer list because _week is an array of pointers.
 * If not explicitly initialized, the pointers in _week may be garbage values and
 * not be nullptr initially, leading to potential issues.
 **/

 Schedule::Schedule() : _week() {
     for (int i = 0; i < 7; ++i) {
         _week[i] = new DoublyLinkedList(); // Initialize each day with an empty DoublyLinkedList
     }
 }


/**
* Copy Constructor
**/
Schedule::Schedule(const Schedule &other) : _week() {
    for (int i = 0; i < 7; ++i) {
        _week[i] = new DoublyLinkedList(*other._week[i]);
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
        scheduleString << "Day " << i << ": " << _week[i]->ToString();
        if (i < 6) {
            scheduleString << ", ";
        }
    }
    scheduleString << std::endl;
    return scheduleString.str();
}


//todo this should be used but isn't
/**
 * Clears the doubly-linked list of TimeIntervals for a given day
 **/
void Schedule::Clear(int day) {
    if ((day < 7) && (_week[day] != nullptr)) {
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

        if (works == 'y' || works == 'Y') {
            // Make a new list for the day if there are no shifts on that day already
            if (_week[i] == nullptr) {
                DoublyLinkedList* newDaySchedule = new DoublyLinkedList();
                _week[i] = newDaySchedule;
            }

            while (works == 'y' || works == 'Y') {
                TimeInterval* interval = new TimeInterval();

                cout << "What time do they start work on " << day << "? (24hr format: HHMM): ";
                cin >> startTime;
                cout << "What time do they end work on " << day << "? (24hr format: HHMM): ";
                cin >> endTime;
                interval->SetStartTime(startTime);
                interval->SetEndTime(endTime);

                // Insert this time interval into the doubly linked list for the day
                _week[i]->Insert(interval, _week[i]->GetSize());

                cout << "Does this person work again on " << day << "? (y/n): ";
                cin >> works;

            }
        }
    }
}

