//
// Created by vgandolfo on 10/1/15.
//

#include "Wall.h"

Wall::Wall() {
    list = NULL;
    username = NULL;
}

Wall::Wall(LinkedList<WallPost> l, std::string un){
    list = l;
    username = un;
}

Wall::~Wall() {
    delete list;
    delete username;
}

void Wall::newWallPost(string p, string u) {
    WallPost newPost = new WallPost(p, u);

    list.addElementToEnd(newPost);
}

void Wall::removeWallPost(WallPost w) {
    list.removeElement(w);
}

std::string Wall::getUsername() {
    return username;
}

void Wall::setUsername(std::string u) {
    username = u;
}

std::string Wall::writeEntireWall() {
    std::string result = "";
    Node<WallPost> *temp = list.head;
    while (temp != NULL) {
        result = result + temp->getData().ReturnWallPost();
        temp = temp->next;
    }
    return result;
}
