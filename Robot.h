#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include "Move.h"
#include <unordered_set>


class Robot: public Move {
    public:
    Robot();
    std::string getName();
};
#endif