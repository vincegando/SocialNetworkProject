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
    /*LinkedList<int> *list;
    list->removeElement(1);

    list->addElementToEnd(1);
    list->addElementToEnd(2);
    list->addElementToEnd(3);
    list->addElementToEnd(4);
    list->addElementToEnd(5);
    list->print();
    */

    int userInput = 0;
    string username = "", password = "";

    cout<<"Press 1 to Create a new User";
    cout<<"Press 2 to Login";
    cout<<"Press 3 to Quit\n";
    cin >> userInput;
    switch (userInput) {
        case 1:
            cout << "Enter Username: ";    //new user
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;
            //check
            break;
        case 2:
            cout << "Enter Username: ";    //login
            cin >> username;
            cout << "Enter Password: ";
            cin >> password;
            //check
            //allow to see wall- another case switch
            break;
        case 3:
            return 0; //quit
            break;
        default:
            cout << "Error: Bad input";
            break;

    }



}


