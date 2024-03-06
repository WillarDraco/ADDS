#include <string>
#include "Human.h"
#include "Move.h"
#include <iostream>

Human::Human() {
    name = "Human";
}

Human::Human(std::string name) {
    this->name = name;
}

Move* Human::makeMove() {
    
}

std::string Human::getName() {
    return name;
}
