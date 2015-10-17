//
// Created by vgandolfo on 10/1/15.
//

#ifndef SOCIALNETWORKPROJECT_WALL_H
#define SOCIALNETWORKPROJECT_WALL_H


#include "LinkedList.h"
#include "WallPost.h"


using namespace std;

class Wall {

public:

    Wall();
    Wall(LinkedList<WallPost> *l, string un);          // The wall is the linkedlist of wallposts
    ~Wall();

    void newWallPost(string p, string u);
    void removeWallPost(WallPost* w);
    string getUsername();
    void setUsername(string u);
    string writeEntireWall();
    void readEntireWall(string x);

    LinkedList<WallPost>* getList();



private:
    string username;
    LinkedList<WallPost>* list;


};


#endif //SOCIALNETWORKPROJECT_WALL_H
