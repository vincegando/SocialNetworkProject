

#include "WallPost.h"
#include <string>

WallPost::WallPost(std::string p, time, std::string u){
  post = p;
  time = time;
  username = u;

}

WallPost::~WallPost() {

}

std::string WallPost::getPost() {
  return post;
}

void WallPost::setPost(std::string p) {
  post = p;
}

std::string WallPost::getUsername() {
  return username;
}

void WallPost::setUsername(std::string u) {
  username = u;
}

//time setters and getters

std::string WallPost::returnWallPost(); {
  std::string result = post;
  return result;
}
