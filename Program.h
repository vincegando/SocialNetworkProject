//
// Created by Krishna Lingampalli on 11/11/15.
//

#ifndef SOCIALNETWORKPROJECT_PROGRAM_H
#define SOCIALNETWORKPROJECT_PROGRAM_H

#include "UserNetwork.h"
#include "User.h"

class Program {

public:
    void createNew();
    void login();
    void editInfo(int x);
    void userOptions();
    void run();
    User* getCurrentUser();



    // have a handler function that checks is currentuser is set to something

private:

    User* currentUser;
    UserNetwork database;
    UserNetwork users;

};


#endif //SOCIALNETWORKPROJECT_PROGRAM_H
