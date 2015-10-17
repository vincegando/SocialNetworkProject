#ifndef SOCIALNETWORKPROJECT_LINKEDLIST_H
#define SOCIALNETWORKPROJECT_LINKEDLIST_H


#include "Node.h"
#include <iostream>
#include <string>

template <class X>
class LinkedList{

private:
    Node<X> * head;
public:

    LinkedList(){
        head = NULL;

    }
    LinkedList(Node<X> *n){     // pass in a node
        head = n;
    }
    ~LinkedList(){
        Node<X> *curr = head;
        Node<X> *temp = head;
        while(temp)
        {
            curr = temp;
            temp = curr-> getNext();

            delete curr;           //deletes what curr points to
        }
    }

    bool addElementToEnd(X val){
        Node<X> *temp = new Node<X>(val);
        Node <X> *curr = head;
        if (!head){
            head = temp;
            return true;
        }


        while (curr)
        {
            if (curr->getNext() != NULL) {
                curr->setNext(temp);
                temp->setPrev(curr);
                return true;
            }
            curr = curr->getNext();
        }
        return false;

    }

    bool removeElement(X val){
        Node<X> *curr = head;

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
                return true;
            }
            curr = curr->getNext();
        }
        return false;

    }

    void print(){
        Node <X> *curr= head;
        while(curr != NULL){
            cout << curr->getData() << "-->";
            curr = curr ->getNext();
        }
    }

    Node<X>* returnHead(){
        return head;
    }

};


#endif //SOCIALNETWORKPROJECT_LINKEDLIST_H
