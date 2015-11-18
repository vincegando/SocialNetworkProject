//
// Created by Krishna Lingampalli on 11/10/15.
//

#ifndef SOCIALNETWORKPROJECT_WALLPOSTRESPONSE_H
#define SOCIALNETWORKPROJECT_WALLPOSTRESPONSE_H

#include <string>

class WallPostResponse {

public:
    WallPostResponse();
    WallPostResponse(std::string n, std::string u);
    ~WallPostResponse();
    void addResponse(std::string c);

private:
    std::string comment;
    std::string username;



};


#endif //SOCIALNETWORKPROJECT_WALLPOSTRESPONSE_H
