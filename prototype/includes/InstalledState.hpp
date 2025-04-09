#ifndef __INSTALLEDSTATE_H__
#define __INSTALLEDSTATE_H__
#include "GameState.hpp"
#include "Game.hpp"
#include <iostream>

class InstalledState : public GameState 
{
public:
    InstalledState(/* args */){ }
    ~InstalledState();

    bool launch(Game* game) override {
        std::cout << "trying to open game from installed state";
        return true;
    }
    bool stop(Game* game) override {
        std::cout << "can't stop a game that is not running";
        return false;
    }
};


#endif // __INSTALLEDSTATE_H__