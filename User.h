//
// Created by Vincent on 10/10/15.
//

#ifndef SOCIALNETWORKPROJECT_USER_H
#define SOCIALNETWORKPROJECT_USER_H

#include <string>
#include "Wall.h"

using namespace std;

class User {
public:
    void setFullName(string fn);       //setters
    void setPassword(string p);
    void setCity(string c);
    void setUsername(string x);
    ~User();
    User(string username, string password, string fulName);

private:
    Wall wall;
    string username;
    string password;
    string fullName;
    string city;

public:

};


#endif //SOCIALNETWORKPROJECT_USER_H
