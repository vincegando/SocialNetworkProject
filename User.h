//
// Created by Vincent on 10/10/15.
//

#ifndef SOCIALNETWORKPROJECT_USER_H
#define SOCIALNETWORKPROJECT_USER_H

#include <string>
#include "Wall.h"
#include <list>

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
    User();
    User(string un, string pass, string fn, string c);
    User(string userString);
    void addWallPost(string post);
    void deleteWallPost(int pos);
    string userInfoString();
    void addToFriendsList(string username);
    void addToRequestsList(string username);

    Wall* getWall();



private:
    Wall* wall;
    string username;
    string password;
    string fullName;
    string city;
    list<string> friends;
    list<string> requests;
    
    
};


#endif //SOCIALNETWORKPROJECT_USER_H
