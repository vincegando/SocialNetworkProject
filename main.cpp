#include <iostream>
#include "Node.h"
#include "UserNetwork.h"
#include "List.h"



using namespace std;


int main(){
    

    // TESTING
    // for(int i = 1; i < 1000; i++) {
    //     list.push_back(i);

    // }

    // Node<int>* curr = list.returnHead();
    // for(int i = 1 ; i < 1000; i++){
    //     cout << curr -> getData() << endl;
    //     curr = curr -> getNext();
    // }

    // cout << list.size() << endl;

     
    int userInput = 0, loginInput = 0, postNumber = 0;
    string postContent = "", searchInput = "";
    string username = "", password = "", fullName = "", city = "";
    UserNetwork *users = UserNetwork::readFromFile("./userList.txt");

    cout<<"Press 1 to Create a new User\n";
    cout<<"Press 2 to Login\n";
    cout<<"Press 3 to Quit\n";
    cin >> userInput;
    switch (userInput) {
        case 1:
            cout << "Enter Username: ";    //new user
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;
            cout << "Enter Full Name: ";
            cin >> fullName;
            cout << "Enter city: ";
            cin >> city;
            if (users.addUser(username, password, fullName, city) == false) {  //try to add user
                cout << "Username already exists";
                break;
            }
            else if (users.addUser(username, password, fullName, city == true)){
                cout << "User successfully created";
                break;
            }
        case 2:
            cout << "Enter Username: ";    //login
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;
            if (users.findUser(username, password) == true) {           //check
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
                        cout << users.getUserList().returnHead()->getData()->getWall()->writeEntireWall();
                        break;
                    case 2:
                        cout << "What's on Your Mind?: "
                        cin >> postContent;
                        users.returnUser(username).addWallPost(postContent);
                        cout >> "Post Created\n";
                        break;
                    case 3:
                        cout << "Enter the post number you want to delete: "
                        cin >> postNumber;

                        break;
                    case 4:
                        cout << "Press 1 to edit your full name\n";
                        cout << "Press 2 to change your password\n";
                        cout << "Press 3 to change your city\n";
                        cin >> infoInput;
                        switch (infoInput) {
                            case 1:
                                cout << "Enter your new full name"
                                cin >> fullName;
                                users.returnUser(username).setFullName(fullName);
                                cout << "Full name updated";
                                break;
                            case 2:
                                cout << "Enter your new password"
                                cin >> password;
                                users.returnUser(username).setPassword(password);
                                cout << "Password updated";
                                break;
                            case 3:
                                cout << "Enter your new city"
                                cin >> city;
                                users.returnUser(username).setCity(city);
                                cout << "City updated";
                                break;
                            default:
                                cout << "Error: Bad Input\n";
                                break;
                        }
                        break;
                    case 5:
                        cout << "Profile will now be deleted\n";
                        users.deleteUser(username);
                        break;
                    case 6:
                        cout << "Enter the user you want to search for: "
                        cin >> searchInput;
                        //search function
                        break;
                    case 7:
                        cout << "Your friend requests: \n";
                        //show requests
                        break;
                    case 8:
                        cout << "Your friends: \n";
                        //show friend list
                        break;
                    case 9:
                        cout << "Logging out";
                        //log out
                        break;
                    default:
                        cout << "Error: Bad Input\n";
                        break;
                }
            }
            else {
                cout << "Username and/or password not found";
            }

            break;
        case 3:
            return 0; //quit
        default:
            cout << "Error: Bad input";
            break;

    }
    return 0;


}
