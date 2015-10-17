#include <iostream>

#include "LinkedList.h"
#include "Node.h"

template <class X>
LinkedList<X>::LinkedList() {
    head = NULL;
    tail = NULL;
}

template <class X>
LinkedList<X>::LinkedList(Node<X> *n) {
    head = n;
    tail = n;

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
    Node<X> *temp= new Node<X>(val);
    temp->next = NULL;
    Node <X> *curr= head;

    if (curr == NULL){
        curr = temp;
    }
    else {
        while (curr->next)
        {
            curr = curr->next;
        }
    }
    curr->next = temp;
    temp->prev = curr;

}




template <class X>
void LinkedList<X>::print() {
    Node <X> *curr= head;
    while(curr){
        std::cout<< curr -> getData() << "-->";
        curr= curr ->next;
    }
}


template <class X>
void LinkedList<X>::removeElement(X val) {
    Node<X> *curr = head;
    while (curr->getData() != val) {
        curr = curr->next;
    }
    if (curr->getData() == val) {
        Node<X> *temp = curr->prev;
        temp->next = curr->next;
    }
}

template <class X>
X* LinkedList<X>::returnHead() {
    return head;
}
