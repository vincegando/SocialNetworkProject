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
    Wall(List<WallPost*> *l, string un);          // The wall is the linkedlist of wallposts
    ~Wall();

    void newWallPost(string p);

    void removeWallPost(WallPost* w);
    string getUsername();
    void setUsername(string u);
    string writeEntireWall();
    void readEntireWall(string x);

    List<WallPost*>* getList();



private:
    string username;
    List<WallPost*>* list;


};


#endif //SOCIALNETWORKPROJECT_WALL_H
