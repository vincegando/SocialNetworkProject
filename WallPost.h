//
// Created by vgandolfo on 10/1/15.
//

#ifndef SOCIALNETWORKPROJECT_WALLPOST_H
#define SOCIALNETWORKPROJECT_WALLPOST_H

#include <string>
#include <ctime>
#include <iostream>
#include <list>
#include "WallPostResponse.h"



using namespace std;

class WallPost {

public:
    WallPost(string p, string u, time_t pt);
    WallPost();
    ~WallPost();
    string getPost();
    void setPost(string p);
    string getUsername();
    void setUsername(string user);
    time_t getPostTime();
    void setPostTime(time_t pt);
    string ReturnWallPost();
<<<<<<< HEAD
    void addResponse(WallPostResponse comment);
=======
    int getParent();
>>>>>>> 9253a5c16c14e826c028aa69c61129e5b028df9d

private:

    time_t postTime;
    string post;
    string username;
    list<WallPostResponse> comments;

    int parent;
    int index;




};


#endif //SOCIALNETWORKPROJECT_WALLPOST_H
