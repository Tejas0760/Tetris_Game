//
//  position.hpp
//  Tetris_Game
//
//  Created by Tejas Choudhary on 01/05/24.
//

#ifndef position_hpp
#define position_hpp

#include <stdio.h>
#pragma once

class Position
{
public:
    Position(int row, int column);
    int row;
    int column;
};

#endif /* position_hpp */
