#include <string>
#include "Robot.h"
#include <unordered_set>

Robot::Robot() {
    name = "Robot";
    wins = {"Ninja", "Zombie"};
}

std::string Robot::getName() {
    return name;
}