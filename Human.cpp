#include <string>
#include "Human.h"
#include <iostream>

Human::Human() {
    name = "Human";
}

Human::Human(std::string name) {
    this->name = name;
}

char Human::makeMove() {
    char input;
    bool real = false;
    std::cout << "Enter move: ";
    std::cin >> input;

    if (input == 'R' || input == 'S' || input == 'P') {
        return input;
    } else {
        while (real == false) {
            std::cout << "Please enter R, S or P" << std::endl;
            std::cin >> input;
            if (input == 'R' || input == 'S' || input == 'P') {
                real = true;
                return input;
            }
        }
    }
    return input;
}

std::string Human::getName() {
    return name;
}
