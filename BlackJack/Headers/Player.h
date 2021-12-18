#pragma once
#include <memory>
#include <string>
#include <vector>

#include "Card.h"

using namespace std;

class Player
{
    string name;
    vector<shared_ptr<Card>> cards;
public:
    Player(const string name);
    ~Player();

    friend ostream& operator<<(ostream& stream, Player& player);
    
    string getName() const;

    void dropCards();
    int getTotalScore();
    void addCard(const shared_ptr<Card>& card);
};
