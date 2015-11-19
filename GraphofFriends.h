         #include <map>
         #include <iostream>
         #include <vector>
     	 #include <string>


using namespace std;

class GraphofFriends
{
public:

	GraphofFriends();           //default constructor
	~GraphofFriends();

	int  doTask;
	void addVertex(const string & item);
	void addEdge(const string& prev, const string & next, int degreeofSep);


	/* This is a graph representation that can be used for UserNetwork*/
};



