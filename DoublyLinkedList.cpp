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
}


/** Copy Constructor
* Creates a deep copy of the list. It creates a clone each of the
* elements in the original list and inserts them into the copy,
* this insertion is done using the Insert method.
* @param other the list to be copied
*/
DoublyLinkedList::DoublyLinkedList(const DoublyLinkedList &other) {
    //make a deep copy of the other list, using new
    //assign the copy to the current object data member(s)
    _head = nullptr;
    for (Node* tmp = other._head; tmp != nullptr; tmp = tmp->next){
        //todo idk what this is doing
        Insert (dynamic_cast<TimeInterval *>(tmp->data->Clone()), _size);
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
    _head = rhs._head;
    _tail = rhs._tail;
    return *this;
}


/**
 * Destructor
 */
DoublyLinkedList::~DoublyLinkedList() {
    // delete the whole list, by traversal in a while loop - go from head until reaching null
    Node *tempNode = _head;
    while (_head != nullptr) {
        _head = tempNode->next;
        if (tempNode->data) {
            delete tempNode->data;
        }
        delete tempNode;
        tempNode = _head;
    }
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
bool DoublyLinkedList::Insert(TimeInterval* busyTimeInterval, size_t position) {
    bool elementInserted = false;
    Node* neo = new Node;        //make a new node called neo
    neo -> next = nullptr;
    neo -> previous = nullptr;

    //case #1 list is empty
    if ((_head == nullptr) && (position < _size)) {
        _head = neo;                //set head & tail to neo
        _tail = neo;
        neo -> data = busyTimeInterval;
        _size++;
        elementInserted = true;
    }

        //case #2 insert at position 0
    else if (position == 0) {
        neo -> next = _head;        //neo's next pointer points to the head
        _head = neo;
        _head -> previous = neo;
        neo -> data = busyTimeInterval;
        _size++;
        elementInserted = true;
    }

        //case # 3 insert in the middle or at the end
    else if (position <= _size) {
        neo -> data = busyTimeInterval;
        Node* tmp = _head;                     //move temp pointer to (position - 1), by traversal
        for (size_t i = 0; i < position - 1; i++) {
            tmp = tmp -> next;                 //temp is scooting forward along the list
        }
        neo -> next = tmp -> next;             //neo catches up to sit next to temp
        tmp -> next = neo;                     //tmp is placed behind neo
        neo -> previous = tmp;                 //neo's previous pointer points to temp
        if (neo -> next == nullptr) {          //if neo is last, it becomes the tail
            _tail = neo;
        }
        else {
            neo -> next -> previous = neo;
        }
        _size++;
        elementInserted = true;
    }
    if (!elementInserted) {
        delete neo;
    }
    return elementInserted;
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
    Node* tmp = nullptr;
    if (position == 0) {                    // Want to remove the first element, _head
        retVal = dynamic_cast<TimeInterval *>(_head->data);             //we will return the head element
        _head -> data = nullptr;
        tmp = _head -> next;
        delete _head;
        _head = tmp;                        // the head got deleted, and the stored value becomes the new head
        _head -> previous = nullptr;
        //    _head -> next = nullptr;
    }
    else {
        tmp = _head;
        for (size_t i = 0; i < position - 1; i++){
            tmp = tmp -> next;
        }
        Node* toRemove = tmp -> next;
        retVal = dynamic_cast<TimeInterval *>(toRemove->data);           //returned object
        tmp -> next = toRemove -> next;
        toRemove -> next = nullptr;
        toRemove -> data = nullptr;
        toRemove -> previous = nullptr;
        delete toRemove;
    }
    _size--;
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
 * Creates a string representation of the list. This representation
 * will be the string representation of the element.
 * ex: "Person: {name: George, age: 12}"
 * -----------------------------------------------------------------------
 * @return a string representation of the list
 */
string DoublyLinkedList::ToString() const {
    std::stringstream retVal;
    Node* tmp = _head;
    //for (tmp = _head; tmp -> next != nullptr; tmp = tmp -> next) {
    for (size_t i = 0; i < _size; i++) {
        retVal << tmp -> data -> ToString() << ", ";
        tmp = tmp -> next;
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
    delete tempNode;
}