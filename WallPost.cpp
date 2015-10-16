

#include "WallPost.h"
#include <string>
#include "time.h"

using namespace std;

WallPost::WallPost(string p, string u){
  post = p;
  username = u;

}

WallPost::~WallPost() { }

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

