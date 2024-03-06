#include <string>
#include "Human.h"
#include "Move.h"
#include <iostream>
#include "MoveFactory.h"

Human::Human() {
    name = "Human";
}

Human::Human(std::string name) {
    this->name = name;
}

Move* Human::makeMove() {
    std::string input;
    std::cout << "Enter move:";
    std::cin >> input;

    MoveFactory maker;
    Move* move = maker.MoveSel(input);
    return move;
}

std::string Human::getName() {
    return name;
}
