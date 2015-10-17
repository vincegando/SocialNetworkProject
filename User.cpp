//
// Created by Vincent on 10/10/15.
//
using namespace std;
#include "User.h"

void User::setFullName(string fn) {
    fullName = fn;
}

void User::setUsername(string x) {
    username = x;
}
void User::setCity(string c) {
    city = c;
}

void User::setPassword(string p) {
    password = p;
}

string User::getUsername() {
    return username;
}

string User::getPassword() {
    return password;
}

string User::getFullName() {
    return fullName;
}

string User::getCity() {
    return city;
}

User::User(string un, string pass, string fn, string c) {
    wall = new Wall();
    username= un;
    password= pass;
    fullName= fn;
    city = c;


// I need to call wall constructor here and create a pointer Wall* username = new Wall();

}

User::~User() {
    delete wall;
}

void User::addWallpost(string post) {
    WallPost* newWallpost = new WallPost(post, username);
    wall->getList()->addElementToEnd(*newWallpost);
}

void User::deleteWallpost(WallPost *wallPost) {
    wall->removeWallPost(wallPost);          // use the "->" operator to access what the wall pointer points to
}



//need 5F functionstring User::userInfoString(){

}
//Part 5e
string User::userInfoString() {
    return getUsername() + ", " + getPassword() + ", " + getFullName() + ", " + getCity();
}

