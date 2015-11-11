//
// Created by Vincent on 10/16/15.
//

#include "UserNetwork.h"
#include <fstream>



UserNetwork::UserNetwork() {

}

UserNetwork::~UserNetwork() { }

void UserNetwork::addUser(string un, string pass, string fn, string c) {

    list<User>::iterator itr = users.begin();
     while (itr != users.end()) {
         if ((*itr).getUsername() == un) {
             cout << "Username already exists" << endl;
             return;
         }
         itr++;
     }
    User newUser(un,pass,fn,c);
    users.push_back(newUser);

    // Node<User> *current = users.returnHead();
    // while (current!= NULL){
    //     if (current->getData().getUsername() == un){
    //         cout << "Username exists"<< endl;
    //         return;
    //     }
    //     current = current ->getNext();
    // }

    // User newUser(un,pass,fn,c);             //created a pointer to user node in usernetwork list
    // users.push_back(newUser);
    // cout << "user created"<< endl;
    //                 // now add the new user to the usernetwork linkedlist

}
void UserNetwork::deleteUser(string un) {               // BEWARE: THIS function may not work  - lot of logic to think

    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        if ((*itr).getUsername() == un) {
            users.erase(itr);
            return;
        }
        itr++;
    }

    // Node<User> *current = users.returnHead();
    // while (current->getNext() != NULL){
    //     if (current->getData().getUsername() == un){
    //         //users->remove(current->getData());  //need to fix
    //         cout << "user deleted" << endl;
    //     }
    //     current = current ->getNext();
    // }
    // cout << "user not deleted" << endl;
}

int UserNetwork::findUser(string un, string pass) {

    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        if (((*itr).getUsername() == un ) && ((*itr).getPassword() == pass)) {
            cout << "User found" << endl;
            return 0;
        }
        itr++;
    }
    cout << "User not found" << endl;
    return 1;

    // Node<User> *current = users.returnHead();
    // while (current->getNext()!= NULL){
    //     if ((current->getData().getUsername() == un ) && (current->getData().getUsername() == pass)){
    //         cout << "user found" << endl;
    //         return 0;
    //     }
    //     current = current ->getNext();
    // }
    // cout << "user not found" << endl;
    // return 1;
}


User & UserNetwork::returnUser(string username) {

    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        if ((*itr).getUsername() == username) {
            return (*itr);
        }
        itr++;
    }

    /*
    Node<User> *current = users.returnHead();
    while (current->getNext() != NULL) {
        if (current->getData().getUsername() == username) {
            return current;
        }
        current = current->getNext();
    }
    return current;   */

    return (*itr);
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
    string temp;
    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        temp = (*itr).userInfoString();
        file << temp << endl;
        itr++;
    }

    // Node<User> *curr = users.returnHead();
    // curr = curr->getNext();                                       //do something else
    // while(curr->getNext()){
    //     temp = curr->getData().userInfoString();
    //     file << temp << endl;
    //     curr = curr->getNext();                          // use "<<" to write to file
    // }
    
     file.close();
    // return;
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
}

string UserNetwork::search(string userSearch) {

    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        if ((*itr).getUsername() == userSearch) {
            return (*itr).getUsername();
        }

        itr++;
    }
    return "User not found";

    // Node<User> *temp = users.returnHead();
    // int input = 0;
    // while(temp->getNext() !=NULL){
    //     if(temp->getData().getUsername() == userSearch)
    //     {
    //         cout<< "User exists"<< endl;
    //         return;
    //     }
    // }
    // cout<< "User does not exist"<< endl;

}


list<User> & UserNetwork::getUserList() {

    return users;
}

void UserNetwork::acceptRequest(User accepter, string username){
    // one user in a list gets data from another user in the list
    // string currUsername = curr->getData().getUsername();
    // Node<User> *temp = users.returnHead();
    // while (temp->getNext() != NULL)  {
    //     if (temp->getData().getUsername() == username) {
    //         temp->getData().getFriends().push_back(currUsername);
    //     }
    //     temp = temp->getNext();
    // }
}

void UserNetwork::sendRequest(User sender, string username){
    //send data from one user to another
    // string currUsername = curr->getData().getUsername();
    // Node<User> *temp = users.returnHead();
    // while (temp->getNext() != NULL) {
    //     if (temp->getData().getUsername() == username) {
    //         temp->getData().getRequests().push_back(currUsername);
    //     }
    //     temp = temp->getNext();
    // }


}
