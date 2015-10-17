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

<<<<<<< HEAD
int main(){


    return 0;
=======
/*
int main () {
    string line;
    ifstream myfile ("example.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
>>>>>>> 2d7d71c28fab5b5f6c86e4bede5713d258bd390e
    }

    else cout << "Unable to open file";

    return 0;
}
 */


int main(){
    LinkedList<int> *list;
    list->removeElement(1);

    list->addElementToEnd(1);
    list->addElementToEnd(2);
    list->addElementToEnd(3);
    list->addElementToEnd(4);
    list->addElementToEnd(5);
    list->print();




}


