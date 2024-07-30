//
// Created by Isla Lowe on 7/22/24.
//

#include <iostream>
#include "person.h"
#include "timeInterval.h"
using std::cout;
using std::endl;


int UnitTests (int argc, char *argv[]) {
    cout << "There are the unit tests:" << endl;

    //fixme this Person-making process will be moved to its own method
    timeInterval workInterval;      //global variable that will be reused

    //Making a friend: George
    Schedule georgeSchedule;                    //make a schedule for George
    //George works mon-fri 9-5
    workInterval.SetStartTime(9);  // 9 AM
    workInterval.SetEndTime(17);   // 5 PM
    //Person *GEORGE = new Person("George", georgeSchedule);
    return 0;
}