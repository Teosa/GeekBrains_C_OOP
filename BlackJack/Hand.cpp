#include "Headers/Hand.h"

#include <iostream>
#include <random>


Hand::Hand() : Player("Casino")
{
    addSuitPack(SPADE);
    addSuitPack(HEART);
    addSuitPack(DIAMOND);
    addSuitPack(CLUB);
}

Hand::~Hand()
{
}

void Hand::addSuitPack(const CardSuit suit)
{
    deck.push_back(make_shared<Card>(suit, TWO));
    deck.push_back(make_shared<Card>(suit, THREE));
    deck.push_back(make_shared<Card>(suit, FOUR));
    deck.push_back(make_shared<Card>(suit, FIVE));
    deck.push_back(make_shared<Card>(suit, SIX));
    deck.push_back(make_shared<Card>(suit, SEVEN));
    deck.push_back(make_shared<Card>(suit, EIGHT));
    deck.push_back(make_shared<Card>(suit, NINE));
    deck.push_back(make_shared<Card>(suit, TEN));
    deck.push_back(make_shared<Card>(suit, JACK));
    deck.push_back(make_shared<Card>(suit, QUEEN));
    deck.push_back(make_shared<Card>(suit, KING));
    deck.push_back(make_shared<Card>(suit, ACE));
}

int Hand::getRandomCardIndexFromDeck() const
{
    bool releasedCard = true;
    int randomIndex = -1;

    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> uni(0, deck.size() - 1);

    while (releasedCard)
    {
        randomIndex = uni(rng);
        if (_DEBUG) cout << "DECK INDEX: " << randomIndex << endl;

        releasedCard = deck[randomIndex]->isReleased();
    }

    return randomIndex;
}

void Hand::giveCard(shared_ptr<Player>& player)
{
    const auto cardIndex = getRandomCardIndexFromDeck();
    deck[cardIndex]->setReleased(true);
    player->addCard(deck[cardIndex]);
}
