//
// Created by Krishna Lingampalli on 11/11/15.
//

#ifndef SOCIALNETWORKPROJECT_PROGRAM_H
#define SOCIALNETWORKPROJECT_PROGRAM_H

#include "UserNetwork.h"
#include "User.h"

class Program {

public:
    void createNew(UserNetwork * database);
    void login(UserNetwork * database);
    void editInfo(UserNetwork * database, int x);
    void userOptions(UserNetwork * database);
    void run();
    User* getCurrentUser();

private:
    User* currentUser;


};


#endif //SOCIALNETWORKPROJECT_PROGRAM_H
