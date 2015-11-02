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
    void acceptRequest(string request);
    void sendRequest();

    ~User();
    User(string un, string pass, string fn, string c);
    void addWallPost(string post);
    void deleteWallpost(int pos);
    string userInfoString();
    void readUserData(string x);

    Wall* getWall();



private:
    Wall* wall;
    string username;
    string password;
    string fullName;
    string city;
    List<std::string> friends;
    List<std::string> requests;
    void requests();
    void friends();
    void refreshLists(std::string username);
    
};


#endif //SOCIALNETWORKPROJECT_USER_H
