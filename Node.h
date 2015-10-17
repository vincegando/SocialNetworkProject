//
// Created by Krishna Lingampalli on 10/10/15.
//

#ifndef SOCIALNETWORKPROJECT_NODE_H
#define SOCIALNETWORKPROJECT_NODE_H


#include <iostream>
#include <set>


template <class X>
class Node{

private:
    X data;

public:
    Node<X> *next;
    Node<X> *prev;
    void setData(X value){
        data = value;
    };
    X getData(){
        return data;
    };
    Node<X>(const X& val){
        data= val;
    };                       // constructor

};


#endif //SOCIALNETWORKPROJECT_NODE_H
