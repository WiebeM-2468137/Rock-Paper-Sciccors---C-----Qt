#ifndef GAME_CPP
#define GAME_CPP

#include "../Header Files/game.hpp"

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

#endif