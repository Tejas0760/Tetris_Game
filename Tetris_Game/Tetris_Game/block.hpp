//
//  block.hpp
//  Tetris_Game
//
//  Created by Tejas Choudhary on 01/05/24.
//

#ifndef block_hpp
#define block_hpp

#include <stdio.h>
#pragma once
#include <vector>
#include <map>
#include "position.hpp"
#include "colors.hpp"

class Block
{
public:
    Block();
    void Draw(int offsetX, int offsetY);
    void Move(int rows, int columns);
    std::vector<Position> GetCellPositions();
    void Rotate();
    void UndoRotation();
    int id;
    std::map<int, std::vector<Position>> cells;

private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
    int rowOffset;
    int columnOffset;
};

#endif /* block_hpp */
