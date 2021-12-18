#pragma once
#include <vector>

#include "Card.h"
#include "Player.h"

class Hand : public Player
{
    std::vector<Card*> deck;

    void Hand::addSuitPack(CardSuit suit);
public:
    Hand();
    ~Hand();
};
