//
// Created by Isla Lowe on 6/16/24.
//

#include "comparable.h"

#include <sstream>
using std::stringstream;


/**
 * ToString
 * Creates a string representation of a general comparable object. The string representation
 * will be "Comparable @ 0x123456789abc" indicating the memory address of *this
 * (the value of this)
 * @return a string representation of a comparable object
 */
string Comparable::ToString() const {
    stringstream retVal;
    retVal << "Comparable @ " << this;
    return retVal.str();
}