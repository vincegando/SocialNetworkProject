cmake_minimum_required(VERSION 3.3)
project(SocialNetworkProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SOURCE_FILES main.cpp WallPost.cpp WallPost.h Wall.cpp Wall.h LinkedList.h User.cpp User.h UserNetwork.cpp UserNetwork.h)

set(SOURCE_FILES main.cpp WallPost.cpp WallPost.h Wall.cpp Wall.h Node.h LinkedList.h User.cpp User.h UserNetwork.cpp UserNetwork.h Array.h TimeComparision.h TimeComparision.cpp TimeComparision.h ListTest.cpp ListTest.h ArrayTest.cpp ArrayTest.h)

add_executable(SocialNetworkProject ${SOURCE_FILES} TimeComparision.cpp TimeComparision.h)