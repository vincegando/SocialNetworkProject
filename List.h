//
// Created by Vincent on 10/24/15.
//

#ifndef SOCIALNETWORKPROJECT_LIST_H
#define SOCIALNETWORKPROJECT_LIST_H

template <class T>
class List {
    void insert (int pos, const T & item) {
/* Inserts the item right before position pos, growing the list by 1.
pos must be between 0 and the current length of the list.
(feel free return bool, if you want.) */



    }
    void remove (int pos) {
/* Removes the element at position pos, shrinking the list by 1.
pos must be between 0 and the current length of the list minus 1. */



    }
    void set (int pos, const T & item) {
/* overwrites position pos in the list with item.
Does not change the length of the list.
pos must be between 0 and the current length of the list minus 1. */



    }
    T const & get (int pos) const {
/* returns the item at position pos, not changing the list.
pos must be between 0 and the current length of the list minus 1. */



    }
};


#endif //SOCIALNETWORKPROJECT_LIST_H
