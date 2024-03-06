#include <string>
#include "Ninja.h"
#include <unordered_set>

Ninja::Ninja() {
    name = "Ninja";
    wins = {"Pirate", "Zombie"};
}

std::string Ninja::getName() {
    return name;
}

std::unordered_set<std::string> Ninja::getWins() {
    return wins;
}