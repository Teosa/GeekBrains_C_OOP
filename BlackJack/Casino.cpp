#include "Headers/Casino.h"

#include <iostream>

Casino::Casino() : pHand(new Hand()), gameEnded(false) { }
Casino::~Casino()
{
    delete pHand;

    for (auto pPlayer : players)
    {
        delete pPlayer;
    }
}

void Casino::addPlayer(const string name)
{
    players.push_back(new Player(name));
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
    // plays...
    std::cout << players[0]->getName() << std::endl;
    
    endGame();
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



