#include "Headers/Hand.h"

Hand::Hand() : Player("Casino")
{
    addSuitPack(SPADE);
    addSuitPack(HEART);
    addSuitPack(DIAMOND);
    addSuitPack(CLUB);
}

Hand::~Hand()
{
    for (auto pCard : deck)
    {
        delete pCard;
    }
}

void Hand::addSuitPack(const CardSuit suit)
{
    deck.push_back(new Card(suit, TWO));
    deck.push_back(new Card(suit, THREE));
    deck.push_back(new Card(suit, FOUR));
    deck.push_back(new Card(suit, FIVE));
    deck.push_back(new Card(suit, SIX));
    deck.push_back(new Card(suit, SEVEN));
    deck.push_back(new Card(suit, EIGHT));
    deck.push_back(new Card(suit, NINE));
    deck.push_back(new Card(suit, TEN));
    deck.push_back(new Card(suit, JACK));
    deck.push_back(new Card(suit, QUEEN));
    deck.push_back(new Card(suit, KING));
    deck.push_back(new Card(suit, ACE));
}


