#include <iostream>
#include <string>
#include "Wall.h"

using namespace std;

int main(int argc, const char * argv[]) {

	Wall testwall;
	testwall.newWallPost("test post");
	testwall.newWallPost("test post2");
	testwall.newWallPost("test post3");
	testwall.newWallPost("test post4");
	testwall.newWallPost("test post5");
	list<WallPost>::iterator itr = testwall.getList().begin();
	itr++;
	itr++;
	testwall.removeWallPost(itr);
	string testString = testwall.writeEntireWall();
	cout << testString << endl;


	return 0;
}