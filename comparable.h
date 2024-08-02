//
// Created by Isla Lowe on 6/16/24.
//

#ifndef SCHEDULE_SIFTER_COMPARABLE_H
#define SCHEDULE_SIFTER_COMPARABLE_H

#include "object.h"

class Comparable : public Object{
public:
    /**
     * This method compares two Comparable objects.
     * This method is virtual pure, it must be implemented by Comparable's
     * derived classes.
     *  @param rhs: The comparable Person whose Schedule will be compared against that of the current object
     * @return a string representation of all of the days off in the given week in which the current object
     * and rhs Person both have coinciding free time.
     */
     virtual string CompareFreeDays(const Comparable* rhs)const;


    /**
    * This method compares two Comparable objects.
    * This method is virtual pure, it must be implemented by Comparable's
    * derived classes.
    *  @param rhs: The comparable Person whose Schedule will be compared against that of the current object
    * @return a string representation of all of the days off in the given week in which the current object
    * and rhs Person both have coinciding free time in the amount specified in the parameter.
    */
     virtual string CompareForSharedFreeTime(const Comparable* rhs, int desiredFreeTimeAmt)const;
     virtual string ToString()const;
};



#endif //SCHEDULE_SIFTER_COMPARABLE_H
