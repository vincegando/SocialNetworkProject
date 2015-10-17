#include <iostream>
#include "LinkedList.h"
#include "Node.h"
#include "User.h"
#include "UserNetwork.h"
#include "WallPost.h"
#include "Wall.h"
#include <string>
#include <fstream>


using namespace std;

/*
int main () {
    string line;
    ifstream myfile ("example.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {

        }
        myfile.close();
    }

    else cout << "Unable to open file";

    return 0;
}
 */


int main(){
    LinkedList<int> *list = new LinkedList<int>();

    //list->addElementToEnd(1);
    //list->addElementToEnd(2);
    //list->addElementToEnd(3);
    //list->addElementToEnd(4);
    //list->addElementToEnd(5);
    list->print();
    list->~LinkedList();

    /*
    int userInput = 0, loginInput = 0;
    string username = "", password = "", fullName = "", city = "";
    UserNetwork network;

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
            if (network.addUser(username, password, fullName, city) == false) {  //try to add user
                cout << "Username already exists";
                break;
            }
            else {
                cout << "User successfully created";
                break;
            }
        case 2:
            cout << "Enter Username: ";    //login
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;
            if (network.findUser(username, password) == true) {           //check
                cout << "Login Successful\n";
                cout << "\n";
                cout << "Press 1 to show Wall\n";
                cout << "Press 2 to exit\n";
                cin >> loginInput;
                switch (loginInput) {
                    case 1:
                        cout << "Wall Contents: \n";
                        cout << "\n";
                        network.users.print();
                        break;
                    case 2:
                        return 0;
                    default:
                        cout << "Error: Bad Input";
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

    }*/
    return 0;


}


