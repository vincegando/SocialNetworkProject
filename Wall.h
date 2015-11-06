//
// Created by vgandolfo on 10/1/15.
//

#ifndef SOCIALNETWORKPROJECT_WALL_H
#define SOCIALNETWORKPROJECT_WALL_H


#include "List.h"
#include "WallPost.h"
#include <list>

using namespace std;

class Wall {

public:

    Wall();
    Wall(list<WallPost> l, string un);
    ~Wall();

    void newWallPost(string p);

    void removeWallPost(int pos);
    string getUsername();
    void setUsername(string u);
    string writeEntireWall();
    void readEntireWall(string x);

    list<WallPost> & getList();



private:
    string username;
    list<WallPost> wallPosts;


};


#endif //SOCIALNETWORKPROJECT_WALL_H
