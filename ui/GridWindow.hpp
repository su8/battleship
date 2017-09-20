//
// Created by bdardenn on 08/09/17.
//

#pragma once

#include <cursesw.h>
#include "../model/Grid.hpp"
#include "../model/Player.hpp"

class GridWindow : public NCursesColorWindow {
public:
    GridWindow(NCursesWindow &par, Player &player, int y, int x);

    virtual int move(int, int);  //Hiding
    virtual void _getyx(int &, int &);

    Grid &grid();
    virtual void redraw();

protected:
    Player _player;
    Grid _grid;

    size_t const gridx(size_t const x) const;
    size_t const gridy(size_t const y) const;
    const size_t winy(const size_t y) const;
    const size_t winx(const size_t x) const;
private:
};
