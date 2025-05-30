#ifndef __GAMESTATE_H__
#define __GAMESTATE_H__
#include "Game.hpp"
#include <string>
class GameState
{   
public:
    GameState(/* args */);
    virtual ~GameState() = 0;

    // virtual std::string getName();
    virtual bool launch(Game* game) = 0;
    virtual bool stop(Game* game) = 0;
};

#endif // __GAMESTATE_H__