#include <string>
#include "Monkey.h"
#include <unordered_set>

Monkey::Monkey() {
    name = "Monkey";
    wins = {"Ninja", "Robot"};
}

std::string Monkey::getName() {
    return name;
}

std::unordered_set<std::string> Monkey::getWins() {
    return wins;
}