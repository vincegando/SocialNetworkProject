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

    bool addUser(string un, string pass, string fn, string c);
    bool deleteUser(string un);
    bool findUser(string un, string pass);
    LinkedList<User*> getUserList();

    // void writeToFile();     skipping for now
    // void readFromFile();    skipping for now
private:
    LinkedList<User*> *users;
};


#endif //SOCIALNETWORKPROJECT_USERNETWORK_H
