//
// Created by Vincent on 10/24/15.
//

#ifndef SOCIALNETWORKPROJECT_LIST_H
#define SOCIALNETWORKPROJECT_LIST_H

#include "LinkedList.h"
template <class X>
class List {
    /*T data;

    T getData() {
        return data;
    }

    void setData(T value) {
        data = value;
    }*/

    bool insert (int pos, const X & item) {
/* Inserts the item right before position pos, growing the list by 1.
pos must be between 0 and the current length of the list.
(feel free return bool, if you want.) */

        //check the pos is legal  if it is (0 to some #)
        //push all back starting at pos : go to end, make new holder at end of list, iterate down to pos - 1,
        //set values to next in the list
        if (pos < 0) {
            cout << "Pos is illegal";
            return false;
        }
        while (head) {
            
        }




    }
    void remove (int pos) {
/* Removes the element at position pos, shrinking the list by 1.
pos must be between 0 and the current length of the list minus 1. */

        //check if pos is valid
        //go to pos, iterate to end, setting items in list to previous item


    }
    void set (int pos, const X & item) {
/* overwrites position pos in the list with item.
Does not change the length of the list.
pos must be between 0 and the current length of the list minus 1. */

        //check if pos is valid
        //go to pos and set its value to item


    }
    X const & get (int pos) const {
/* returns the item at position pos, not changing the list.
pos must be between 0 and the current length of the list minus 1. */

        //check if pos is valid
        //go to pos and return value


    }
};


#endif //SOCIALNETWORKPROJECT_LIST_H
