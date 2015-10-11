//
// Created by Vincent on 10/10/15.
//

#ifndef SOCIALNETWORKPROJECT_USER_H
#define SOCIALNETWORKPROJECT_USER_H

#include <string>
#include "Wall.h"

class User {
public:
    void setFullName(std::string fn);
    void setPassword(std::string p);
    void setCity(std::string c);

private:
    Wall wall;
    std::string username;
    std::string password;
    std::string fullName;
    std::string city;

public:

};


#endif //SOCIALNETWORKPROJECT_USER_H
