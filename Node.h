//
// Created by Krishna Lingampalli on 10/10/15.
//

#ifndef SOCIALNETWORKPROJECT_NODE_H
#define SOCIALNETWORKPROJECT_NODE_H


#include <iostream>
#include <set>
#include "LinkedList.h

template <class X>
class Node{
public:
    void setData(X value);
    X getData();

    Node<X> *next;
    Node<X>(X);                       // constructor

private:
    X data;
};


#endif //SOCIALNETWORKPROJECT_NODE_H
