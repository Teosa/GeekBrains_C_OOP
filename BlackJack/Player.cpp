#include "Headers/Player.h"

#include <iostream>

Player::Player(const string name) : name(name)
{
};

Player::~Player() { }


string Player::getName() const
{
    return name;
}

void Player::dropCards()
{
    cout << "Player::dropCards" << endl;
   cards.clear();
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

void Player::addCard(const shared_ptr<Card>& card)
{
    cards.push_back(card);
}

ostream& operator<<(ostream& stream, Player& player)
{
    stream << player.getName() << "'s cards: ";
    
    for (auto card : player.cards)
    {
        stream << *card << "   ";
    }

    return stream << endl;
}

