#include <string>
#include "Rock.h"
#include <unordered_set>

Rock::Rock() {
    name = "Rock";
    wins = {"Scissors"};
}

std::string Rock::getName() {
    return name;
}