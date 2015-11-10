
#include "UserNetwork.h"
#include "User.h"
#include <list>
#include <string>
#include <fstream>



int main(int argc, const char * argv[]){


    // make a userlist
    UserNetwork test;
    string username = "";
    //test.addUser("krishna", "sup", "Krishna Ling", "SJ");
    //test.addUser("vince", "hi", "Vince Gan", "Bel");
    //test.WriteToFileUserList();

    test.readFromFile("./userList.txt");

    cout << test.returnUser("krishna").userInfoString();
    cout << test.returnUser("vince").userInfoString();
    cout << "test"<< endl;
    return 0;

    // call readFromFile(string file)


    //WriteToFileUserList()
}