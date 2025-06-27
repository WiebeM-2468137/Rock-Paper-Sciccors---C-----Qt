#ifndef GAME_HPP
#define GAME_HPP

#include "player.hpp"
#include <vector>

class Game
{
private:
    std::vector<Player *> m_players;
    int gamesPlayed;

public:
    Game(const std::vector<std::string> &names, const std::vector<bool> isBotFlags);

    void playRound();
};

#endif