//
// Created by Vincent on 10/16/15.
//

#include "UserNetwork.h"
#include "List.h"
#include "User.h"
#include <string>
#include <fstream>


UserNetwork::UserNetwork() {

}

UserNetwork::~UserNetwork() { }

void UserNetwork::addUser(string un, string pass, string fn, string c) {

    Node<User> *current = users.returnHead();
    while (current!= NULL){
        if (current->getData().getUsername() == un){
            cout << "Username exists"<< endl;
            return;
        }
        current = current ->getNext();
    }

    User newUser(un,pass,fn,c);             //created a pointer to user node in usernetwork list
    users.push_back(newUser);
    cout << "user created"<< endl;
                    // now add the new user to the usernetwork linkedlist

}
void UserNetwork::deleteUser(string un) {               // BEWARE: THIS function may not work  - lot of logic to think
    Node<User> *current = users.returnHead();
    while (current->getNext() != NULL){
        if (current->getData().getUsername() == un){
            //users->remove(current->getData());  //need to fix
            cout << "user deleted" << endl;
        }
        current = current ->getNext();
    }
    cout << "user not deleted" << endl;
}

int UserNetwork::findUser(string un, string pass) {
    Node<User> *current = users.returnHead();
    while (current->getNext()!= NULL){
        if ((current->getData().getUsername() == un ) && (current->getData().getUsername() == pass)){
            cout << "user found" << endl;
            return 0;
        }
        current = current ->getNext();
    }
    cout << "user not found" << endl;
    return 1;
}


Node<User> *UserNetwork::returnUser(string username) {
    Node<User> *current = users.returnHead();
    while (current->getNext() != NULL) {
        if (current->getData().getUsername() == username) {
            return current;
        }
        current = current->getNext();
    }
    return current;
}

List<User> *UserNetwork::getUserList() {
    return &users;
}


//*******************************************************************************************************

void UserNetwork::WriteToFileUserList(){
    fstream file;                     // use for reading and writing
    file.open("./userList.txt", fstream::out);            //empty file

    if(file.is_open()) {
        cout << "file is open\n";
    }
    else {
        cout << "file is not open\n";
    }
    std::string temp;

    Node<User> *curr = users.returnHead();
    curr = curr->getNext();                                       //do something else
    while(curr->getNext()){
        temp = curr->getData().userInfoString();
        file << temp << endl;
        curr = curr->getNext();                          // use "<<" to write to file
    }
    
    file.close();
    return;
}


void UserNetwork::readFromFile(string file){

    ifstream filename;
    filename.open(file);
    string temp;

    while(getline(filename,temp)){
        User newUser(temp);
        users.push_back(newUser);
    }

    filename.close();
    return;
}

void UserNetwork::search(string userSearch) {
    Node<User> *temp = users.returnHead();
    int input = 0;
    while(temp->getNext() !=NULL){
        if(temp->getData().getUsername() == userSearch)
        {
            cout<< "User exists"<< endl;
            return;
        }
    }
    cout<< "User does not exist"<< endl;

}


void UserNetwork::acceptRequest(Node<User> *curr, string username){
    // one user in a list gets data from another user in the list
    string currUsername = curr->getData().getUsername();
    Node<User> *temp = users.returnHead();
    while (temp->getNext() != NULL)  {
        if (temp->getData().getUsername() == username) {
            temp->getData().getFriends().push_back(currUsername);
        }
        temp = temp->getNext();
    }
}

void UserNetwork::sendRequest(Node<User> *curr, string username){
    //send data from one user to another
    string currUsername = curr->getData().getUsername();
    Node<User> *temp = users.returnHead();
    while (temp->getNext() != NULL) {
        if (temp->getData().getUsername() == username) {
            temp->getData().getRequests().push_back(currUsername);
        }
        temp = temp->getNext();
    }


}
