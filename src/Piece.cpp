#include <iostream>
#include "Piece.hpp"

void Piece::draw_piece(Board& b){
    auto i = 0;
    for(auto row : shape){
        auto j = 0;
        for(auto cell : row){
            if(cell != 0)
                b.get_grid()[i+pos_x][j+pos_y] = cell;
            ++j;
        }
        ++i;
    }
    system("clear");
    b.draw();
}
//Getters
int Piece::get_pos_x(){return pos_x;}
int Piece::get_pos_y(){return pos_y;}
std::array<std::array<int, 4>, 4> Piece::get_shape(){return shape;}

//Setters
void Piece::set_pos_x(int x){pos_x = x;}
void Piece::set_pos_y(int y){pos_y = y;}
void Piece::set_shape(std::array<std::array<int, 4>, 4> s){shape = s;}