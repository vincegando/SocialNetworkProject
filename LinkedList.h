#ifndef SOCIALNETWORKPROJECT_LINKEDLIST_H
#define SOCIALNETWORKPROJECT_LINKEDLIST_H

#include "Node.h"
#include "WallPost.h"

template <class X>
class LinkedList{
public:
    Node<X> * head;
    Node<X> * tail;

    LinkedList(){
        head = NULL;
        tail = NULL;
    };
    LinkedList(Node<X> *n){
        head = n;
        tail = n;
    };
    ~LinkedList(){
        Node<X> *curr = head;
        while(head)
        {
            head= head-> next;     // iterate through the list deleting one element at a time

            delete curr;           //deletes what curr points to
            curr= head;
        }
    };

    void addElementToEnd(X val){
        Node<X> *temp= new Node<X>(val);
        temp->next = NULL;
        Node <X> *curr= head;

        if (curr == NULL){
            curr = temp;
        }
        else {
            while (curr->next)
            {
                curr = curr->next;
            }
        }
        curr->next = temp;
        temp->prev = curr;
    };

    void removeElement(X val){
        Node<X> *curr = head;
        while (curr->getData() != val) {
            curr = curr->next;
        }
        if (curr->getData() == val) {
            Node<X> *temp = curr->prev;
            temp->next = curr->next;
        }
    };

    void print(){
        Node <X> *curr= head;
        while(curr){
            std::cout<< curr -> getData() << "-->";
            curr= curr ->next;
        }
    };

    X* returnHead(){
        return head;
    };

};












#endif //SOCIALNETWORKPROJECT_LINKEDLIST_H
