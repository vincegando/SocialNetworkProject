#ifndef SOCIALNETWORKPROJECT_LINKEDLIST_H
#define SOCIALNETWORKPROJECT_LINKEDLIST_H

#include "Node.h"

template <class X>
class LinkedList{
public:


    LinkedList() ;
    ~LinkedList() ;

    void addElementToEnd(X val);

    void removeElement(Node<X> val);

    void print();

    //X retelematNode2D(Node<X> *pointertothenode); // HELP this function returns the data you want from a node in a list


    Node<X> * head;
    Node<X> * tail;

};












#endif //SOCIALNETWORKPROJECT_LINKEDLIST_H
