#include <string>
#include "Zombie.h"
#include <unordered_set>

Zombie::Zombie() {
    name = "Zombie";
    wins = {"Pirate", "Monkey"};
}

std::string Zombie::getName() {
    return name;
}

std::unordered_set<std::string> Zombie::getWins() {
    return wins;
}