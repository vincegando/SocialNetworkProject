//
// Created by Vincent on 10/16/15.
//

#include "UserNetwork.h"

UserNetwork::UserNetwork() {
    users = NULL;                                       // list is NULL when usernetwork is created
}

UserNetwork::~UserNetwork() { }

void UserNetwork::addUser(string un, string pass, string fn, string c) {

    Node<User> *current = users.head;
    while (current!= NULL){
        if (current-> getData() == un){
            return;
        }
        current = current ->next;
    }

    User *newuser = new User(un,pass,fn,c);             //created a pointer to user node in usernetwork list
    users.addElementToEnd(*newuser);                    // now add the new user to the usernetwork linkedlist
}
void UserNetwork::deleteUser(string un) {               // BEWARE: THIS function may not work  - lot of logic to think
    Node<User> *current = users.head;
    while (current!= NULL){
        if (current->getData().getUsername() == un){
            users.removeElement(current->getData());
            return;
        }
        current = current ->next;
    }
}

