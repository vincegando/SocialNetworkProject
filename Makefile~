SocialNetwork: main.o LinkedList.o Node.o WallPost.o Wall.o User.o UserNetwork.o  
	g++ main.o LinkedList.o Node.o WallPost.o Wall.o User.o UserNetwork.o -o SocialNetwork

main.o: main.cpp LinkedList.h Node.h
	g++ main.cpp -c

LinkedList.o: LinkedList.h Node.h
	g++ LinkedList.h -c

Node.o: Node.h
	g++ Node.h -c

WallPost.o: WallPost.cpp WallPost.h 
	g++ WallPost.cpp -c

Wall.o: Wall.cpp Wall.h LinkedList.h
	g++ Wall.cpp -c

User.o: User.cpp User.h
	g++ User.cpp -c

UserNetwork.o: UserNetwork.cpp UserNetwork.h User.h LinkedList.h
	g++ UserNetwork.cpp -c

clean:
	rm SocialNetwork main.o LinkedList.o Node.o WallPost.o Wall.o User.o UserNetwork.o