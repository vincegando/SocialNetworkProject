//
// Created by Vincent on 10/16/15.
//

#ifndef SOCIALNETWORKPROJECT_USERNETWORK_H
#define SOCIALNETWORKPROJECT_USERNETWORK_H


#include "User.h"
#include "List.h"

class UserNetwork {

public:

    UserNetwork();
    ~UserNetwork();

    void addUser(string un, string pass, string fn, string c);
    void deleteUser(string un);
    int findUser(string un, string pass);
    List<User> *getUserList();
    Node<User>* returnUser(string username);   // ? return user at this position of this list

    void WriteToFileUserList();
    void readFromFile(string file);
    //void refreshLists(std::string username);

    void search(string userSearch);
    void acceptRequest(Node<User>*curr, string username);
    void sendRequest(Node<User>* curr, string username);

private:
    List<User> users;
};


#endif //SOCIALNETWORKPROJECT_USERNETWORK_H
