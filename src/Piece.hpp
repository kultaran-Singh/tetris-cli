#ifndef PIECE_HPP
#define PIECE_HPP

#include <array>
#include "Board.hpp"

class Piece{
public:
    virtual void rotate() = 0;
    virtual ~Piece() = default;
    void draw_piece(Board& b);

    //Getters
    int get_pos_x();
    int get_pos_y();
    std::array<std::array<int, 4>, 4> get_shape();
    
    //Setters
    void set_pos_x(int x);
    void set_pos_y(int y);
    void set_shape(std::array<std::array<int, 4>, 4> s);

private:
    std::array<std::array<int, 4>, 4> shape;
    int pos_x;
    int pos_y;
};

#endif