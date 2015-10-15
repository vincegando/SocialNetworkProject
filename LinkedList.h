#ifndef SOCIALNETWORKPROJECT_LINKEDLIST_H
#define SOCIALNETWORKPROJECT_LINKEDLIST_H

#include "Node.h";

template <class X>
class LinkedList{
public:
    Node<X> * head;        // pointer initialization
    Node<X> * tail;        //pointer initialization

    LinkedList() ;
    ~LinkedList() ;

    void addElementToEnd(Node<X> *start, X val);

    void removeElement(Node<X> *start, X val);

    void print();

    X retelematNode2D(Node<X> *pointertothenode); // HELP this function returns the data you want from a node in a list


private:

};












#endif //SOCIALNETWORKPROJECT_LINKEDLIST_H
