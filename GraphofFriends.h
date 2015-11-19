         #include <map>
         #include <iostream>
         #include <vector>
     	 #include <string>

class GraphofFriends
{
public:
	 typedef map<string, vertex *> VMAP;

	GraphofFriends();           //default constructor
	~GraphofFriends();

	VMAP doTask;
	void addVertex(const string &);
	void addEdge(const string& prev, const string & next, degreeofSep);


                   

	/* This is a graph representation that can be used for UserNetwork*/
};



