#ifndef BOARD_HPP
#define BOARD_HPP

#include <array>

const int BOARD_HEIGHT = 20;
const int BOARD_WIDTH = 10;
class Board{
public:
    void draw();
    std::array<std::array<int, BOARD_WIDTH>, BOARD_HEIGHT>& get_grid();
    bool is_collision();
    Board();
    //~Board();

private:
    std::array<std::array<int, BOARD_WIDTH>, BOARD_HEIGHT> grid;

};

#endif