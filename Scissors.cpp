#include <string>
#include "Scissors.h"
#include <unordered_set>

Scissors::Scissors() {
    name = "Scissors";
    wins = {"Rock"};
}

std::string Scissors::getName() {
    return name;
}