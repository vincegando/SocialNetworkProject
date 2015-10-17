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
    Node<X> *next;
    Node<X> *prev;
    void setData(X value){
        data = value;
    };
    X getData(){
        return data;
    };

    Node<X>(const X& val) : data(val){
    };

private:
    X data;

};


#endif //SOCIALNETWORKPROJECT_NODE_H
