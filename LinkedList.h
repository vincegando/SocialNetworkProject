#ifndef SOCIALNETWORKPROJECT_LINKEDLIST_H
#define SOCIALNETWORKPROJECT_LINKEDLIST_H

#include "Node.h"
#include "WallPost.h"

template <class X>
class LinkedList{
public:


    LinkedList();
    LinkedList(Node<X> *n);
    ~LinkedList();

    void addElementToEnd(X val);

    void removeElement(X val);

    void print();

    X* returnHead();


    Node<X> * head;
    Node<X> * tail;

};












#endif //SOCIALNETWORKPROJECT_LINKEDLIST_H
