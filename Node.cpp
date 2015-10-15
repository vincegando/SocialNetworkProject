//
// Created by Krishna Lingampalli on 10/10/15.
//

#include "Node.h"

template <class X>
Node<X>::Node<X>(const X& val) {
data= val;
}
template <class X>
void Node<X>::setData(X value) {
    data = value;
}

template <class X>
X Node<X>::getData() {
    return data;
}

