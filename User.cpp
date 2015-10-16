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

User::User(string username1, string password1, string fullName1) {
    username= username1;
    password= password1;
    fullName= fullName1;
// I need to call wall constructor here and create a pointer * username = to this specific wall

}

User::~User() { }
