#include <array>
#include <iostream>
#include "Board.hpp"
#include "Piece.hpp"

void Board::draw(){
    for(auto row : grid){
        std::cout << "|";
        for(auto cell : row){
            if(cell == 1){
                std::cout << "O";
            }
            if(cell == 0){
                std::cout << "_";
            }
        }
        std::cout << "|";
        std::cout << std::endl;
    }
};

std::array<std::array<int, BOARD_WIDTH>, BOARD_HEIGHT>& Board::get_grid(){return grid;}

bool Board::is_collision(std::array<std::array<int, 4>, 4> shape, int future_x, int future_y){
    //Check for 3 collisions: 
    //1. With Wall
    //2. With Floor
    //3. With Other Piece
    //Looping through all the cells of shape
    /*board_x and board_y are the positions of a filled cell in the grid.*/
    auto i = 0;
    auto board_x = 0;
    auto board_y = 0; 
    for(auto row : shape){
        auto j = 0;
        for(auto cell : row){
            if(cell != 0){
                board_x = future_x + j;
                board_y = future_y + i;
                if(board_x < 0 || board_x >= BOARD_WIDTH){return true;}
                if(board_y < 0 || board_y >= BOARD_HEIGHT){return true;}
                if(grid[board_x][board_y] != 0){return true;}
            }
            ++j;
        }
        ++i;
    }
    return false;
}

Board::Board(){
    for(auto& row : grid){
        for(auto& cell : row){
            cell = 0;
        }
    }
};
