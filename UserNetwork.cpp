//
// Created by Vincent on 10/16/15.
//

#include "UserNetwork.h"
#include <fstream>
#include <cstddef>
#include "User.h"


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
}



/********* KRISHNA'S work */

User & UserNetwork::findUser(string USERNAME) {

    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        if ((*itr).getUsername() == USERNAME ){
            cout << "User found" << endl;
            break;
        }
        itr++;
    }

    if (itr == users.end() ){
        cout << "Username doesnt exist" << endl;
    }
    return (*itr);
}


/***** end Krishna's work    */


User & UserNetwork::returnUser(string username) {

    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        if ((*itr).getUsername() == username) {
            return (*itr);
        }
        itr++;
    }
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
        file << temp;
        itr++;
    }
    file.close();
    
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

User & UserNetwork::search(string userSearch) {

    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        if ((*itr).getUsername() == userSearch) {
            return returnUser(userSearch);
        }

        itr++;
    }
    return (*itr);

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

void UserNetwork::acceptRequest(string accepter, string username){
    // one user in a list gets data from another user in the list

    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        if ((*itr).getUsername() == accepter) {
            (*itr).addToFriendsList(username);
            (*itr).deleteFromRequestsList(username);     //NEED TO WRITE TO FILE

        }
        if ((*itr).getUsername() == username) {
            (*itr).addToFriendsList(accepter);
        }

        itr++;
    }

    // string currUsername = curr->getData().getUsername();
    // Node<User> *temp = users.returnHead();
    // while (temp->getNext() != NULL)  {
    //     if (temp->getData().getUsername() == username) {
    //         temp->getData().getFriends().push_back(currUsername);
    //     }
    //     temp = temp->getNext();
    // }
}

void UserNetwork::sendRequest(string sender, string username){
    //send data from one user to another
    list<User>::iterator itr = users.begin();
    while (itr != users.end()) {
        if ((*itr).getUsername() == username) {
            (*itr).addToRequestsList(sender);     //NEED TO WRITE TO FILE
            return;
        }

        itr++;
    }



    // Node<User> *temp = users.returnHead();
    // while (temp->getNext() != NULL) {
    //     if (temp->getData().getUsername() == username) {
    //         temp->getData().getRequests().push_back(currUsername);
    //     }
    //     temp = temp->getNext();
    // }


}
