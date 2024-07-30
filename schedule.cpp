//
// Created by Isla Lowe on 6/16/24.
//

#include "schedule.h"

Schedule::Schedule(const Schedule &other) {

}

Schedule &Schedule::operator=(const Schedule &rhs) {

}

Schedule::Schedule() {

}

bool Schedule::Insert(Object *element, size_t position) {
    return false;
}

int Schedule::IndexOf(const Object *element) const {
    return 0;
}

Object* Schedule::Remove(size_t position) {
    return nullptr;
}

Object* Schedule::Get(size_t position) const {
    return nullptr;
}

string Schedule::ToString()const {
    stringstream scheduleString;
    for (const auto& interval : interval) {
        scheduleString << "Start: " << interval->GetStartTime() << ", End: " << interval->GetEndTime() << "\n";
    }
    return scheduleString.str();

}