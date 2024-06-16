//
// Created by Isla Lowe on 6/16/24.
//

#ifndef SCHEDULE_SIFTER_TIMEINTERVAL_H
#define SCHEDULE_SIFTER_TIMEINTERVAL_H


#include "comparable.h".h"

class timeInterval : public Comparable {
    bool busy;
    int startTime;
    int endTime;
public:
    timeInterval();
    virtual string ToString()const;
    int GetStartTIme()const;
    int GetEndTIme()const;
    void SetStartTime(int);
    void SetEndTime(int);
    virtual bool Overlaps(const Object& rhs)const;
    virtual Object* Clone()const;
    virtual int CompareTo(const Comparable* rhs)const;
};


#endif //SCHEDULE_SIFTER_TIMEINTERVAL_H
