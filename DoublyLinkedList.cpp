//
// Created by Isla Lowe on 8/1/24.
//

#include "DoublyLinkedList.h"
#include "sstream"


/**
 * Default Constructor
 * Parent class initializes the size to 0
 */
DoublyLinkedList::DoublyLinkedList() {
    _head = nullptr;
    _tail = nullptr;
}


/** Copy Constructor
* Creates a deep copy of the list. It creates a clone each of the
* elements in the original list and inserts them into the copy,
* this insertion is done using the Insert method.
* @param other the list to be copied
*/
DoublyLinkedList::DoublyLinkedList(const DoublyLinkedList &other) {
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
    for (Node* tmp = other._head; tmp != nullptr; tmp = tmp->next) {
        Insert(dynamic_cast<TimeInterval*>(tmp->data->Clone()), _size, tmp->day);
    }
}



//A& A::operator=(const &A)
/**
 * Copy assignment operator
 * Enables the deep copy assignment using the operator = overload. This
 * method is kept private to avoid usage from clients of the class.
 * @param rhs the object to be copied into this
 * @return this to enable cascade assignments
 */
DoublyLinkedList &DoublyLinkedList::operator=(const DoublyLinkedList &rhs) {
    if (this == &rhs) {
        // Self-assignment check
        return *this;
    }
    Clear();
    // Deep copy new resources
    for (Node* tmp = rhs._head; tmp != nullptr; tmp = tmp->next) {
        Insert(tmp->data->Clone(), _size, tmp->day);
    }

    return *this;
}


/**
 * Destructor
 */
DoublyLinkedList::~DoublyLinkedList() {
    // delete the whole list, by traversal in a while loop - go from head until reaching null
    Node* tempNode = _head;
    while (tempNode != nullptr) {
        Node* nextNode = tempNode->next;
        delete tempNode->data; // Assuming `data` is dynamically allocated
        delete tempNode;
        tempNode = nextNode;
    }
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}


/**
 * Inserts an element into a given position.
 * This operation has the following steps:
 * 1. Check if the position is valid
 * 2. Creates a new node and links it to the element
 * 3. If the list is empty, the head and tail point to the new node
 * 4. If the list is not empty but want to insert in position zero
 *    it links the list and updates the head and tail
 * 5. If the position is not zero and the list is not empty, it tra-
 *    verses the list up the element that precedes the element to be
 *    inserted. Links the new node to that position
 * @param element what the client wants to insert into the list
 * @param position the position where the element is to be inserted
 * @return true if it was possible to insert, false otherwise. It will not be able
 * to insert if the position is invalid.
 */
bool DoublyLinkedList::Insert(Object* busyTimeInterval, size_t position, List::DayOfWeek day){
    if (position > _size) {     // Check for position validity
        return false;
    }

    Node* neo = new Node;
    neo->data = busyTimeInterval;
    neo->day = day;                     //day of the week enum
    neo->next = nullptr;
    neo->previous = nullptr;

    if (_head == nullptr && position == 0) {  // Insert in an empty list
        _head = _tail = neo;
    }
    else if (position == 0) {  // Insert at the head
        neo->next = _head;
        _head->previous = neo;
        _head = neo;
    }
    else {  // Insert at given position or at the end
        Node* tmp = _head;
        for (size_t i = 0; i < position - 1; ++i) {
            tmp = tmp->next;
        }
        neo->next = tmp->next;
        neo->previous = tmp;
        if (tmp->next) {
            tmp->next->previous = neo;
        }
        tmp->next = neo;
        if (neo->next == nullptr) {
            _tail = neo;
        }
    }

    ++_size;
    return true;
}


/**
 * Removes the TimeInterval at the given position within a day, when the position is valid.
 * It returns the pointer to the removed element.
 * @param position the position of the TimeInterval to be removed.
 * @return the pointer to the object in that position if the position was valid,
 * nullptr otherwise
 */
TimeInterval* DoublyLinkedList::Remove(size_t position) {
    if (position >= _size) {
        return nullptr;
    }

    TimeInterval* retVal = nullptr;
    Node* toRemove = nullptr;

    if (position == 0) { // Removing the head node
        toRemove = _head;
        retVal = dynamic_cast<TimeInterval*>(toRemove->data);
        _head = _head->next;
        if (_head) {
            _head->previous = nullptr;
        } else {
            _tail = nullptr; // List is now empty
        }
    } else {
        Node* prevNode = _head;
        for (size_t i = 0; i < position - 1; ++i) {
            prevNode = prevNode->next;
        }
        toRemove = prevNode->next;
        retVal = dynamic_cast<TimeInterval*>(toRemove->data);
        prevNode->next = toRemove->next;
        if (toRemove->next) {
            toRemove->next->previous = prevNode;
        } else {
            _tail = prevNode; // Updating tail if we removed the last element
        }
    }

    delete toRemove; // This also deletes the data pointer if it was dynamically allocated
    --_size;

    return retVal;
}


/**
 * Element Access
 * Returns the element at a given position.
 * @param position the position of the element to retrieve.
 * @return a pointer to the element if the position is valid, nullptr otherwise
 */
Object* DoublyLinkedList::Get(size_t position) const {
    if (position >= _size){
        return nullptr;
    }
    Node* tmp = _head;
    for (size_t i = 0; i < position; i++) {
        tmp = tmp -> next;
    }
    return tmp -> data;
}


/**
 * Returns the number of elements in the list.
 * @return the size of the list
 */
size_t DoublyLinkedList::GetSize() const {
    return _size;
}


/**
 * Creates a string representation of the list.
 * This list is of all of the shifts/busy TimeIntervals that a schedule has for a particular day.
 * ex: "Start: 0900 - End: 1700"
 * -----------------------------------------------------------------------
 * @return a string representation of the list
 */
string DoublyLinkedList::ToString() const {
    std::stringstream retVal;


    retVal << "Start: /// - End: ///";
    Node* tmp = _head;

    // Check if the list is empty
    if (tmp == nullptr) {
        retVal << "No TimeIntervals";
        return retVal.str();
    }

    //for (tmp = _head; tmp -> next != nullptr; tmp = tmp -> next) {
    for (size_t i = 0; i < _size; i++) {
        if (tmp->data) {
            retVal << tmp->data->ToString();
            if (tmp->next != nullptr) {
                retVal << ", ";
            }
        }
        tmp = tmp->next;
    }
    return retVal.str();
}


/**
 * This method releases all the elements of the list.
 * It also sets the size to zero, and the head and tail pointers to nullptr.
 * This method makes the list become empty.
 */
void DoublyLinkedList::Clear() {
    Node* tempNode = _head;
    while (_head != nullptr){
        _head = tempNode->next;       //head is being moved along the list, essentially erasing it from beginning to end
        if (tempNode->data) {
            delete tempNode->data;
        }
        delete tempNode;              //delete the tempNode and then
        tempNode = _head;             //use that variable to grab the next node that head is occupying and delete it
    }


    _size = 0;
    _head = nullptr;
    _tail = nullptr;
}
