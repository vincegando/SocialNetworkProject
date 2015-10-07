
// Created by Krishna Lingampalli on 10/7/15.


#ifndef SOCIALNETWORKPROJECT_LINKEDLIST_H
#define SOCIALNETWORKPROJECT_LINKEDLIST_H


#include <iostream>
#include <set>

template <class X>
class Node{
public:
    void setData(X value);
    void getData();

    Node<X> *next;
    Node<X>(const X& d):data(d), next() {};                       // constructor

private:
    // Node<X>& operator=(const Node<X>&);
    X data;

};

template <class X>
class LinkedList{
public:
    Node<X> * head;        // pointer initialization
    Node<X> * tail;        //pointer initialization
    LinkedList(const LinkedList& MYLL);
    // LinkedList& operator = (LinkedList byvallist);
    LinkedList() {                // one constructor here
        head = NULL;
        tail = NULL;
    }
    LinkedList(Node<X> *newnode){        // constructor with parameter passing
        head= newnode;
        tail= newnode;
    }

    ~LinkedList() ;

    void addElementEndofList();

    void removeElement();

    X retelematNode2D(Node<X> *pointertothenode); // HELP this function returns the data you want from a node in a list


private:
    // DO I NEED TO PUT STUFF IN HERE?
};












#endif //SOCIALNETWORKPROJECT_LINKEDLIST_H
