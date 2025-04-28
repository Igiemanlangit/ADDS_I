#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player
{
    std::string getThrow() override;
};


#endif