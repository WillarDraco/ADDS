#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <string>

class Reverser {
    public:
        Reverser();
        ~Reverser();
        int reverseDigit(int value);
        std::string reverseString(std::string characters);
};
#endif
