//
// Created by vgandolfo on 10/1/15.
//

#ifndef SOCIALNETWORKPROJECT_WALLPOST_H
#define SOCIALNETWORKPROJECT_WALLPOST_H

#include <string>

class WallPost {

public:
  WallPost(std::string p, time, std::string u);
  ~WallPost();
  std::string getPost();
  void setPost(std::string p);
  std::string getUsername();
  void setUsername(std::string u);
  //time getters and setters
  std::string returnWallPost();
private:
  std::string post;
  //time data type
  std::string username;

};


#endif //SOCIALNETWORKPROJECT_WALLPOST_H
