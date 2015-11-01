//
// Created by vgandolfo on 10/1/15.
//

#ifndef SOCIALNETWORKPROJECT_WALL_H
#define SOCIALNETWORKPROJECT_WALL_H


#include "LinkedList.h"
#include "WallPost.h"
#include "List.h"


using namespace std;

class Wall {

public:

    Wall();
    Wall(List<WallPost> l, string un);
    ~Wall();

    void newWallPost(string p);

    void removeWallPost(int pos);
    string getUsername();
    void setUsername(string u);
    string writeEntireWall();
    void readEntireWall(string x);

    List<WallPost> getList();



private:
    string username;
    List<WallPost> wallPosts;


};


#endif //SOCIALNETWORKPROJECT_WALL_H
