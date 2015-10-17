//
// Created by vgandolfo on 10/1/15.
//

#include "Wall.h"
using namespace std;


Wall::Wall() {
    list = NULL;        // set linked list to null
    username = "";
}

Wall::Wall(LinkedList<WallPost> *l, string un){
    list = l;
    username = un;
}

Wall::~Wall() {

}

void Wall::newWallPost(string p, string u) {
    WallPost *newPost = new WallPost(p, u);     // we need a pointer to point to the users new wallpost
    list->addElementToEnd(*newPost);
    delete newPost;
}

void Wall::removeWallPost(WallPost *w) {
    list->removeElement(*w);
}

string Wall::getUsername() {
    return username;
}

void Wall::setUsername(string u) {
    username = u;
}

string Wall::writeEntireWall() {          //4E)
    string result = "";
    Node<WallPost> *temp = list->head;     //temp pointer now points to what list head points to
    while (temp != NULL) {                // iterating through the list
        result = result + (temp->getData().ReturnWallPost());
        temp = temp->next;
    }
    return result;
}

/*
string Wall::readEntireWall(string x) {
3
}
*/

LinkedList<WallPost>* Wall::getList() {
    return list;
}
