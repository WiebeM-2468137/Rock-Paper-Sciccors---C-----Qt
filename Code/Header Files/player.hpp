#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include "moves.hpp"

class Player
{
protected:
    std::string m_name;
    int m_wins = 0;

    Player(const std::string &name) : m_name(name) {}

public:
    std::string getName() const { return m_name; };
    int getWins() const { return m_wins; };

    void addWin() { m_wins++; };

    virtual Move chooseMove() const = 0;
};

class HumanPlayer : public Player
{
public:
    HumanPlayer(const std::string &name);
    Move chooseMove() const override;
};

class BotPlayer : public Player
{
public:
    BotPlayer(const std::string &name);
    Move chooseMove() const override;
};

#endif