#ifndef __GAME_H__
#define __GAME_H__
#include "GameState.hpp"

class Game
{
private:
    GameState* currentState;
    // int processedId;
public:
    Game(/* args */);
    ~Game();
    bool launch();
    bool stop();
    void setState(GameState* state);
    GameState* setState();

};

Game::Game(/* args */)
{
}

Game::~Game()
{
}


#endif // __GAME_H__