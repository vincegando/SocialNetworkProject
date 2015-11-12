
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
    test.WriteToFileUserList();

    test.readFromFile("./userList.txt");

    cout << test.returnUser("krishna").userInfoString();
    cout << test.returnUser("vince").userInfoString();

    int counter;                                       // if counter = 1 then password exists 
    string yourpass;
    cout << "Enter Password: " << endl;
    cin >>   yourpass;
   
    list<User>::iterator itr = test.getUserList().begin(); 
    while(itr != test.getUserList().end())    
    {
        string userstring = (*itr).userInfoString();
        
        if (userstring.find(yourpass) != string::npos)  
        {
            counter = 1;
            cout << "Password exists" << endl;
            return 0;
        }
        itr++;
    }


    if(counter !=1){
        cout << "Password does not exist"<< endl;
    }


    return 0;
}