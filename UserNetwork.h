//
// Created by Vincent on 10/16/15.
//

#ifndef SOCIALNETWORKPROJECT_USERNETWORK_H
#define SOCIALNETWORKPROJECT_USERNETWORK_H


#include "User.h"
#include <list>
#include <string>


class UserNetwork {

public:

    UserNetwork();
    ~UserNetwork();

    void addUser(string un, string pass, string fn, string c);
    void deleteUser(string un);
    int findUser(string un, string pass);
    User & returnUser(string username);   // ? return user at this position of this list

    void WriteToFileUserList();
    void readFromFile(string file);
    //void refreshLists(std::string username);

    string search(string userSearch);
    void acceptRequest(User accepter, string username);
    void sendRequest(User sender, string username);
    list<User> & getUserList();

private:
    list<User> users;
};


#endif //SOCIALNETWORKPROJECT_USERNETWORK_H
