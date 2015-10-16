//
// Created by vgandolfo on 10/1/15.
//

#include "Wall.h"
using namespace std;


Wall::Wall() {
    list = NULL;        // set linked list to null
    username = NULL;
}

Wall::Wall(LinkedList<WallPost> l, string un){
    list = l;
    username = un;
}

Wall::~Wall() {
    delete list;
    delete username;
}

void Wall::newWallPost(string p, string u) {
    WallPost *newPost = new WallPost(p, u);     // we need a pointer to point to the users new wallpost
    list.addElementToEnd(newPost);
}

void Wall::removeWallPost(WallPost *w) {
    list.removeElement(*w);
}

string Wall::getUsername() {
    return username;
}

void Wall::setUsername(string u) {
    username = u;
}

string Wall::writeEntireWall() {          //4E)
    string result = "";
    Node<WallPost> *temp = list.head;     //temp pointer now points to what list head points to
    while (temp != NULL) {
        result = result + temp->getData().ReturnWallPost();
        temp = temp->next;
    }
    return result;
}
