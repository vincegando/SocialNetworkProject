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

    };
    LinkedList(Node<X> *n){     // pass in a node
        head = n;
    };
    ~LinkedList(){
        Node<X> *curr = head;
        Node<X> *temp = head;
        while(temp)
        {
            curr = temp;
            temp = curr-> getNext();     // iterate through the list deleting one element at a time

            delete curr;           //deletes what curr points to
        }
    };

    bool addElementToEnd(X val){
        Node<X> *temp= new Node<X>(val);
        Node <X> *curr= head;

        if (head == NULL){
            head = temp;
            return true;
        }
        else {
            while (curr != NULL)
            {
                if (curr->getNext() == NULL) {
                    curr->setNext(temp);
                    temp->setPrev(curr);
                    return true;
                }
                curr = curr->getNext();
            }
            return false;
        }
    };

    bool removeElement(X val){
        Node<X> *curr = head;
        while (curr->getData() != val) {
            curr = curr->next;
        }
        if (curr->getData() == val) {
            Node<X> *temp = curr->prev;
            temp->next = curr->next;
        }
    };

    void print(){
        Node <X> *curr= head;
        while(curr){
            cout<< curr->getData() << "-->";
            curr = curr ->next;
        }
    };

    X* returnHead(){
        return head;
    };

};












#endif //SOCIALNETWORKPROJECT_LINKEDLIST_H
