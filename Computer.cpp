#include <string>
#include "Computer.h"
#include "Move.h"
#include "Rock.h"
#include <iostream>

Computer::Computer() {
    name = "Computer";
}

Move* Computer::makeMove() {
    Move* move = new Rock;
    return move;
}

std::string Computer::getName() {
    return name;
}
