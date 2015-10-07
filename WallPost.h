//
// Created by vgandolfo on 10/1/15.
//

#ifndef SOCIALNETWORKPROJECT_WALLPOST_H
#define SOCIALNETWORKPROJECT_WALLPOST_H


class WallPost {

public:
  WallPost(string post, time, string username);
  string getPost();
  void setPost(string post);
  string getUsername();
  void setUsername(string username);
  //time getters and setters
  string returnWallPost();
private:
  string post;
  //time data type
  string username;

};


#endif //SOCIALNETWORKPROJECT_WALLPOST_H
