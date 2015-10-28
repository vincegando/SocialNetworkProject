//
// Created by Krishna Lingampalli on 10/26/15.
//

#ifndef SOCIALNETWORKPROJECT_ARRAY_H
#define SOCIALNETWORKPROJECT_ARRAY_H

#include <cstddef>

template <typename X>
class Array {

public:
    Array();
    ~Array();
    int getSize();
    int getCapacity();
    void insert (int pos, const X & item);
    void remove (int pos);
    void set (int pos, const X & item);
    X const & get (int pos) const;
    void check();


private:
    X* list;
    int size;
    int capacity;


};

template <typename X>
Array<X>::Array() {
    list = new X[50];
    size = 0;
    capacity = 50;
}

template <typename X>
Array<X>::~Array() {
    delete list;
}

template <typename X>
int Array<X>::getSize() {
    return size;
}
template <typename X>
int Array<X>::getCapacity() {
    return capacity;
}

template <typename X>
void Array<X>::insert(int pos, const X &item) {
    //check if position is between 0 and (capacity -1)
    // array[position] = item
    //increment size ++
    // call check()

    pos--;
    if (pos >=0 && pos < capacity) {
        if(list[pos]){                   //this checks if some value is already at this position
           for (int i= size-1; i > pos; i --){
             list[i+1] = list[i];
            }
        }
        list[pos] = item;        //easy shit
        size++;
        check();
    }
    return;
}

template <typename X>
void Array<X>::remove(int pos) {
    pos--;
    if(pos >=0 && pos < capacity)
    {
        for(int i=pos; i<size-1; i++){
            list[pos]= list[pos+1];
        }
        list[size-1] =NULL;       // cant leave a copy
    }
    return;
}

template <typename X>
void Array<X>::set(int pos, const X &item) {
    list[pos]= item;
    return;
}

template <typename X>
X const& Array<X>::get(int pos) const {
    return list[pos];
}

template <typename X>
void Array<X>::check() {
    capacity= 2*capacity;
    X* newArray = new X[capacity];
    for(int i=0; i<size; i++)
    {
        newArray[i] = list[i];
    }
    delete list;
    list= newArray;
}

#endif //SOCIALNETWORKPROJECT_ARRAY_H
