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