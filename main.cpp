//
// Created by Isla Lowe on 6/11/24.
//


#include <iostream>
#include <sstream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::stringstream;

int main(int argc, char* argv[]){

    cout << "Welcome! " << endl;

    char input;
    cout << "If you would like to create a new Person profile, please enter \"New\". " << endl;
    cout << "If you would like to edit an exiting Person profile, please enter \"Edit\". " << endl;
    cin >> input;
    if (strcmp(&input, "New")==0) {
        std::string name;
        cout << "Please enter the new Person name: ";
        cin >> name;
        //call the schedule builder here

    }
    else if (strcmp(&input, "Edit")==0) {

    }
    // Error handling
    while  ((!strcmp(&input, "N")) && (!strcmp(&input, "E"))) {
        cout << "Please enter a valid response." << endl;
        cout << "If you would like to create a new Person profile, please enter \"N\". " << endl;
        cout << "If you would like to enit an exiting Person profile, please enter \"E\". " << endl;
        cin >> input;

    }

    return 0;
}