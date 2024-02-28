#include <string>
#include "Computer.h"
#include <iostream>

Computer::Computer() {
    name = "Computer";
}

char Computer::makeMove() {
    return 'R';
}

std::string Computer::getName() {
    return name;
}
