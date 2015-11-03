//
// Created by vgandolfo on 10/1/15.
//

#include "Wall.h"
#include <sstream>
#include "time.h"
#include <string>


Wall::Wall() {

}

Wall::Wall(List<WallPost> l, string un){
    wallPosts = l;
    username = un;
}

Wall::~Wall() {

}

void Wall::newWallPost(string p) {
    time_t postTime;
    WallPost post(p, username, time(&postTime));     // we need a pointer to point to the users new wallpost
    wallPosts.push_back(post);

}

void Wall::removeWallPost(int pos) {
    wallPosts.remove(pos);


}

string Wall::getUsername() {
    return username;
}

void Wall::setUsername(string u) {
    username = u;
}

string Wall::writeEntireWall() {          //4E)
    std::string result = "";
    Node<WallPost> *temp = wallPosts.returnHead();     //temp pointer now points to what list head points to
    while (temp != NULL) {                // iterating through the list
        result = result + (temp->getData().ReturnWallPost()) + "\n";
        temp = temp->getNext();
    }
    return result;
}


void Wall::readEntireWall(string x) {
    
    string temp = x.substr(0,x.find("|$|"));
    //x= x.substr(x.find("|$|") + 2 , x.length());
    x.erase(0, x.find("|$|") + 2);
    username= temp;

    temp = x.substr(0,x.find("|$|"));
    //x= x.substr(x.find("|$|") + 2 , x.length());
    x.erase(0, x.find("|$|") + 2);
    string post= temp;

    temp = x.substr(0,x.find("|$|"));
    //x= userString.substr(x.find("|$|") + 2 , x.length());
    x.erase(0, x.find("|$|") + 2);
    string postTime = temp;

    newWallPost(post);

}


List<WallPost> Wall::getList() {
    return wallPosts;
}
