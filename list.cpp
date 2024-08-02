//
// Created by Isla Lowe on 6/16/24.
//

#include "list.h"

/**
 * Default Constructor
 * Just initializes the size to 0, because this is for the DoublyLinkedList of the TimeIntervals - and there may be 0
 */
List::List() : _size(0){


}
/**
 * Destructor
 * It does not do anything, needs to be in the base
 * class to activate polymorphism
 */
List::~List(){

}
/**
 * Size accessor
 * @return the number of elements in the list
 */
size_t List::Size()const{
    return _size;
}
/**
 * Verifies if the list is empty or not, it is based on size.
 * @return true if the size is empty (size == 0), false otherwise
 */
bool List::IsEmpty()const{
    return _size == 0;
}