//
// Created by vgandolfo on 10/1/15.
//

#ifndef SOCIALNETWORKPROJECT_WALL_H
#define SOCIALNETWORKPROJECT_WALL_H


#include "LinkedList.h"
#include "WallPost.h"

class Wall {

public:

    Wall();
    ~Wall();

    void newWallPost(WallPost w);
    void removeWallPost(WallPost w);
    std::string getUsername();
    void setUsername(std::string u);
    std::string writeEntireWall();


private:
    LinkedList<WallPost> list;
    std::string username;
  

};


#endif //SOCIALNETWORKPROJECT_WALL_H
