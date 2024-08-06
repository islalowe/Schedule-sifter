////
//// Created by Isla Lowe on 6/11/24.
////
//
////To complie and run the main function:
////-->   g++ -o main main.cpp person.cpp Schedule.cpp TimeInterval.cpp
////-->   ./main
//
//
//
//#include <iostream>
//#include <sstream>
//#include <cstring>
//#include "schedule.h"
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::stringstream;
//
////fixme --- heeeyyyy look at making it so if someone doesn't have a shift then
//// it is recognized as start and end both being at 0
//
//int main(int argc, char* argv[]){
//
//    cout << "Welcome! " << endl;
//
//    char input;
//
//    cout << "If you would like to create a new Person profile, please enter \"New\". " << endl;
//    cout << "If you would like to edit an exiting Person profile, please enter \"Edit\". " << endl;
//    cin >> input;
//    if ((strcmp(&input, "New")==0) || (strcmp(&input, "new")==0)){
//        std::string name;
//        cout << "Please enter the new Person name: ";
//        cin >> name;
//
//        //call the schedule builder
//        Schedule newSchedule;
//        newSchedule.BuildScheduleFromInput();
//
//    }
//    else if ((strcmp(&input, "Edit")==0) || (strcmp(&input, "edit")==0)){
//
//    }
//    // Error handling
//    while  ((!strcmp(&input, "N")) && (!strcmp(&input, "E"))) {
//        cout << "Please enter a valid response." << endl;
//        cout << "If you would like to create a new Person profile, please enter \"New\". " << endl;
//        cout << "If you would like to enit an exiting Person profile, please enter \"Edit\". " << endl;
//        cin >> input;
//
//    }
//
//    return 0;
//}