#pragma once
#include <memory>
#include <vector>

#include "Card.h"
#include "Player.h"

class Hand : public Player
{
    vector<shared_ptr<Card>> deck;

    void addSuitPack(CardSuit suit);
    int getRandomCardIndexFromDeck() const;
public:
    Hand();
    ~Hand();

    void giveCard(shared_ptr<Player>& player);
};
