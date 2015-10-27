#ifndef SOCIALNETWORKPROJECT_LINKEDLIST_H
#define SOCIALNETWORKPROJECT_LINKEDLIST_H


#include "Node.h"
#include <iostream>
#include <string>

template <class X>
class LinkedList {

private:
    Node<X> *head;
    Node<X> *tail;
    int length;

    void init();

public:

    LinkedList();

    LinkedList(X value);

    ~LinkedList();

    void push_back(X val);

    void remove(int pos);

    Node<X> *returnHead();
};

<

template <typename X>
void LinkedList<X>::init() {
    length = 0;
    head = new Node<X>;
    tail = new Node<X>;
    head->setNext(tail);
    tail->setPrev(head);

    }

template <typename X>

    LinkedList<X>::LinkedList(){     // pass in a node
        init();
    }


template <typename X>
    LinkedList<X>::~LinkedList(){
        Node<X> *curr = head;
        Node<X> *temp = head;
        while(temp)
        {
            curr = temp;
            temp = curr-> getNext();

            delete curr;           //deletes what curr points to
        }
    }

template <typename X>
void LinkedList<X>::push_back(X val) {

        Node<X>* item = new Node<X>(val);
        Node<X>* curr = tail->getPrev();
        curr->setNext(item);
        item->setPrev(curr);
        item->setNext(tail);
        tail->setPrev(item);
        length++;

    }

template <typename X>
    void LinkedList<X>::remove(int pos){
        /*Node<X> *curr = head;

        while (curr != NULL) {
            if (curr->getData() == val) {
                Node<X> *temp = curr;
                if (curr->getPrev() != NULL) {
                    curr->getPrev()->setNext(curr->getNext());
                    if (curr->getNext() != NULL) {
                        curr->getNext()->setPrev(curr->getPrev());
                    }
                }
                else {
                    head = curr->getNext();
                    if (head != NULL) {
                        head->setPrev(NULL);
                    }
                }
                delete temp;

            }
            curr = curr->getNext();
        }*/




    }

template <typename X>
    Node<X>* LinkedList<X>::returnHead(){
        return head;
    }



#endif //SOCIALNETWORKPROJECT_LINKEDLIST_H
