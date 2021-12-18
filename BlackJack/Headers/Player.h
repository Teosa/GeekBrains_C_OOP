#pragma once
#include <string>
#include <vector>

#include "Card.h"

using std::string;

class Player
{
    string name;
    std::vector<Card*> cards;
public:
    Player(const string name);
    ~Player();
    
    string getName() const;

    void dropCards();
    int getTotalScore();
};
