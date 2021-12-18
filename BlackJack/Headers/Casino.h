#pragma once
#include <vector>

#include "Hand.h"
#include "Player.h"

class Casino
{
    std::vector<Player*> players;
    Hand* pHand;
    bool gameEnded;

    void run();
    void endGame();
public:
    Casino();
    ~Casino();
    
    void startTheGame();
    void addPlayer(string name);
};
