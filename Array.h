//
// Created by Krishna Lingampalli on 10/26/15.
//

#ifndef SOCIALNETWORKPROJECT_ARRAY_H
#define SOCIALNETWORKPROJECT_ARRAY_H


template <typename X>
class Array {

public:
    Array();
    ~Array();
    int getSize();
    void setSize(int s);
    int getCapacity();
    void setCapacity(int c);
    void insert (int pos, const X & item);
    void remove (int pos);
    void set (int pos, const X & item);
    X const & get (int pos) const;
    int check();


private:
    int[] list;
    int size;
    int capacity;


};

template <typename X>
Array::Array() {
    list = int[50];
    size = 0;
    capacity = 50;
}

template <typename X>
Array::~Array() {

}

template <typename X>
int Array::getSize() {
    return size;
}

template <typename X>
void Array::setSize(int s) {
    size = s;
}

template <typename X>
int Array::getCapacity() {
    return capacity;
}

template <typename X>
void Array::setCapacity(int c) {
    capacity = c;
}

template <typename X>
void Array::insert(int pos, const X &item) {


}

template <typename X>
void Array::remove(int pos) {


}

template <typename X>
void Array::set(int pos, const X &item) {

}

template <typename X>
X const& Array::get(int pos) const {

}

template <typename X>
int Array::check() {

}

#endif //SOCIALNETWORKPROJECT_ARRAY_H
