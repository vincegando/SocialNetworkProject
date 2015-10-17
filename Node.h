//
// Created by Krishna Lingampalli on 10/10/15.
//

#ifndef SOCIALNETWORKPROJECT_NODE_H
#define SOCIALNETWORKPROJECT_NODE_H


#include <iostream>
#include <set>
#include "WallPost.h"


template <class X>
class Node{


public:

    void setData(X value){
        data = value;
    };
    X getData(){
        return data;
    };


    Node<X> *getPrev() const {
        return prev;
    }

    Node<X> *getNext() const {
        return next;
    }


    void setNext(Node *next) {
        Node::next = next;
    }

    void setPrev(Node *prev) {
        Node::prev = prev;
    }

    Node<X>(const X& val) : data(val){
    };

private:
    X data;
    Node<X> *next;
    Node<X> *prev;

};


#endif //SOCIALNETWORKPROJECT_NODE_H
