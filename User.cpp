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

User::User(Wall w, string un, string pass, string fn, string c) {
    wall = w;
    username= un;
    password= pass;
    fullName= fn;
    city = c;


// I need to call wall constructor here and create a pointer Wall* username = new Wall();

}

User::~User() {

}
