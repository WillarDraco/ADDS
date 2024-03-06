#include <string>
#include "Computer.h"
#include "Move.h"
#include "Rock.h"
#include <iostream>

Computer::Computer() {
    name = "Computer";
}

Move* Computer::makeMove() {
    return new Rock;
}

std::string Computer::getName() {
    return name;
}
