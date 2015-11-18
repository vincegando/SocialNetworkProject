//
// Created by Krishna Lingampalli on 11/10/15.
//

#ifndef SOCIALNETWORKPROJECT_WALLPOSTRESPONSE_H
#define SOCIALNETWORKPROJECT_WALLPOSTRESPONSE_H

#include <string>

class WallPostResponse {

public:
    WallPostResponse();
    WallPostResponse(string n, string u);
    ~WallPostResponse();
    void addResponse(string c);

private:
    string comment;
    string username;



};


#endif //SOCIALNETWORKPROJECT_WALLPOSTRESPONSE_H
