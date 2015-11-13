//
// Created by Vincent on 10/10/15.
//

#include "User.h"
#include <sstream>


void User::setFullName(string fn) {
    fullName = fn;
}

User::~User(){}
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

User::User() {
    wall = new Wall();
    username = "";
    password = "";
    fullName = "";
    city = "";
}

User::User(string un, string pass, string fn, string c) {
    wall = new Wall();
    username= un;
    wall->setUsername(username);
    password= pass;
    fullName= fn;
    city = c;
}

User::User(string userString){
    // we need to parse the string into 4 separate parts and store it in a new empty User object

    string temp = userString.substr(0,userString.find("|$|"));
    //userString= userString.substr(userString.find("|$|") + 2 , userString.length());
    userString.erase(0, userString.find("|$|") + 2);
    username= temp;

    temp = userString.substr(0,userString.find("|$|"));
    //userString= userString.substr(userString.find("|$|") + 2 , userString.length());
    userString.erase(0, userString.find("|$|") + 2);
    password= temp;

    temp = userString.substr(0,userString.find("|$|"));
    //userString= userString.substr(userString.find("|$|") + 2 , userString.length());
    userString.erase(0, userString.find("|$|") + 2);
    fullName= temp;

    city= userString;


}

void User::deleteWallPost(int pos) {

    list<WallPost>::iterator itr = wall->getList().begin();
    int i = 0;
    while (i != pos) {
        itr++;
        i++;
    }
    wall->removeWallPost(itr);      // use the "->" operator to access what the wall pointer points to

}
string User::userInfoString(){
    return getUsername() + "|$|" + getPassword() + "|$|" + getFullName() + "|$|" + getCity() + "\n";
}

void User::addWallPost(string post) {
    wall->newWallPost(post);

}


void User::addToFriendsList(string username){
    friends.push_back(username);
}

void User::deleteFromFriendsList(string username) {

    list<string>::iterator itr = friends.begin();
    while (itr != friends.end()) {
        if ((*itr) == username) {
            friends.erase(itr);
        }

        itr++;
    }
}

void User::addToRequestsList(string username){
    requests.push_back(username);
}

void User::deleteFromRequestsList(string username) {

    list<string>::iterator itr = requests.begin();
    while (itr != requests.end()) {
        if ((*itr) == username) {
            requests.erase(itr);
        }

        itr++;
    }
}

string User::printFriendsList() {

    string result = "";
    list<string>::iterator itr = friends.begin();
    while (itr != friends.end()) {
        result = result + (*itr) + "\n";
        itr++;
    }
    return result;
}

string User::printRequestsList() {

    string result = "";
    list<string>::iterator itr = requests.begin();
    while (itr != requests.end()) {
        result = result + (*itr) + "\n";
        itr++;
    }
    return result;
}

Wall* User::getWall(){
    return wall;
}
