//
// Created by Isla Lowe on 6/16/24.
//

#ifndef SCHEDULE_SIFTER_COMPARABLE_H
#define SCHEDULE_SIFTER_COMPARABLE_H

#include "object.h"

class Comparable : public Object{
public:


    /**
     * This method compares two Comparable objects. It works like
     * strcmp or the method string::compare
     * This method is virtual pure, it must be implemented by Comparable's
     * derived classes.
     * @param rhs The object that this is being compared to
     * @return if this is equal to rhs it returns 0.
     *         if this < rhs returns a negative number.
     *         if this > rhs returns a positive number.
     */
     //todo how can this be bigger or smaller than rhs? is the time being compared?
     //
    virtual int CompareTo(const Comparable* rhs)const = 0;
    virtual string ToString()const;
};



#endif //SCHEDULE_SIFTER_COMPARABLE_H
