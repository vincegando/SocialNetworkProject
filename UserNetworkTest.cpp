
#include "UserNetwork.h"
#include "User.h"
#include <list>
#include <string>
#include <fstream>


using namespace std;


int main(int argc, const char * argv[]){


    // make a usernetworklist
    UserNetwork test;
    string username = "";
    test.addUser("krishna", "sup", "Krishna Ling", "S");
    test.addUser("vince", "hi", "Vince Gan", "Be");
    test.addUser("vince2", "hi2", "Vince Gan2", "Be2");
    test.addUser("vince3", "hi3", "Vince Gan3", "Be3");
    test.addUser("vince4", "hi4", "Vince Gan4", "Be4");
    test.WriteToFileUserList();

    test.readFromFile("./userList.txt");

    //cout << test.returnUser("krishna").userInfoString();
    //cout << test.returnUser("vince").userInfoString();

    test.sendRequest("vince", "krishna");
    test.sendRequest("vince", "vince2");
    test.sendRequest("vince", "vince3");
    test.sendRequest("vince", "vince4");
    test.acceptRequest("krishna", "vince");
    test.acceptRequest("vince2", "vince");
    test.acceptRequest("vince3", "vince");
    test.acceptRequest("vince4", "vince");
    cout << test.returnUser("vince").printFriendsList() << endl;


//    int counter;                                       // if counter = 1 then password exists
//    string yourpass;
//    cout << "Enter Password: " << endl;
//    cin >>   yourpass;
   
    //list<User>::iterator itr = test.getUserList().begin();
//    while(itr != test.getUserList().end())
//    {
//        string userstring = (*itr).userInfoString();
//
//        if (userstring.find(yourpass) != string::npos)
//        {
//            counter = 1;
//            cout << "Password exists" << endl;
//            return 0;
//        }
//        itr++;
//    }
//
//
//    if(counter !=1){
//        cout << "Password does not exist"<< endl;
//    }


    return 0;
}