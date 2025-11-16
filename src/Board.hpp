#ifndef BOARD_HPP
#define BOARD_HPP

#include <array>

const int BOARD_HEIGHT = 20;
const int BOARD_WIDTH = 10;
class Board{
public:
    void draw();
    std::array<std::array<int, BOARD_WIDTH>, BOARD_HEIGHT>& get_grid();
    bool is_collision(std::array<std::array<int, 4>, 4> shape, int future_x, int future_y);
    void settle_piece(std::array<std::array<int, 4>, 4> shape, int current_x, int future_y);
    Board();
    //~Board();

private:
    std::array<std::array<int, BOARD_WIDTH>, BOARD_HEIGHT> grid;

};

#endif