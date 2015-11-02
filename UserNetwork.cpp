//
// Created by Vincent on 10/16/15.
//

#include "UserNetwork.h"
#include "LinkedList.h"
#include "User.h"
#include "List.h"
#include <string>
#include <string.h>
#include <fstream>


UserNetwork::UserNetwork() {

}

UserNetwork::~UserNetwork() { }

bool UserNetwork::addUser(string un, string pass, string fn, string c) {

    Node<User> *current = users.returnHead();
    while (current!= NULL){
        if (current->getData().getUsername() == un){
            return false;
        }
        current = current ->getNext();
    }

    User newUser(un,pass,fn,c);             //created a pointer to user node in usernetwork list
    users.push_back(newUser);
    return true;                // now add the new user to the usernetwork linkedlist

}
bool UserNetwork::deleteUser(string un) {               // BEWARE: THIS function may not work  - lot of logic to think
    Node<User> *current = users.returnHead();
    while (current!= NULL){
        if (current->getData().getUsername() == un){
            //users->remove(current->getData());  //need to fix
            return true;
        }
        current = current ->getNext();
    }
    return false;
}

bool UserNetwork::findUser(string un, string pass) {
    Node<User> *current = users.returnHead();
    while (current!= NULL){
        if ((current->getData().getUsername() == un) && (current->getData().getUsername() == pass)){
            return true;
        }
        current = current ->getNext();
    }
    return false;
}

User UserNetwork::returnUser(string username) {
    Node<User> *current = users.returnHead();
    while (current!= NULL){
        if (current->getData().getUsername() == username) {
            return current->getData();
        }
        current = current->getNext();
    return current->getData();    
    }
}

List<User> UserNetwork::getUserList() {
    return users;
}


//*******************************************************************************************************

void UserNetwork::WriteToFileUserList(){
    fstream file;                     // use for reading and writing
    file.open("./userList.txt");            //empty file
    std::string temp;

    List::iterator itr;                     //do something else
    while(++itr != users.end()){
        temp = (*itr).userInfoString();
        file << temp << endl;                // use "<<" to write to file
    }
    
    file.close();
    return;
}


void UserNetwork::readFromFile(string file){
 ifstream iFile(file);
 string line;
 
    /* While there is still a line. */
    while(getline(iFile, line)) {
        /* Printing goes here. */
        cout << line << endl;
        addUser(line);
    }
 
    iFile.close();

    
    return;
}



