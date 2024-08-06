//
// Created by Isla Lowe on 6/16/24.
//

#ifndef SCHEDULE_SIFTER_TIMEINTERVAL_H
#define SCHEDULE_SIFTER_TIMEINTERVAL_H


#include "comparable.h"
#include <iostream>


class TimeInterval : public Comparable {
    bool _busy;
    int _startTime;      // This is in hours (0-23)
    int _endTime;        // This is in hours (0-23)
public:
    TimeInterval();
    TimeInterval(int start, int end);
    ~TimeInterval();
    virtual string ToString()const;
    int GetStartTIme()const;
    int GetEndTIme()const;
    void SetStartTime(int);
    void SetEndTime(int);
    virtual TimeInterval* Clone() const override;
    virtual string CompareFreeDays(const Comparable* rhs)const;
    virtual string CompareForSharedFreeTime(const Comparable* rhs, int desiredFreeTimeAmt)const;
    int Duration() const;
};


#endif //SCHEDULE_SIFTER_TIMEINTERVAL_H
