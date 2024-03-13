#include <iostream>
#include <string>
#include "Reverser.h"

Reverser::Reverser()) {
}

Reverser::~Reverser() {
}

int Reverser::reverseDigit(int value) {
    if (value < 10) {
        return value;
    } else {
        return reverseDigit(value / 10);
    }
}

std::string Reverser::reverseString(std::string characters);