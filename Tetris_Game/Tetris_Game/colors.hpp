//
//  colors.hpp
//  Tetris_Game
//
//  Created by Tejas Choudhary on 01/05/24.
//

#ifndef colors_hpp
#define colors_hpp

#include <stdio.h>
#pragma once
#include <raylib.h>
#include <vector>

extern const Color darkGrey;
extern const Color green;
extern const Color red;
extern const Color orange;
extern const Color yellow;
extern const Color purple;
extern const Color cyan;
extern const Color blue;
extern const Color lightBlue;
extern const Color darkBlue;

std::vector<Color> GetCellColors();

#endif /* colors_hpp */
