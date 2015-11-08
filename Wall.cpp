//
// Created by vgandolfo on 10/1/15.
//

#include "Wall.h"
#include <sstream>
#include "time.h"
#include <string>


Wall::Wall() {
    username = "";
    wallPosts = list<WallPost>();
}

Wall::Wall(list<WallPost> l, string un){
    wallPosts = l;
    username = un;
}

Wall::~Wall() {
    username = "";
}

void Wall::newWallPost(string p) {
    time_t postTime;
    WallPost post(p, username, time(&postTime));     // we need a pointer to point to the users new wallpost
    wallPosts.push_back(post);

}

void Wall::removeWallPost(list<WallPost>::iterator itr) {
    wallPosts.erase(itr);


}

string Wall::getUsername() {
    return username;
}

void Wall::setUsername(string u) {
    username = u;
}

string Wall::writeEntireWall() {          //4E)
    std::string result = "";
    list<WallPost>::iterator itr = wallPosts.begin();
    //Node<WallPost> *temp = wallPosts.returnHead();     //temp pointer now points to what list head points to
    while (itr++ != wallPosts.end()) {                // iterating through the list
        result = result + ((*itr).ReturnWallPost()) + "\n";
        itr++;
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


list<WallPost> & Wall::getList() {
    return wallPosts;
}
