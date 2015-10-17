//
// Created by Vincent on 10/16/15.
//

#ifndef SOCIALNETWORKPROJECT_USERNETWORK_H
#define SOCIALNETWORKPROJECT_USERNETWORK_H

#include "LinkedList.h"
#include "User.h"

class UserNetwork {

public:

    UserNetwork();
    ~UserNetwork();

    void addUser(string un, string pass, string fn, string c);
    void deleteUser(string un);

    // void writeToFile();
    // void readFromFile();
    LinkedList<User> users;
};


#endif //SOCIALNETWORKPROJECT_USERNETWORK_H
