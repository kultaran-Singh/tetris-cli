#include "T_Piece.hpp"
#include <array>

static const std::array<std::array<int, 4>, 4> state_0 = {{
    {{1,1,1,0}},
    {{0,1,0,0}},
    {{0,0,0,0}},
    {{0,0,0,0}}
}};
static const std::array<std::array<int, 4>, 4> state_1 = {{
    {{0,0,1,0}},
    {{0,1,1,0}},
    {{0,0,1,0}},
    {{0,0,0,0}}
}};
static const std::array<std::array<int, 4>, 4> state_2 = {{
    {{0,0,0,0}},
    {{0,1,0,0}},
    {{1,1,1,0}},
    {{0,0,0,0}}
}};
static const std::array<std::array<int, 4>, 4> state_3 = {{
    {{1,0,0,0}},
    {{1,1,0,0}},
    {{1,0,0,0}},
    {{0,0,0,0}}
}};

void T_Piece::rotate(){
    //Rotate Function
    rotation_state = (rotation_state + 1) % 4;

    switch(rotation_state){
        case 0:
            set_shape(state_0);
            break;
        case 1:
            set_shape(state_1);
            break;
        case 2:
            set_shape(state_2);
            break;
        case 3:
            set_shape(state_3);
            break;
    }
}

T_Piece::T_Piece(){
    rotation_state = 0;
    set_shape(state_0);
    set_pos_x(0);
    set_pos_y(0);
}