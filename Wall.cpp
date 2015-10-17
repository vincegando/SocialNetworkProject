//
// Created by vgandolfo on 10/1/15.
//

#include "Wall.h"
using namespace std;
#include <sstream>
#include <vector>


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
    list->addElementToEnd(new Node<WallPost> (*newPost));
    delete newPost;
}

void Wall::removeWallPost(WallPost *w) {
    //list->removeElement(*w);
}

string Wall::getUsername() {
    return username;
}

void Wall::setUsername(string u) {
    username = u;
}

string Wall::writeEntireWall() {          //4E)
    string result = "";
    Node<WallPost> *temp = list->returnHead();     //temp pointer now points to what list head points to
    while (temp != NULL) {                // iterating through the list
        result = result + (temp->getData().ReturnWallPost());
        temp = temp->getNext();
    }
    return result;
}


void Wall::readEntireWall(string x) {
    stringstream ss(x);
    vector<string> result;            // array of string

    while( ss.good() )
    {
        string substr;
        getline( ss, substr, ',' );
        result.push_back( substr );
    }


    cout << result[0] ;
}


LinkedList<WallPost>* Wall::getList() {
    return list;
}
