#include <iostream>
#include "Board.hpp"
#include "Piece.hpp"
#include "T_Piece.hpp"

int main(){
    auto board1 = Board();
    //board1.draw();
    auto piece1 = T_Piece();
    piece1.draw_piece(board1);
}