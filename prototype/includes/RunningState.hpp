#ifndef __RUNNINGSTATE_H__
#define __RUNNINGSTATE_H__
#include "Game.hpp"
#include "GameState.hpp"

class RunningState : public GameState
{
private:
    /* data */
public:
    RunningState(/* args */);
    ~RunningState();

    bool launch(Game* game) override {
        std::cout << "game is already runnig";
        return false;    
    }
    bool stop(Game* game) override {
        std::cout << "stopping game...";
        return true;
    }
};


#endif // __RUNNINGSTATE_H__