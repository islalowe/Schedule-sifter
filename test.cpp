//
// Created by Isla Lowe on 7/22/24.
//
//To complie and run tests:
//-->     g++ -g -o my_project main.cpp DoublyLinkedList.cpp object.cpp list.cpp timeInterval.cpp schedule.cpp person.cpp
//-->     ./test


#include <iostream>
#include "person.h"
#include "TimeInterval.h"
#include <cassert>
using std::cout;
using std::endl;

Schedule ScheduleMaker(Person& person);


int UnitTests (int argc, char *argv[]) {
    cout << "Here are the unit tests:" << endl;

    // Making the friends
    Person George("George");
    Schedule georgeSchedule = ScheduleMaker();
    George.SetSchedule(georgeSchedule);

    Person Sally("Sally");
    Schedule sallySchedule = ScheduleMaker();
    Sally.SetSchedule(sallySchedule);

    // Test: Output George's schedule
    cout << George.ToString() << endl;
    // Test: Output Sally's schedule
    cout << Sally.ToString() << endl;
    // Test


    return 0;
}


/**
 * Creates and returns a schedule for a given Person
 * This does not use "BuildScheduleFromInput" because the testing file will not be used by user
 * This method only exists for building schedules for the Person objects used in testing
 * @param person: the Person object whose Schedule will be returned.
 **/
Schedule ScheduleMaker(Person& person,  DoublyLinkedList sunSchedule, DoublyLinkedList monSchedule,
                       DoublyLinkedList tuesSchedule, DoublyLinkedList wedSchedule,
                       DoublyLinkedList thursSchedule, DoublyLinkedList friSchedule, DoublyLinkedList satSchedule) {
    Schedule returnSchedule;

    const List::DayOfWeek days[7] = {List::DayOfWeek::Monday, List::DayOfWeek::Tuesday,
                                     List::DayOfWeek::Wednesday, List::DayOfWeek::Thursday,
                                     List::DayOfWeek::Friday, List::DayOfWeek::Saturday, List::DayOfWeek::Sunday};

    for (int i = 0; i < 7; ++i) {
        TimeInterval* workInterval = new TimeInterval();  // Allocate on heap
        workInterval->SetStartTime(days[i]->_startTime);
        workInterval->SetEndTime(days[i]->_endTime);
        returnSchedule.Get(i)->Insert(workInterval, 0, days[i]);
    }
    person.SetSchedule(returnSchedule);
    return returnSchedule;
}



// Comment this main function out to run the interactive code in Main.cpp straight from the IDE
int main(int argc, char *argv[]) {
    return UnitTests(argc, argv);
}