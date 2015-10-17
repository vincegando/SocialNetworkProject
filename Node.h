//
// Created by Krishna Lingampalli on 10/10/15.
//

#ifndef SOCIALNETWORKPROJECT_NODE_H
#define SOCIALNETWORKPROJECT_NODE_H


#include <iostream>
#include <set>
#include "WallPost.h"

using namespace std;


template <class X>
class Node{

private:
    X data;
    Node<X> *next;
    Node<X> *prev;

public:


    Node<X>()  {
        data = X();
        next = NULL;
        prev = NULL;
    }

    Node<X>(X val) : data(val) {
        next = NULL;
        prev = NULL;

    }

    ~Node<X>() {
        next = NULL;
        prev = NULL;
    }

    void setData(X value){
        data = value;
    }

    X getData() {
        return data;
    }


    Node<X> *getPrev() {
        return prev;
    }

    Node<X> *getNext() {
        return next;
    }


    void setNext(Node *n) {
        next = n;
    }

    void setPrev(Node *p) {
        prev = p;
    }


};


#endif //SOCIALNETWORKPROJECT_NODE_H
