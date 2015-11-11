#include <iostream>
#include "UserNetwork.h"
#include <string>




using namespace std;

string username = "";

void createNew(UserNetwork *database) {
    string password = "", fullName = "", city = "";
    cout << "Enter Username: ";    //new user
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    cout << "Enter Full Name: ";
    cin.ignore();
    cin.clear();
    cin.sync();
    getline(cin, fullName);
    cout << "Enter city: ";
    cin >> city;
    database->addUser(username, password, fullName, city);
}

void login(UserNetwork *database) {

    int incorrect = 0;
    string password = "";
    cout << "Enter Username: ";    //login
    cin >> username;
    cout << "Enter Password: ";   
    cin >> password;
    if (database->findUser(username, password) == 0) {
        return;
    }
    else {
        cout << "Username or password incorrect\n";
        cout << "Press 1 to try again, any other key to quit\n";
        cin >> incorrect;
        if (incorrect == 1) {
        login(database);
        }
        else {
            exit(0);
        }
    }   

}

void editInfo(UserNetwork *database, int infoInput) {
    if (infoInput == 1) {
        cout << "Enter your new full name: ";
        string fullName = "";
        cin >> fullName;
        database->returnUser(username).setFullName(fullName);
        cout << "Full name updated";
    }
    else if (infoInput == 2) {
        cout << "Enter your new password: ";
        string password = "";
        cin >> password;
        database->returnUser(username).setPassword(password);
        cout << "Password updated";
    }
    else if (infoInput == 3) {
        cout << "Enter your new city: ";
        string city = "";
        cin >> city;
        database->returnUser(username).setCity(city);
        cout << "City updated";
    }
    else {
        cout << "error" << endl;
    }

}

void userOptions(UserNetwork *database) {

    int loginInput = 0, postNumber = 0, infoInput = 0;
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
    cin >> loginInput;
    switch (loginInput) {
        case 1:
            cout << "Wall Contents: \n";
            cout << "\n";
            cout << database->returnUser(username).getWall()->writeEntireWall();
            break;
        case 2:
            cout << "What's on Your Mind?: ";
            cin >> postContent;
            database->returnUser(username).addWallPost(postContent);
            cout << "Post Created\n";
            break;
        case 3:
            cout << "Enter the post number you want to delete: ";
            cin >> postNumber;
            //need to fix delete functions
            break;
        case 4:
            cout << "Press 1 to edit your full name\n";
            cout << "Press 2 to change your password\n";
            cout << "Press 3 to change your city\n";
            cin >> infoInput;
            editInfo(database, infoInput);
        case 5:
            cout << "Profile will now be deleted\n";
            database->deleteUser(username);
            break;
        case 6:
            cout << "Enter the user you want to search for: ";
            cin >> searchInput;
            database->search(searchInput);
            database->sendRequest(database->returnUser(username),searchInput);
            break;
        case 7:
            cout << "Your friend requests: \n";
            database->returnUser(username).getRequests();                            //show requests
            break;
        case 8:
            cout << "Your friends: \n";
            database->returnUser(username).getFriends();                                 //show friend list
            break;
        case 9:
            cout << "Logging out";
            exit(0);     //log out
        default:
            cout << "Error: Bad Input\n";
            break;
                }

}

void run() {
    int userInput = 0;
    UserNetwork *database;
    database->readFromFile("./userList.txt");

    cout<<"Press 1 to Create a new User\n";
    cout<<"Press 2 to Login\n";
    cout<<"Press 3 to Quit\n";
    cin >> userInput;
    if (userInput == 1) {
        createNew(database);
        userOptions(database);
    }
    else if(userInput == 2) {
        login(database);
        userOptions(database);
    }
    else if (userInput == 3) {
        return;
    }
    else {
        cout << "Invalid input";
        run();
    }
    database->WriteToFileUserList();

}

int main(int argc, const char * argv[]){
    
    run();


     
    // int userInput = 0, loginInput = 0, postNumber = 0, infoInput = 0;
    // string postContent = "", searchInput = "";
    // string username = "", password = "", fullName = "", city = "";
    // UserNetwork users;
    // users.readFromFile("./userList.txt");

    // cout<<"Press 1 to Create a new User\n";
    // cout<<"Press 2 to Login\n";
    // cout<<"Press 3 to Quit\n";
    // cin >> userInput;
    // switch (userInput) {
    //     case 1:
    //         cout << "Enter Username: ";    //new user
    //         cin >> username;
    //         cout << "Enter Password: ";
    //         cin >> password;
    //         cout << "Enter Full Name: ";
    //         cin.ignore();
    //         cin.clear();
    //         cin.sync();
    //         getline(cin, fullName);
    //         cout << "Enter city: ";
    //         cin >> city;
    //         users.addUser(username, password, fullName, city);
    //         users.WriteToFileUserList();                                        //try to add user
    //         break;
    //     case 2:
    //         cout << "Enter Username: ";    //login
    //         cin.ignore();
    //         cin.clear();
    //         cin.sync();
    //         cin >> username;
    //         cout << "Enter Password: ";
    //         cin.ignore();
    //         cin.clear();
    //         cin.sync();
    //         cin >> password;
    //         if (users.findUser(username, password) == 0) {           //check
    //             cout << "Login Successful\n";
    //             cout << "\n";
    //             cout << "Press 1 to show Wall\n";
    //             cout << "Press 2 to Create New Wall Post\n";
    //             cout << "Press 3 to Delete a Wall Post\n";
    //             cout << "Press 4 to Edit Your Info\n";
    //             cout << "Press 5 to Delete Your Profile\n";
    //             cout << "Press 6 to Search for a User\n";
    //             cout << "Press 7 to View Your Friend Requests\n";
    //             cout << "Press 8 to View Your Friend List\n";
    //             cout << "Press 9 to Logout\n";
    //             cin >> loginInput;
    //             switch (loginInput) {
    //                 case 1:
    //                     cout << "Wall Contents: \n";
    //                     cout << "\n";
    //                     cout << users.returnUser(username)->getData().getWall()->writeEntireWall();
    //                     break;
    //                 case 2:
    //                     cout << "What's on Your Mind?: ";
    //                     cin >> postContent;
    //                     users.returnUser(username)->getData().addWallPost(postContent);
    //                     cout << "Post Created\n";
    //                     break;
    //                 case 3:
    //                     cout << "Enter the post number you want to delete: ";
    //                     cin >> postNumber;
    //                     //need to fix delete functions
    //                     break;
    //                 case 4:
    //                     cout << "Press 1 to edit your full name\n";
    //                     cout << "Press 2 to change your password\n";
    //                     cout << "Press 3 to change your city\n";
    //                     cin >> infoInput;
    //                     switch (infoInput) {
    //                         case 1:
    //                             cout << "Enter your new full name: ";
    //                             cin >> fullName;
    //                             users.returnUser(username)->getData().setFullName(fullName);
    //                             cout << "Full name updated";
    //                             break;
    //                         case 2:
    //                             cout << "Enter your new password: ";
    //                             cin >> password;
    //                             users.returnUser(username)->getData().setPassword(password);
    //                             cout << "Password updated";
    //                             break;
    //                         case 3:
    //                             cout << "Enter your new city: ";
    //                             cin >> city;
    //                             users.returnUser(username)->getData().setCity(city);
    //                             cout << "City updated";
    //                             break;
    //                         default:
    //                             cout << "Error: Bad Input\n";
    //                             break;
    //                     }
    //                     break;
    //                 case 5:
    //                     cout << "Profile will now be deleted\n";
    //                     users.deleteUser(username);
    //                     break;
    //                 case 6:
    //                     cout << "Enter the user you want to search for: ";
    //                     cin >> searchInput;
    //                     users.search(searchInput);
    //                     users.sendRequest(users.returnUser(username),searchInput);
    //                     break;
    //                 case 7:
    //                     cout << "Your friend requests: \n";
    //                     users.returnUser(username)->getData().getRequests();                            //show requests
    //                     break;
    //                 case 8:
    //                     cout << "Your friends: \n";
    //                     users.returnUser(username)->getData().getFriends();                                 //show friend list
    //                     break;
    //                 case 9:
    //                     cout << "Logging out";
    //                     //log out
    //                     break;
    //                 default:
    //                     cout << "Error: Bad Input\n";
    //                     break;
    //             }
    //         }
    //         else {
    //             cout << "Username and/or password not found\n";
    //         }

    //         break;
    //     case 3:
    //         return 0; //quit
    //     default:
    //         cout << "Error: Bad input";
    //         break;

    // }
    return 0;


}
