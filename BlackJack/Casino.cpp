#include "Headers/Casino.h"

#include <iostream>

Casino::Casino() : pHand(make_shared<Hand>()), gameEnded(false) { }
Casino::~Casino() { if(_DEBUG) cout << "Casino destructor" << endl; }

void Casino::addPlayer(const string name)
{
    players.push_back(make_shared<Player>(name));
}

void Casino::startTheGame()
{
    while(!gameEnded)
    {
        run();
    }
}


void Casino::run()
{
    for (const auto player : players)
    {
        playWithPlayer(player);
    }

    // playWithPlayer(pHand);
    
    endGame();
}

void Casino::playWithPlayer(shared_ptr<Player> player)
{
    bool enough = false;

    while(!enough)
    {
        pHand->giveCard(player);
        printTable();
        enough = offerCard();
    }
}


void Casino::endGame()
{
    gameEnded = true;
    
    char answer;
    std::cout << "Game ended. Would you like play again? y/n" << std::endl;
    std::cin >> answer;

    if(answer == 'y' || answer == 'Y')
    {
        gameEnded = false;
    }
    else
    {
        std::cout << "Thank you for playing!" << std::endl;
    }
}

void Casino::printTable() const
{
    if (system("CLS")) system("clear");
    
    for (const auto player : players)
    {
        cout << *player << endl;
    }
}

bool  Casino::offerCard() const
{
    char answer;
    cout << "Would you like one more card? y/n" << endl;
    cin >> answer;

    return answer == 'y' || answer == 'Y';
}





