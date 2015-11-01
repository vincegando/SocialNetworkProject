//
// Created by Vincent on 10/16/15.
//

#ifndef SOCIALNETWORKPROJECT_USERNETWORK_H
#define SOCIALNETWORKPROJECT_USERNETWORK_H

#include "LinkedList.h"
#include "User.h"
#include "List.h"

class UserNetwork {

public:

    UserNetwork();
    ~UserNetwork();

    bool addUser(string un, string pass, string fn, string c);
    bool deleteUser(string un);
    bool findUser(string un, string pass);
    List<User> getUserList();

    void WriteToFileUserList();
    void readFromFile(string file);
private:
    List<User> users;
};


#endif //SOCIALNETWORKPROJECT_USERNETWORK_H
