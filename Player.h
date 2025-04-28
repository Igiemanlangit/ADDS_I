#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player 
{
    public:
    virtual std::string getThrow() = 0;
};

#endif