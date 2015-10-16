//
// Created by vgandolfo on 10/1/15.
//

#include "Wall.h"

Wall::Wall() {
    list = NULL;
    username = NULL;
}

Wall::~Wall() {

}

void Wall::newWallPost(WallPost w) {
    list.addElementToEnd(w);
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
    }
    return result;
}
