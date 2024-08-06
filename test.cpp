//
// Created by Isla Lowe on 7/22/24.
//
//To complie and run tests:
//-->     g++ -g -o my_project main.cpp DoublyLinkedList.cpp object.cpp list.cpp timeInterval.cpp schedule.cpp person.cpp
//-->     ./test


#include <iostream>
#include "person.h"
#include "TimeInterval.h"
using std::cout;
using std::endl;

Schedule ScheduleMaker(Person& person, const int scheduleData[21]);


int UnitTests (int argc, char *argv[]) {
    cout << "Here are the unit tests:" << endl;

    // Making the friends
    const int georgeScheduleData[21] = {0, 0, 0, 1, 9, 17, 2, 9, 17, 3, 9, 17, 4, 9, 17, 5, 9, 17, 6, 0, 0};
    Person George("George");
    Schedule georgeSchedule = ScheduleMaker(George, georgeScheduleData);
    George.SetSchedule(georgeSchedule);

    const int sallyScheduleData[21] = {0, 0, 0, 1, 9, 17, 2, 17, 22, 3, 9, 17, 4, 17, 22, 5, 9, 17, 6, 0, 0};
    Person Sally("Sally");
    Schedule sallySchedule = ScheduleMaker(Sally, sallyScheduleData);
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
 * @param person: the Person object whose Schedule will be returned.
 **/
Schedule ScheduleMaker(Person& person, const int scheduleData[21]) {
    Schedule returnSchedule;

    for (int i = 0; i < 7; ++i) {
        if (scheduleData[i * 3 + 1] != 0 || scheduleData[i * 3 + 2] != 0) {
            TimeInterval workInterval;
            // access the start/end time for each day, which is 3 indexes apart
            workInterval.SetStartTime(scheduleData[i * 3 + 1]);
            workInterval.SetEndTime(scheduleData[i * 3 + 2]);
            returnSchedule.Get(i)->Insert(&workInterval, scheduleData[i * 3]);
        }
    }
    person.SetSchedule(returnSchedule);
    return returnSchedule;
}

// Comment this main out to run the interactive code in Main.cpp straight from the IDE
int main(int argc, char *argv[]) {
    return UnitTests(argc, argv);
}