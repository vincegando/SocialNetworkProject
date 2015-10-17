//
// Created by Vincent on 10/10/15.
//
using namespace std;
#include "User.h"
#include <sstream>
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
}

User::~User() {
    delete wall;
}

void User::deleteWallpost(WallPost *wallPost) {
    wall->removeWallPost(wallPost);          // use the "->" operator to access what the wall pointer points to
}
string User::userInfoString() {
    return getUsername() + ", " + getPassword() + ", " + getFullName() + ", " + getCity();
}

void User::addWallPost(string post) {
    WallPost* newWallpost = new WallPost(post, username);
    wall->getList()->addElementToEnd(new Node<WallPost>(*newWallpost));
}

void User::readUserData(string input) {             // string splitting method
    istringstream ss(input);
    string token;

    while(std::getline(ss, token, ',')) {
        std::cout << token << '\n';
    }
}
