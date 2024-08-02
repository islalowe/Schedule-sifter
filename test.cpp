//
// Created by Isla Lowe on 7/22/24.
//

#include <iostream>
#include "person.h"
#include "TimeInterval.h"
using std::cout;
using std::endl;

Schedule ScheduleMaker(Person& person);

int UnitTests (int argc, char *argv[]) {
    cout << "Here are the unit tests:" << endl;

    // Making a friend: George
    Person George("George"); // make a person with default schedule
    Schedule georgeSchedule = ScheduleMaker(George); // make a schedule for George
    George = Person("George", georgeSchedule); // update George's schedule

    // Test: Output George's schedule
    cout << George.ToString() << endl;

    return 0;
}


/**
 * Creates and returns a schedule for a given Person
 * @param person: the Person object whose Schedule will be returned.
 **/
Schedule ScheduleMaker(Person& person) {
    Schedule returnSchedule;

    // George works mon-fri 9-5
    for (int i = 0; i < 5; ++i) {
        TimeInterval workInterval;
        workInterval.SetStartTime(9);  // 9 AM
        workInterval.SetEndTime(17);   // 5 PM
        returnSchedule.Get(i)->Insert(&workInterval, i); // Insert work interval into schedule for each weekday
    }

    person.SetSchedule(returnSchedule);
    return returnSchedule;

}