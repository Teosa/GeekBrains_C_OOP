#include "Headers/Player.h"

Player::Player(const string name) : name(name)
{
};

Player::~Player()
{
    dropCards();
}


string Player::getName() const
{
    return name;
}

void Player::dropCards()
{
    for (auto pCard : cards)
    {
        delete pCard;
    }
}

int Player::getTotalScore()
{
    int totalScore = 0;
    bool hasAce = false;

    for (auto const pCard : cards)
    {
        totalScore += pCard->getValue();

        if (pCard->getValue() == ACE)
        {
            hasAce = true;
        }
    }

    if (hasAce && totalScore + 10 <= 21)
    {
        totalScore += 10;
    }

    return totalScore;
}
