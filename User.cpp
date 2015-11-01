//
// Created by Vincent on 10/10/15.
//

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
    wall->setUsername(username);
    password= pass;
    fullName= fn;
    city = c;
}

User::~User() {
    delete wall;
    username = "";
    password = "";
    fullName = "";
    city = "";
}

void User::deleteWallpost(int pos) {

    wall->removeWallPost(pos);      // use the "->" operator to access what the wall pointer points to

}
string User::userInfoString() {
    return getUsername() + ", " + getPassword() + ", " + getFullName() + ", " + getCity() + "\n";
}

void User::addWallPost(string post) {
    wall->newWallPost(post);

}

void User::readUserData(string input) {             // string splitting method
    istringstream ss(input);
    string token;

    while(std::getline(ss, token, ',')) {
        std::cout << token << '\n';
    }
}

Wall* User::getWall(){
    return wall;

}
