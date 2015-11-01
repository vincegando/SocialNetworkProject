//
// Created by Vincent on 10/24/15.
//

#ifndef SOCIALNETWORKPROJECT_LIST_H
#define SOCIALNETWORKPROJECT_LIST_H

#include "LinkedList.h"
template <class X>
class List {

public:
    class const_iterator {

    public:
        const_iterator() : curr(nullptr) { }

        const X & operator*() const {
            return get();
        }

        const_iterator & operator++() {
            curr = curr->getNext();
            return *this;
        }

        const_iterator operator++(int n) {
            const_iterator temp = *this;
            ++(*this);
            return temp;
        }

        bool operator==(const const_iterator & n) const {
            return curr == n.curr;
        }
        bool operator!=(const const_iterator & n) const {
            return !(*this == n);
        }

    protected:
        Node<X>* curr;

        X & get() const {
            return curr->getData();
        }

        const_iterator(Node<X>* n) : curr(n) { };


    };

    class iterator : public const_iterator {
    public:
        iterator() {

        }

        X & operator*() {
            return const_iterator::get();
        }


        const X & operator*() const {
            return const_iterator::operator*();
        }

        iterator & operator++() {
            this->curr = this->curr->getNext();
            return *this;
        }

        iterator operator++ (int n) {
            iterator temp = *this;
            ++(*this);
            return temp;
        }

    protected:
        iterator(Node<X>* n) : const_iterator(n) { }
    };


    iterator begin() { 
        return iterator(head);
    }

    iterator end() {
        return iterator(tail);
    }

//*******************************************
//          LIST METHODS

public:
    List();
    ~List();
    int size();
    bool isEmpty();
    void clear();
    void push_back(const X & item);
    void insert(int pos, const X &item);
    void remove(int pos);
    void set(int pos, const X &item);
    X const &get(int pos) const;
    Node<X>* returnHead();

private:
    Node<X>* getPosition(int pos);
    void init();
    Node<X>* head;
    Node<X>* tail;
    int length;

};


template <typename X>
    List<X>::List() {
        init();
    }

template <typename X>
    List<X>::~List() {

    }

template <typename X>
    int List<X>::size() {
        return length;
    }

template <typename X>
    bool List<X>::isEmpty() {

        if(length == 0) return true;
        return false;
    }

template <typename X>
    void List<X>::clear() {

        Node<X>* temp = head->getNext();
        while (temp != tail) {
            remove(length);
            temp = head->getNext();
        }

    }

template <typename X>
    void List<X>::push_back(const X & item){

        insert(length,item);
    }


template <typename X>
    void List<X>::insert (int pos, const X & item) {
        /* Inserts the item right before position pos, growing the list by 1.
        pos must be between 0 and the current length of the list.
        (feel free return bool, if you want.) */

        //check the pos is legal  if it is (0 to some #)
        //push all back starting at pos : go to end, make new holder at end of list, iterate down to pos - 1,
        //set values to next in the list
        if (pos <= 0 || pos > length + 1) {
            cout << "Pos is illegal" << endl;
            return;
        }
        Node<X>* temp = getPosition(pos);
        Node<X>* newItem = new Node<X>(item);
        newItem->setPrev(temp->getPrev());     //need to add case for when pos = 0;
        newItem->setNext(temp);
        temp->setPrev(newItem);
        newItem->getPrev()->setNext(newItem);
        length++;



    }

template <typename X>
    void List<X>::remove(int pos) {
    /* Removes the element at position pos, shrinking the list by 1.
    pos must be between 0 and the current length of the list minus 1. */

        //check if pos is valid
        //go to pos, iterate to end, setting items in list to previous item

    if (pos <= 0 || pos > length) {
        cout << "Pos is illegal";
        return;
    }
    Node<X>* temp = getPosition(pos);
    temp->getPrev()->setNext(temp->getNext());
    temp->getNext()->setPrev(temp->getPrev());
    length--;
    }

template <typename X>
    void List<X>::set(int pos, const X & item) {
    /* overwrites position pos in the list with item.
    Does not change the length of the list.
    pos must be between 0 and the current length of the list minus 1. */

        //check if pos is valid
        //go to pos and set its value to item
    if (pos <= 0 || pos > length) {
        cout << "Pos is illegal";
        return;
    }
    Node<X>* temp = getPosition();
    temp->setData(item);


    }

template <typename X>
X const & List<X>::get(int pos) const {
/* returns the item at position pos, not changing the list.
pos must be between 0 and the current length of the list minus 1. */

        //check if pos is valid
        //go to pos and return value
    if (pos <= 0 || pos > length) {
        cout << "Pos is illegal";
        return NULL;
    }
    Node<X>* temp = getPosition(pos);
    return temp->getData();


    }

template <typename X>
Node<X>* List<X>::returnHead(){
    return head;
}

template <typename X>
Node<X>* List<X>::getPosition(int pos){
    Node<X>* temp = head;
    int i = 0;
    while(i != pos) {
        temp = temp->getNext();
        i++;
    }
    return temp;
}

template <typename X>
void List<X>::init() {
    length = 0;
    head = new Node<X>;
    tail = new Node<X>;
    head->setNext(tail);
    tail->setPrev(head);
}




#endif //SOCIALNETWORKPROJECT_LIST_H
