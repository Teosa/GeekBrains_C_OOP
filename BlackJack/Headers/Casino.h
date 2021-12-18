#pragma once
#include <memory>
#include <vector>

#include "Hand.h"
#include "Player.h"

class Casino
{
    vector<shared_ptr<Player>> players;
    shared_ptr<Hand> pHand;
    bool gameEnded;

    void run();
    void endGame();
    void printTable() const;
    bool offerCard() const;
    void playWithPlayer(shared_ptr<Player>);
public:
    Casino();
    ~Casino();
    
    void startTheGame();
    void addPlayer(string name);



};
