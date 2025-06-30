#ifndef GAME_CPP
#define GAME_CPP

#include "../Header Files/game.hpp"
#include <iostream>

Game::Game(const std::vector<std::string> &names, std::vector<bool> isBotFlags)
{
    for (int i = 0; i < names.size(); i++)
    {
        if (isBotFlags[i])
        {
            Player *p = new BotPlayer(names[i]);
            m_players.push_back(p);
        }
        else
        {
            Player *p = new HumanPlayer(names[i]);
            m_players.push_back(p);
        }
    }
}

void Game::playRound()
{
    Move player1move = m_players[0]->chooseMove();
    Move player2move = m_players[1]->chooseMove();

    if (player1move == player2move)
    {
        std::cout << "Draw.\n";
    }

    if (player1move == Move::Paper && player2move == Move::Rock)
    {
        std::cout << "Player 1 wins.\n";
        m_players[0]->addWin();
    }
    else if (player1move == Move::Rock && player2move == Move::Sciccors)
    {
        std::cout << "Player 1 wins.\n";
        m_players[0]->addWin();
    }
    else if (player1move == Move::Sciccors && player2move == Move::Paper)
    {
        std::cout << "Player 1 wins.\n";
        m_players[0]->addWin();
    }
    else
    {
        std::cout << "Player 2 wins.\n";
        m_players[1]->addWin();
    }

    gamesPlayed++;
}

#endif