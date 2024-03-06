#include <string>
#include "Move.h"
#include <unordered_map>
#include "MoveFactory.h"
#include "Scissors.h"
#include "Paper.h"
#include "Rock.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Robot.h"
#include "Monkey.h"

Move*  MoveFactory::MoveSel(std::string movename) {
    std::unordered_map<std::string, Move*> options;
    options["Scissors"] = new Scissors;
    options["Paper"] = new Paper;
    options["Rock"] = new Rock;

    options["Pirate"] = new Pirate;
    options["Ninja"] = new Ninja;
    options["Monkey"] = new Monkey;
    options["Zombie"] = new Zombie;
    options["Robot"] = new Robot;

    return options[movename];
}