

#include "WallPost.h"
#include <string>
#include "time.h"
#include <iostream>

using namespace std;
WallPost::WallPost(string p, string u, time_t pt){
  post = p;
  username = u;
  postTime = pt;
}

WallPost::WallPost() {
  post = "";
  username = "";
  postTime = NULL;
}

WallPost::~WallPost() {
  post = "";
  username = "";
  postTime = NULL;
}

string WallPost::getPost() {
  return post;
}

void WallPost::setPost(string p) {
  post = p;
}

string WallPost::getUsername() {
  return username;
}

void WallPost::setUsername(string user) {
  username = user;
}

time_t WallPost::getPostTime() {
  return postTime;
}

void WallPost::setPostTime(time_t pt) {
  postTime = pt;
}

string WallPost::ReturnWallPost() {
  return getUsername() + ", "+ getPost() + ", "+ ctime(&postTime)+ ", ";
}


