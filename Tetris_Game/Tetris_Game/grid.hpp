//
//  grid.hpp
//  Tetris_Game
//
//  Created by Tejas Choudhary on 01/05/24.
//

#ifndef grid_hpp
#define grid_hpp

#include <stdio.h>
#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int column);
    int ClearFullRows();
    int grid[20][10];

private:
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};

#endif /* grid_hpp */
