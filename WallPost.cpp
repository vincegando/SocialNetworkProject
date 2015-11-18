

#include "WallPost.h"



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
  struct tm *timedata;
  timedata = localtime(&postTime);
  char timeString[50];
  strftime(timeString, 50, "%I:%M%p", timedata);

  return getUsername() + "|$|"+ getPost() + "|$|"+ timeString + "\n";
}

void WallPost::addResponse(WallPostResponse comment) {

  comments.push_back(comment);

}


