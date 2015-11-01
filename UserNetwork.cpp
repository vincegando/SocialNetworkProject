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
    users = new List<User*>;                                       // list is NULL when usernetwork is created
}

UserNetwork::~UserNetwork() { }

bool UserNetwork::addUser(string un, string pass, string fn, string c) {

    Node<User*> *current = users->returnHead();
    while (current!= NULL){
        if (current-> getData()->getUsername() == un){
            return false;
        }
        current = current -> getNext();
    }

    User *newUser = new User(un,pass,fn,c);             //created a pointer to user node in usernetwork list
    users->push_back(newUser);
    return true;                // now add the new user to the usernetwork linkedlist

}
bool UserNetwork::deleteUser(string un) {               // BEWARE: THIS function may not work  - lot of logic to think
    Node<User*> *current = users->returnHead();
    while (current!= NULL){
        if (current->getData()->getUsername() == un){
            //users->remove(current->getData());  //need to fix
            return true;
        }
        current = current ->getNext();
    }
    return false;
}

bool UserNetwork::findUser(string un, string pass) {
    Node<User*> *current = users->returnHead();
    while (current!= NULL){
        if ((current->getData()->getUsername() == un) && (current->getData()->getPassword() == pass)){
            return true;
        }
        current = current ->getNext();
    }
    return false;
}

List<User*> UserNetwork::getUserList() {
    return *users;
}


//*******************************************************************************************************

void UserNetwork::WritetoFileUserlist(UserNetwork userList){
    fstream file;         // use for reading and writing
    file.open("file.txt");


    for(; ;){                                  // I want to iterate one user at a time in my userlist. How do I do that?
        string input= User.userInfoString();      // this function has /n so the file should have one user info per line
        cout << line << endl;                     //check if the user info changes to the next user-> see if loop works
        file<< input;                // use "<<" to write to file
    }
    
    file.close();
    return;
}


void UserNetwork::ReadfromFileUserlist(string file){
 //create a empty UserNetwork list here    
 ifstream iFile(file);
 string line;
 
    /* While there is still a line. */
    while(getline(iFile, line)) {
        /* Printing goes here. */
        cout << line << endl;

        // make a new node User and input this data from line into node
        //input node into the UserNetwork list with list.insert(node)

    

    }
 
    iFile.close();
    return;
}



