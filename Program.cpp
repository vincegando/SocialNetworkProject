//
// Created by Krishna Lingampalli on 11/11/15.
//

#include "Program.h"
#include <iostream>
#include <string>

using namespace std;


User* Program::getCurrentUser() {
    return currentUser;
}

void Program::createNew(UserNetwork *database) {
    string password = "", username = "", fullName = "", city = "";
    cout << "Enter Username: ";    //new user
    getline(cin,username );;
    cout << "Enter Password: ";
    getline(cin, password );
    cout << "Enter Full Name: ";
    getline(cin, fullName);
    cout << "Enter city: ";
    getline(cin, city);
    database->addUser(username, password, fullName, city);
    currentUser = &(database->returnUser(username));
}

void Program::login(UserNetwork *database) {

    string incorrect;
    string username = "", password = "";
    cout << "Enter Username: ";    //login
    getline(cin, username);


    cout << "Enter Password: ";
    getline(cin, password);
    if (database->findUser(username, password) == 0) {
        currentUser = &(database->returnUser(username));
    }
    else {
        cout << "Username or password incorrect\n";
        cout << "Press 1 to try again, any other key to quit\n";
        getline(cin, incorrect);
        if (incorrect == "1") {
            login(database);
        }
        else {
            exit(0);
        }
    }

}

void Program::editInfo(UserNetwork *database, int infoInput) {
    if(infoInput == 1) {
        cout << "Enter your new full name: ";
        string fullName;
        getline(cin, fullName);
        currentUser->setFullName(fullName);
        cout << "Full name updated";
    }
    else if (infoInput == 2) {
        cout << "Enter your new password: ";
        string password = "";
        getline(cin, password);
        currentUser->setPassword(password);
        cout << "Password updated";
    }
    else if (infoInput == 3) {
        cout << "Enter your new city: ";
        string city = "";
        getline(cin, city);
        currentUser->setCity(city);
        cout << "City updated";
    }
    else {
        cout << "error" << endl;
    }

}

void Program::userOptions(UserNetwork *database) {

    string loginInput, postNumber, infoInput;
    string postContent = "", searchInput = "";
    cout << "Login Successful\n";
    cout << "\n";
    cout << "Press 1 to show Wall\n";
    cout << "Press 2 to Create New Wall Post\n";
    cout << "Press 3 to Delete a Wall Post\n";
    cout << "Press 4 to Edit Your Info\n";
    cout << "Press 5 to Delete Your Profile\n";
    cout << "Press 6 to Search for a User\n";
    cout << "Press 7 to View Your Friend Requests\n";
    cout << "Press 8 to View Your Friend List\n";
    cout << "Press 9 to Logout\n";
    getline(cin, loginInput);
    int temp = stoi(loginInput);
    switch (temp) {
        case 1:
            cout << "Wall Contents: \n";
            cout << "\n";
            cout << currentUser->getWall()->writeEntireWall();
            break;
        case 2:
            cout << "What's on Your Mind?: ";
            getline(cin, postContent);
            currentUser->addWallPost(postContent);
            cout << "Post Created\n";
            break;
        case 3:
            cout << "Enter the post number you want to delete: ";
            getline(cin, postNumber);
            //need to fix delete functions
            break;
        case 4:
            cout << "Press 1 to edit your full name\n";
            cout << "Press 2 to change your password\n";
            cout << "Press 3 to change your city\n";
            getline(cin, infoInput);
            editInfo(database, stoi(infoInput));
        case 5:
            cout << "Profile will now be deleted\n";
            database->deleteUser(currentUser->getUsername());
            break;
        case 6:
            cout << "Enter the user you want to search for: ";
            getline(cin, searchInput);
            database->search(searchInput);
            //database->sendRequest(currentUser, searchInput);
            break;
        case 7:
            cout << "Your friend requests: \n";
            currentUser->getRequests();                            //show requests
            break;
        case 8:
            cout << "Your friends: \n";
            currentUser->getFriends();                                 //show friend list
            break;
        case 9:
            cout << "Logging out";
            exit(0);     //log out
        default:
            cout << "Error: Bad Input\n";
            break;
    }

}

void Program::run() {
    string userInput;
    UserNetwork *database = new UserNetwork;
    database->readFromFile("./userList.txt");

    cout<<"Press 1 to Create a new User\n";
    cout<<"Press 2 to Login\n";
    cout<<"Press 3 to Quit\n";
    getline( cin, userInput);
    
    int input = stoi(userInput);   // convert from string to int

    switch(input){

    
    case 1:
        createNew(database);
        userOptions(database);
    
    case 2:
        login(database);
        userOptions(database);
    
    case 3:
        return;
    
    default:
        cout << "Invalid input";
        run();

    }
}

// MAIN
int main(int argc, const char * argv[]){

    Program runApp;
    runApp.run();

    return 0;


}

