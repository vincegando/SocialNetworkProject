//
// Created by Krishna Lingampalli on 10/10/15.
//

#ifndef SOCIALNETWORKPROJECT_NODE_H
#define SOCIALNETWORKPROJECT_NODE_H


#include <iostream>
#include <set>


template <class X>
class Node{
public:
    void setData(X value);
    X getData();
    Node<X>(const X& value);                       // constructor

    Node<X> *next;
    Node<X> *prev;

private:
    X data;
};


#endif //SOCIALNETWORKPROJECT_NODE_H
