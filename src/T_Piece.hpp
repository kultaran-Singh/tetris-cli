#ifndef T_PIECE_HPP
#define T_PIECE_HPP

#include "Piece.hpp"
#include <array>

class T_Piece : public Piece{
public:
    void rotate() override; 
    T_Piece();
private:
    int rotation_state;
};

#endif