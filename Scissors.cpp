#include <string>
#include "Scissors.h"
#include <unordered_set>

Scissors::Scissors() {
    name = "Scissors";
    wins = {"Paper"};
}

std::string Scissors::getName() {
    return name;
}

std::unordered_set<std::string> Scissors::getWins() {
    return wins;
}