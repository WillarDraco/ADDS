#include <iostream>
#include <string>
#include "Reverser.h"
#include <cmath>


Reverser::Reverser() {
}

Reverser::~Reverser() {
}

int Reverser::reverseDigit(int value) {
    if (value < 0) {
        return -1;
    }

    if (value < 10) {
        return value;
    } else {
        return (value % 10) * pow(10, round((log10(value)))) + reverseDigit(value / 10);
    }
}

std::string Reverser::reverseString(std::string characters) {
    int length = characters.length();
    if (length == 1) {
        return characters;
    } else {
        return characters[length - 1] + reverseString(characters.substr(0,length - 1));
    }
}