//
// Created by vgandolfo on 10/1/15.
//

#include "Wall.h"
#include <sstream>
#include <vector>
#include "time.h"
#include <vector>
#include <string>
#include <sstream>

Wall::Wall() {

}

Wall::Wall(List<WallPost> l, string un){
    wallPosts = l;
    username = un;
}

Wall::~Wall() {
    username = "";
    delete wallPosts;
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


List<WallPost> Wall::getList() {
    return wallPosts;
}
