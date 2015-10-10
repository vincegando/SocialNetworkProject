//
// Created by vgandolfo on 10/1/15.
//

#include "WallPost.h"
#include <string>

WallPost::WallPost(string post, time, string username){
  this.post = post;
  this.time = time;
  this.username = username;

}

WallPost::~WallPost() {

}

string WallPost::getPost() {
  return this.post;
}

void WallPost::setPost(string post) {
  this.post = post;
}

string WallPost::getUsername() {
  return this.username;
}

void WallPost::setUsername(string username) {
  this.username = username;
}

//time setters and getters

string WallPost::returnWallPost(); {
  string result = this.post;
  return result;
}
