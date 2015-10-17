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
    void setUsername(string un);
    string getUsername();
    string getPassword();
    string getFullName();
    string getCity();

    ~User();
<<<<<<< Updated upstream
    User(Wall w, string un, string pass, string fn, string c);
    void addWallPost
=======
    User(string un, string pass, string fn, string c);      //constructor
    void addWallpost(string POST);
    void deleteWallpost(WallPost * post);
    string userInfoString();


    //need 5E function
    //need 5F function
>>>>>>> Stashed changes

private:
    Wall* wall ;
    string username;
    string password;
    string fullName;
    string city;
};


#endif //SOCIALNETWORKPROJECT_USER_H
