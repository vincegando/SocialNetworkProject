#include <iostream>

#include "LinkedList.h"
#include "Node.h"

template <class X>
LinkedList<X>::LinkedList() {
    head=NULL;
    tail=NULL;
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
void LinkedList<X>::addElementToEnd(X val) {
    Node<X> *newNode= new Node<X>(val);
    newNode->next = NULL;
    Node <X> *curr= head;

    if (curr == NULL){
        curr = newNode;
    }
    else {
        while (curr->next)
        {
            curr = curr->next;
        }
    }
    curr->s = newNode;

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
template <class X>
// void LinkedList::removeElement(Node<X> val) {
    ;

}
