#include <string>
#include "Paper.h"
#include <unordered_set>

Paper::Paper() {
    name = "Paper";
    wins = {"Rock"};
}

std::string Paper::getName() {
    return name;
}