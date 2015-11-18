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
    void deleteWallPost(int pos);
    string userInfoString();
    void addToFriendsList(string username);
    void deleteFromFriendsList(string username);
    void addToRequestsList(string username);
    void deleteFromRequestsList(string username);
    string printFriendsList();
    string printRequestsList();

    Wall* getWall();

    //*****************  Krishna work on Part 3 #2  **************

    void addPostToWall(WallPost post, string username);
    void display();

    //

    void deletePostFromFriendWall(int index);
    void deleteFriendPostFromMyWall(int index);



    //**************** End Krishna's work **************//




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
