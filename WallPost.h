//
// Created by vgandolfo on 10/1/15.
//

#ifndef SOCIALNETWORKPROJECT_WALLPOST_H
#define SOCIALNETWORKPROJECT_WALLPOST_H

#include <string>
#include "time.h"



using namespace std;

class WallPost {

public:
  WallPost(string p, string u);
    ~WallPost();
    string getPost();
    void setPost(string p);
    string getUsername();
    void setUsername(string user);
    string ReturnWallPost();

private:

    time_t postTime= time(NULL);
    string post;
    string username;





};


#endif //SOCIALNETWORKPROJECT_WALLPOST_H
