#include <iostream>

#include "LinkedList.h"
#include "Node.h";

template <class X>
LinkedList<X>::LinkedList() {
    head=NULL;
}

template <class X>
LinkedList<X>::~LinkedList() {
    Node<X> *curr = head;
    while(head)
    {
        head= head-> next;     // iterate through the list deleting one element at a time
        delete curr;           //deletes what curr points to
        curr= head;
    }

}


template <class X>
void LinkedList<X>::addElementToEnd(Node<X> *start, X val) {
    Node<X> *newNode= new Node<X>(val);
    newNode->next = NULL;
    Node <X> *curr= start;

    if (!curr){
        curr = newNode;
    }
    while (curr->next) {
        curr = curr->next;
    }
    curr->next = newNode;
    /*if (tail== NULL){
        newnode-> next =tail; // equals to what tail points to
        tail= newnode;
        //head = newnode;
        return;
    }*/
    /*tail->next = newnode;
    tail= tail-> next;*/
}

template <class X>
void LinkedList<X>::removeElement(Node<X> *start, X val){

    Node<X> *curr = start;
    
}

template <class X>
void LinkedList<X>::print() {
    Node <X> *curr= head;
    while(curr){
        std::cout<< curr -> getData() << "-->";
        curr= curr ->next;
    }
}

// need to implement the iterate and returnelemlaterFUNCT    - HELP

