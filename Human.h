#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player
{
    std::string getThrow() override;
};

#endif