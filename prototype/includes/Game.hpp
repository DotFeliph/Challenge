#ifndef __GAME_H__
#define __GAME_H__
#include "GameState.hpp"
#include "InstalledState.hpp"

class Game
{
private:
    GameState *currentState;
    // int processedId;
public:
    Game(): currentState{ new InstalledState() } { }
    ~Game();
    bool launch() { currentState->launch(this); }
    bool stop() { currentState->stop(this); }
    void setState(GameState* state);
    GameState* setState();

};

#endif // __GAME_H__