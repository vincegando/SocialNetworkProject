//
// Created by Vincent on 10/10/15.
//

#ifndef SOCIALNETWORKPROJECT_USER_H
#define SOCIALNETWORKPROJECT_USER_H

#include <string>
#include "Wall.h"
#include "Node.h"

using namespace std;

class User {
public:
    void setFullName(string fn);       //setters
    void setPassword(string p);
    void setCity(string c);
    void setUsername(string un);
    string getUsername();
    string getPassword();
    string getFullName();
    string getCity();

    ~User();
    User(string un, string pass, string fn, string c);
    void addWallPost(string post);
    void deleteWallpost(WallPost * post);
    string userInfoString();
    // make a copy constructor
    //need 5F function

private:
    Wall* wall ;
    string username;
    string password;
    string fullName;
    string city;
};


#endif //SOCIALNETWORKPROJECT_USER_H
