//
// Created by bdardenn on 20/09/17.
//

#pragma once


#include "AController.hpp"
#include "../ai/AIShooter.hpp"

class AIFireController : public AController{
public:
    AIFireController(GameWindow &window, GridWindow& gridWindow);

    void enable() override;
    void handleKey(int key) override;
    void control() override;
public:
protected:
private:
    AIShooter _ai;
    GridWindow& _gridWindow;
    int _shotsPerTurn = 3;
};

