//
// Created by Isla Lowe on 7/22/24.
//

#include <iostream>
#include "person.h"
#include "TimeInterval.h"
using std::cout;
using std::endl;

Schedule ScheduleMaker(Person person);

int UnitTests (int argc, char *argv[]) {
    cout << "There are the unit tests:" << endl;

    TimeInterval workInterval;      //global variable that will be reused

    //Making a friend: George
    Person George("George");                                                    //make a person with default schedule
    Schedule georgeSchedule = ScheduleMaker(George);                    //make a schedule for George
                        //give George his new schedule

    //Person *GEORGE = new Person("George", georgeSchedule);
    return 0;
}


/**
 * Creates and returns a schedule for a given Person
 * @param person: the Person object whose Schedule will be returned.
 **/
Schedule ScheduleMaker(Person person) {
    Schedule returnSchedule;
    //George works mon-fri 9-5

    //
    workInterval.SetStartTime(9);  // 9 AM
    workInterval.SetEndTime(17);   // 5 PM
    return returnSchedule;
}