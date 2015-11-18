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
    WallPost(string p);
    WallPost();
    ~WallPost();
    string getPost();
    void setPost(string p);
    string getUsername();
    void setUsername(string user);
    time_t getPostTime();
    void setPostTime(time_t pt);
    string ReturnWallPost();
    void addResponse(WallPostResponse comment);
    int getParent();

private:

    time_t postTime;
    string post;
    string username;
    list<WallPostResponse> comments;

    int parent;
    int index;




};


#endif //SOCIALNETWORKPROJECT_WALLPOST_H
