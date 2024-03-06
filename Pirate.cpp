#include <string>
#include "Pirate.h"
#include <unordered_set>

Pirate::Pirate() {
    name = "Pirate";
    wins = {"Robot", "Monkey"};
}

std::string Pirate::getName() {
    return name;
}

std::unordered_set<std::string> Pirate::getWins() {
    return wins;
}