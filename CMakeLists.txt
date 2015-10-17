cmake_minimum_required(VERSION 3.3)
project(SocialNetworkProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

<<<<<<< HEAD
set(SOURCE_FILES main.cpp WallPost.cpp WallPost.h Wall.cpp Wall.h LinkedList.h User.cpp User.h UserNetwork.cpp UserNetwork.h)
=======
set(SOURCE_FILES main.cpp WallPost.cpp WallPost.h Wall.cpp Wall.h Node.h LinkedList.h User.cpp User.h UserNetwork.cpp UserNetwork.h)
>>>>>>> 2d7d71c28fab5b5f6c86e4bede5713d258bd390e
add_executable(SocialNetworkProject ${SOURCE_FILES})